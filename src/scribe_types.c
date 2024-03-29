/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "scribe_types.h"
#include <thrift/thrift.h>

/* reads a log_entry object */
gint32
log_entry_read (ThriftStruct *object, ThriftProtocol *protocol, GError **error)
{
  gint32 ret;
  gint32 xfer = 0;
  gchar *name = NULL;
  ThriftType ftype;
  gint16 fid;
  guint32 len = 0;
  gpointer data = NULL;
  LogEntry * this_object = LOG_ENTRY(object);

  /* satisfy -Wall in case these aren't used */
  THRIFT_UNUSED_VAR (len);
  THRIFT_UNUSED_VAR (data);
  THRIFT_UNUSED_VAR (this_object);

  /* read the struct begin marker */
  if ((ret = thrift_protocol_read_struct_begin (protocol, &name, error)) < 0)
  {
    if (name) g_free (name);
    return -1;
  }
  xfer += ret;
  if (name) g_free (name);
  name = NULL;

  /* read the struct fields */
  while (1)
  {
    /* read the beginning of a field */
    if ((ret = thrift_protocol_read_field_begin (protocol, &name, &ftype, &fid, error)) < 0)
    {
      if (name) g_free (name);
      return -1;
    }
    xfer += ret;
    if (name) g_free (name);
    name = NULL;

    /* break if we get a STOP field */
    if (ftype == T_STOP)
    {
      break;
    }

    switch (fid)
    {
      case 1:
        if (ftype == T_STRING)
        {
          if (this_object->category != NULL)
          {
            g_free(this_object->category);
            this_object->category = NULL;
          }

          if ((ret = thrift_protocol_read_string (protocol, &this_object->category, error)) < 0)
            return -1;
          xfer += ret;
          this_object->__isset_category = TRUE;
        } else {
          if ((ret = thrift_protocol_skip (protocol, ftype, error)) < 0)
            return -1;
          xfer += ret;
        }
        break;
      case 2:
        if (ftype == T_STRING)
        {
          if (this_object->message != NULL)
          {
            g_free(this_object->message);
            this_object->message = NULL;
          }

          if ((ret = thrift_protocol_read_string (protocol, &this_object->message, error)) < 0)
            return -1;
          xfer += ret;
          this_object->__isset_message = TRUE;
        } else {
          if ((ret = thrift_protocol_skip (protocol, ftype, error)) < 0)
            return -1;
          xfer += ret;
        }
        break;
      default:
        if ((ret = thrift_protocol_skip (protocol, ftype, error)) < 0)
          return -1;
        xfer += ret;
        break;
    }
    if ((ret = thrift_protocol_read_field_end (protocol, error)) < 0)
      return -1;
    xfer += ret;
  }

  if ((ret = thrift_protocol_read_struct_end (protocol, error)) < 0)
    return -1;
  xfer += ret;

  return xfer;
}

gint32
log_entry_write (ThriftStruct *object, ThriftProtocol *protocol, GError **error)
{
  gint32 ret;
  gint32 xfer = 0;

  LogEntry * this_object = LOG_ENTRY(object);
  THRIFT_UNUSED_VAR (this_object);
  if ((ret = thrift_protocol_write_struct_begin (protocol, "LogEntry", error)) < 0)
    return -1;
  xfer += ret;
  if ((ret = thrift_protocol_write_field_begin (protocol, "category", T_STRING, 1, error)) < 0)
    return -1;
  xfer += ret;
  if ((ret = thrift_protocol_write_string (protocol, this_object->category, error)) < 0)
    return -1;
  if ((ret = thrift_protocol_write_field_end (protocol, error)) < 0)
    return -1;
  xfer += ret;
  if ((ret = thrift_protocol_write_field_begin (protocol, "message", T_STRING, 2, error)) < 0)
    return -1;
  xfer += ret;
  if ((ret = thrift_protocol_write_string (protocol, this_object->message, error)) < 0)
    return -1;
  if ((ret = thrift_protocol_write_field_end (protocol, error)) < 0)
    return -1;
  xfer += ret;
  if ((ret = thrift_protocol_write_field_stop (protocol, error)) < 0)
    return -1;
  xfer += ret;
  if ((ret = thrift_protocol_write_struct_end (protocol, error)) < 0)
    return -1;
  xfer += ret;

  return xfer;
}

void 
log_entry_instance_init (LogEntry * object)
{
  /* satisfy -Wall */
  THRIFT_UNUSED_VAR (object);
  object->category = NULL;
  object->__isset_category = FALSE;
  object->message = NULL;
  object->__isset_message = FALSE;
}

void 
log_entry_finalize (GObject *object)
{
  LogEntry *tobject = LOG_ENTRY (object);

  /* satisfy -Wall in case we don't use tobject */
  THRIFT_UNUSED_VAR (tobject);
  if (tobject->category != NULL)
  {
    g_free (tobject->category);
    tobject->category = NULL;
  }
  if (tobject->message != NULL)
  {
    g_free (tobject->message);
    tobject->message = NULL;
  }
}

void 
log_entry_class_init (ThriftStructClass * cls)
{
  GObjectClass *gobject_class = G_OBJECT_CLASS (cls);

  gobject_class->finalize = log_entry_finalize;
  cls->read = log_entry_read;
  cls->write = log_entry_write;
}

GType
log_entry_get_type (void)
{
  static GType type = 0;

  if (type == 0) 
  {
    static const GTypeInfo type_info = 
    {
      sizeof (LogEntryClass),
      NULL, /* base_init */
      NULL, /* base_finalize */
      (GClassInitFunc) log_entry_class_init,
      NULL, /* class_finalize */
      NULL, /* class_data */
      sizeof (LogEntry),
      0, /* n_preallocs */
      (GInstanceInitFunc) log_entry_instance_init,
      NULL, /* value_table */
    };

    type = g_type_register_static (THRIFT_TYPE_STRUCT, 
                                   "LogEntryType",
                                   &type_info, 0);
  }

  return type;
}

/* constants */

