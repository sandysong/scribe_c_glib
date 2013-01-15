#include "thrift/protocol/thrift_protocol.h"
#include "thrift/protocol/thrift_binary_protocol.h"
#include "thrift/transport/thrift_framed_transport.h"
#include "thrift/transport/thrift_transport.h"
#include "thrift/transport/thrift_socket.h"
#include "scribe_types.h"
#include "scribe.h"
int 
main(void)
{
	ThriftSocket *tsocket;
	ThriftTransport *transport;
	ThriftProtocol * protocol;
	scribeClient *client;
	scribeIf *service;
	GError *error = NULL;
	LogEntry *message = NULL;
	GPtrArray *array = NULL;
	//ResultCode code;

	g_type_init();
	tsocket = THRIFT_SOCKET(
		g_object_new(
			THRIFT_TYPE_SOCKET, "hostname","localhost","port",1463,0
		)
	);
	transport = THRIFT_TRANSPORT(
		g_object_new(
			THRIFT_TYPE_FRAMED_TRANSPORT, "transport", tsocket, 0
		)
	);
	protocol = THRIFT_PROTOCOL(
		g_object_new(
			THRIFT_TYPE_BINARY_PROTOCOL, "transport", transport, 0
		)
	);
	client = SCRIBE_CLIENT(
		g_object_new(
			TYPE_SCRIBE_CLIENT, "input_protocol", protocol, "output_protocol", protocol, 0
		)
	);
	service = SCRIBE_IF(client);

	message = g_object_new(TYPE_LOG_ENTRY, 0);
	message->category = "test";
	message->message = "hello scribe";

	array = g_ptr_array_new();
	g_ptr_array_add(array, message);
	if (
			!thrift_transport_open(transport, 0) ||
			!thrift_transport_is_open(transport)
	   ) {
		return 1;
	}

	scribe_client_send_log(service, array, &error);
	return 0;
}
