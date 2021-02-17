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
} ExampleMessage;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define ExampleMessage_init_default              {0, {{NULL}, NULL}}
#define ExampleMessage_init_zero                 {0, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define ExampleMessage_number_tag                1
#define ExampleMessage_str_tag                   2

/* Struct field encoding specification for nanopb */
#define ExampleMessage_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    number,            1) \
X(a, CALLBACK, SINGULAR, STRING,   str,               2)
#define ExampleMessage_CALLBACK pb_default_field_callback
#define ExampleMessage_DEFAULT NULL

extern const pb_msgdesc_t ExampleMessage_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define ExampleMessage_fields &ExampleMessage_msg

/* Maximum encoded size of messages (where known) */
/* ExampleMessage_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif