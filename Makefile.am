AUTOMAKE_OPTIONS=foreign
pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = scribe_c_glib.pc

thrift_c_glib_lib = src/thrift/thrift.c \
					src/thrift/thrift_struct.c \
					src/thrift/thrift_application_exception.c \
					src/thrift/processor/thrift_processor.c \
					src/thrift/protocol/thrift_protocol.c \
					src/thrift/protocol/thrift_protocol_factory.c \
					src/thrift/protocol/thrift_binary_protocol.c \
					src/thrift/protocol/thrift_binary_protocol_factory.c \
					src/thrift/transport/thrift_transport.c \
					src/thrift/transport/thrift_transport_factory.c \
					src/thrift/transport/thrift_socket.c \
					src/thrift/transport/thrift_server_transport.c \
					src/thrift/transport/thrift_server_socket.c \
					src/thrift/transport/thrift_buffered_transport.c \
					src/thrift/transport/thrift_framed_transport.c \
					src/thrift/transport/thrift_memory_buffer.c \
					src/thrift/server/thrift_server.c \
					src/thrift/server/thrift_simple_server.c

scribe_c_glib_lib = src/bucketupdater_types.c \
					src/bucket_store_mapping.c \
					src/scribe_types.c \
					src/scribe.c \
					src/fb303_types.c \
					src/facebook_service.c 


lib_LTLIBRARIES = libthrift_c_glib.la libscribe_c_glib.la
libthrift_c_glib_la_SOURCES = $(thrift_c_glib_lib)
libscribe_c_glib_la_SOURCES = $(scribe_c_glib_lib)


common_cflags = -g -Wall -Wno-missing-field-initializers -W -Werror -Isrc -I src/thrift $(GLIB_CFLAGS)
common_ldflags = -g -Wall -W $(GLIB_LDFLAGS) 

# Define the source files for the module

libthrift_c_glib_la_CFLAGS = $(common_cflags)
libscribe_c_glib_la_CFLAGS = $(common_cflags)

include_thriftdir = $(includedir)/thrift
include_thrift_HEADERS = $(top_builddir)/config.h \
						 src/thrift/thrift.h \
						 src/thrift/thrift_application_exception.h \
						 src/thrift/thrift_struct.h

include_protocoldir = $(include_thriftdir)/protocol
include_protocol_HEADERS = src/thrift/protocol/thrift_protocol.h \
						   src/thrift/protocol/thrift_protocol_factory.h \
						   src/thrift/protocol/thrift_binary_protocol.h \
						   src/thrift/protocol/thrift_binary_protocol_factory.h

include_transportdir = $(include_thriftdir)/transport
include_transport_HEADERS = src/thrift/transport/thrift_buffered_transport.h \
							src/thrift/transport/thrift_framed_transport.h \
							src/thrift/transport/thrift_memory_buffer.h \
							src/thrift/transport/thrift_server_socket.h \
							src/thrift/transport/thrift_server_transport.h \
							src/thrift/transport/thrift_socket.h \
							src/thrift/transport/thrift_transport.h \
							src/thrift/transport/thrift_transport_factory.h

include_serverdir = $(include_thriftdir)/server
include_server_HEADERS = src/thrift/server/thrift_server.h \
						 src/thrift/server/thrift_simple_server.h

include_processordir = $(include_thriftdir)/processor
include_processor_HEADERS = src/thrift/processor/thrift_processor.h

include_scribedir = $(include_thriftdir)
include_scribe_HEADERS = src/fb303_types.h \
						 src/facebook_service.h \
						 src/scribe.h \
						 src/scribe_types.h \
						 src/bucketupdater_types.h \
						 src/bucket_store_mapping.h
