/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.4 */

#ifndef PB_EXAMPLEMESSAGE_PB_H_INCLUDED
#define PB_EXAMPLEMESSAGE_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _ExampleMessage {
    int32_t number;
    pb_callback_t str;
    pb_callback_t str_array;
    pb_callback_t sub_message_array;
} ExampleMessage;

typedef struct _SubMessage {
    int32_t sub_number;
    pb_callback_t sub_string;
} SubMessage;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define SubMessage_init_default                  {0, {{NULL}, NULL}}
#define ExampleMessage_init_default              {0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define SubMessage_init_zero                     {0, {{NULL}, NULL}}
#define ExampleMessage_init_zero                 {0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define ExampleMessage_number_tag                1
#define ExampleMessage_str_tag                   2
#define ExampleMessage_str_array_tag             3
#define ExampleMessage_sub_message_array_tag     4
#define SubMessage_sub_number_tag                1
#define SubMessage_sub_string_tag                2

/* Struct field encoding specification for nanopb */
#define SubMessage_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    sub_number,        1) \
X(a, CALLBACK, SINGULAR, STRING,   sub_string,        2)
#define SubMessage_CALLBACK pb_default_field_callback
#define SubMessage_DEFAULT NULL

#define ExampleMessage_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    number,            1) \
X(a, CALLBACK, SINGULAR, STRING,   str,               2) \
X(a, CALLBACK, REPEATED, STRING,   str_array,         3) \
X(a, CALLBACK, REPEATED, MESSAGE,  sub_message_array,   4)
#define ExampleMessage_CALLBACK pb_default_field_callback
#define ExampleMessage_DEFAULT NULL
#define ExampleMessage_sub_message_array_MSGTYPE SubMessage

extern const pb_msgdesc_t SubMessage_msg;
extern const pb_msgdesc_t ExampleMessage_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define SubMessage_fields &SubMessage_msg
#define ExampleMessage_fields &ExampleMessage_msg

/* Maximum encoded size of messages (where known) */
/* SubMessage_size depends on runtime parameters */
/* ExampleMessage_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
