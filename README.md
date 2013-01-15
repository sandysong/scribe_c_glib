scribe_c_glib
=============

C client library for scribe with no other external dependence. It`s much easier to compile and install

## Requirement
- glib-2.0 
- gobject-2.0

## Install
```
$ ./configure --prefix=/path/to/install
$ make
$ make install
```

## File list
```
$ tree
.
|-- include
|   `-- thrift
|       |-- bucket_store_mapping.h
|       |-- bucketupdater_types.h
|       |-- config.h
|       |-- facebook_service.h
|       |-- fb303_types.h
|       |-- processor
|       |   `-- thrift_processor.h
|       |-- protocol
|       |   |-- thrift_binary_protocol.h
|       |   |-- thrift_binary_protocol_factory.h
|       |   |-- thrift_protocol.h
|       |   `-- thrift_protocol_factory.h
|       |-- scribe.h
|       |-- scribe_types.h
|       |-- server
|       |   |-- thrift_server.h
|       |   `-- thrift_simple_server.h
|       |-- thrift.h
|       |-- thrift_application_exception.h
|       |-- thrift_struct.h
|       `-- transport
|           |-- thrift_buffered_transport.h
|           |-- thrift_framed_transport.h
|           |-- thrift_memory_buffer.h
|           |-- thrift_server_socket.h
|           |-- thrift_server_transport.h
|           |-- thrift_socket.h
|           |-- thrift_transport.h
|           `-- thrift_transport_factory.h
`-- lib
    |-- libscribe_c_glib.a
    |-- libscribe_c_glib.la
    |-- libscribe_c_glib.so -> libscribe_c_glib.so.0.0.0
    |-- libscribe_c_glib.so.0 -> libscribe_c_glib.so.0.0.0
    |-- libscribe_c_glib.so.0.0.0
    |-- libthrift_c_glib.a
    |-- libthrift_c_glib.la
    |-- libthrift_c_glib.so -> libthrift_c_glib.so.0.0.0
    |-- libthrift_c_glib.so.0 -> libthrift_c_glib.so.0.0.0
    |-- libthrift_c_glib.so.0.0.0
    `-- pkgconfig
        `-- scribe_c_glib.pc

8 directories, 36 files
```

# Samples
There is a simple example in the "examples" directory, you can compile and use it just like this:
```
$ export PKG_CONFIG_PATH=/path/to/your/scribe_c_glib/lib/pkgconfig
$ gcc `pkg-config scribe_c_glib --cflags --libs` simple.c -o simple
$ ./simple
```
