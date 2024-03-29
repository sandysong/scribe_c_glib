/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef BUCKETUPDATER_TYPES_H
#define BUCKETUPDATER_TYPES_H

/* base includes */
#include <glib-object.h>
#include <thrift/thrift_struct.h>
#include <thrift/protocol/thrift_protocol.h>

/* custom thrift includes */

/* begin types */

struct _BucketStoreMappingException
{ 
  ThriftStruct parent; 

  /* public */
  gchar * message;
  gboolean __isset_message;
  gint32 code;
  gboolean __isset_code;
};
typedef struct _BucketStoreMappingException BucketStoreMappingException;

struct _BucketStoreMappingExceptionClass
{
  ThriftStructClass parent;
};
typedef struct _BucketStoreMappingExceptionClass BucketStoreMappingExceptionClass;

GType bucket_store_mapping_exception_get_type (void);
#define TYPE_BUCKET_STORE_MAPPING_EXCEPTION (bucket_store_mapping_exception_get_type())
#define BUCKET_STORE_MAPPING_EXCEPTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_BUCKET_STORE_MAPPING_EXCEPTION, BucketStoreMappingException))
#define BUCKET_STORE_MAPPING_EXCEPTION_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), _TYPE_BUCKET_STORE_MAPPING_EXCEPTION, BucketStoreMappingExceptionClass))
#define IS_BUCKET_STORE_MAPPING_EXCEPTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_BUCKET_STORE_MAPPING_EXCEPTION))
#define IS_BUCKET_STORE_MAPPING_EXCEPTION_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), TYPE_BUCKET_STORE_MAPPING_EXCEPTION))
#define BUCKET_STORE_MAPPING_EXCEPTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_BUCKET_STORE_MAPPING_EXCEPTION, BucketStoreMappingExceptionClass))

/* exception */
typedef enum
{
  BUCKET_STORE_MAPPING_EXCEPTION_ERROR_CODE,
} BucketStoreMappingExceptionError;

GQuark bucket_store_mapping_exception_error_quark (void);
#define BUCKET_STORE_MAPPING_EXCEPTION_ERROR (bucket_store_mapping_exception_error_quark())


/* struct HostPort */
struct _HostPort
{ 
  ThriftStruct parent; 

  /* public */
  gchar * host;
  gboolean __isset_host;
  gint32 port;
  gboolean __isset_port;
};
typedef struct _HostPort HostPort;

struct _HostPortClass
{
  ThriftStructClass parent;
};
typedef struct _HostPortClass HostPortClass;

GType host_port_get_type (void);
#define TYPE_HOST_PORT (host_port_get_type())
#define HOST_PORT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_HOST_PORT, HostPort))
#define HOST_PORT_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), _TYPE_HOST_PORT, HostPortClass))
#define IS_HOST_PORT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_HOST_PORT))
#define IS_HOST_PORT_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), TYPE_HOST_PORT))
#define HOST_PORT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_HOST_PORT, HostPortClass))

/* constants */

#endif /* BUCKETUPDATER_TYPES_H */
