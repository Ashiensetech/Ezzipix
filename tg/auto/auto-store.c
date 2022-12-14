#include "auto.h"
#include <assert.h>
#include "mtproto-common.h"
#include "auto/auto-store.h"
#include "auto-static-store.c"
int store_constructor_account_days_t_t_l (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb8d0afdf && T->type->name != 0x472f5020)) { return -1; }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_audio_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x9fc5ec4e && T->type->name != 0x603a13b1)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_audio (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x9fc5ec4e && T->type->name != 0x603a13b1)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "duration", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "mime_type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "size", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field7) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "dc_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field8) < 0) { return -1;}
  return 0;
}
int store_constructor_authorization (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x7bf2e6f6 && T->type->name != 0x840d1909)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "device_model", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "platform", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 14 && !cur_token_quoted && !memcmp (cur_token, "system_version", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "api_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "app_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field7) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "app_version", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field8) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "date_created", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field9 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field9) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "date_active", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field10 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field10) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "ip", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field11 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field11) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "country", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field12 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field12) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "region", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field13 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field13) < 0) { return -1;}
  return 0;
}
int store_constructor_bool_false (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x250be282 && T->type->name != 0xdaf41d7d)) { return -1; }
  return 0;
}
int store_constructor_bool_true (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x250be282 && T->type->name != 0xdaf41d7d)) { return -1; }
  return 0;
}
int store_constructor_bot_command (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x75e7ea6c && T->type->name != 0x8a181593)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "command", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "description", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_bot_command_old (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x75e7ea6c && T->type->name != 0x8a181593)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "command", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "params", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "description", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_bot_info_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb2e16f93 && T->type->name != 0x4d1e906c)) { return -1; }
  return 0;
}
int store_constructor_bot_info (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb2e16f93 && T->type->name != 0x4d1e906c)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "version", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "share_text", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "description", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "commands", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x75e7ea6c, .id = "BotCommand", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_bytes (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x0ee1379f && T->type->name != 0xf11ec860)) { return -1; }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_chat_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x7bd865dc && T->type->name != 0x84279a23)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_chat (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x7bd865dc && T->type->name != 0x84279a23)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "photo", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x56922676, .id = "ChatPhoto", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_chat_photo (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 18 && !cur_token_quoted && !memcmp (cur_token, "participants_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "left", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "version", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field7) < 0) { return -1;}
  return 0;
}
int store_constructor_chat_forbidden (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x7bd865dc && T->type->name != 0x84279a23)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_geo_chat (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x7bd865dc && T->type->name != 0x84279a23)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "address", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "venue", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "geo", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x315e0a53, .id = "GeoPoint", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_geo_point (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "photo", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x56922676, .id = "ChatPhoto", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_chat_photo (field7) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 18 && !cur_token_quoted && !memcmp (cur_token, "participants_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field8) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field9 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field9) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "checked_in", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field10 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field10) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "version", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field11 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field11) < 0) { return -1;}
  return 0;
}
int store_constructor_chat_full (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02a614 && T->type->name != 0xd1fd59eb)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "participants", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x77930f9f, .id = "ChatParticipants", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_chat_participants (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "chat_photo", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xc207550a, .id = "Photo", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_photo (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "notify_settings", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xfdf894fc, .id = "PeerNotifySettings", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_peer_notify_settings (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "exported_invite", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x95f132d5, .id = "ExportedChatInvite", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_exported_chat_invite (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "bot_info", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xb2e16f93, .id = "BotInfo", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field6) < 0) { return -1;}
  return 0;
}
int store_constructor_chat_invite_already (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x94f910b1 && T->type->name != 0x6b06ef4e)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "chat", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x7bd865dc, .id = "Chat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_chat (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_chat_invite (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x94f910b1 && T->type->name != 0x6b06ef4e)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_chat_located (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3631cf4c && T->type->name != 0xc9ce30b3)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "distance", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_chat_participant (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xc8d7493e && T->type->name != 0x3728b6c1)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "inviter_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_chat_participants_forbidden (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x77930f9f && T->type->name != 0x886cf060)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_chat_participants (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x77930f9f && T->type->name != 0x886cf060)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "admin_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "participants", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xc8d7493e, .id = "ChatParticipant", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "version", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_chat_photo_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x56922676 && T->type->name != 0xa96dd989)) { return -1; }
  return 0;
}
int store_constructor_chat_photo (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x56922676 && T->type->name != 0xa96dd989)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "photo_small", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x2f8ffb30, .id = "FileLocation", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_file_location (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "photo_big", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x2f8ffb30, .id = "FileLocation", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_file_location (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_client_d_h_inner_data (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x6643b654 && T->type->name != 0x99bc49ab)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "server_nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "retry_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "g_b", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_config (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4e32b894 && T->type->name != 0xb1cd476b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "expires", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "test_mode", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "this_dc", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "dc_options", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x2b1a62f0, .id = "DcOption", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 13 && !cur_token_quoted && !memcmp (cur_token, "chat_size_max", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 18 && !cur_token_quoted && !memcmp (cur_token, "broadcast_size_max", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field7) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 19 && !cur_token_quoted && !memcmp (cur_token, "forwarded_count_max", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field8) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 23 && !cur_token_quoted && !memcmp (cur_token, "online_update_period_ms", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field9 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field9) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 23 && !cur_token_quoted && !memcmp (cur_token, "offline_blur_timeout_ms", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field10 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field10) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 23 && !cur_token_quoted && !memcmp (cur_token, "offline_idle_timeout_ms", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field11 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field11) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 23 && !cur_token_quoted && !memcmp (cur_token, "online_cloud_timeout_ms", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field12 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field12) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 21 && !cur_token_quoted && !memcmp (cur_token, "notify_cloud_delay_ms", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field13 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field13) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 23 && !cur_token_quoted && !memcmp (cur_token, "notify_default_delay_ms", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field14 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field14) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 13 && !cur_token_quoted && !memcmp (cur_token, "chat_big_size", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field15 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field15) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 19 && !cur_token_quoted && !memcmp (cur_token, "push_chat_period_ms", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field16 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field16) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "push_chat_limit", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field17 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field17) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 17 && !cur_token_quoted && !memcmp (cur_token, "disabled_features", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field18 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xae636f24, .id = "DisabledFeature", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field18) < 0) { return -1;}
  return 0;
}
int store_constructor_contact (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xf911c994 && T->type->name != 0x06ee366b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "mutual", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_contact_blocked (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x561bc879 && T->type->name != 0xa9e43786)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_contact_found (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xea879f95 && T->type->name != 0x1578606a)) { return -1; }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_contact_link_unknown (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x522fbc63 && T->type->name != 0xadd0439c)) { return -1; }
  return 0;
}
int store_constructor_contact_link_none (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x522fbc63 && T->type->name != 0xadd0439c)) { return -1; }
  return 0;
}
int store_constructor_contact_link_has_phone (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x522fbc63 && T->type->name != 0xadd0439c)) { return -1; }
  return 0;
}
int store_constructor_contact_link_contact (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x522fbc63 && T->type->name != 0xadd0439c)) { return -1; }
  return 0;
}
int store_constructor_contact_status (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xd3680c61 && T->type->name != 0x2c97f39e)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "status", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x76de9570, .id = "UserStatus", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_user_status (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_contact_suggested (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3de191a1 && T->type->name != 0xc21e6e5e)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "mutual_contacts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_dc_option_l28 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2b1a62f0 && T->type->name != 0xd4e59d0f)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "hostname", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "ip_address", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "port", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_dc_option (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2b1a62f0 && T->type->name != 0xd4e59d0f)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "ip_address", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "port", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x535b7918 && T->type->name != 0xaca486e7)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "ttl", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "message", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "media", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x34e0d674, .id = "DecryptedMessageMedia", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_decrypted_message_media (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_service (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x535b7918 && T->type->name != 0xaca486e7)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "action", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4e0eefde, .id = "DecryptedMessageAction", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_decrypted_message_action (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_action_set_message_t_t_l (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4e0eefde && T->type->name != 0xb1f11021)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "ttl_seconds", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_action_read_messages (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4e0eefde && T->type->name != 0xb1f11021)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "random_ids", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_action_delete_messages (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4e0eefde && T->type->name != 0xb1f11021)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "random_ids", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_action_screenshot_messages (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4e0eefde && T->type->name != 0xb1f11021)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "random_ids", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_action_flush_history (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4e0eefde && T->type->name != 0xb1f11021)) { return -1; }
  return 0;
}
int store_constructor_decrypted_message_action_resend (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4e0eefde && T->type->name != 0xb1f11021)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "start_seq_no", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "end_seq_no", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_action_notify_layer (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4e0eefde && T->type->name != 0xb1f11021)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "layer", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_action_typing (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4e0eefde && T->type->name != 0xb1f11021)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "action", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x70541c7e, .id = "SendMessageAction", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_send_message_action (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_action_request_key (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4e0eefde && T->type->name != 0xb1f11021)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "exchange_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "g_a", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_action_accept_key (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4e0eefde && T->type->name != 0xb1f11021)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "exchange_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "g_b", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "key_fingerprint", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_action_abort_key (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4e0eefde && T->type->name != 0xb1f11021)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "exchange_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_action_commit_key (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4e0eefde && T->type->name != 0xb1f11021)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "exchange_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "key_fingerprint", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_action_noop (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4e0eefde && T->type->name != 0xb1f11021)) { return -1; }
  return 0;
}
int store_constructor_decrypted_message_layer (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x1be31789 && T->type->name != 0xe41ce876)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "random_bytes", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "layer", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "in_seq_no", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "out_seq_no", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "message", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x535b7918, .id = "DecryptedMessage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_decrypted_message (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_media_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x34e0d674 && T->type->name != 0xcb1f298b)) { return -1; }
  return 0;
}
int store_constructor_decrypted_message_media_photo (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x34e0d674 && T->type->name != 0xcb1f298b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "str_thumb", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "thumb_w", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "thumb_h", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "w", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "h", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "size", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "key", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field7) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "iv", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field8) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_media_geo_point (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x34e0d674 && T->type->name != 0xcb1f298b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "latitude", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddef3eab, .id = "Bare_Double", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_double (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "longitude", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddef3eab, .id = "Bare_Double", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_double (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_media_contact (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x34e0d674 && T->type->name != 0xcb1f298b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "phone_number", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "first_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "last_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_media_document (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x34e0d674 && T->type->name != 0xcb1f298b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "str_thumb", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "thumb_w", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "thumb_h", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "file_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "mime_type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "size", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "key", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field7) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "iv", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field8) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_media_video (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x34e0d674 && T->type->name != 0xcb1f298b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "str_thumb", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "thumb_w", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "thumb_h", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "duration", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "mime_type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "w", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "h", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field7) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "size", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field8) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "key", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field9 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field9) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "iv", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field10 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field10) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_media_audio (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x34e0d674 && T->type->name != 0xcb1f298b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "duration", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "mime_type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "size", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "key", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "iv", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_media_external_document (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x34e0d674 && T->type->name != 0xcb1f298b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "mime_type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "size", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "thumb", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x900f60dd, .id = "PhotoSize", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_photo_size (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "dc_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field7) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "attributes", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x97c637a3, .id = "DocumentAttribute", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field8) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_media_video_l12 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x34e0d674 && T->type->name != 0xcb1f298b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "str_thumb", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "thumb_w", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "thumb_h", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "duration", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "w", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "h", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "size", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field7) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "key", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field8) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "iv", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field9 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field9) < 0) { return -1;}
  return 0;
}
int store_constructor_decrypted_message_media_audio_l12 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x34e0d674 && T->type->name != 0xcb1f298b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "duration", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "size", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "key", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "iv", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_dialog (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xc1dd804a && T->type->name != 0x3e227fb5)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x276159d6, .id = "Peer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_peer (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "top_message", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 17 && !cur_token_quoted && !memcmp (cur_token, "read_inbox_max_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "unread_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "notify_settings", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xfdf894fc, .id = "PeerNotifySettings", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_peer_notify_settings (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_disabled_feature (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xae636f24 && T->type->name != 0x519c90db)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "feature", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "description", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_document_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x51a73418 && T->type->name != 0xae58cbe7)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_document (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x51a73418 && T->type->name != 0xae58cbe7)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "mime_type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "size", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "thumb", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x900f60dd, .id = "PhotoSize", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_photo_size (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "dc_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field7) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "attributes", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x97c637a3, .id = "DocumentAttribute", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field8) < 0) { return -1;}
  return 0;
}
int store_constructor_document_l19 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x51a73418 && T->type->name != 0xae58cbe7)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "file_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "mime_type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "size", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field7) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "thumb", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x900f60dd, .id = "PhotoSize", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_photo_size (field8) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "dc_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field9 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field9) < 0) { return -1;}
  return 0;
}
int store_constructor_document_attribute_image_size (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x97c637a3 && T->type->name != 0x6839c85c)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "w", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "h", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_document_attribute_animated (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x97c637a3 && T->type->name != 0x6839c85c)) { return -1; }
  return 0;
}
int store_constructor_document_attribute_sticker_l28 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x97c637a3 && T->type->name != 0x6839c85c)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "alt", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_document_attribute_sticker (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x97c637a3 && T->type->name != 0x6839c85c)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "alt", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "stickerset", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xe44d415c, .id = "InputStickerSet", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_sticker_set (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_document_attribute_video (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x97c637a3 && T->type->name != 0x6839c85c)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "duration", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "w", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "h", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_document_attribute_audio (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x97c637a3 && T->type->name != 0x6839c85c)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "duration", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_document_attribute_filename (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x97c637a3 && T->type->name != 0x6839c85c)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "file_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_double (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2210c154 && T->type->name != 0xddef3eab)) { return -1; }
  if (is_double ()) {
    out_double (get_double());
    local_next_token ();
    return 0;
  } else {
    return -1;
  }
}
int store_constructor_encrypted_chat_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb1718213 && T->type->name != 0x4e8e7dec)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_encrypted_chat_waiting (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb1718213 && T->type->name != 0x4e8e7dec)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "admin_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 14 && !cur_token_quoted && !memcmp (cur_token, "participant_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_encrypted_chat_requested (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb1718213 && T->type->name != 0x4e8e7dec)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "admin_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 14 && !cur_token_quoted && !memcmp (cur_token, "participant_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "g_a", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field6) < 0) { return -1;}
  return 0;
}
int store_constructor_encrypted_chat (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb1718213 && T->type->name != 0x4e8e7dec)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "admin_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 14 && !cur_token_quoted && !memcmp (cur_token, "participant_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "g_a_or_b", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "key_fingerprint", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field7) < 0) { return -1;}
  return 0;
}
int store_constructor_encrypted_chat_discarded (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb1718213 && T->type->name != 0x4e8e7dec)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_encrypted_file_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x886fd032 && T->type->name != 0x77902fcd)) { return -1; }
  return 0;
}
int store_constructor_encrypted_file (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x886fd032 && T->type->name != 0x77902fcd)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "size", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "dc_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "key_fingerprint", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_encrypted_message (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xce6b8a1e && T->type->name != 0x319475e1)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "bytes", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "file", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x886fd032, .id = "EncryptedFile", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_encrypted_file (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_encrypted_message_service (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xce6b8a1e && T->type->name != 0x319475e1)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "bytes", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_error (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xc4b9f9bb && T->type->name != 0x3b460644)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "code", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "text", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_chat_invite_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x95f132d5 && T->type->name != 0x6a0ecd2a)) { return -1; }
  return 0;
}
int store_constructor_chat_invite_exported (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x95f132d5 && T->type->name != 0x6a0ecd2a)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "link", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_file_location_unavailable (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2f8ffb30 && T->type->name != 0xd07004cf)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "volume_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "local_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "secret", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_file_location (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2f8ffb30 && T->type->name != 0xd07004cf)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "dc_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "volume_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "local_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "secret", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_geo_chat_message_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xf67b4034 && T->type->name != 0x0984bfcb)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_geo_chat_message (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xf67b4034 && T->type->name != 0x0984bfcb)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "from_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "message", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "media", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x95f2471a, .id = "MessageMedia", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_message_media (field6) < 0) { return -1;}
  return 0;
}
int store_constructor_geo_chat_message_service (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xf67b4034 && T->type->name != 0x0984bfcb)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "from_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "action", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x383415fa, .id = "MessageAction", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_message_action (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_geo_point_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x315e0a53 && T->type->name != 0xcea1f5ac)) { return -1; }
  return 0;
}
int store_constructor_geo_point (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x315e0a53 && T->type->name != 0xcea1f5ac)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "longitude", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddef3eab, .id = "Bare_Double", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_double (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "latitude", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddef3eab, .id = "Bare_Double", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_double (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_imported_contact (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xd0028438 && T->type->name != 0x2ffd7bc7)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "client_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_app_event (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x770656a8 && T->type->name != 0x88f9a957)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "time", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddef3eab, .id = "Bare_Double", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_double (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "data", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_input_audio_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xae8e9c7b && T->type->name != 0x51716384)) { return -1; }
  return 0;
}
int store_constructor_input_audio (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xae8e9c7b && T->type->name != 0x51716384)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_chat_photo_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3a60776d && T->type->name != 0xc59f8892)) { return -1; }
  return 0;
}
int store_constructor_input_chat_uploaded_photo (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3a60776d && T->type->name != 0xc59f8892)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "file", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x0f60f9ca, .id = "InputFile", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_file (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "crop", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x7477e321, .id = "InputPhotoCrop", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_photo_crop (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_chat_photo (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3a60776d && T->type->name != 0xc59f8892)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xe74279c9, .id = "InputPhoto", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_photo (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "crop", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x7477e321, .id = "InputPhotoCrop", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_photo_crop (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_phone_contact (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xf392b7f4 && T->type->name != 0x0c6d480b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "client_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "phone", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "first_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "last_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_input_document_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x6a8963fc && T->type->name != 0x95769c03)) { return -1; }
  return 0;
}
int store_constructor_input_document (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x6a8963fc && T->type->name != 0x95769c03)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_encrypted_chat (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xf141b5e1 && T->type->name != 0x0ebe4a1e)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_encrypted_file_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x0b5c064f && T->type->name != 0xf4a3f9b0)) { return -1; }
  return 0;
}
int store_constructor_input_encrypted_file_uploaded (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x0b5c064f && T->type->name != 0xf4a3f9b0)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "parts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "md5_checksum", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "key_fingerprint", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_input_encrypted_file (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x0b5c064f && T->type->name != 0xf4a3f9b0)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_encrypted_file_big_uploaded (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x0b5c064f && T->type->name != 0xf4a3f9b0)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "parts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "key_fingerprint", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_input_file (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x0f60f9ca && T->type->name != 0xf09f0635)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "parts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "md5_checksum", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_input_file_big (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x0f60f9ca && T->type->name != 0xf09f0635)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "parts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_input_file_location (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xe6daa38b && T->type->name != 0x19255c74)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "volume_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "local_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "secret", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_input_video_file_location (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xe6daa38b && T->type->name != 0x19255c74)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_encrypted_file_location (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xe6daa38b && T->type->name != 0x19255c74)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_audio_file_location (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xe6daa38b && T->type->name != 0x19255c74)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_document_file_location (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xe6daa38b && T->type->name != 0x19255c74)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_geo_chat (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x74d456fa && T->type->name != 0x8b2ba905)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_geo_point_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x17768f1f && T->type->name != 0xe88970e0)) { return -1; }
  return 0;
}
int store_constructor_input_geo_point (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x17768f1f && T->type->name != 0xe88970e0)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "latitude", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddef3eab, .id = "Bare_Double", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_double (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "longitude", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddef3eab, .id = "Bare_Double", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_double (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_media_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb32c91dd && T->type->name != 0x4cd36e22)) { return -1; }
  return 0;
}
int store_constructor_input_media_uploaded_photo (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb32c91dd && T->type->name != 0x4cd36e22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "file", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x0f60f9ca, .id = "InputFile", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_file (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "caption", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_media_photo (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb32c91dd && T->type->name != 0x4cd36e22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xe74279c9, .id = "InputPhoto", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_photo (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "caption", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_media_geo_point (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb32c91dd && T->type->name != 0x4cd36e22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "geo_point", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x17768f1f, .id = "InputGeoPoint", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_geo_point (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_input_media_contact (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb32c91dd && T->type->name != 0x4cd36e22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "phone_number", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "first_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "last_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_input_media_uploaded_video (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb32c91dd && T->type->name != 0x4cd36e22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "file", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x0f60f9ca, .id = "InputFile", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_file (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "duration", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "w", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "h", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "caption", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_input_media_uploaded_thumb_video (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb32c91dd && T->type->name != 0x4cd36e22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "file", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x0f60f9ca, .id = "InputFile", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_file (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "thumb", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x0f60f9ca, .id = "InputFile", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_file (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "duration", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "w", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "h", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "caption", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field6) < 0) { return -1;}
  return 0;
}
int store_constructor_input_media_video (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb32c91dd && T->type->name != 0x4cd36e22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "video_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xbb5f7a27, .id = "InputVideo", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_video (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "caption", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_media_uploaded_audio (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb32c91dd && T->type->name != 0x4cd36e22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "file", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x0f60f9ca, .id = "InputFile", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_file (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "duration", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "mime_type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_input_media_audio (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb32c91dd && T->type->name != 0x4cd36e22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "audio_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xae8e9c7b, .id = "InputAudio", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_audio (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_input_media_uploaded_document (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb32c91dd && T->type->name != 0x4cd36e22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "file", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x0f60f9ca, .id = "InputFile", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_file (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "mime_type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "attributes", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x97c637a3, .id = "DocumentAttribute", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_input_media_uploaded_thumb_document (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb32c91dd && T->type->name != 0x4cd36e22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "file", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x0f60f9ca, .id = "InputFile", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_file (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "thumb", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x0f60f9ca, .id = "InputFile", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_file (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "mime_type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "attributes", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x97c637a3, .id = "DocumentAttribute", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_input_media_document (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb32c91dd && T->type->name != 0x4cd36e22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "document_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x6a8963fc, .id = "InputDocument", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_document (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_input_media_venue (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb32c91dd && T->type->name != 0x4cd36e22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "geo_point", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x17768f1f, .id = "InputGeoPoint", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_geo_point (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "address", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "provider", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "venue_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_input_notify_peer (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x02b6911b && T->type->name != 0xfd496ee4)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x9e67268d, .id = "InputPeer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_peer (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_input_notify_users (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x02b6911b && T->type->name != 0xfd496ee4)) { return -1; }
  return 0;
}
int store_constructor_input_notify_chats (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x02b6911b && T->type->name != 0xfd496ee4)) { return -1; }
  return 0;
}
int store_constructor_input_notify_all (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x02b6911b && T->type->name != 0xfd496ee4)) { return -1; }
  return 0;
}
int store_constructor_input_notify_geo_chat_peer (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x02b6911b && T->type->name != 0xfd496ee4)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "geo_peer", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x74d456fa, .id = "InputGeoChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_geo_chat (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_input_peer_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x9e67268d && T->type->name != 0x6198d972)) { return -1; }
  return 0;
}
int store_constructor_input_peer_self (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x9e67268d && T->type->name != 0x6198d972)) { return -1; }
  return 0;
}
int store_constructor_input_peer_contact (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x9e67268d && T->type->name != 0x6198d972)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_input_peer_foreign (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x9e67268d && T->type->name != 0x6198d972)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_peer_chat (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x9e67268d && T->type->name != 0x6198d972)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_input_peer_notify_events_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x185a48ac && T->type->name != 0xe7a5b753)) { return -1; }
  return 0;
}
int store_constructor_input_peer_notify_events_all (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x185a48ac && T->type->name != 0xe7a5b753)) { return -1; }
  return 0;
}
int store_constructor_input_peer_notify_settings (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x46a2ce98 && T->type->name != 0xb95d3167)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "mute_until", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "sound", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 13 && !cur_token_quoted && !memcmp (cur_token, "show_previews", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "events_mask", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_input_photo_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xe74279c9 && T->type->name != 0x18bd8636)) { return -1; }
  return 0;
}
int store_constructor_input_photo (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xe74279c9 && T->type->name != 0x18bd8636)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_photo_crop_auto (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x7477e321 && T->type->name != 0x8b881cde)) { return -1; }
  return 0;
}
int store_constructor_input_photo_crop (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x7477e321 && T->type->name != 0x8b881cde)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "crop_left", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddef3eab, .id = "Bare_Double", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_double (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "crop_top", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddef3eab, .id = "Bare_Double", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_double (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "crop_width", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddef3eab, .id = "Bare_Double", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_double (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_input_privacy_key_status_timestamp (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4f96cb18 && T->type->name != 0xb06934e7)) { return -1; }
  return 0;
}
int store_constructor_input_privacy_value_allow_contacts (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4b815163 && T->type->name != 0xb47eae9c)) { return -1; }
  return 0;
}
int store_constructor_input_privacy_value_allow_all (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4b815163 && T->type->name != 0xb47eae9c)) { return -1; }
  return 0;
}
int store_constructor_input_privacy_value_allow_users (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4b815163 && T->type->name != 0xb47eae9c)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xadfe0c6a, .id = "InputUser", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_input_privacy_value_disallow_contacts (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4b815163 && T->type->name != 0xb47eae9c)) { return -1; }
  return 0;
}
int store_constructor_input_privacy_value_disallow_all (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4b815163 && T->type->name != 0xb47eae9c)) { return -1; }
  return 0;
}
int store_constructor_input_privacy_value_disallow_users (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4b815163 && T->type->name != 0xb47eae9c)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xadfe0c6a, .id = "InputUser", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_input_sticker_set_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xe44d415c && T->type->name != 0x1bb2bea3)) { return -1; }
  return 0;
}
int store_constructor_input_sticker_set_i_d (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xe44d415c && T->type->name != 0x1bb2bea3)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_sticker_set_short_name (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xe44d415c && T->type->name != 0x1bb2bea3)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "short_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_input_user_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xadfe0c6a && T->type->name != 0x5201f395)) { return -1; }
  return 0;
}
int store_constructor_input_user_self (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xadfe0c6a && T->type->name != 0x5201f395)) { return -1; }
  return 0;
}
int store_constructor_input_user_contact (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xadfe0c6a && T->type->name != 0x5201f395)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_input_user_foreign (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xadfe0c6a && T->type->name != 0x5201f395)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_input_video_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xbb5f7a27 && T->type->name != 0x44a085d8)) { return -1; }
  return 0;
}
int store_constructor_input_video (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xbb5f7a27 && T->type->name != 0x44a085d8)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_int (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xa8509bda && T->type->name != 0x57af6425)) { return -1; }
  if (is_int ()) {
    out_int (get_int ());
    local_next_token ();
    return 0;
  } else {
    return -1;
  }
}
int store_constructor_int128 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x7d36c439 && T->type->name != 0x82c93bc6)) { return -1; }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_int256 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xf2c798b3 && T->type->name != 0x0d38674c)) { return -1; }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field3) < 0) { return -1;}
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_keyboard_button (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xa2fa4880 && T->type->name != 0x5d05b77f)) { return -1; }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_keyboard_button_row (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x77608b83 && T->type->name != 0x889f747c)) { return -1; }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xa2fa4880, .id = "KeyboardButton", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_long (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x22076cba && T->type->name != 0xddf89345)) { return -1; }
  if (is_int ()) {
    out_long (get_int ());
    local_next_token ();
    return 0;
  } else {
    return -1;
  }
}
int store_constructor_message_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x5d652a7f && T->type->name != 0xa29ad580)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_message (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x5d652a7f && T->type->name != 0xa29ad580)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  if (cur_token_len < 0) { return -1; }
  if (!is_int ()) { return -1;}
  struct paramed_type *var0 = INT2PTR (get_int ());
  out_int (get_int ());
  assert (var0);
  local_next_token ();
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "from_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "to_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x276159d6, .id = "Peer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_peer (field4) < 0) { return -1;}
  if (PTR2INT (var0) & (1 << 2)) {
    if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "fwd_from_id", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field5 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field5) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 2)) {
    if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "fwd_date", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field6 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field6) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 3)) {
    if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "reply_to_msg_id", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field7 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field7) < 0) { return -1;}
  }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field8) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "message", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field9 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field9) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "media", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field10 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x95f2471a, .id = "MessageMedia", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_message_media (field10) < 0) { return -1;}
  if (PTR2INT (var0) & (1 << 6)) {
    if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "reply_markup", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field11 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x612ca4a9, .id = "ReplyMarkup", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_reply_markup (field11) < 0) { return -1;}
  }
  return 0;
}
int store_constructor_message_service (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x5d652a7f && T->type->name != 0xa29ad580)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "from_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "to_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x276159d6, .id = "Peer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_peer (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "action", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x383415fa, .id = "MessageAction", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_message_action (field6) < 0) { return -1;}
  return 0;
}
int store_constructor_message_action_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x383415fa && T->type->name != 0xc7cbea05)) { return -1; }
  return 0;
}
int store_constructor_message_action_chat_create (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x383415fa && T->type->name != 0xc7cbea05)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_message_action_chat_edit_title (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x383415fa && T->type->name != 0xc7cbea05)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_message_action_chat_edit_photo (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x383415fa && T->type->name != 0xc7cbea05)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "photo", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xc207550a, .id = "Photo", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_photo (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_message_action_chat_delete_photo (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x383415fa && T->type->name != 0xc7cbea05)) { return -1; }
  return 0;
}
int store_constructor_message_action_chat_add_user (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x383415fa && T->type->name != 0xc7cbea05)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_message_action_chat_delete_user (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x383415fa && T->type->name != 0xc7cbea05)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_message_action_geo_chat_create (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x383415fa && T->type->name != 0xc7cbea05)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "address", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_message_action_geo_chat_checkin (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x383415fa && T->type->name != 0xc7cbea05)) { return -1; }
  return 0;
}
int store_constructor_message_action_chat_joined_by_link (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x383415fa && T->type->name != 0xc7cbea05)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "inviter_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_message_media_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x95f2471a && T->type->name != 0x6a0db8e5)) { return -1; }
  return 0;
}
int store_constructor_message_media_photo (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x95f2471a && T->type->name != 0x6a0db8e5)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "photo", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xc207550a, .id = "Photo", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_photo (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "caption", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_message_media_video (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x95f2471a && T->type->name != 0x6a0db8e5)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "video", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1716b174, .id = "Video", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_video (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "caption", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_message_media_geo (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x95f2471a && T->type->name != 0x6a0db8e5)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "geo", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x315e0a53, .id = "GeoPoint", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_geo_point (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_message_media_contact (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x95f2471a && T->type->name != 0x6a0db8e5)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "phone_number", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "first_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "last_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_message_media_unsupported (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x95f2471a && T->type->name != 0x6a0db8e5)) { return -1; }
  return 0;
}
int store_constructor_message_media_document (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x95f2471a && T->type->name != 0x6a0db8e5)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "document", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x51a73418, .id = "Document", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_document (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_message_media_audio (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x95f2471a && T->type->name != 0x6a0db8e5)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "audio", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x9fc5ec4e, .id = "Audio", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_audio (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_message_media_web_page (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x95f2471a && T->type->name != 0x6a0db8e5)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "webpage", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x8d8c0d41, .id = "WebPage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_web_page (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_message_media_venue (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x95f2471a && T->type->name != 0x6a0db8e5)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "geo", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x315e0a53, .id = "GeoPoint", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_geo_point (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "address", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "provider", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "venue_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_message_media_photo_l27 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x95f2471a && T->type->name != 0x6a0db8e5)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "photo", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xc207550a, .id = "Photo", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_photo (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_message_media_video_l27 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x95f2471a && T->type->name != 0x6a0db8e5)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "video", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1716b174, .id = "Video", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_video (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_input_messages_filter_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x80895ae0 && T->type->name != 0x7f76a51f)) { return -1; }
  return 0;
}
int store_constructor_input_messages_filter_photos (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x80895ae0 && T->type->name != 0x7f76a51f)) { return -1; }
  return 0;
}
int store_constructor_input_messages_filter_video (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x80895ae0 && T->type->name != 0x7f76a51f)) { return -1; }
  return 0;
}
int store_constructor_input_messages_filter_photo_video (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x80895ae0 && T->type->name != 0x7f76a51f)) { return -1; }
  return 0;
}
int store_constructor_input_messages_filter_photo_video_documents (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x80895ae0 && T->type->name != 0x7f76a51f)) { return -1; }
  return 0;
}
int store_constructor_input_messages_filter_document (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x80895ae0 && T->type->name != 0x7f76a51f)) { return -1; }
  return 0;
}
int store_constructor_input_messages_filter_audio (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x80895ae0 && T->type->name != 0x7f76a51f)) { return -1; }
  return 0;
}
int store_constructor_nearest_dc (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x8e1a1775 && T->type->name != 0x71e5e88a)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "country", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "this_dc", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "nearest_dc", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_notify_peer (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x9fcb8237 && T->type->name != 0x60347dc8)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x276159d6, .id = "Peer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_peer (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_notify_users (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x9fcb8237 && T->type->name != 0x60347dc8)) { return -1; }
  return 0;
}
int store_constructor_notify_chats (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x9fcb8237 && T->type->name != 0x60347dc8)) { return -1; }
  return 0;
}
int store_constructor_notify_all (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x9fcb8237 && T->type->name != 0x60347dc8)) { return -1; }
  return 0;
}
int store_constructor_null (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x56730bcc && T->type->name != 0xa98cf433)) { return -1; }
  return 0;
}
int store_constructor_p_q_inner_data (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xbfa3de38 && T->type->name != 0x405c21c7)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "pq", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "p", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "q", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "server_nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "new_nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x0d38674c, .id = "Bare_Int256", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int256 (field6) < 0) { return -1;}
  return 0;
}
int store_constructor_p_q_inner_data_temp (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xbfa3de38 && T->type->name != 0x405c21c7)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "pq", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "p", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "q", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "server_nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "new_nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x0d38674c, .id = "Bare_Int256", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int256 (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "expires_in", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field7) < 0) { return -1;}
  return 0;
}
int store_constructor_peer_user (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x276159d6 && T->type->name != 0xd89ea629)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_peer_chat (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x276159d6 && T->type->name != 0xd89ea629)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_peer_notify_events_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xc0c8d13b && T->type->name != 0x3f372ec4)) { return -1; }
  return 0;
}
int store_constructor_peer_notify_events_all (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xc0c8d13b && T->type->name != 0x3f372ec4)) { return -1; }
  return 0;
}
int store_constructor_peer_notify_settings_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xfdf894fc && T->type->name != 0x02076b03)) { return -1; }
  return 0;
}
int store_constructor_peer_notify_settings (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xfdf894fc && T->type->name != 0x02076b03)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "mute_until", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "sound", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 13 && !cur_token_quoted && !memcmp (cur_token, "show_previews", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "events_mask", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_photo_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xc207550a && T->type->name != 0x3df8aaf5)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_photo (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xc207550a && T->type->name != 0x3df8aaf5)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "geo", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x315e0a53, .id = "GeoPoint", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_geo_point (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "sizes", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x900f60dd, .id = "PhotoSize", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field6) < 0) { return -1;}
  return 0;
}
int store_constructor_photo_l27 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xc207550a && T->type->name != 0x3df8aaf5)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "caption", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "geo", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x315e0a53, .id = "GeoPoint", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_geo_point (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "sizes", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x900f60dd, .id = "PhotoSize", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field7) < 0) { return -1;}
  return 0;
}
int store_constructor_photo_size_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x900f60dd && T->type->name != 0x6ff09f22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_photo_size (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x900f60dd && T->type->name != 0x6ff09f22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "location", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x2f8ffb30, .id = "FileLocation", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_file_location (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "w", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "h", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "size", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_photo_cached_size (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x900f60dd && T->type->name != 0x6ff09f22)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "location", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x2f8ffb30, .id = "FileLocation", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_file_location (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "w", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "h", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "bytes", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_privacy_key_status_timestamp (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xbc2eab30 && T->type->name != 0x43d154cf)) { return -1; }
  return 0;
}
int store_constructor_privacy_value_allow_contacts (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xa8638aec && T->type->name != 0x579c7513)) { return -1; }
  return 0;
}
int store_constructor_privacy_value_allow_all (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xa8638aec && T->type->name != 0x579c7513)) { return -1; }
  return 0;
}
int store_constructor_privacy_value_allow_users (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xa8638aec && T->type->name != 0x579c7513)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_privacy_value_disallow_contacts (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xa8638aec && T->type->name != 0x579c7513)) { return -1; }
  return 0;
}
int store_constructor_privacy_value_disallow_all (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xa8638aec && T->type->name != 0x579c7513)) { return -1; }
  return 0;
}
int store_constructor_privacy_value_disallow_users (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xa8638aec && T->type->name != 0x579c7513)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_received_notify_message (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xa384b779 && T->type->name != 0x5c7b4886)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_reply_keyboard_hide (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x612ca4a9 && T->type->name != 0x9ed35b56)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_reply_keyboard_force_reply (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x612ca4a9 && T->type->name != 0x9ed35b56)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_reply_keyboard_markup (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x612ca4a9 && T->type->name != 0x9ed35b56)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "rows", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x77608b83, .id = "KeyboardButtonRow", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_res_p_q (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x05162463 && T->type->name != 0xfae9db9c)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "server_nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "pq", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 30 && !cur_token_quoted && !memcmp (cur_token, "server_public_key_fingerprints", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_send_message_typing_action (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x70541c7e && T->type->name != 0x8fabe381)) { return -1; }
  return 0;
}
int store_constructor_send_message_cancel_action (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x70541c7e && T->type->name != 0x8fabe381)) { return -1; }
  return 0;
}
int store_constructor_send_message_record_video_action (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x70541c7e && T->type->name != 0x8fabe381)) { return -1; }
  return 0;
}
int store_constructor_send_message_upload_video_action_l27 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x70541c7e && T->type->name != 0x8fabe381)) { return -1; }
  return 0;
}
int store_constructor_send_message_upload_video_action (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x70541c7e && T->type->name != 0x8fabe381)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "progress", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_send_message_record_audio_action (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x70541c7e && T->type->name != 0x8fabe381)) { return -1; }
  return 0;
}
int store_constructor_send_message_upload_audio_action_l27 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x70541c7e && T->type->name != 0x8fabe381)) { return -1; }
  return 0;
}
int store_constructor_send_message_upload_audio_action (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x70541c7e && T->type->name != 0x8fabe381)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "progress", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_send_message_upload_photo_action (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x70541c7e && T->type->name != 0x8fabe381)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "progress", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_send_message_upload_document_action_l27 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x70541c7e && T->type->name != 0x8fabe381)) { return -1; }
  return 0;
}
int store_constructor_send_message_upload_document_action (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x70541c7e && T->type->name != 0x8fabe381)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "progress", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_send_message_geo_location_action (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x70541c7e && T->type->name != 0x8fabe381)) { return -1; }
  return 0;
}
int store_constructor_send_message_choose_contact_action (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x70541c7e && T->type->name != 0x8fabe381)) { return -1; }
  return 0;
}
int store_constructor_server_d_h_params_fail (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xa9230301 && T->type->name != 0x56dcfcfe)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "server_nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 14 && !cur_token_quoted && !memcmp (cur_token, "new_nonce_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_server_d_h_params_ok (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xa9230301 && T->type->name != 0x56dcfcfe)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "server_nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 16 && !cur_token_quoted && !memcmp (cur_token, "encrypted_answer", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_server_d_h_inner_data (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb5890dba && T->type->name != 0x4a76f245)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "server_nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "g", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "dh_prime", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "g_a", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "server_time", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field6) < 0) { return -1;}
  return 0;
}
int store_constructor_dh_gen_ok (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xdb8a468f && T->type->name != 0x2475b970)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "server_nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "new_nonce_hash1", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_dh_gen_retry (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xdb8a468f && T->type->name != 0x2475b970)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "server_nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "new_nonce_hash2", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_dh_gen_fail (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xdb8a468f && T->type->name != 0x2475b970)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "server_nonce", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "new_nonce_hash3", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_sticker_pack (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x12b299d4 && T->type->name != 0xed4d662b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "emoticon", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "documents", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_sticker_set (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xa7a43b17 && T->type->name != 0x585bc4e8)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "short_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_string (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb5286e24 && T->type->name != 0x4ad791db)) { return -1; }
  if (cur_token_len >= 0) {
    out_cstring (cur_token, cur_token_len);
    local_next_token ();
    return 0;
  } else {
    return -1;
  }
}
int store_constructor_update_new_message (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "message", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x5d652a7f, .id = "Message", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_message (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "pts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "pts_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_update_message_i_d (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_update_delete_messages (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "messages", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "pts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "pts_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_update_user_typing (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "action", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x70541c7e, .id = "SendMessageAction", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_send_message_action (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_update_chat_user_typing (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "action", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x70541c7e, .id = "SendMessageAction", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_send_message_action (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_update_chat_participants (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "participants", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x77930f9f, .id = "ChatParticipants", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_chat_participants (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_update_user_status (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "status", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x76de9570, .id = "UserStatus", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_user_status (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_update_user_name (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "first_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "last_name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "username", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_update_user_photo (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "photo", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x9a486229, .id = "UserProfilePhoto", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_user_profile_photo (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "previous", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_update_contact_registered (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_update_contact_link (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "my_link", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x522fbc63, .id = "ContactLink", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_contact_link (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "foreign_link", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x522fbc63, .id = "ContactLink", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_contact_link (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_update_new_authorization (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "auth_key_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "device", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "location", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_update_new_geo_chat_message (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "geo_message", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf67b4034, .id = "GeoChatMessage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_geo_chat_message (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_update_new_encrypted_message (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "encr_message", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xce6b8a1e, .id = "EncryptedMessage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_encrypted_message (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "qts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_update_encrypted_chat_typing (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_update_encryption (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "encr_chat", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xb1718213, .id = "EncryptedChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_encrypted_chat (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_update_encrypted_messages_read (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "max_date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_update_chat_participant_add (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "inviter_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "version", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_update_chat_participant_delete (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "version", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_update_dc_options (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "dc_options", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x2b1a62f0, .id = "DcOption", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_update_user_blocked (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "blocked", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_update_notify_settings (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "notify_peer", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x9fcb8237, .id = "NotifyPeer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_notify_peer (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "notify_settings", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xfdf894fc, .id = "PeerNotifySettings", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_peer_notify_settings (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_update_service_notification (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "message_text", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "media", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x95f2471a, .id = "MessageMedia", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_message_media (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "popup", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_update_privacy (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "key", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xbc2eab30, .id = "PrivacyKey", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_privacy_key (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "rules", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xa8638aec, .id = "PrivacyRule", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_update_user_phone (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "phone", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_update_read_history_inbox (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x276159d6, .id = "Peer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_peer (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "max_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "pts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "pts_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_update_read_history_outbox (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x276159d6, .id = "Peer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_peer (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "max_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "pts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "pts_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_update_web_page (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "webpage", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x8d8c0d41, .id = "WebPage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_web_page (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_update_read_messages_contents (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "messages", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "pts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "pts_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_update_msg_update (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x2e02b27e && T->type->name != 0xd1fd4d81)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "pts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "pts_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_updates_too_long (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x22499d27 && T->type->name != 0xddb662d8)) { return -1; }
  return 0;
}
int store_constructor_update_short_message (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x22499d27 && T->type->name != 0xddb662d8)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  if (cur_token_len < 0) { return -1; }
  if (!is_int ()) { return -1;}
  struct paramed_type *var0 = INT2PTR (get_int ());
  out_int (get_int ());
  assert (var0);
  local_next_token ();
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "message", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "pts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "pts_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field7) < 0) { return -1;}
  if (PTR2INT (var0) & (1 << 2)) {
    if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "fwd_from_id", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field8 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field8) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 2)) {
    if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "fwd_date", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field9 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field9) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 3)) {
    if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "reply_to_msg_id", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field10 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field10) < 0) { return -1;}
  }
  return 0;
}
int store_constructor_update_short_chat_message (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x22499d27 && T->type->name != 0xddb662d8)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  if (cur_token_len < 0) { return -1; }
  if (!is_int ()) { return -1;}
  struct paramed_type *var0 = INT2PTR (get_int ());
  out_int (get_int ());
  assert (var0);
  local_next_token ();
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "from_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "message", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "pts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "pts_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field7) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field8) < 0) { return -1;}
  if (PTR2INT (var0) & (1 << 2)) {
    if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "fwd_from_id", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field9 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field9) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 2)) {
    if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "fwd_date", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field10 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field10) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 3)) {
    if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "reply_to_msg_id", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field11 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field11) < 0) { return -1;}
  }
  return 0;
}
int store_constructor_update_short (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x22499d27 && T->type->name != 0xddb662d8)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "update", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x2e02b27e, .id = "Update", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_update (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_updates_combined (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x22499d27 && T->type->name != 0xddb662d8)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "updates", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x2e02b27e, .id = "Update", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "chats", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x7bd865dc, .id = "Chat", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "seq_start", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "seq", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field6) < 0) { return -1;}
  return 0;
}
int store_constructor_updates (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x22499d27 && T->type->name != 0xddb662d8)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "updates", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x2e02b27e, .id = "Update", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "chats", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x7bd865dc, .id = "Chat", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "seq", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_user_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x02e6c0c8 && T->type->name != 0xfd193f37)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_user (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x02e6c0c8 && T->type->name != 0xfd193f37)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  if (cur_token_len < 0) { return -1; }
  if (!is_int ()) { return -1;}
  struct paramed_type *var0 = INT2PTR (get_int ());
  out_int (get_int ());
  assert (var0);
  local_next_token ();
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (PTR2INT (var0) & (1 << 0)) {
    if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field3 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_long (field3) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 1)) {
    if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "first_name", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field4 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field4) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 2)) {
    if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "last_name", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field5 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field5) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 3)) {
    if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "username", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field6 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field6) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 4)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "phone", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field7 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field7) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 5)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "photo", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field8 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x9a486229, .id = "UserProfilePhoto", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_user_profile_photo (field8) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 6)) {
    if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "status", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field9 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x76de9570, .id = "UserStatus", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_user_status (field9) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 14)) {
    if (cur_token_len >= 0 && cur_token_len == 16 && !cur_token_quoted && !memcmp (cur_token, "bot_info_version", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field10 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field10) < 0) { return -1;}
  }
  return 0;
}
int store_constructor_user_full (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x5a89ac5b && T->type->name != 0xa57653a4)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "user", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_user (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "link", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x3ace484c, .id = "contacts.Link", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_contacts_link (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 13 && !cur_token_quoted && !memcmp (cur_token, "profile_photo", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xc207550a, .id = "Photo", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_photo (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "notify_settings", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xfdf894fc, .id = "PeerNotifySettings", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_peer_notify_settings (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "blocked", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "bot_info", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xb2e16f93, .id = "BotInfo", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bot_info (field6) < 0) { return -1;}
  return 0;
}
int store_constructor_user_profile_photo_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x9a486229 && T->type->name != 0x65b79dd6)) { return -1; }
  return 0;
}
int store_constructor_user_profile_photo (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x9a486229 && T->type->name != 0x65b79dd6)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "photo_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "photo_small", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x2f8ffb30, .id = "FileLocation", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_file_location (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "photo_big", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x2f8ffb30, .id = "FileLocation", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_file_location (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_user_status_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x76de9570 && T->type->name != 0x89216a8f)) { return -1; }
  return 0;
}
int store_constructor_user_status_online (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x76de9570 && T->type->name != 0x89216a8f)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "expires", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_user_status_offline (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x76de9570 && T->type->name != 0x89216a8f)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "was_online", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_user_status_recently (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x76de9570 && T->type->name != 0x89216a8f)) { return -1; }
  return 0;
}
int store_constructor_user_status_last_week (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x76de9570 && T->type->name != 0x89216a8f)) { return -1; }
  return 0;
}
int store_constructor_user_status_last_month (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x76de9570 && T->type->name != 0x89216a8f)) { return -1; }
  return 0;
}
int store_constructor_vector (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x1cb5c415 && T->type->name != 0xe34a3bea)) { return -1; }
  if (ODDP(T->params[0])) { return -1; }
  struct paramed_type *var0 = T->params[0]; assert (var0);
  if (cur_token_len < 0) { return -1; }
  if (!is_int ()) { return -1;}
  struct paramed_type *var1 = INT2PTR (get_int ());
  out_int (get_int ());
  assert (var1);
  local_next_token ();
  expect_token ("[", 1);
  int multiplicity3 = PTR2INT (
  ((void *)var1) + 0  );
  struct paramed_type *field3 = 
  var0;
  while (multiplicity3 -- > 0) {
    if (store_type_any (field3) < 0) { return -1;}
  }
  expect_token ("]", 1);
  return 0;
}
int store_constructor_video_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x1716b174 && T->type->name != 0xe8e94e8b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_video (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x1716b174 && T->type->name != 0xe8e94e8b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "duration", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "size", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "thumb", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x900f60dd, .id = "PhotoSize", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_photo_size (field7) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "dc_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field8) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "w", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field9 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field9) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "h", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field10 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field10) < 0) { return -1;}
  return 0;
}
int store_constructor_video_l27 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x1716b174 && T->type->name != 0xe8e94e8b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "caption", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "duration", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "mime_type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field7) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "size", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field8) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "thumb", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field9 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x900f60dd, .id = "PhotoSize", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_photo_size (field9) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "dc_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field10 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field10) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "w", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field11 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field11) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "h", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field12 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field12) < 0) { return -1;}
  return 0;
}
int store_constructor_wall_paper (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xafa14973 && T->type->name != 0x505eb68c)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "sizes", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x900f60dd, .id = "PhotoSize", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "color", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_wall_paper_solid (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xafa14973 && T->type->name != 0x505eb68c)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "bg_color", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "color", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_web_page_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x8d8c0d41 && T->type->name != 0x7273f2be)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_web_page_pending (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x8d8c0d41 && T->type->name != 0x7273f2be)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_web_page (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x8d8c0d41 && T->type->name != 0x7273f2be)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  if (cur_token_len < 0) { return -1; }
  if (!is_int ()) { return -1;}
  struct paramed_type *var0 = INT2PTR (get_int ());
  out_int (get_int ());
  assert (var0);
  local_next_token ();
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "url", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "display_url", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  if (PTR2INT (var0) & (1 << 0)) {
    if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "type", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field5 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field5) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 1)) {
    if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "site_name", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field6 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field6) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 2)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field7 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field7) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 3)) {
    if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "description", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field8 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field8) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 4)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "photo", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field9 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0xc207550a, .id = "Photo", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_photo (field9) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 5)) {
    if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "embed_url", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field10 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field10) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 5)) {
    if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "embed_type", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field11 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field11) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 6)) {
    if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "embed_width", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field12 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field12) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 6)) {
    if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "embed_height", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field13 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field13) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 7)) {
    if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "duration", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field14 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field14) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 8)) {
    if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "author", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field15 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field15) < 0) { return -1;}
  }
  return 0;
}
int store_constructor_account_authorizations (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x1250abde && T->type->name != 0xedaf5421)) { return -1; }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x7bf2e6f6, .id = "Authorization", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_account_no_password (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xeac2a804 && T->type->name != 0x153d57fb)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "new_salt", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 25 && !cur_token_quoted && !memcmp (cur_token, "email_unconfirmed_pattern", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_account_password (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xeac2a804 && T->type->name != 0x153d57fb)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "current_salt", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "new_salt", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "hint", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "has_recovery", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 25 && !cur_token_quoted && !memcmp (cur_token, "email_unconfirmed_pattern", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_account_password_input_settings (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xbcfc532c && T->type->name != 0x4303acd3)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  if (cur_token_len < 0) { return -1; }
  if (!is_int ()) { return -1;}
  struct paramed_type *var0 = INT2PTR (get_int ());
  out_int (get_int ());
  assert (var0);
  local_next_token ();
  if (PTR2INT (var0) & (1 << 0)) {
    if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "new_salt", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field2 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_bytes (field2) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 0)) {
    if (cur_token_len >= 0 && cur_token_len == 17 && !cur_token_quoted && !memcmp (cur_token, "new_password_hash", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field3 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_bytes (field3) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 0)) {
    if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "hint", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field4 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field4) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 1)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "email", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field5 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field5) < 0) { return -1;}
  }
  return 0;
}
int store_constructor_account_password_settings (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb7b72ab3 && T->type->name != 0x4848d54c)) { return -1; }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_account_privacy_rules (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x554abb6f && T->type->name != 0xaab54490)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "rules", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xa8638aec, .id = "PrivacyRule", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_account_sent_change_phone_code (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xa4f58c4c && T->type->name != 0x5b0a73b3)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "phone_code_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 17 && !cur_token_quoted && !memcmp (cur_token, "send_call_timeout", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_auth_authorization (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xff036af1 && T->type->name != 0x00fc950e)) { return -1; }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_user (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_auth_checked_phone (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x811ea28e && T->type->name != 0x7ee15d71)) { return -1; }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_auth_exported_authorization (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xdf969c2d && T->type->name != 0x206963d2)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "bytes", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_auth_password_recovery (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x137948a5 && T->type->name != 0xec86b75a)) { return -1; }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_auth_sent_code (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x0cc8bc16 && T->type->name != 0xf33743e9)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 16 && !cur_token_quoted && !memcmp (cur_token, "phone_registered", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "phone_code_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 17 && !cur_token_quoted && !memcmp (cur_token, "send_call_timeout", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "is_password", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_auth_sent_app_code (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x0cc8bc16 && T->type->name != 0xf33743e9)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 16 && !cur_token_quoted && !memcmp (cur_token, "phone_registered", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "phone_code_hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 17 && !cur_token_quoted && !memcmp (cur_token, "send_call_timeout", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "is_password", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_encr_key (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x0377168f && T->type->name != 0xfc88e970)) { return -1; }
  expect_token ("[", 1);
  int multiplicity1 = PTR2INT (
  INT2PTR (64)  );
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  while (multiplicity1 -- > 0) {
    if (store_type_any (field1) < 0) { return -1;}
  }
  expect_token ("]", 1);
  return 0;
}
int store_constructor_binlog_start (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  return 0;
}
int store_constructor_binlog_dc_option (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "dc", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "ip", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "port", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_dc_option_new (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "dc", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "name", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "ip", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "port", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_auth_key (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "dc", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "key", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xfc88e970, .id = "Bare_binlog.EncrKey", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_binlog_encr_key (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_default_dc (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "dc", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_dc_signed (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "dc", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_our_id (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_set_dh_params (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "root", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "prime", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xfc88e970, .id = "Bare_binlog.EncrKey", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_binlog_encr_key (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "version", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_set_pts (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "pts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_set_qts (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "qts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_set_date (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_set_seq (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "seq", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_encr_chat_delete (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_encr_chat_new (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  if (cur_token_len < 0) { return -1; }
  if (!is_int ()) { return -1;}
  struct paramed_type *var0 = INT2PTR (get_int ());
  out_int (get_int ());
  assert (var0);
  local_next_token ();
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (PTR2INT (var0) & (1 << 17)) {
    if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field3 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_long (field3) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 18)) {
    if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field4 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field4) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 19)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "admin", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field5 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field5) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 20)) {
    if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field6 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field6) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 21)) {
    if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "key", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field7 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0xfc88e970, .id = "Bare_binlog.EncrKey", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_binlog_encr_key (field7) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 22)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "g_key", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field8 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0xfc88e970, .id = "Bare_binlog.EncrKey", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_binlog_encr_key (field8) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 23)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "state", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field9 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field9) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 24)) {
    if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "ttl", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field10 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field10) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 25)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "layer", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field11 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field11) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 26)) {
    if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "in_seq_no", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field12 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field12) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 26)) {
    if (cur_token_len >= 0 && cur_token_len == 14 && !cur_token_quoted && !memcmp (cur_token, "last_in_seq_no", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field13 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field13) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 26)) {
    if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "out_seq_no", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field14 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field14) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 27)) {
    if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "key_fingerprint", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field15 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_long (field15) < 0) { return -1;}
  }
  return 0;
}
int store_constructor_binlog_encr_chat_exchange_new (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  if (cur_token_len < 0) { return -1; }
  if (!is_int ()) { return -1;}
  struct paramed_type *var0 = INT2PTR (get_int ());
  out_int (get_int ());
  assert (var0);
  local_next_token ();
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (PTR2INT (var0) & (1 << 17)) {
    if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "exchange_id", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field3 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_long (field3) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 18)) {
    if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "key", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field4 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0xfc88e970, .id = "Bare_binlog.EncrKey", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_binlog_encr_key (field4) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 19)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "state", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field5 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field5) < 0) { return -1;}
  }
  return 0;
}
int store_constructor_binlog_user_delete (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_user_new (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  if (cur_token_len < 0) { return -1; }
  if (!is_int ()) { return -1;}
  struct paramed_type *var0 = INT2PTR (get_int ());
  out_int (get_int ());
  assert (var0);
  local_next_token ();
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (PTR2INT (var0) & (1 << 17)) {
    if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "access_hash", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field3 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_long (field3) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 18)) {
    if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "first_name", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field4 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field4) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 18)) {
    if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "last_name", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field5 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field5) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 19)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "phone", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field6 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field6) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 20)) {
    if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "username", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field7 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field7) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 21)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "photo", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field8 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0xc207550a, .id = "Photo", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_photo (field8) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 22)) {
    if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "real_first_name", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field9 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field9) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 22)) {
    if (cur_token_len >= 0 && cur_token_len == 14 && !cur_token_quoted && !memcmp (cur_token, "real_last_name", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field10 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field10) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 23)) {
    if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "user_photo", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field11 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x9a486229, .id = "UserProfilePhoto", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_user_profile_photo (field11) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 24)) {
    if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "last_read_in", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field12 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field12) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 25)) {
    if (cur_token_len >= 0 && cur_token_len == 13 && !cur_token_quoted && !memcmp (cur_token, "last_read_out", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field13 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field13) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 26)) {
    if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "bot_info", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field14 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0xb2e16f93, .id = "BotInfo", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bot_info (field14) < 0) { return -1;}
  }
  return 0;
}
int store_constructor_binlog_chat_new (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  if (cur_token_len < 0) { return -1; }
  if (!is_int ()) { return -1;}
  struct paramed_type *var0 = INT2PTR (get_int ());
  out_int (get_int ());
  assert (var0);
  local_next_token ();
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (PTR2INT (var0) & (1 << 17)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field3 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field3) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 18)) {
    if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "user_num", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field4 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field4) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 19)) {
    if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field5 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field5) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 20)) {
    if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "version", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field6 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field6) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 20)) {
    if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "participants", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field7 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
      .params = (struct paramed_type *[]){
        &(struct paramed_type){
          .type = &(struct tl_type_descr) {.name = 0xc8d7493e, .id = "ChatParticipant", .params_num = 0, .params_types = 0},
          .params = 0,
        },
      }
    };
    if (store_type_vector (field7) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 21)) {
    if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "chat_photo", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field8 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x56922676, .id = "ChatPhoto", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_chat_photo (field8) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 22)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "photo", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field9 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0xc207550a, .id = "Photo", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_photo (field9) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 23)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "admin", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field10 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field10) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 24)) {
    if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "last_read_in", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field11 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field11) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 25)) {
    if (cur_token_len >= 0 && cur_token_len == 13 && !cur_token_quoted && !memcmp (cur_token, "last_read_out", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field12 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field12) < 0) { return -1;}
  }
  return 0;
}
int store_constructor_binlog_chat_add_participant (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "version", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "inviter_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_chat_del_participant (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "version", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_set_msg_id (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "old_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "new_id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_message_delete (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "lid", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_message_new (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  if (cur_token_len < 0) { return -1; }
  if (!is_int ()) { return -1;}
  struct paramed_type *var0 = INT2PTR (get_int ());
  out_int (get_int ());
  assert (var0);
  local_next_token ();
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "lid", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (PTR2INT (var0) & (1 << 17)) {
    if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "from_id", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field3 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field3) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 17)) {
    if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "to_type", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field4 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field4) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 17)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "to_id", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field5 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field5) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 18)) {
    if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "fwd_from_id", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field6 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field6) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 18)) {
    if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "fwd_date", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field7 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field7) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 19)) {
    if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field8 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field8) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 20)) {
    if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "message", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field9 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field9) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 21)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "media", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field10 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x95f2471a, .id = "MessageMedia", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_message_media (field10) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 22)) {
    if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "action", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field11 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x383415fa, .id = "MessageAction", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_message_action (field11) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 23)) {
    if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "reply_id", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field12 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field12) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 24)) {
    if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "reply_markup", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field13 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x612ca4a9, .id = "ReplyMarkup", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_reply_markup (field13) < 0) { return -1;}
  }
  return 0;
}
int store_constructor_binlog_message_encr_new (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  if (cur_token_len < 0) { return -1; }
  if (!is_int ()) { return -1;}
  struct paramed_type *var0 = INT2PTR (get_int ());
  out_int (get_int ());
  assert (var0);
  local_next_token ();
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "lid", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return -1;}
  if (PTR2INT (var0) & (1 << 17)) {
    if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "from_id", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field3 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field3) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 17)) {
    if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "to_type", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field4 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field4) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 17)) {
    if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "to_id", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field5 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field5) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 19)) {
    if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field6 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field6) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 20)) {
    if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "message", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field7 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_string (field7) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 21)) {
    if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "encr_media", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field8 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x34e0d674, .id = "DecryptedMessageMedia", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_decrypted_message_media (field8) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 22)) {
    if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "encr_action", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field9 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x4e0eefde, .id = "DecryptedMessageAction", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_decrypted_message_action (field9) < 0) { return -1;}
  }
  if (PTR2INT (var0) & (1 << 23)) {
    if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "file", cur_token_len)) {
      local_next_token ();
      expect_token (":", 1);
    }
    struct paramed_type *field10 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x886fd032, .id = "EncryptedFile", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_encrypted_file (field10) < 0) { return -1;}
  }
  return 0;
}
int store_constructor_binlog_msg_update (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "lid", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_binlog_reset_authorization (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x66ff03a6 && T->type->name != 0x9900fc59)) { return -1; }
  return 0;
}
int store_constructor_contacts_blocked (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x8c1b8fb4 && T->type->name != 0x73e4704b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "blocked", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x561bc879, .id = "ContactBlocked", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_contacts_blocked_slice (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x8c1b8fb4 && T->type->name != 0x73e4704b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "blocked", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x561bc879, .id = "ContactBlocked", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_contacts_contacts_not_modified (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xd8c02560 && T->type->name != 0x273fda9f)) { return -1; }
  return 0;
}
int store_constructor_contacts_contacts (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xd8c02560 && T->type->name != 0x273fda9f)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "contacts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xf911c994, .id = "Contact", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_contacts_found (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x0566000e && T->type->name != 0xfa99fff1)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "results", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xea879f95, .id = "ContactFound", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_contacts_imported_contacts (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xad524315 && T->type->name != 0x52adbcea)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "imported", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xd0028438, .id = "ImportedContact", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 14 && !cur_token_quoted && !memcmp (cur_token, "retry_contacts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_contacts_link (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3ace484c && T->type->name != 0xc531b7b3)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "my_link", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x522fbc63, .id = "ContactLink", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_contact_link (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "foreign_link", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x522fbc63, .id = "ContactLink", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_contact_link (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "user", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_user (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_contacts_suggested (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x5649dcc5 && T->type->name != 0xa9b6233a)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "results", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x3de191a1, .id = "ContactSuggested", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_geochats_located (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x48feb267 && T->type->name != 0xb7014d98)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "results", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x3631cf4c, .id = "ChatLocated", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "messages", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xf67b4034, .id = "GeoChatMessage", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "chats", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x7bd865dc, .id = "Chat", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_geochats_messages (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x6d0a0e59 && T->type->name != 0x92f5f1a6)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "messages", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xf67b4034, .id = "GeoChatMessage", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "chats", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x7bd865dc, .id = "Chat", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_geochats_messages_slice (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x6d0a0e59 && T->type->name != 0x92f5f1a6)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "messages", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xf67b4034, .id = "GeoChatMessage", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "chats", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x7bd865dc, .id = "Chat", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_geochats_stated_message (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x17b1578b && T->type->name != 0xe84ea874)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "message", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf67b4034, .id = "GeoChatMessage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_geo_chat_message (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "chats", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x7bd865dc, .id = "Chat", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "seq", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_help_app_update (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4ddd9627 && T->type->name != 0xb22269d8)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "critical", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "url", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "text", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_help_no_app_update (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x4ddd9627 && T->type->name != 0xb22269d8)) { return -1; }
  return 0;
}
int store_constructor_help_invite_text (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x18cb9f78 && T->type->name != 0xe7346087)) { return -1; }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_help_support (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x17c6b5f6 && T->type->name != 0xe8394a09)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "phone_number", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "user", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_user (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_affected_history (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb45c69d1 && T->type->name != 0x4ba3962e)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "pts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "pts_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "offset", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_affected_messages (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x84d19185 && T->type->name != 0x7b2e6e7a)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "pts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "pts_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_all_stickers_not_modified (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb485502f && T->type->name != 0x4b7aafd0)) { return -1; }
  return 0;
}
int store_constructor_messages_all_stickers (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb485502f && T->type->name != 0x4b7aafd0)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "packs", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x12b299d4, .id = "StickerPack", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "sets", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xa7a43b17, .id = "StickerSet", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "documents", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x51a73418, .id = "Document", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_chat_full (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xe5d7d19c && T->type->name != 0x1a282e63)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "full_chat", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x2e02a614, .id = "ChatFull", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_chat_full (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "chats", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x7bd865dc, .id = "Chat", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_chats (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x64ff9fd5 && T->type->name != 0x9b00602a)) { return -1; }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x7bd865dc, .id = "Chat", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_dh_config_not_modified (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xecc058e8 && T->type->name != 0x133fa717)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "random", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_dh_config (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xecc058e8 && T->type->name != 0x133fa717)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "g", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "p", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "version", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "random", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_dialogs (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x645af8b3 && T->type->name != 0x9ba5074c)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "dialogs", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xc1dd804a, .id = "Dialog", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "messages", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x5d652a7f, .id = "Message", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "chats", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x7bd865dc, .id = "Chat", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_dialogs_slice (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x645af8b3 && T->type->name != 0x9ba5074c)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "dialogs", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xc1dd804a, .id = "Dialog", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "messages", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x5d652a7f, .id = "Message", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "chats", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x7bd865dc, .id = "Chat", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_message_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3f4e0648 && T->type->name != 0xc0b1f9b7)) { return -1; }
  return 0;
}
int store_constructor_messages_messages (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x8735e464 && T->type->name != 0x78ca1b9b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "messages", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x5d652a7f, .id = "Message", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "chats", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x7bd865dc, .id = "Chat", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_messages_slice (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x8735e464 && T->type->name != 0x78ca1b9b)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "messages", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x5d652a7f, .id = "Message", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "chats", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x7bd865dc, .id = "Chat", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field4) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_sent_encrypted_message (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xc29c7607 && T->type->name != 0x3d6389f8)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_sent_encrypted_file (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xc29c7607 && T->type->name != 0x3d6389f8)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "file", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x886fd032, .id = "EncryptedFile", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_encrypted_file (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_sent_message (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x799ce190 && T->type->name != 0x86631e6f)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "media", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x95f2471a, .id = "MessageMedia", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_message_media (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "pts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "pts_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_sent_message_link (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x799ce190 && T->type->name != 0x86631e6f)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "media", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x95f2471a, .id = "MessageMedia", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_message_media (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "pts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "pts_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "links", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x3ace484c, .id = "contacts.Link", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field6) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "seq", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field7) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_sticker_set (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xb60a24a6 && T->type->name != 0x49f5db59)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "set", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xa7a43b17, .id = "StickerSet", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_sticker_set (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "packs", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x12b299d4, .id = "StickerPack", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "documents", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x51a73418, .id = "Document", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_messages_stickers_not_modified (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x7bfa5710 && T->type->name != 0x8405a8ef)) { return -1; }
  return 0;
}
int store_constructor_messages_stickers (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x7bfa5710 && T->type->name != 0x8405a8ef)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "hash", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "stickers", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x51a73418, .id = "Document", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_photos_photo (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x20212ca8 && T->type->name != 0xdfded357)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "photo", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xc207550a, .id = "Photo", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_photo (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_photos_photos (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x98cf75f1 && T->type->name != 0x67308a0e)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "photos", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xc207550a, .id = "Photo", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_photos_photos_slice (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x98cf75f1 && T->type->name != 0x67308a0e)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "photos", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xc207550a, .id = "Photo", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  return 0;
}
int store_constructor_storage_file_unknown (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3e2838a8 && T->type->name != 0xc1d7c757)) { return -1; }
  return 0;
}
int store_constructor_storage_file_jpeg (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3e2838a8 && T->type->name != 0xc1d7c757)) { return -1; }
  return 0;
}
int store_constructor_storage_file_gif (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3e2838a8 && T->type->name != 0xc1d7c757)) { return -1; }
  return 0;
}
int store_constructor_storage_file_png (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3e2838a8 && T->type->name != 0xc1d7c757)) { return -1; }
  return 0;
}
int store_constructor_storage_file_pdf (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3e2838a8 && T->type->name != 0xc1d7c757)) { return -1; }
  return 0;
}
int store_constructor_storage_file_mp3 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3e2838a8 && T->type->name != 0xc1d7c757)) { return -1; }
  return 0;
}
int store_constructor_storage_file_mov (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3e2838a8 && T->type->name != 0xc1d7c757)) { return -1; }
  return 0;
}
int store_constructor_storage_file_partial (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3e2838a8 && T->type->name != 0xc1d7c757)) { return -1; }
  return 0;
}
int store_constructor_storage_file_mp4 (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3e2838a8 && T->type->name != 0xc1d7c757)) { return -1; }
  return 0;
}
int store_constructor_storage_file_webp (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x3e2838a8 && T->type->name != 0xc1d7c757)) { return -1; }
  return 0;
}
int store_constructor_updates_difference_empty (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xf57a2419 && T->type->name != 0x0a85dbe6)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "seq", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  return 0;
}
int store_constructor_updates_difference (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xf57a2419 && T->type->name != 0x0a85dbe6)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "new_messages", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x5d652a7f, .id = "Message", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 22 && !cur_token_quoted && !memcmp (cur_token, "new_encrypted_messages", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xce6b8a1e, .id = "EncryptedMessage", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 13 && !cur_token_quoted && !memcmp (cur_token, "other_updates", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x2e02b27e, .id = "Update", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "chats", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x7bd865dc, .id = "Chat", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "state", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xa56c2a3e, .id = "updates.State", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_updates_state (field6) < 0) { return -1;}
  return 0;
}
int store_constructor_updates_difference_slice (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xf57a2419 && T->type->name != 0x0a85dbe6)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "new_messages", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x5d652a7f, .id = "Message", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 22 && !cur_token_quoted && !memcmp (cur_token, "new_encrypted_messages", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xce6b8a1e, .id = "EncryptedMessage", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 13 && !cur_token_quoted && !memcmp (cur_token, "other_updates", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x2e02b27e, .id = "Update", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "chats", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x7bd865dc, .id = "Chat", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field5) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 18 && !cur_token_quoted && !memcmp (cur_token, "intermediate_state", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xa56c2a3e, .id = "updates.State", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_updates_state (field6) < 0) { return -1;}
  return 0;
}
int store_constructor_updates_state (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0xa56c2a3e && T->type->name != 0x5a93d5c1)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "pts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "qts", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "seq", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "unread_count", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return -1;}
  return 0;
}
int store_constructor_upload_file (struct paramed_type *T) {
  if (ODDP(T) || (T->type->name != 0x096a18d5 && T->type->name != 0xf695e72a)) { return -1; }
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "type", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x3e2838a8, .id = "storage.FileType", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_storage_file_type (field1) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "mtime", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return -1;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "bytes", cur_token_len)) {
    local_next_token ();
    expect_token (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field3) < 0) { return -1;}
  return 0;
}
int store_type_account_days_t_t_l (struct paramed_type *T) {
    out_int (0xb8d0afdf);
  if (store_constructor_account_days_t_t_l (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_account_days_t_t_l (struct paramed_type *T) {
  if (store_constructor_account_days_t_t_l (T) < 0) { return -1; }
  return 0;
}
int store_type_audio (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 10 && !memcmp (cur_token, "audioEmpty", cur_token_len)) {
    out_int (0x586988d8);
    local_next_token ();
    if (store_constructor_audio_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 5 && !memcmp (cur_token, "audio", cur_token_len)) {
    out_int (0xc7ac6496);
    local_next_token ();
    if (store_constructor_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_audio (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 10 && !memcmp (cur_token, "audioEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_audio_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 5 && !memcmp (cur_token, "audio", cur_token_len)) {
    local_next_token ();
    if (store_constructor_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_authorization (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "authorization", cur_token_len)) {
    out_int (0x7bf2e6f6);
    local_next_token ();
    if (store_constructor_authorization (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_authorization (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "authorization", cur_token_len)) {
    local_next_token ();
    if (store_constructor_authorization (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bool (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 9 && !memcmp (cur_token, "boolFalse", cur_token_len)) {
    out_int (0xbc799737);
    local_next_token ();
    if (store_constructor_bool_false (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 8 && !memcmp (cur_token, "boolTrue", cur_token_len)) {
    out_int (0x997275b5);
    local_next_token ();
    if (store_constructor_bool_true (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_bool (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 9 && !memcmp (cur_token, "boolFalse", cur_token_len)) {
    local_next_token ();
    if (store_constructor_bool_false (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 8 && !memcmp (cur_token, "boolTrue", cur_token_len)) {
    local_next_token ();
    if (store_constructor_bool_true (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bot_command (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 10 && !memcmp (cur_token, "botCommand", cur_token_len)) {
    out_int (0xc27ac8c7);
    local_next_token ();
    if (store_constructor_bot_command (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "botCommandOld", cur_token_len)) {
    out_int (0xb79d22ab);
    local_next_token ();
    if (store_constructor_bot_command_old (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_bot_command (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 10 && !memcmp (cur_token, "botCommand", cur_token_len)) {
    local_next_token ();
    if (store_constructor_bot_command (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "botCommandOld", cur_token_len)) {
    local_next_token ();
    if (store_constructor_bot_command_old (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bot_info (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 12 && !memcmp (cur_token, "botInfoEmpty", cur_token_len)) {
    out_int (0xbb2e37ce);
    local_next_token ();
    if (store_constructor_bot_info_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 7 && !memcmp (cur_token, "botInfo", cur_token_len)) {
    out_int (0x09cf585d);
    local_next_token ();
    if (store_constructor_bot_info (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_bot_info (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 12 && !memcmp (cur_token, "botInfoEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_bot_info_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 7 && !memcmp (cur_token, "botInfo", cur_token_len)) {
    local_next_token ();
    if (store_constructor_bot_info (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bytes (struct paramed_type *T) {
    out_int (0x0ee1379f);
  if (store_constructor_bytes (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_bytes (struct paramed_type *T) {
  if (store_constructor_bytes (T) < 0) { return -1; }
  return 0;
}
int store_type_chat (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 9 && !memcmp (cur_token, "chatEmpty", cur_token_len)) {
    out_int (0x9ba2d800);
    local_next_token ();
    if (store_constructor_chat_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 4 && !memcmp (cur_token, "chat", cur_token_len)) {
    out_int (0x6e9c9bc7);
    local_next_token ();
    if (store_constructor_chat (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "chatForbidden", cur_token_len)) {
    out_int (0xfb0ccc41);
    local_next_token ();
    if (store_constructor_chat_forbidden (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 7 && !memcmp (cur_token, "geoChat", cur_token_len)) {
    out_int (0x75eaea5a);
    local_next_token ();
    if (store_constructor_geo_chat (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_chat (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 9 && !memcmp (cur_token, "chatEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_chat_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 4 && !memcmp (cur_token, "chat", cur_token_len)) {
    local_next_token ();
    if (store_constructor_chat (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "chatForbidden", cur_token_len)) {
    local_next_token ();
    if (store_constructor_chat_forbidden (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 7 && !memcmp (cur_token, "geoChat", cur_token_len)) {
    local_next_token ();
    if (store_constructor_geo_chat (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_chat_full (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 8 && !memcmp (cur_token, "chatFull", cur_token_len)) {
    out_int (0x2e02a614);
    local_next_token ();
    if (store_constructor_chat_full (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_chat_full (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 8 && !memcmp (cur_token, "chatFull", cur_token_len)) {
    local_next_token ();
    if (store_constructor_chat_full (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_chat_invite (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "chatInviteAlready", cur_token_len)) {
    out_int (0x5a686d7c);
    local_next_token ();
    if (store_constructor_chat_invite_already (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 10 && !memcmp (cur_token, "chatInvite", cur_token_len)) {
    out_int (0xce917dcd);
    local_next_token ();
    if (store_constructor_chat_invite (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_chat_invite (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "chatInviteAlready", cur_token_len)) {
    local_next_token ();
    if (store_constructor_chat_invite_already (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 10 && !memcmp (cur_token, "chatInvite", cur_token_len)) {
    local_next_token ();
    if (store_constructor_chat_invite (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_chat_located (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 11 && !memcmp (cur_token, "chatLocated", cur_token_len)) {
    out_int (0x3631cf4c);
    local_next_token ();
    if (store_constructor_chat_located (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_chat_located (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 11 && !memcmp (cur_token, "chatLocated", cur_token_len)) {
    local_next_token ();
    if (store_constructor_chat_located (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_chat_participant (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "chatParticipant", cur_token_len)) {
    out_int (0xc8d7493e);
    local_next_token ();
    if (store_constructor_chat_participant (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_chat_participant (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "chatParticipant", cur_token_len)) {
    local_next_token ();
    if (store_constructor_chat_participant (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_chat_participants (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 25 && !memcmp (cur_token, "chatParticipantsForbidden", cur_token_len)) {
    out_int (0x0fd2bb8a);
    local_next_token ();
    if (store_constructor_chat_participants_forbidden (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "chatParticipants", cur_token_len)) {
    out_int (0x7841b415);
    local_next_token ();
    if (store_constructor_chat_participants (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_chat_participants (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 25 && !memcmp (cur_token, "chatParticipantsForbidden", cur_token_len)) {
    local_next_token ();
    if (store_constructor_chat_participants_forbidden (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "chatParticipants", cur_token_len)) {
    local_next_token ();
    if (store_constructor_chat_participants (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_chat_photo (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "chatPhotoEmpty", cur_token_len)) {
    out_int (0x37c1011c);
    local_next_token ();
    if (store_constructor_chat_photo_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 9 && !memcmp (cur_token, "chatPhoto", cur_token_len)) {
    out_int (0x6153276a);
    local_next_token ();
    if (store_constructor_chat_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_chat_photo (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "chatPhotoEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_chat_photo_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 9 && !memcmp (cur_token, "chatPhoto", cur_token_len)) {
    local_next_token ();
    if (store_constructor_chat_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_client_d_h_inner_data (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 20 && !memcmp (cur_token, "client_DH_inner_data", cur_token_len)) {
    out_int (0x6643b654);
    local_next_token ();
    if (store_constructor_client_d_h_inner_data (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_client_d_h_inner_data (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 20 && !memcmp (cur_token, "client_DH_inner_data", cur_token_len)) {
    local_next_token ();
    if (store_constructor_client_d_h_inner_data (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_config (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 6 && !memcmp (cur_token, "config", cur_token_len)) {
    out_int (0x4e32b894);
    local_next_token ();
    if (store_constructor_config (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_config (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 6 && !memcmp (cur_token, "config", cur_token_len)) {
    local_next_token ();
    if (store_constructor_config (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_contact (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 7 && !memcmp (cur_token, "contact", cur_token_len)) {
    out_int (0xf911c994);
    local_next_token ();
    if (store_constructor_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_contact (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 7 && !memcmp (cur_token, "contact", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_contact_blocked (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "contactBlocked", cur_token_len)) {
    out_int (0x561bc879);
    local_next_token ();
    if (store_constructor_contact_blocked (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_contact_blocked (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "contactBlocked", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contact_blocked (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_contact_found (struct paramed_type *T) {
    out_int (0xea879f95);
  if (store_constructor_contact_found (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_contact_found (struct paramed_type *T) {
  if (store_constructor_contact_found (T) < 0) { return -1; }
  return 0;
}
int store_type_contact_link (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "contactLinkUnknown", cur_token_len)) {
    out_int (0x5f4f9247);
    local_next_token ();
    if (store_constructor_contact_link_unknown (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "contactLinkNone", cur_token_len)) {
    out_int (0xfeedd3ad);
    local_next_token ();
    if (store_constructor_contact_link_none (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "contactLinkHasPhone", cur_token_len)) {
    out_int (0x268f3f59);
    local_next_token ();
    if (store_constructor_contact_link_has_phone (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "contactLinkContact", cur_token_len)) {
    out_int (0xd502c2d0);
    local_next_token ();
    if (store_constructor_contact_link_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_contact_link (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "contactLinkUnknown", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contact_link_unknown (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "contactLinkNone", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contact_link_none (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "contactLinkHasPhone", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contact_link_has_phone (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "contactLinkContact", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contact_link_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_contact_status (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "contactStatus", cur_token_len)) {
    out_int (0xd3680c61);
    local_next_token ();
    if (store_constructor_contact_status (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_contact_status (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "contactStatus", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contact_status (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_contact_suggested (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 16 && !memcmp (cur_token, "contactSuggested", cur_token_len)) {
    out_int (0x3de191a1);
    local_next_token ();
    if (store_constructor_contact_suggested (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_contact_suggested (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 16 && !memcmp (cur_token, "contactSuggested", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contact_suggested (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_dc_option (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 11 && !memcmp (cur_token, "dcOptionL28", cur_token_len)) {
    out_int (0x2ec2a43c);
    local_next_token ();
    if (store_constructor_dc_option_l28 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 8 && !memcmp (cur_token, "dcOption", cur_token_len)) {
    out_int (0x05d8c6cc);
    local_next_token ();
    if (store_constructor_dc_option (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_dc_option (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 11 && !memcmp (cur_token, "dcOptionL28", cur_token_len)) {
    local_next_token ();
    if (store_constructor_dc_option_l28 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 8 && !memcmp (cur_token, "dcOption", cur_token_len)) {
    local_next_token ();
    if (store_constructor_dc_option (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_decrypted_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 16 && !memcmp (cur_token, "decryptedMessage", cur_token_len)) {
    out_int (0x204d3878);
    local_next_token ();
    if (store_constructor_decrypted_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "decryptedMessageService", cur_token_len)) {
    out_int (0x73164160);
    local_next_token ();
    if (store_constructor_decrypted_message_service (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_decrypted_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 16 && !memcmp (cur_token, "decryptedMessage", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "decryptedMessageService", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_service (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_decrypted_message_action (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 35 && !memcmp (cur_token, "decryptedMessageActionSetMessageTTL", cur_token_len)) {
    out_int (0xa1733aec);
    local_next_token ();
    if (store_constructor_decrypted_message_action_set_message_t_t_l (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 34 && !memcmp (cur_token, "decryptedMessageActionReadMessages", cur_token_len)) {
    out_int (0x0c4f40be);
    local_next_token ();
    if (store_constructor_decrypted_message_action_read_messages (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 36 && !memcmp (cur_token, "decryptedMessageActionDeleteMessages", cur_token_len)) {
    out_int (0x65614304);
    local_next_token ();
    if (store_constructor_decrypted_message_action_delete_messages (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 40 && !memcmp (cur_token, "decryptedMessageActionScreenshotMessages", cur_token_len)) {
    out_int (0x8ac1f475);
    local_next_token ();
    if (store_constructor_decrypted_message_action_screenshot_messages (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 34 && !memcmp (cur_token, "decryptedMessageActionFlushHistory", cur_token_len)) {
    out_int (0x6719e45c);
    local_next_token ();
    if (store_constructor_decrypted_message_action_flush_history (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "decryptedMessageActionResend", cur_token_len)) {
    out_int (0x511110b0);
    local_next_token ();
    if (store_constructor_decrypted_message_action_resend (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 33 && !memcmp (cur_token, "decryptedMessageActionNotifyLayer", cur_token_len)) {
    out_int (0xf3048883);
    local_next_token ();
    if (store_constructor_decrypted_message_action_notify_layer (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "decryptedMessageActionTyping", cur_token_len)) {
    out_int (0xccb27641);
    local_next_token ();
    if (store_constructor_decrypted_message_action_typing (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 32 && !memcmp (cur_token, "decryptedMessageActionRequestKey", cur_token_len)) {
    out_int (0xf3c9611b);
    local_next_token ();
    if (store_constructor_decrypted_message_action_request_key (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 31 && !memcmp (cur_token, "decryptedMessageActionAcceptKey", cur_token_len)) {
    out_int (0x6fe1735b);
    local_next_token ();
    if (store_constructor_decrypted_message_action_accept_key (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 30 && !memcmp (cur_token, "decryptedMessageActionAbortKey", cur_token_len)) {
    out_int (0xdd05ec6b);
    local_next_token ();
    if (store_constructor_decrypted_message_action_abort_key (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 31 && !memcmp (cur_token, "decryptedMessageActionCommitKey", cur_token_len)) {
    out_int (0xec2e0b9b);
    local_next_token ();
    if (store_constructor_decrypted_message_action_commit_key (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "decryptedMessageActionNoop", cur_token_len)) {
    out_int (0xa82fdd63);
    local_next_token ();
    if (store_constructor_decrypted_message_action_noop (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_decrypted_message_action (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 35 && !memcmp (cur_token, "decryptedMessageActionSetMessageTTL", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_action_set_message_t_t_l (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 34 && !memcmp (cur_token, "decryptedMessageActionReadMessages", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_action_read_messages (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 36 && !memcmp (cur_token, "decryptedMessageActionDeleteMessages", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_action_delete_messages (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 40 && !memcmp (cur_token, "decryptedMessageActionScreenshotMessages", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_action_screenshot_messages (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 34 && !memcmp (cur_token, "decryptedMessageActionFlushHistory", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_action_flush_history (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "decryptedMessageActionResend", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_action_resend (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 33 && !memcmp (cur_token, "decryptedMessageActionNotifyLayer", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_action_notify_layer (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "decryptedMessageActionTyping", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_action_typing (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 32 && !memcmp (cur_token, "decryptedMessageActionRequestKey", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_action_request_key (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 31 && !memcmp (cur_token, "decryptedMessageActionAcceptKey", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_action_accept_key (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 30 && !memcmp (cur_token, "decryptedMessageActionAbortKey", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_action_abort_key (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 31 && !memcmp (cur_token, "decryptedMessageActionCommitKey", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_action_commit_key (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "decryptedMessageActionNoop", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_action_noop (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_decrypted_message_layer (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 21 && !memcmp (cur_token, "decryptedMessageLayer", cur_token_len)) {
    out_int (0x1be31789);
    local_next_token ();
    if (store_constructor_decrypted_message_layer (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_decrypted_message_layer (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 21 && !memcmp (cur_token, "decryptedMessageLayer", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_layer (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_decrypted_message_media (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 26 && !memcmp (cur_token, "decryptedMessageMediaEmpty", cur_token_len)) {
    out_int (0x089f5c4a);
    local_next_token ();
    if (store_constructor_decrypted_message_media_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "decryptedMessageMediaPhoto", cur_token_len)) {
    out_int (0x32798a8c);
    local_next_token ();
    if (store_constructor_decrypted_message_media_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "decryptedMessageMediaGeoPoint", cur_token_len)) {
    out_int (0x35480a59);
    local_next_token ();
    if (store_constructor_decrypted_message_media_geo_point (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "decryptedMessageMediaContact", cur_token_len)) {
    out_int (0x588a0a97);
    local_next_token ();
    if (store_constructor_decrypted_message_media_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "decryptedMessageMediaDocument", cur_token_len)) {
    out_int (0xb095434b);
    local_next_token ();
    if (store_constructor_decrypted_message_media_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "decryptedMessageMediaVideo", cur_token_len)) {
    out_int (0x524a415d);
    local_next_token ();
    if (store_constructor_decrypted_message_media_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "decryptedMessageMediaAudio", cur_token_len)) {
    out_int (0x57e0a9cb);
    local_next_token ();
    if (store_constructor_decrypted_message_media_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 37 && !memcmp (cur_token, "decryptedMessageMediaExternalDocument", cur_token_len)) {
    out_int (0xfa95b0dd);
    local_next_token ();
    if (store_constructor_decrypted_message_media_external_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "decryptedMessageMediaVideoL12", cur_token_len)) {
    out_int (0x4cee6ef3);
    local_next_token ();
    if (store_constructor_decrypted_message_media_video_l12 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "decryptedMessageMediaAudioL12", cur_token_len)) {
    out_int (0x6080758f);
    local_next_token ();
    if (store_constructor_decrypted_message_media_audio_l12 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_decrypted_message_media (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 26 && !memcmp (cur_token, "decryptedMessageMediaEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_media_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "decryptedMessageMediaPhoto", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_media_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "decryptedMessageMediaGeoPoint", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_media_geo_point (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "decryptedMessageMediaContact", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_media_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "decryptedMessageMediaDocument", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_media_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "decryptedMessageMediaVideo", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_media_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "decryptedMessageMediaAudio", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_media_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 37 && !memcmp (cur_token, "decryptedMessageMediaExternalDocument", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_media_external_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "decryptedMessageMediaVideoL12", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_media_video_l12 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "decryptedMessageMediaAudioL12", cur_token_len)) {
    local_next_token ();
    if (store_constructor_decrypted_message_media_audio_l12 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_dialog (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 6 && !memcmp (cur_token, "dialog", cur_token_len)) {
    out_int (0xc1dd804a);
    local_next_token ();
    if (store_constructor_dialog (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_dialog (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 6 && !memcmp (cur_token, "dialog", cur_token_len)) {
    local_next_token ();
    if (store_constructor_dialog (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_disabled_feature (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "disabledFeature", cur_token_len)) {
    out_int (0xae636f24);
    local_next_token ();
    if (store_constructor_disabled_feature (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_disabled_feature (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "disabledFeature", cur_token_len)) {
    local_next_token ();
    if (store_constructor_disabled_feature (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_document (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "documentEmpty", cur_token_len)) {
    out_int (0x36f8c871);
    local_next_token ();
    if (store_constructor_document_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 8 && !memcmp (cur_token, "document", cur_token_len)) {
    out_int (0xf9a39f4f);
    local_next_token ();
    if (store_constructor_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 12 && !memcmp (cur_token, "document_l19", cur_token_len)) {
    out_int (0x9efc6326);
    local_next_token ();
    if (store_constructor_document_l19 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_document (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "documentEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_document_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 8 && !memcmp (cur_token, "document", cur_token_len)) {
    local_next_token ();
    if (store_constructor_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 12 && !memcmp (cur_token, "document_l19", cur_token_len)) {
    local_next_token ();
    if (store_constructor_document_l19 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_document_attribute (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 26 && !memcmp (cur_token, "documentAttributeImageSize", cur_token_len)) {
    out_int (0x6c37c15c);
    local_next_token ();
    if (store_constructor_document_attribute_image_size (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "documentAttributeAnimated", cur_token_len)) {
    out_int (0x11b58939);
    local_next_token ();
    if (store_constructor_document_attribute_animated (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "documentAttributeStickerL28", cur_token_len)) {
    out_int (0x994c9882);
    local_next_token ();
    if (store_constructor_document_attribute_sticker_l28 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "documentAttributeSticker", cur_token_len)) {
    out_int (0x3a556302);
    local_next_token ();
    if (store_constructor_document_attribute_sticker (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "documentAttributeVideo", cur_token_len)) {
    out_int (0x5910cccb);
    local_next_token ();
    if (store_constructor_document_attribute_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "documentAttributeAudio", cur_token_len)) {
    out_int (0x051448e5);
    local_next_token ();
    if (store_constructor_document_attribute_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "documentAttributeFilename", cur_token_len)) {
    out_int (0x15590068);
    local_next_token ();
    if (store_constructor_document_attribute_filename (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_document_attribute (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 26 && !memcmp (cur_token, "documentAttributeImageSize", cur_token_len)) {
    local_next_token ();
    if (store_constructor_document_attribute_image_size (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "documentAttributeAnimated", cur_token_len)) {
    local_next_token ();
    if (store_constructor_document_attribute_animated (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "documentAttributeStickerL28", cur_token_len)) {
    local_next_token ();
    if (store_constructor_document_attribute_sticker_l28 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "documentAttributeSticker", cur_token_len)) {
    local_next_token ();
    if (store_constructor_document_attribute_sticker (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "documentAttributeVideo", cur_token_len)) {
    local_next_token ();
    if (store_constructor_document_attribute_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "documentAttributeAudio", cur_token_len)) {
    local_next_token ();
    if (store_constructor_document_attribute_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "documentAttributeFilename", cur_token_len)) {
    local_next_token ();
    if (store_constructor_document_attribute_filename (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_double (struct paramed_type *T) {
    out_int (0x2210c154);
  if (store_constructor_double (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_double (struct paramed_type *T) {
  if (store_constructor_double (T) < 0) { return -1; }
  return 0;
}
int store_type_encrypted_chat (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "encryptedChatEmpty", cur_token_len)) {
    out_int (0xab7ec0a0);
    local_next_token ();
    if (store_constructor_encrypted_chat_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "encryptedChatWaiting", cur_token_len)) {
    out_int (0x3bf703dc);
    local_next_token ();
    if (store_constructor_encrypted_chat_waiting (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "encryptedChatRequested", cur_token_len)) {
    out_int (0xc878527e);
    local_next_token ();
    if (store_constructor_encrypted_chat_requested (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "encryptedChat", cur_token_len)) {
    out_int (0xfa56ce36);
    local_next_token ();
    if (store_constructor_encrypted_chat (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "encryptedChatDiscarded", cur_token_len)) {
    out_int (0x13d6dd27);
    local_next_token ();
    if (store_constructor_encrypted_chat_discarded (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_encrypted_chat (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "encryptedChatEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_encrypted_chat_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "encryptedChatWaiting", cur_token_len)) {
    local_next_token ();
    if (store_constructor_encrypted_chat_waiting (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "encryptedChatRequested", cur_token_len)) {
    local_next_token ();
    if (store_constructor_encrypted_chat_requested (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "encryptedChat", cur_token_len)) {
    local_next_token ();
    if (store_constructor_encrypted_chat (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "encryptedChatDiscarded", cur_token_len)) {
    local_next_token ();
    if (store_constructor_encrypted_chat_discarded (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_encrypted_file (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "encryptedFileEmpty", cur_token_len)) {
    out_int (0xc21f497e);
    local_next_token ();
    if (store_constructor_encrypted_file_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "encryptedFile", cur_token_len)) {
    out_int (0x4a70994c);
    local_next_token ();
    if (store_constructor_encrypted_file (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_encrypted_file (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "encryptedFileEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_encrypted_file_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "encryptedFile", cur_token_len)) {
    local_next_token ();
    if (store_constructor_encrypted_file (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_encrypted_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 16 && !memcmp (cur_token, "encryptedMessage", cur_token_len)) {
    out_int (0xed18c118);
    local_next_token ();
    if (store_constructor_encrypted_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "encryptedMessageService", cur_token_len)) {
    out_int (0x23734b06);
    local_next_token ();
    if (store_constructor_encrypted_message_service (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_encrypted_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 16 && !memcmp (cur_token, "encryptedMessage", cur_token_len)) {
    local_next_token ();
    if (store_constructor_encrypted_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "encryptedMessageService", cur_token_len)) {
    local_next_token ();
    if (store_constructor_encrypted_message_service (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_error (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 5 && !memcmp (cur_token, "error", cur_token_len)) {
    out_int (0xc4b9f9bb);
    local_next_token ();
    if (store_constructor_error (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_error (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 5 && !memcmp (cur_token, "error", cur_token_len)) {
    local_next_token ();
    if (store_constructor_error (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_exported_chat_invite (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "chatInviteEmpty", cur_token_len)) {
    out_int (0x69df3769);
    local_next_token ();
    if (store_constructor_chat_invite_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "chatInviteExported", cur_token_len)) {
    out_int (0xfc2e05bc);
    local_next_token ();
    if (store_constructor_chat_invite_exported (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_exported_chat_invite (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "chatInviteEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_chat_invite_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "chatInviteExported", cur_token_len)) {
    local_next_token ();
    if (store_constructor_chat_invite_exported (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_file_location (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 23 && !memcmp (cur_token, "fileLocationUnavailable", cur_token_len)) {
    out_int (0x7c596b46);
    local_next_token ();
    if (store_constructor_file_location_unavailable (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 12 && !memcmp (cur_token, "fileLocation", cur_token_len)) {
    out_int (0x53d69076);
    local_next_token ();
    if (store_constructor_file_location (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_file_location (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 23 && !memcmp (cur_token, "fileLocationUnavailable", cur_token_len)) {
    local_next_token ();
    if (store_constructor_file_location_unavailable (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 12 && !memcmp (cur_token, "fileLocation", cur_token_len)) {
    local_next_token ();
    if (store_constructor_file_location (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_geo_chat_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 19 && !memcmp (cur_token, "geoChatMessageEmpty", cur_token_len)) {
    out_int (0x60311a9b);
    local_next_token ();
    if (store_constructor_geo_chat_message_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "geoChatMessage", cur_token_len)) {
    out_int (0x4505f8e1);
    local_next_token ();
    if (store_constructor_geo_chat_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "geoChatMessageService", cur_token_len)) {
    out_int (0xd34fa24e);
    local_next_token ();
    if (store_constructor_geo_chat_message_service (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_geo_chat_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 19 && !memcmp (cur_token, "geoChatMessageEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_geo_chat_message_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "geoChatMessage", cur_token_len)) {
    local_next_token ();
    if (store_constructor_geo_chat_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "geoChatMessageService", cur_token_len)) {
    local_next_token ();
    if (store_constructor_geo_chat_message_service (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_geo_point (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "geoPointEmpty", cur_token_len)) {
    out_int (0x1117dd5f);
    local_next_token ();
    if (store_constructor_geo_point_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 8 && !memcmp (cur_token, "geoPoint", cur_token_len)) {
    out_int (0x2049d70c);
    local_next_token ();
    if (store_constructor_geo_point (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_geo_point (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "geoPointEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_geo_point_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 8 && !memcmp (cur_token, "geoPoint", cur_token_len)) {
    local_next_token ();
    if (store_constructor_geo_point (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_imported_contact (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "importedContact", cur_token_len)) {
    out_int (0xd0028438);
    local_next_token ();
    if (store_constructor_imported_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_imported_contact (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "importedContact", cur_token_len)) {
    local_next_token ();
    if (store_constructor_imported_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_app_event (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "inputAppEvent", cur_token_len)) {
    out_int (0x770656a8);
    local_next_token ();
    if (store_constructor_input_app_event (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_app_event (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "inputAppEvent", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_app_event (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_audio (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputAudioEmpty", cur_token_len)) {
    out_int (0xd95adc84);
    local_next_token ();
    if (store_constructor_input_audio_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 10 && !memcmp (cur_token, "inputAudio", cur_token_len)) {
    out_int (0x77d440ff);
    local_next_token ();
    if (store_constructor_input_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_audio (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputAudioEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_audio_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 10 && !memcmp (cur_token, "inputAudio", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_chat_photo (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 19 && !memcmp (cur_token, "inputChatPhotoEmpty", cur_token_len)) {
    out_int (0x1ca48f57);
    local_next_token ();
    if (store_constructor_input_chat_photo_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "inputChatUploadedPhoto", cur_token_len)) {
    out_int (0x94254732);
    local_next_token ();
    if (store_constructor_input_chat_uploaded_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "inputChatPhoto", cur_token_len)) {
    out_int (0xb2e1bf08);
    local_next_token ();
    if (store_constructor_input_chat_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_chat_photo (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 19 && !memcmp (cur_token, "inputChatPhotoEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_chat_photo_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "inputChatUploadedPhoto", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_chat_uploaded_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "inputChatPhoto", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_chat_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_contact (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "inputPhoneContact", cur_token_len)) {
    out_int (0xf392b7f4);
    local_next_token ();
    if (store_constructor_input_phone_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_contact (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "inputPhoneContact", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_phone_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_document (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "inputDocumentEmpty", cur_token_len)) {
    out_int (0x72f0eaae);
    local_next_token ();
    if (store_constructor_input_document_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "inputDocument", cur_token_len)) {
    out_int (0x18798952);
    local_next_token ();
    if (store_constructor_input_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_document (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "inputDocumentEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_document_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "inputDocument", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_encrypted_chat (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "inputEncryptedChat", cur_token_len)) {
    out_int (0xf141b5e1);
    local_next_token ();
    if (store_constructor_input_encrypted_chat (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_encrypted_chat (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "inputEncryptedChat", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_encrypted_chat (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_encrypted_file (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 23 && !memcmp (cur_token, "inputEncryptedFileEmpty", cur_token_len)) {
    out_int (0x1837c364);
    local_next_token ();
    if (store_constructor_input_encrypted_file_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "inputEncryptedFileUploaded", cur_token_len)) {
    out_int (0x64bd0306);
    local_next_token ();
    if (store_constructor_input_encrypted_file_uploaded (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "inputEncryptedFile", cur_token_len)) {
    out_int (0x5a17b5e5);
    local_next_token ();
    if (store_constructor_input_encrypted_file (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "inputEncryptedFileBigUploaded", cur_token_len)) {
    out_int (0x2dc173c8);
    local_next_token ();
    if (store_constructor_input_encrypted_file_big_uploaded (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_encrypted_file (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 23 && !memcmp (cur_token, "inputEncryptedFileEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_encrypted_file_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "inputEncryptedFileUploaded", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_encrypted_file_uploaded (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "inputEncryptedFile", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_encrypted_file (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "inputEncryptedFileBigUploaded", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_encrypted_file_big_uploaded (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_file (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 9 && !memcmp (cur_token, "inputFile", cur_token_len)) {
    out_int (0xf52ff27f);
    local_next_token ();
    if (store_constructor_input_file (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 12 && !memcmp (cur_token, "inputFileBig", cur_token_len)) {
    out_int (0xfa4f0bb5);
    local_next_token ();
    if (store_constructor_input_file_big (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_file (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 9 && !memcmp (cur_token, "inputFile", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_file (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 12 && !memcmp (cur_token, "inputFileBig", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_file_big (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_file_location (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "inputFileLocation", cur_token_len)) {
    out_int (0x14637196);
    local_next_token ();
    if (store_constructor_input_file_location (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "inputVideoFileLocation", cur_token_len)) {
    out_int (0x3d0364ec);
    local_next_token ();
    if (store_constructor_input_video_file_location (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "inputEncryptedFileLocation", cur_token_len)) {
    out_int (0xf5235d55);
    local_next_token ();
    if (store_constructor_input_encrypted_file_location (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "inputAudioFileLocation", cur_token_len)) {
    out_int (0x74dc404d);
    local_next_token ();
    if (store_constructor_input_audio_file_location (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "inputDocumentFileLocation", cur_token_len)) {
    out_int (0x4e45abe9);
    local_next_token ();
    if (store_constructor_input_document_file_location (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_file_location (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "inputFileLocation", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_file_location (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "inputVideoFileLocation", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_video_file_location (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "inputEncryptedFileLocation", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_encrypted_file_location (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "inputAudioFileLocation", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_audio_file_location (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "inputDocumentFileLocation", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_document_file_location (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_geo_chat (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 12 && !memcmp (cur_token, "inputGeoChat", cur_token_len)) {
    out_int (0x74d456fa);
    local_next_token ();
    if (store_constructor_input_geo_chat (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_geo_chat (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 12 && !memcmp (cur_token, "inputGeoChat", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_geo_chat (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_geo_point (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "inputGeoPointEmpty", cur_token_len)) {
    out_int (0xe4c123d6);
    local_next_token ();
    if (store_constructor_input_geo_point_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "inputGeoPoint", cur_token_len)) {
    out_int (0xf3b7acc9);
    local_next_token ();
    if (store_constructor_input_geo_point (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_geo_point (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "inputGeoPointEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_geo_point_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "inputGeoPoint", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_geo_point (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_media (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputMediaEmpty", cur_token_len)) {
    out_int (0x9664f57f);
    local_next_token ();
    if (store_constructor_input_media_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "inputMediaUploadedPhoto", cur_token_len)) {
    out_int (0xf7aff1c0);
    local_next_token ();
    if (store_constructor_input_media_uploaded_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputMediaPhoto", cur_token_len)) {
    out_int (0xe9bfb4f3);
    local_next_token ();
    if (store_constructor_input_media_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "inputMediaGeoPoint", cur_token_len)) {
    out_int (0xf9c44144);
    local_next_token ();
    if (store_constructor_input_media_geo_point (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "inputMediaContact", cur_token_len)) {
    out_int (0xa6e45987);
    local_next_token ();
    if (store_constructor_input_media_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "inputMediaUploadedVideo", cur_token_len)) {
    out_int (0xe13fd4bc);
    local_next_token ();
    if (store_constructor_input_media_uploaded_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "inputMediaUploadedThumbVideo", cur_token_len)) {
    out_int (0x96fb97dc);
    local_next_token ();
    if (store_constructor_input_media_uploaded_thumb_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputMediaVideo", cur_token_len)) {
    out_int (0x936a4ebd);
    local_next_token ();
    if (store_constructor_input_media_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "inputMediaUploadedAudio", cur_token_len)) {
    out_int (0x4e498cab);
    local_next_token ();
    if (store_constructor_input_media_uploaded_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputMediaAudio", cur_token_len)) {
    out_int (0x89938781);
    local_next_token ();
    if (store_constructor_input_media_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "inputMediaUploadedDocument", cur_token_len)) {
    out_int (0xffe76b78);
    local_next_token ();
    if (store_constructor_input_media_uploaded_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 31 && !memcmp (cur_token, "inputMediaUploadedThumbDocument", cur_token_len)) {
    out_int (0x41481486);
    local_next_token ();
    if (store_constructor_input_media_uploaded_thumb_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "inputMediaDocument", cur_token_len)) {
    out_int (0xd184e841);
    local_next_token ();
    if (store_constructor_input_media_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputMediaVenue", cur_token_len)) {
    out_int (0x2827a81a);
    local_next_token ();
    if (store_constructor_input_media_venue (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_media (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputMediaEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_media_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "inputMediaUploadedPhoto", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_media_uploaded_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputMediaPhoto", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_media_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "inputMediaGeoPoint", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_media_geo_point (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "inputMediaContact", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_media_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "inputMediaUploadedVideo", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_media_uploaded_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "inputMediaUploadedThumbVideo", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_media_uploaded_thumb_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputMediaVideo", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_media_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "inputMediaUploadedAudio", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_media_uploaded_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputMediaAudio", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_media_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "inputMediaUploadedDocument", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_media_uploaded_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 31 && !memcmp (cur_token, "inputMediaUploadedThumbDocument", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_media_uploaded_thumb_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "inputMediaDocument", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_media_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputMediaVenue", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_media_venue (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_notify_peer (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputNotifyPeer", cur_token_len)) {
    out_int (0xb8bc5b0c);
    local_next_token ();
    if (store_constructor_input_notify_peer (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "inputNotifyUsers", cur_token_len)) {
    out_int (0x193b4417);
    local_next_token ();
    if (store_constructor_input_notify_users (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "inputNotifyChats", cur_token_len)) {
    out_int (0x4a95e84e);
    local_next_token ();
    if (store_constructor_input_notify_chats (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "inputNotifyAll", cur_token_len)) {
    out_int (0xa429b886);
    local_next_token ();
    if (store_constructor_input_notify_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "inputNotifyGeoChatPeer", cur_token_len)) {
    out_int (0x4d8ddec8);
    local_next_token ();
    if (store_constructor_input_notify_geo_chat_peer (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_notify_peer (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputNotifyPeer", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_notify_peer (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "inputNotifyUsers", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_notify_users (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "inputNotifyChats", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_notify_chats (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "inputNotifyAll", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_notify_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "inputNotifyGeoChatPeer", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_notify_geo_chat_peer (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_peer (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "inputPeerEmpty", cur_token_len)) {
    out_int (0x7f3b18ea);
    local_next_token ();
    if (store_constructor_input_peer_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "inputPeerSelf", cur_token_len)) {
    out_int (0x7da07ec9);
    local_next_token ();
    if (store_constructor_input_peer_self (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "inputPeerContact", cur_token_len)) {
    out_int (0x1023dbe8);
    local_next_token ();
    if (store_constructor_input_peer_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "inputPeerForeign", cur_token_len)) {
    out_int (0x9b447325);
    local_next_token ();
    if (store_constructor_input_peer_foreign (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "inputPeerChat", cur_token_len)) {
    out_int (0x179be863);
    local_next_token ();
    if (store_constructor_input_peer_chat (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_peer (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "inputPeerEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_peer_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "inputPeerSelf", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_peer_self (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "inputPeerContact", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_peer_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "inputPeerForeign", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_peer_foreign (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "inputPeerChat", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_peer_chat (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_peer_notify_events (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 26 && !memcmp (cur_token, "inputPeerNotifyEventsEmpty", cur_token_len)) {
    out_int (0xf03064d8);
    local_next_token ();
    if (store_constructor_input_peer_notify_events_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "inputPeerNotifyEventsAll", cur_token_len)) {
    out_int (0xe86a2c74);
    local_next_token ();
    if (store_constructor_input_peer_notify_events_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_peer_notify_events (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 26 && !memcmp (cur_token, "inputPeerNotifyEventsEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_peer_notify_events_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "inputPeerNotifyEventsAll", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_peer_notify_events_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_peer_notify_settings (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 23 && !memcmp (cur_token, "inputPeerNotifySettings", cur_token_len)) {
    out_int (0x46a2ce98);
    local_next_token ();
    if (store_constructor_input_peer_notify_settings (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_peer_notify_settings (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 23 && !memcmp (cur_token, "inputPeerNotifySettings", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_peer_notify_settings (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_photo (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputPhotoEmpty", cur_token_len)) {
    out_int (0x1cd7bf0d);
    local_next_token ();
    if (store_constructor_input_photo_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 10 && !memcmp (cur_token, "inputPhoto", cur_token_len)) {
    out_int (0xfb95c6c4);
    local_next_token ();
    if (store_constructor_input_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_photo (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputPhotoEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_photo_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 10 && !memcmp (cur_token, "inputPhoto", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_photo_crop (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "inputPhotoCropAuto", cur_token_len)) {
    out_int (0xade6b004);
    local_next_token ();
    if (store_constructor_input_photo_crop_auto (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "inputPhotoCrop", cur_token_len)) {
    out_int (0xd9915325);
    local_next_token ();
    if (store_constructor_input_photo_crop (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_photo_crop (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "inputPhotoCropAuto", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_photo_crop_auto (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "inputPhotoCrop", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_photo_crop (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_privacy_key (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 30 && !memcmp (cur_token, "inputPrivacyKeyStatusTimestamp", cur_token_len)) {
    out_int (0x4f96cb18);
    local_next_token ();
    if (store_constructor_input_privacy_key_status_timestamp (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_privacy_key (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 30 && !memcmp (cur_token, "inputPrivacyKeyStatusTimestamp", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_privacy_key_status_timestamp (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_privacy_rule (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 30 && !memcmp (cur_token, "inputPrivacyValueAllowContacts", cur_token_len)) {
    out_int (0x0d09e07b);
    local_next_token ();
    if (store_constructor_input_privacy_value_allow_contacts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "inputPrivacyValueAllowAll", cur_token_len)) {
    out_int (0x184b35ce);
    local_next_token ();
    if (store_constructor_input_privacy_value_allow_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "inputPrivacyValueAllowUsers", cur_token_len)) {
    out_int (0x131cc67f);
    local_next_token ();
    if (store_constructor_input_privacy_value_allow_users (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 33 && !memcmp (cur_token, "inputPrivacyValueDisallowContacts", cur_token_len)) {
    out_int (0x0ba52007);
    local_next_token ();
    if (store_constructor_input_privacy_value_disallow_contacts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "inputPrivacyValueDisallowAll", cur_token_len)) {
    out_int (0xd66b66c9);
    local_next_token ();
    if (store_constructor_input_privacy_value_disallow_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 30 && !memcmp (cur_token, "inputPrivacyValueDisallowUsers", cur_token_len)) {
    out_int (0x90110467);
    local_next_token ();
    if (store_constructor_input_privacy_value_disallow_users (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_privacy_rule (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 30 && !memcmp (cur_token, "inputPrivacyValueAllowContacts", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_privacy_value_allow_contacts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "inputPrivacyValueAllowAll", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_privacy_value_allow_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "inputPrivacyValueAllowUsers", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_privacy_value_allow_users (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 33 && !memcmp (cur_token, "inputPrivacyValueDisallowContacts", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_privacy_value_disallow_contacts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "inputPrivacyValueDisallowAll", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_privacy_value_disallow_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 30 && !memcmp (cur_token, "inputPrivacyValueDisallowUsers", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_privacy_value_disallow_users (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_sticker_set (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 20 && !memcmp (cur_token, "inputStickerSetEmpty", cur_token_len)) {
    out_int (0xffb62b95);
    local_next_token ();
    if (store_constructor_input_sticker_set_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "inputStickerSetID", cur_token_len)) {
    out_int (0x9de7a269);
    local_next_token ();
    if (store_constructor_input_sticker_set_i_d (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "inputStickerSetShortName", cur_token_len)) {
    out_int (0x861cc8a0);
    local_next_token ();
    if (store_constructor_input_sticker_set_short_name (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_sticker_set (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 20 && !memcmp (cur_token, "inputStickerSetEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_sticker_set_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "inputStickerSetID", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_sticker_set_i_d (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "inputStickerSetShortName", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_sticker_set_short_name (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_user (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "inputUserEmpty", cur_token_len)) {
    out_int (0xb98886cf);
    local_next_token ();
    if (store_constructor_input_user_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "inputUserSelf", cur_token_len)) {
    out_int (0xf7c1b13f);
    local_next_token ();
    if (store_constructor_input_user_self (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "inputUserContact", cur_token_len)) {
    out_int (0x86e94f65);
    local_next_token ();
    if (store_constructor_input_user_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "inputUserForeign", cur_token_len)) {
    out_int (0x655e74ff);
    local_next_token ();
    if (store_constructor_input_user_foreign (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_user (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "inputUserEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_user_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "inputUserSelf", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_user_self (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "inputUserContact", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_user_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "inputUserForeign", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_user_foreign (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_input_video (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputVideoEmpty", cur_token_len)) {
    out_int (0x5508ec75);
    local_next_token ();
    if (store_constructor_input_video_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 10 && !memcmp (cur_token, "inputVideo", cur_token_len)) {
    out_int (0xee579652);
    local_next_token ();
    if (store_constructor_input_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_input_video (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "inputVideoEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_video_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 10 && !memcmp (cur_token, "inputVideo", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_int (struct paramed_type *T) {
    out_int (0xa8509bda);
  if (store_constructor_int (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_int (struct paramed_type *T) {
  if (store_constructor_int (T) < 0) { return -1; }
  return 0;
}
int store_type_int128 (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 6 && !memcmp (cur_token, "int128", cur_token_len)) {
    out_int (0x7d36c439);
    local_next_token ();
    if (store_constructor_int128 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_int128 (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 6 && !memcmp (cur_token, "int128", cur_token_len)) {
    local_next_token ();
    if (store_constructor_int128 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_int256 (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 6 && !memcmp (cur_token, "int256", cur_token_len)) {
    out_int (0xf2c798b3);
    local_next_token ();
    if (store_constructor_int256 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_int256 (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 6 && !memcmp (cur_token, "int256", cur_token_len)) {
    local_next_token ();
    if (store_constructor_int256 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_keyboard_button (struct paramed_type *T) {
    out_int (0xa2fa4880);
  if (store_constructor_keyboard_button (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_keyboard_button (struct paramed_type *T) {
  if (store_constructor_keyboard_button (T) < 0) { return -1; }
  return 0;
}
int store_type_keyboard_button_row (struct paramed_type *T) {
    out_int (0x77608b83);
  if (store_constructor_keyboard_button_row (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_keyboard_button_row (struct paramed_type *T) {
  if (store_constructor_keyboard_button_row (T) < 0) { return -1; }
  return 0;
}
int store_type_long (struct paramed_type *T) {
    out_int (0x22076cba);
  if (store_constructor_long (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_long (struct paramed_type *T) {
  if (store_constructor_long (T) < 0) { return -1; }
  return 0;
}
int store_type_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 12 && !memcmp (cur_token, "messageEmpty", cur_token_len)) {
    out_int (0x83e5de54);
    local_next_token ();
    if (store_constructor_message_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 7 && !memcmp (cur_token, "message", cur_token_len)) {
    out_int (0xc3060325);
    local_next_token ();
    if (store_constructor_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "messageService", cur_token_len)) {
    out_int (0x1d86f70e);
    local_next_token ();
    if (store_constructor_message_service (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 12 && !memcmp (cur_token, "messageEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 7 && !memcmp (cur_token, "message", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "messageService", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_service (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_message_action (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "messageActionEmpty", cur_token_len)) {
    out_int (0xb6aef7b0);
    local_next_token ();
    if (store_constructor_message_action_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "messageActionChatCreate", cur_token_len)) {
    out_int (0xa6638b9a);
    local_next_token ();
    if (store_constructor_message_action_chat_create (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "messageActionChatEditTitle", cur_token_len)) {
    out_int (0xb5a1ce5a);
    local_next_token ();
    if (store_constructor_message_action_chat_edit_title (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "messageActionChatEditPhoto", cur_token_len)) {
    out_int (0x7fcb13a8);
    local_next_token ();
    if (store_constructor_message_action_chat_edit_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "messageActionChatDeletePhoto", cur_token_len)) {
    out_int (0x95e3fbef);
    local_next_token ();
    if (store_constructor_message_action_chat_delete_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "messageActionChatAddUser", cur_token_len)) {
    out_int (0x5e3cfc4b);
    local_next_token ();
    if (store_constructor_message_action_chat_add_user (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "messageActionChatDeleteUser", cur_token_len)) {
    out_int (0xb2ae9b0c);
    local_next_token ();
    if (store_constructor_message_action_chat_delete_user (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "messageActionGeoChatCreate", cur_token_len)) {
    out_int (0x6f038ebc);
    local_next_token ();
    if (store_constructor_message_action_geo_chat_create (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "messageActionGeoChatCheckin", cur_token_len)) {
    out_int (0x0c7d53de);
    local_next_token ();
    if (store_constructor_message_action_geo_chat_checkin (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "messageActionChatJoinedByLink", cur_token_len)) {
    out_int (0xf89cf5e8);
    local_next_token ();
    if (store_constructor_message_action_chat_joined_by_link (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_message_action (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "messageActionEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_action_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "messageActionChatCreate", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_action_chat_create (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "messageActionChatEditTitle", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_action_chat_edit_title (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "messageActionChatEditPhoto", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_action_chat_edit_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "messageActionChatDeletePhoto", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_action_chat_delete_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "messageActionChatAddUser", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_action_chat_add_user (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "messageActionChatDeleteUser", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_action_chat_delete_user (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "messageActionGeoChatCreate", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_action_geo_chat_create (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "messageActionGeoChatCheckin", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_action_geo_chat_checkin (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "messageActionChatJoinedByLink", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_action_chat_joined_by_link (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_message_media (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "messageMediaEmpty", cur_token_len)) {
    out_int (0x3ded6320);
    local_next_token ();
    if (store_constructor_message_media_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "messageMediaPhoto", cur_token_len)) {
    out_int (0x3d8ce53d);
    local_next_token ();
    if (store_constructor_message_media_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "messageMediaVideo", cur_token_len)) {
    out_int (0x5bcf1675);
    local_next_token ();
    if (store_constructor_message_media_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "messageMediaGeo", cur_token_len)) {
    out_int (0x56e0d474);
    local_next_token ();
    if (store_constructor_message_media_geo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "messageMediaContact", cur_token_len)) {
    out_int (0x5e7d2f39);
    local_next_token ();
    if (store_constructor_message_media_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "messageMediaUnsupported", cur_token_len)) {
    out_int (0x9f84f49e);
    local_next_token ();
    if (store_constructor_message_media_unsupported (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "messageMediaDocument", cur_token_len)) {
    out_int (0x2fda2204);
    local_next_token ();
    if (store_constructor_message_media_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "messageMediaAudio", cur_token_len)) {
    out_int (0xc6b68300);
    local_next_token ();
    if (store_constructor_message_media_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "messageMediaWebPage", cur_token_len)) {
    out_int (0xa32dd600);
    local_next_token ();
    if (store_constructor_message_media_web_page (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "messageMediaVenue", cur_token_len)) {
    out_int (0x7912b71f);
    local_next_token ();
    if (store_constructor_message_media_venue (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "messageMediaPhotoL27", cur_token_len)) {
    out_int (0xc8c45a2a);
    local_next_token ();
    if (store_constructor_message_media_photo_l27 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "messageMediaVideoL27", cur_token_len)) {
    out_int (0xa2d24290);
    local_next_token ();
    if (store_constructor_message_media_video_l27 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_message_media (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "messageMediaEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_media_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "messageMediaPhoto", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_media_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "messageMediaVideo", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_media_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "messageMediaGeo", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_media_geo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "messageMediaContact", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_media_contact (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "messageMediaUnsupported", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_media_unsupported (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "messageMediaDocument", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_media_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "messageMediaAudio", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_media_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "messageMediaWebPage", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_media_web_page (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "messageMediaVenue", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_media_venue (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "messageMediaPhotoL27", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_media_photo_l27 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "messageMediaVideoL27", cur_token_len)) {
    local_next_token ();
    if (store_constructor_message_media_video_l27 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_messages_filter (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 24 && !memcmp (cur_token, "inputMessagesFilterEmpty", cur_token_len)) {
    out_int (0x57e2f66c);
    local_next_token ();
    if (store_constructor_input_messages_filter_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "inputMessagesFilterPhotos", cur_token_len)) {
    out_int (0x9609a51c);
    local_next_token ();
    if (store_constructor_input_messages_filter_photos (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "inputMessagesFilterVideo", cur_token_len)) {
    out_int (0x9fc00e65);
    local_next_token ();
    if (store_constructor_input_messages_filter_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "inputMessagesFilterPhotoVideo", cur_token_len)) {
    out_int (0x56e9f0e4);
    local_next_token ();
    if (store_constructor_input_messages_filter_photo_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 38 && !memcmp (cur_token, "inputMessagesFilterPhotoVideoDocuments", cur_token_len)) {
    out_int (0xd95e73bb);
    local_next_token ();
    if (store_constructor_input_messages_filter_photo_video_documents (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "inputMessagesFilterDocument", cur_token_len)) {
    out_int (0x9eddf188);
    local_next_token ();
    if (store_constructor_input_messages_filter_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "inputMessagesFilterAudio", cur_token_len)) {
    out_int (0xcfc87522);
    local_next_token ();
    if (store_constructor_input_messages_filter_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_messages_filter (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 24 && !memcmp (cur_token, "inputMessagesFilterEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_messages_filter_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "inputMessagesFilterPhotos", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_messages_filter_photos (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "inputMessagesFilterVideo", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_messages_filter_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "inputMessagesFilterPhotoVideo", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_messages_filter_photo_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 38 && !memcmp (cur_token, "inputMessagesFilterPhotoVideoDocuments", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_messages_filter_photo_video_documents (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "inputMessagesFilterDocument", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_messages_filter_document (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "inputMessagesFilterAudio", cur_token_len)) {
    local_next_token ();
    if (store_constructor_input_messages_filter_audio (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_nearest_dc (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 9 && !memcmp (cur_token, "nearestDc", cur_token_len)) {
    out_int (0x8e1a1775);
    local_next_token ();
    if (store_constructor_nearest_dc (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_nearest_dc (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 9 && !memcmp (cur_token, "nearestDc", cur_token_len)) {
    local_next_token ();
    if (store_constructor_nearest_dc (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_notify_peer (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 10 && !memcmp (cur_token, "notifyPeer", cur_token_len)) {
    out_int (0x9fd40bd8);
    local_next_token ();
    if (store_constructor_notify_peer (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 11 && !memcmp (cur_token, "notifyUsers", cur_token_len)) {
    out_int (0xb4c83b4c);
    local_next_token ();
    if (store_constructor_notify_users (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 11 && !memcmp (cur_token, "notifyChats", cur_token_len)) {
    out_int (0xc007cec3);
    local_next_token ();
    if (store_constructor_notify_chats (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 9 && !memcmp (cur_token, "notifyAll", cur_token_len)) {
    out_int (0x74d07c60);
    local_next_token ();
    if (store_constructor_notify_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_notify_peer (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 10 && !memcmp (cur_token, "notifyPeer", cur_token_len)) {
    local_next_token ();
    if (store_constructor_notify_peer (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 11 && !memcmp (cur_token, "notifyUsers", cur_token_len)) {
    local_next_token ();
    if (store_constructor_notify_users (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 11 && !memcmp (cur_token, "notifyChats", cur_token_len)) {
    local_next_token ();
    if (store_constructor_notify_chats (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 9 && !memcmp (cur_token, "notifyAll", cur_token_len)) {
    local_next_token ();
    if (store_constructor_notify_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_null (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 4 && !memcmp (cur_token, "null", cur_token_len)) {
    out_int (0x56730bcc);
    local_next_token ();
    if (store_constructor_null (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_null (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 4 && !memcmp (cur_token, "null", cur_token_len)) {
    local_next_token ();
    if (store_constructor_null (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_p_q_inner_data (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "p_q_inner_data", cur_token_len)) {
    out_int (0x83c95aec);
    local_next_token ();
    if (store_constructor_p_q_inner_data (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "p_q_inner_data_temp", cur_token_len)) {
    out_int (0x3c6a84d4);
    local_next_token ();
    if (store_constructor_p_q_inner_data_temp (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_p_q_inner_data (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "p_q_inner_data", cur_token_len)) {
    local_next_token ();
    if (store_constructor_p_q_inner_data (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "p_q_inner_data_temp", cur_token_len)) {
    local_next_token ();
    if (store_constructor_p_q_inner_data_temp (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_peer (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 8 && !memcmp (cur_token, "peerUser", cur_token_len)) {
    out_int (0x9db1bc6d);
    local_next_token ();
    if (store_constructor_peer_user (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 8 && !memcmp (cur_token, "peerChat", cur_token_len)) {
    out_int (0xbad0e5bb);
    local_next_token ();
    if (store_constructor_peer_chat (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_peer (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 8 && !memcmp (cur_token, "peerUser", cur_token_len)) {
    local_next_token ();
    if (store_constructor_peer_user (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 8 && !memcmp (cur_token, "peerChat", cur_token_len)) {
    local_next_token ();
    if (store_constructor_peer_chat (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_peer_notify_events (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 21 && !memcmp (cur_token, "peerNotifyEventsEmpty", cur_token_len)) {
    out_int (0xadd53cb3);
    local_next_token ();
    if (store_constructor_peer_notify_events_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "peerNotifyEventsAll", cur_token_len)) {
    out_int (0x6d1ded88);
    local_next_token ();
    if (store_constructor_peer_notify_events_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_peer_notify_events (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 21 && !memcmp (cur_token, "peerNotifyEventsEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_peer_notify_events_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "peerNotifyEventsAll", cur_token_len)) {
    local_next_token ();
    if (store_constructor_peer_notify_events_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_peer_notify_settings (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 23 && !memcmp (cur_token, "peerNotifySettingsEmpty", cur_token_len)) {
    out_int (0x70a68512);
    local_next_token ();
    if (store_constructor_peer_notify_settings_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "peerNotifySettings", cur_token_len)) {
    out_int (0x8d5e11ee);
    local_next_token ();
    if (store_constructor_peer_notify_settings (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_peer_notify_settings (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 23 && !memcmp (cur_token, "peerNotifySettingsEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_peer_notify_settings_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "peerNotifySettings", cur_token_len)) {
    local_next_token ();
    if (store_constructor_peer_notify_settings (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_photo (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 10 && !memcmp (cur_token, "photoEmpty", cur_token_len)) {
    out_int (0x2331b22d);
    local_next_token ();
    if (store_constructor_photo_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 5 && !memcmp (cur_token, "photo", cur_token_len)) {
    out_int (0xc3838076);
    local_next_token ();
    if (store_constructor_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 8 && !memcmp (cur_token, "photoL27", cur_token_len)) {
    out_int (0x22b56751);
    local_next_token ();
    if (store_constructor_photo_l27 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_photo (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 10 && !memcmp (cur_token, "photoEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_photo_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 5 && !memcmp (cur_token, "photo", cur_token_len)) {
    local_next_token ();
    if (store_constructor_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 8 && !memcmp (cur_token, "photoL27", cur_token_len)) {
    local_next_token ();
    if (store_constructor_photo_l27 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_photo_size (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "photoSizeEmpty", cur_token_len)) {
    out_int (0x0e17e23c);
    local_next_token ();
    if (store_constructor_photo_size_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 9 && !memcmp (cur_token, "photoSize", cur_token_len)) {
    out_int (0x77bfb61b);
    local_next_token ();
    if (store_constructor_photo_size (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "photoCachedSize", cur_token_len)) {
    out_int (0xe9a734fa);
    local_next_token ();
    if (store_constructor_photo_cached_size (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_photo_size (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "photoSizeEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_photo_size_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 9 && !memcmp (cur_token, "photoSize", cur_token_len)) {
    local_next_token ();
    if (store_constructor_photo_size (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "photoCachedSize", cur_token_len)) {
    local_next_token ();
    if (store_constructor_photo_cached_size (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_privacy_key (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 25 && !memcmp (cur_token, "privacyKeyStatusTimestamp", cur_token_len)) {
    out_int (0xbc2eab30);
    local_next_token ();
    if (store_constructor_privacy_key_status_timestamp (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_privacy_key (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 25 && !memcmp (cur_token, "privacyKeyStatusTimestamp", cur_token_len)) {
    local_next_token ();
    if (store_constructor_privacy_key_status_timestamp (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_privacy_rule (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 25 && !memcmp (cur_token, "privacyValueAllowContacts", cur_token_len)) {
    out_int (0xfffe1bac);
    local_next_token ();
    if (store_constructor_privacy_value_allow_contacts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "privacyValueAllowAll", cur_token_len)) {
    out_int (0x65427b82);
    local_next_token ();
    if (store_constructor_privacy_value_allow_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "privacyValueAllowUsers", cur_token_len)) {
    out_int (0x4d5bbe0c);
    local_next_token ();
    if (store_constructor_privacy_value_allow_users (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "privacyValueDisallowContacts", cur_token_len)) {
    out_int (0xf888fa1a);
    local_next_token ();
    if (store_constructor_privacy_value_disallow_contacts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "privacyValueDisallowAll", cur_token_len)) {
    out_int (0x8b73e763);
    local_next_token ();
    if (store_constructor_privacy_value_disallow_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "privacyValueDisallowUsers", cur_token_len)) {
    out_int (0x0c7f49b7);
    local_next_token ();
    if (store_constructor_privacy_value_disallow_users (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_privacy_rule (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 25 && !memcmp (cur_token, "privacyValueAllowContacts", cur_token_len)) {
    local_next_token ();
    if (store_constructor_privacy_value_allow_contacts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "privacyValueAllowAll", cur_token_len)) {
    local_next_token ();
    if (store_constructor_privacy_value_allow_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "privacyValueAllowUsers", cur_token_len)) {
    local_next_token ();
    if (store_constructor_privacy_value_allow_users (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "privacyValueDisallowContacts", cur_token_len)) {
    local_next_token ();
    if (store_constructor_privacy_value_disallow_contacts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "privacyValueDisallowAll", cur_token_len)) {
    local_next_token ();
    if (store_constructor_privacy_value_disallow_all (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "privacyValueDisallowUsers", cur_token_len)) {
    local_next_token ();
    if (store_constructor_privacy_value_disallow_users (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_received_notify_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 21 && !memcmp (cur_token, "receivedNotifyMessage", cur_token_len)) {
    out_int (0xa384b779);
    local_next_token ();
    if (store_constructor_received_notify_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_received_notify_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 21 && !memcmp (cur_token, "receivedNotifyMessage", cur_token_len)) {
    local_next_token ();
    if (store_constructor_received_notify_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_reply_markup (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "replyKeyboardHide", cur_token_len)) {
    out_int (0xa03e5b85);
    local_next_token ();
    if (store_constructor_reply_keyboard_hide (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "replyKeyboardForceReply", cur_token_len)) {
    out_int (0xf4108aa0);
    local_next_token ();
    if (store_constructor_reply_keyboard_force_reply (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "replyKeyboardMarkup", cur_token_len)) {
    out_int (0x3502758c);
    local_next_token ();
    if (store_constructor_reply_keyboard_markup (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_reply_markup (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "replyKeyboardHide", cur_token_len)) {
    local_next_token ();
    if (store_constructor_reply_keyboard_hide (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "replyKeyboardForceReply", cur_token_len)) {
    local_next_token ();
    if (store_constructor_reply_keyboard_force_reply (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "replyKeyboardMarkup", cur_token_len)) {
    local_next_token ();
    if (store_constructor_reply_keyboard_markup (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_res_p_q (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 5 && !memcmp (cur_token, "resPQ", cur_token_len)) {
    out_int (0x05162463);
    local_next_token ();
    if (store_constructor_res_p_q (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_res_p_q (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 5 && !memcmp (cur_token, "resPQ", cur_token_len)) {
    local_next_token ();
    if (store_constructor_res_p_q (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_send_message_action (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 23 && !memcmp (cur_token, "sendMessageTypingAction", cur_token_len)) {
    out_int (0x16bf744e);
    local_next_token ();
    if (store_constructor_send_message_typing_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "sendMessageCancelAction", cur_token_len)) {
    out_int (0xfd5ec8f5);
    local_next_token ();
    if (store_constructor_send_message_cancel_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "sendMessageRecordVideoAction", cur_token_len)) {
    out_int (0xa187d66f);
    local_next_token ();
    if (store_constructor_send_message_record_video_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 31 && !memcmp (cur_token, "sendMessageUploadVideoActionL27", cur_token_len)) {
    out_int (0x92042ff7);
    local_next_token ();
    if (store_constructor_send_message_upload_video_action_l27 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "sendMessageUploadVideoAction", cur_token_len)) {
    out_int (0xe9763aec);
    local_next_token ();
    if (store_constructor_send_message_upload_video_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "sendMessageRecordAudioAction", cur_token_len)) {
    out_int (0xd52f73f7);
    local_next_token ();
    if (store_constructor_send_message_record_audio_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 31 && !memcmp (cur_token, "sendMessageUploadAudioActionL27", cur_token_len)) {
    out_int (0xe6ac8a6f);
    local_next_token ();
    if (store_constructor_send_message_upload_audio_action_l27 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "sendMessageUploadAudioAction", cur_token_len)) {
    out_int (0xf351d7ab);
    local_next_token ();
    if (store_constructor_send_message_upload_audio_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "sendMessageUploadPhotoAction", cur_token_len)) {
    out_int (0xd1d34a26);
    local_next_token ();
    if (store_constructor_send_message_upload_photo_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 34 && !memcmp (cur_token, "sendMessageUploadDocumentActionL27", cur_token_len)) {
    out_int (0x8faee98e);
    local_next_token ();
    if (store_constructor_send_message_upload_document_action_l27 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 31 && !memcmp (cur_token, "sendMessageUploadDocumentAction", cur_token_len)) {
    out_int (0xaa0cd9e4);
    local_next_token ();
    if (store_constructor_send_message_upload_document_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "sendMessageGeoLocationAction", cur_token_len)) {
    out_int (0x176f8ba1);
    local_next_token ();
    if (store_constructor_send_message_geo_location_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 30 && !memcmp (cur_token, "sendMessageChooseContactAction", cur_token_len)) {
    out_int (0x628cbc6f);
    local_next_token ();
    if (store_constructor_send_message_choose_contact_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_send_message_action (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 23 && !memcmp (cur_token, "sendMessageTypingAction", cur_token_len)) {
    local_next_token ();
    if (store_constructor_send_message_typing_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "sendMessageCancelAction", cur_token_len)) {
    local_next_token ();
    if (store_constructor_send_message_cancel_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "sendMessageRecordVideoAction", cur_token_len)) {
    local_next_token ();
    if (store_constructor_send_message_record_video_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 31 && !memcmp (cur_token, "sendMessageUploadVideoActionL27", cur_token_len)) {
    local_next_token ();
    if (store_constructor_send_message_upload_video_action_l27 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "sendMessageUploadVideoAction", cur_token_len)) {
    local_next_token ();
    if (store_constructor_send_message_upload_video_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "sendMessageRecordAudioAction", cur_token_len)) {
    local_next_token ();
    if (store_constructor_send_message_record_audio_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 31 && !memcmp (cur_token, "sendMessageUploadAudioActionL27", cur_token_len)) {
    local_next_token ();
    if (store_constructor_send_message_upload_audio_action_l27 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "sendMessageUploadAudioAction", cur_token_len)) {
    local_next_token ();
    if (store_constructor_send_message_upload_audio_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "sendMessageUploadPhotoAction", cur_token_len)) {
    local_next_token ();
    if (store_constructor_send_message_upload_photo_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 34 && !memcmp (cur_token, "sendMessageUploadDocumentActionL27", cur_token_len)) {
    local_next_token ();
    if (store_constructor_send_message_upload_document_action_l27 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 31 && !memcmp (cur_token, "sendMessageUploadDocumentAction", cur_token_len)) {
    local_next_token ();
    if (store_constructor_send_message_upload_document_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "sendMessageGeoLocationAction", cur_token_len)) {
    local_next_token ();
    if (store_constructor_send_message_geo_location_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 30 && !memcmp (cur_token, "sendMessageChooseContactAction", cur_token_len)) {
    local_next_token ();
    if (store_constructor_send_message_choose_contact_action (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_server_d_h_params (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 21 && !memcmp (cur_token, "server_DH_params_fail", cur_token_len)) {
    out_int (0x79cb045d);
    local_next_token ();
    if (store_constructor_server_d_h_params_fail (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "server_DH_params_ok", cur_token_len)) {
    out_int (0xd0e8075c);
    local_next_token ();
    if (store_constructor_server_d_h_params_ok (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_server_d_h_params (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 21 && !memcmp (cur_token, "server_DH_params_fail", cur_token_len)) {
    local_next_token ();
    if (store_constructor_server_d_h_params_fail (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "server_DH_params_ok", cur_token_len)) {
    local_next_token ();
    if (store_constructor_server_d_h_params_ok (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_server_d_h_inner_data (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 20 && !memcmp (cur_token, "server_DH_inner_data", cur_token_len)) {
    out_int (0xb5890dba);
    local_next_token ();
    if (store_constructor_server_d_h_inner_data (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_server_d_h_inner_data (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 20 && !memcmp (cur_token, "server_DH_inner_data", cur_token_len)) {
    local_next_token ();
    if (store_constructor_server_d_h_inner_data (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_set_client_d_h_params_answer (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 9 && !memcmp (cur_token, "dh_gen_ok", cur_token_len)) {
    out_int (0x3bcbf734);
    local_next_token ();
    if (store_constructor_dh_gen_ok (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 12 && !memcmp (cur_token, "dh_gen_retry", cur_token_len)) {
    out_int (0x46dc1fb9);
    local_next_token ();
    if (store_constructor_dh_gen_retry (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 11 && !memcmp (cur_token, "dh_gen_fail", cur_token_len)) {
    out_int (0xa69dae02);
    local_next_token ();
    if (store_constructor_dh_gen_fail (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_set_client_d_h_params_answer (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 9 && !memcmp (cur_token, "dh_gen_ok", cur_token_len)) {
    local_next_token ();
    if (store_constructor_dh_gen_ok (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 12 && !memcmp (cur_token, "dh_gen_retry", cur_token_len)) {
    local_next_token ();
    if (store_constructor_dh_gen_retry (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 11 && !memcmp (cur_token, "dh_gen_fail", cur_token_len)) {
    local_next_token ();
    if (store_constructor_dh_gen_fail (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_sticker_pack (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 11 && !memcmp (cur_token, "stickerPack", cur_token_len)) {
    out_int (0x12b299d4);
    local_next_token ();
    if (store_constructor_sticker_pack (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_sticker_pack (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 11 && !memcmp (cur_token, "stickerPack", cur_token_len)) {
    local_next_token ();
    if (store_constructor_sticker_pack (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_sticker_set (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 10 && !memcmp (cur_token, "stickerSet", cur_token_len)) {
    out_int (0xa7a43b17);
    local_next_token ();
    if (store_constructor_sticker_set (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_sticker_set (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 10 && !memcmp (cur_token, "stickerSet", cur_token_len)) {
    local_next_token ();
    if (store_constructor_sticker_set (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_string (struct paramed_type *T) {
    out_int (0xb5286e24);
  if (store_constructor_string (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_string (struct paramed_type *T) {
  if (store_constructor_string (T) < 0) { return -1; }
  return 0;
}
int store_type_update (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 16 && !memcmp (cur_token, "updateNewMessage", cur_token_len)) {
    out_int (0x1f2b0afd);
    local_next_token ();
    if (store_constructor_update_new_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "updateMessageID", cur_token_len)) {
    out_int (0x4e90bfd6);
    local_next_token ();
    if (store_constructor_update_message_i_d (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "updateDeleteMessages", cur_token_len)) {
    out_int (0xa20db0e5);
    local_next_token ();
    if (store_constructor_update_delete_messages (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "updateUserTyping", cur_token_len)) {
    out_int (0x5c486927);
    local_next_token ();
    if (store_constructor_update_user_typing (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "updateChatUserTyping", cur_token_len)) {
    out_int (0x9a65ea1f);
    local_next_token ();
    if (store_constructor_update_chat_user_typing (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "updateChatParticipants", cur_token_len)) {
    out_int (0x07761198);
    local_next_token ();
    if (store_constructor_update_chat_participants (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "updateUserStatus", cur_token_len)) {
    out_int (0x1bfbd823);
    local_next_token ();
    if (store_constructor_update_user_status (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "updateUserName", cur_token_len)) {
    out_int (0xa7332b73);
    local_next_token ();
    if (store_constructor_update_user_name (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "updateUserPhoto", cur_token_len)) {
    out_int (0x95313b0c);
    local_next_token ();
    if (store_constructor_update_user_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "updateContactRegistered", cur_token_len)) {
    out_int (0x2575bbb9);
    local_next_token ();
    if (store_constructor_update_contact_registered (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "updateContactLink", cur_token_len)) {
    out_int (0x9d2e67c5);
    local_next_token ();
    if (store_constructor_update_contact_link (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "updateNewAuthorization", cur_token_len)) {
    out_int (0x8f06529a);
    local_next_token ();
    if (store_constructor_update_new_authorization (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "updateNewGeoChatMessage", cur_token_len)) {
    out_int (0x5a68e3f7);
    local_next_token ();
    if (store_constructor_update_new_geo_chat_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "updateNewEncryptedMessage", cur_token_len)) {
    out_int (0x12bcbd9a);
    local_next_token ();
    if (store_constructor_update_new_encrypted_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "updateEncryptedChatTyping", cur_token_len)) {
    out_int (0x1710f156);
    local_next_token ();
    if (store_constructor_update_encrypted_chat_typing (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "updateEncryption", cur_token_len)) {
    out_int (0xb4a2e88d);
    local_next_token ();
    if (store_constructor_update_encryption (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "updateEncryptedMessagesRead", cur_token_len)) {
    out_int (0x38fe25b7);
    local_next_token ();
    if (store_constructor_update_encrypted_messages_read (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "updateChatParticipantAdd", cur_token_len)) {
    out_int (0x3a0eeb22);
    local_next_token ();
    if (store_constructor_update_chat_participant_add (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "updateChatParticipantDelete", cur_token_len)) {
    out_int (0x6e5f8c22);
    local_next_token ();
    if (store_constructor_update_chat_participant_delete (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "updateDcOptions", cur_token_len)) {
    out_int (0x8e5e9873);
    local_next_token ();
    if (store_constructor_update_dc_options (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "updateUserBlocked", cur_token_len)) {
    out_int (0x80ece81a);
    local_next_token ();
    if (store_constructor_update_user_blocked (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "updateNotifySettings", cur_token_len)) {
    out_int (0xbec268ef);
    local_next_token ();
    if (store_constructor_update_notify_settings (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "updateServiceNotification", cur_token_len)) {
    out_int (0x382dd3e4);
    local_next_token ();
    if (store_constructor_update_service_notification (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "updatePrivacy", cur_token_len)) {
    out_int (0xee3b272a);
    local_next_token ();
    if (store_constructor_update_privacy (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "updateUserPhone", cur_token_len)) {
    out_int (0x12b9417b);
    local_next_token ();
    if (store_constructor_update_user_phone (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "updateReadHistoryInbox", cur_token_len)) {
    out_int (0x9961fd5c);
    local_next_token ();
    if (store_constructor_update_read_history_inbox (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "updateReadHistoryOutbox", cur_token_len)) {
    out_int (0x2f2f21bf);
    local_next_token ();
    if (store_constructor_update_read_history_outbox (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "updateWebPage", cur_token_len)) {
    out_int (0x2cc36971);
    local_next_token ();
    if (store_constructor_update_web_page (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "updateReadMessagesContents", cur_token_len)) {
    out_int (0x68c13933);
    local_next_token ();
    if (store_constructor_update_read_messages_contents (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "updateMsgUpdate", cur_token_len)) {
    out_int (0x03114739);
    local_next_token ();
    if (store_constructor_update_msg_update (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_update (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 16 && !memcmp (cur_token, "updateNewMessage", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_new_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "updateMessageID", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_message_i_d (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "updateDeleteMessages", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_delete_messages (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "updateUserTyping", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_user_typing (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "updateChatUserTyping", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_chat_user_typing (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "updateChatParticipants", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_chat_participants (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "updateUserStatus", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_user_status (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "updateUserName", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_user_name (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "updateUserPhoto", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_user_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "updateContactRegistered", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_contact_registered (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "updateContactLink", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_contact_link (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "updateNewAuthorization", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_new_authorization (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "updateNewGeoChatMessage", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_new_geo_chat_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "updateNewEncryptedMessage", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_new_encrypted_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "updateEncryptedChatTyping", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_encrypted_chat_typing (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "updateEncryption", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_encryption (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "updateEncryptedMessagesRead", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_encrypted_messages_read (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "updateChatParticipantAdd", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_chat_participant_add (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "updateChatParticipantDelete", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_chat_participant_delete (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "updateDcOptions", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_dc_options (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "updateUserBlocked", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_user_blocked (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "updateNotifySettings", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_notify_settings (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "updateServiceNotification", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_service_notification (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "updatePrivacy", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_privacy (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "updateUserPhone", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_user_phone (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "updateReadHistoryInbox", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_read_history_inbox (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "updateReadHistoryOutbox", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_read_history_outbox (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "updateWebPage", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_web_page (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "updateReadMessagesContents", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_read_messages_contents (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "updateMsgUpdate", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_msg_update (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_updates (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "updatesTooLong", cur_token_len)) {
    out_int (0xe317af7e);
    local_next_token ();
    if (store_constructor_updates_too_long (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "updateShortMessage", cur_token_len)) {
    out_int (0xed5c2127);
    local_next_token ();
    if (store_constructor_update_short_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "updateShortChatMessage", cur_token_len)) {
    out_int (0x52238b3c);
    local_next_token ();
    if (store_constructor_update_short_chat_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 11 && !memcmp (cur_token, "updateShort", cur_token_len)) {
    out_int (0x78d4dec1);
    local_next_token ();
    if (store_constructor_update_short (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "updatesCombined", cur_token_len)) {
    out_int (0x725b04c3);
    local_next_token ();
    if (store_constructor_updates_combined (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 7 && !memcmp (cur_token, "updates", cur_token_len)) {
    out_int (0x74ae4240);
    local_next_token ();
    if (store_constructor_updates (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_updates (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "updatesTooLong", cur_token_len)) {
    local_next_token ();
    if (store_constructor_updates_too_long (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "updateShortMessage", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_short_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "updateShortChatMessage", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_short_chat_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 11 && !memcmp (cur_token, "updateShort", cur_token_len)) {
    local_next_token ();
    if (store_constructor_update_short (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "updatesCombined", cur_token_len)) {
    local_next_token ();
    if (store_constructor_updates_combined (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 7 && !memcmp (cur_token, "updates", cur_token_len)) {
    local_next_token ();
    if (store_constructor_updates (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_user (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 9 && !memcmp (cur_token, "userEmpty", cur_token_len)) {
    out_int (0x200250ba);
    local_next_token ();
    if (store_constructor_user_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 4 && !memcmp (cur_token, "user", cur_token_len)) {
    out_int (0x22e49072);
    local_next_token ();
    if (store_constructor_user (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_user (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 9 && !memcmp (cur_token, "userEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_user_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 4 && !memcmp (cur_token, "user", cur_token_len)) {
    local_next_token ();
    if (store_constructor_user (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_user_full (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 8 && !memcmp (cur_token, "userFull", cur_token_len)) {
    out_int (0x5a89ac5b);
    local_next_token ();
    if (store_constructor_user_full (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_user_full (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 8 && !memcmp (cur_token, "userFull", cur_token_len)) {
    local_next_token ();
    if (store_constructor_user_full (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_user_profile_photo (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 21 && !memcmp (cur_token, "userProfilePhotoEmpty", cur_token_len)) {
    out_int (0x4f11bae1);
    local_next_token ();
    if (store_constructor_user_profile_photo_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "userProfilePhoto", cur_token_len)) {
    out_int (0xd559d8c8);
    local_next_token ();
    if (store_constructor_user_profile_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_user_profile_photo (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 21 && !memcmp (cur_token, "userProfilePhotoEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_user_profile_photo_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "userProfilePhoto", cur_token_len)) {
    local_next_token ();
    if (store_constructor_user_profile_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_user_status (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "userStatusEmpty", cur_token_len)) {
    out_int (0x09d05049);
    local_next_token ();
    if (store_constructor_user_status_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "userStatusOnline", cur_token_len)) {
    out_int (0xedb93949);
    local_next_token ();
    if (store_constructor_user_status_online (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "userStatusOffline", cur_token_len)) {
    out_int (0x008c703f);
    local_next_token ();
    if (store_constructor_user_status_offline (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "userStatusRecently", cur_token_len)) {
    out_int (0xe26f42f1);
    local_next_token ();
    if (store_constructor_user_status_recently (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "userStatusLastWeek", cur_token_len)) {
    out_int (0x07bf09fc);
    local_next_token ();
    if (store_constructor_user_status_last_week (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "userStatusLastMonth", cur_token_len)) {
    out_int (0x77ebc742);
    local_next_token ();
    if (store_constructor_user_status_last_month (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_user_status (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 15 && !memcmp (cur_token, "userStatusEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_user_status_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "userStatusOnline", cur_token_len)) {
    local_next_token ();
    if (store_constructor_user_status_online (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "userStatusOffline", cur_token_len)) {
    local_next_token ();
    if (store_constructor_user_status_offline (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "userStatusRecently", cur_token_len)) {
    local_next_token ();
    if (store_constructor_user_status_recently (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "userStatusLastWeek", cur_token_len)) {
    local_next_token ();
    if (store_constructor_user_status_last_week (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "userStatusLastMonth", cur_token_len)) {
    local_next_token ();
    if (store_constructor_user_status_last_month (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_vector (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 6 && !memcmp (cur_token, "vector", cur_token_len)) {
    out_int (0x1cb5c415);
    local_next_token ();
    if (store_constructor_vector (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_vector (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 6 && !memcmp (cur_token, "vector", cur_token_len)) {
    local_next_token ();
    if (store_constructor_vector (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_video (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 10 && !memcmp (cur_token, "videoEmpty", cur_token_len)) {
    out_int (0xc10658a8);
    local_next_token ();
    if (store_constructor_video_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 5 && !memcmp (cur_token, "video", cur_token_len)) {
    out_int (0xee9f4a4d);
    local_next_token ();
    if (store_constructor_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 8 && !memcmp (cur_token, "videoL27", cur_token_len)) {
    out_int (0x388fa391);
    local_next_token ();
    if (store_constructor_video_l27 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_video (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 10 && !memcmp (cur_token, "videoEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_video_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 5 && !memcmp (cur_token, "video", cur_token_len)) {
    local_next_token ();
    if (store_constructor_video (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 8 && !memcmp (cur_token, "videoL27", cur_token_len)) {
    local_next_token ();
    if (store_constructor_video_l27 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_wall_paper (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 9 && !memcmp (cur_token, "wallPaper", cur_token_len)) {
    out_int (0xccb03657);
    local_next_token ();
    if (store_constructor_wall_paper (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "wallPaperSolid", cur_token_len)) {
    out_int (0x63117f24);
    local_next_token ();
    if (store_constructor_wall_paper_solid (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_wall_paper (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 9 && !memcmp (cur_token, "wallPaper", cur_token_len)) {
    local_next_token ();
    if (store_constructor_wall_paper (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "wallPaperSolid", cur_token_len)) {
    local_next_token ();
    if (store_constructor_wall_paper_solid (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_web_page (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 12 && !memcmp (cur_token, "webPageEmpty", cur_token_len)) {
    out_int (0xeb1477e8);
    local_next_token ();
    if (store_constructor_web_page_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "webPagePending", cur_token_len)) {
    out_int (0xc586da1c);
    local_next_token ();
    if (store_constructor_web_page_pending (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 7 && !memcmp (cur_token, "webPage", cur_token_len)) {
    out_int (0xa31ea0b5);
    local_next_token ();
    if (store_constructor_web_page (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_web_page (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 12 && !memcmp (cur_token, "webPageEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_web_page_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "webPagePending", cur_token_len)) {
    local_next_token ();
    if (store_constructor_web_page_pending (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 7 && !memcmp (cur_token, "webPage", cur_token_len)) {
    local_next_token ();
    if (store_constructor_web_page (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_account_authorizations (struct paramed_type *T) {
    out_int (0x1250abde);
  if (store_constructor_account_authorizations (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_account_authorizations (struct paramed_type *T) {
  if (store_constructor_account_authorizations (T) < 0) { return -1; }
  return 0;
}
int store_type_account_password (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "account.noPassword", cur_token_len)) {
    out_int (0x96dabc18);
    local_next_token ();
    if (store_constructor_account_no_password (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "account.password", cur_token_len)) {
    out_int (0x7c18141c);
    local_next_token ();
    if (store_constructor_account_password (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_account_password (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "account.noPassword", cur_token_len)) {
    local_next_token ();
    if (store_constructor_account_no_password (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "account.password", cur_token_len)) {
    local_next_token ();
    if (store_constructor_account_password (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_account_password_input_settings (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 29 && !memcmp (cur_token, "account.passwordInputSettings", cur_token_len)) {
    out_int (0xbcfc532c);
    local_next_token ();
    if (store_constructor_account_password_input_settings (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_account_password_input_settings (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 29 && !memcmp (cur_token, "account.passwordInputSettings", cur_token_len)) {
    local_next_token ();
    if (store_constructor_account_password_input_settings (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_account_password_settings (struct paramed_type *T) {
    out_int (0xb7b72ab3);
  if (store_constructor_account_password_settings (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_account_password_settings (struct paramed_type *T) {
  if (store_constructor_account_password_settings (T) < 0) { return -1; }
  return 0;
}
int store_type_account_privacy_rules (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 20 && !memcmp (cur_token, "account.privacyRules", cur_token_len)) {
    out_int (0x554abb6f);
    local_next_token ();
    if (store_constructor_account_privacy_rules (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_account_privacy_rules (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 20 && !memcmp (cur_token, "account.privacyRules", cur_token_len)) {
    local_next_token ();
    if (store_constructor_account_privacy_rules (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_account_sent_change_phone_code (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 27 && !memcmp (cur_token, "account.sentChangePhoneCode", cur_token_len)) {
    out_int (0xa4f58c4c);
    local_next_token ();
    if (store_constructor_account_sent_change_phone_code (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_account_sent_change_phone_code (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 27 && !memcmp (cur_token, "account.sentChangePhoneCode", cur_token_len)) {
    local_next_token ();
    if (store_constructor_account_sent_change_phone_code (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_auth_authorization (struct paramed_type *T) {
    out_int (0xff036af1);
  if (store_constructor_auth_authorization (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_auth_authorization (struct paramed_type *T) {
  if (store_constructor_auth_authorization (T) < 0) { return -1; }
  return 0;
}
int store_type_auth_checked_phone (struct paramed_type *T) {
    out_int (0x811ea28e);
  if (store_constructor_auth_checked_phone (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_auth_checked_phone (struct paramed_type *T) {
  if (store_constructor_auth_checked_phone (T) < 0) { return -1; }
  return 0;
}
int store_type_auth_exported_authorization (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 26 && !memcmp (cur_token, "auth.exportedAuthorization", cur_token_len)) {
    out_int (0xdf969c2d);
    local_next_token ();
    if (store_constructor_auth_exported_authorization (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_auth_exported_authorization (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 26 && !memcmp (cur_token, "auth.exportedAuthorization", cur_token_len)) {
    local_next_token ();
    if (store_constructor_auth_exported_authorization (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_auth_password_recovery (struct paramed_type *T) {
    out_int (0x137948a5);
  if (store_constructor_auth_password_recovery (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_auth_password_recovery (struct paramed_type *T) {
  if (store_constructor_auth_password_recovery (T) < 0) { return -1; }
  return 0;
}
int store_type_auth_sent_code (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "auth.sentCode", cur_token_len)) {
    out_int (0xefed51d9);
    local_next_token ();
    if (store_constructor_auth_sent_code (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "auth.sentAppCode", cur_token_len)) {
    out_int (0xe325edcf);
    local_next_token ();
    if (store_constructor_auth_sent_app_code (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_auth_sent_code (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "auth.sentCode", cur_token_len)) {
    local_next_token ();
    if (store_constructor_auth_sent_code (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "auth.sentAppCode", cur_token_len)) {
    local_next_token ();
    if (store_constructor_auth_sent_app_code (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_binlog_encr_key (struct paramed_type *T) {
    out_int (0x0377168f);
  if (store_constructor_binlog_encr_key (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_binlog_encr_key (struct paramed_type *T) {
  if (store_constructor_binlog_encr_key (T) < 0) { return -1; }
  return 0;
}
int store_type_binlog_update (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 12 && !memcmp (cur_token, "binlog.start", cur_token_len)) {
    out_int (0x3b06de69);
    local_next_token ();
    if (store_constructor_binlog_start (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "binlog.dcOption", cur_token_len)) {
    out_int (0xf96feb32);
    local_next_token ();
    if (store_constructor_binlog_dc_option (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "binlog.dcOptionNew", cur_token_len)) {
    out_int (0x7c0d22d8);
    local_next_token ();
    if (store_constructor_binlog_dc_option_new (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "binlog.authKey", cur_token_len)) {
    out_int (0x71e8c156);
    local_next_token ();
    if (store_constructor_binlog_auth_key (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "binlog.defaultDc", cur_token_len)) {
    out_int (0x9e83dbdc);
    local_next_token ();
    if (store_constructor_binlog_default_dc (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "binlog.dcSigned", cur_token_len)) {
    out_int (0x26451bb5);
    local_next_token ();
    if (store_constructor_binlog_dc_signed (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 12 && !memcmp (cur_token, "binlog.ourId", cur_token_len)) {
    out_int (0x68a870e8);
    local_next_token ();
    if (store_constructor_binlog_our_id (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "binlog.setDhParams", cur_token_len)) {
    out_int (0xeaeb7826);
    local_next_token ();
    if (store_constructor_binlog_set_dh_params (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "binlog.setPts", cur_token_len)) {
    out_int (0x2ca8c939);
    local_next_token ();
    if (store_constructor_binlog_set_pts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "binlog.setQts", cur_token_len)) {
    out_int (0xd95738ac);
    local_next_token ();
    if (store_constructor_binlog_set_qts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "binlog.setDate", cur_token_len)) {
    out_int (0x1d0f4b52);
    local_next_token ();
    if (store_constructor_binlog_set_date (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "binlog.setSeq", cur_token_len)) {
    out_int (0x6eeb2989);
    local_next_token ();
    if (store_constructor_binlog_set_seq (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "binlog.encrChatDelete", cur_token_len)) {
    out_int (0xee1b38e8);
    local_next_token ();
    if (store_constructor_binlog_encr_chat_delete (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "binlog.encrChatNew", cur_token_len)) {
    out_int (0x84977251);
    local_next_token ();
    if (store_constructor_binlog_encr_chat_new (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "binlog.encrChatExchangeNew", cur_token_len)) {
    out_int (0x9d49488d);
    local_next_token ();
    if (store_constructor_binlog_encr_chat_exchange_new (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "binlog.userDelete", cur_token_len)) {
    out_int (0xac55d447);
    local_next_token ();
    if (store_constructor_binlog_user_delete (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "binlog.userNew", cur_token_len)) {
    out_int (0x127cf2f9);
    local_next_token ();
    if (store_constructor_binlog_user_new (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "binlog.chatNew", cur_token_len)) {
    out_int (0x0a10aa92);
    local_next_token ();
    if (store_constructor_binlog_chat_new (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "binlog.chatAddParticipant", cur_token_len)) {
    out_int (0x535475ea);
    local_next_token ();
    if (store_constructor_binlog_chat_add_participant (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "binlog.chatDelParticipant", cur_token_len)) {
    out_int (0x7dd1a1a2);
    local_next_token ();
    if (store_constructor_binlog_chat_del_participant (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "binlog.setMsgId", cur_token_len)) {
    out_int (0x3c873416);
    local_next_token ();
    if (store_constructor_binlog_set_msg_id (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "binlog.messageDelete", cur_token_len)) {
    out_int (0x847e77b1);
    local_next_token ();
    if (store_constructor_binlog_message_delete (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "binlog.messageNew", cur_token_len)) {
    out_int (0x427cfcdb);
    local_next_token ();
    if (store_constructor_binlog_message_new (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "binlog.messageEncrNew", cur_token_len)) {
    out_int (0x6cf7cabc);
    local_next_token ();
    if (store_constructor_binlog_message_encr_new (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "binlog.msgUpdate", cur_token_len)) {
    out_int (0x6dd4d85f);
    local_next_token ();
    if (store_constructor_binlog_msg_update (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "binlog.resetAuthorization", cur_token_len)) {
    out_int (0x83327955);
    local_next_token ();
    if (store_constructor_binlog_reset_authorization (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_binlog_update (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 12 && !memcmp (cur_token, "binlog.start", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_start (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "binlog.dcOption", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_dc_option (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "binlog.dcOptionNew", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_dc_option_new (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "binlog.authKey", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_auth_key (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "binlog.defaultDc", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_default_dc (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "binlog.dcSigned", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_dc_signed (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 12 && !memcmp (cur_token, "binlog.ourId", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_our_id (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "binlog.setDhParams", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_set_dh_params (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "binlog.setPts", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_set_pts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "binlog.setQts", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_set_qts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "binlog.setDate", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_set_date (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "binlog.setSeq", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_set_seq (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "binlog.encrChatDelete", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_encr_chat_delete (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "binlog.encrChatNew", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_encr_chat_new (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "binlog.encrChatExchangeNew", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_encr_chat_exchange_new (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "binlog.userDelete", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_user_delete (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "binlog.userNew", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_user_new (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "binlog.chatNew", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_chat_new (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "binlog.chatAddParticipant", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_chat_add_participant (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "binlog.chatDelParticipant", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_chat_del_participant (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "binlog.setMsgId", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_set_msg_id (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "binlog.messageDelete", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_message_delete (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "binlog.messageNew", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_message_new (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "binlog.messageEncrNew", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_message_encr_new (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "binlog.msgUpdate", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_msg_update (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "binlog.resetAuthorization", cur_token_len)) {
    local_next_token ();
    if (store_constructor_binlog_reset_authorization (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_contacts_blocked (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 16 && !memcmp (cur_token, "contacts.blocked", cur_token_len)) {
    out_int (0x1c138d15);
    local_next_token ();
    if (store_constructor_contacts_blocked (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "contacts.blockedSlice", cur_token_len)) {
    out_int (0x900802a1);
    local_next_token ();
    if (store_constructor_contacts_blocked_slice (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_contacts_blocked (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 16 && !memcmp (cur_token, "contacts.blocked", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contacts_blocked (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "contacts.blockedSlice", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contacts_blocked_slice (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_contacts_contacts (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 28 && !memcmp (cur_token, "contacts.contactsNotModified", cur_token_len)) {
    out_int (0xb74ba9d2);
    local_next_token ();
    if (store_constructor_contacts_contacts_not_modified (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "contacts.contacts", cur_token_len)) {
    out_int (0x6f8b8cb2);
    local_next_token ();
    if (store_constructor_contacts_contacts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_contacts_contacts (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 28 && !memcmp (cur_token, "contacts.contactsNotModified", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contacts_contacts_not_modified (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "contacts.contacts", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contacts_contacts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_contacts_found (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "contacts.found", cur_token_len)) {
    out_int (0x0566000e);
    local_next_token ();
    if (store_constructor_contacts_found (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_contacts_found (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "contacts.found", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contacts_found (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_contacts_imported_contacts (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 25 && !memcmp (cur_token, "contacts.importedContacts", cur_token_len)) {
    out_int (0xad524315);
    local_next_token ();
    if (store_constructor_contacts_imported_contacts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_contacts_imported_contacts (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 25 && !memcmp (cur_token, "contacts.importedContacts", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contacts_imported_contacts (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_contacts_link (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "contacts.link", cur_token_len)) {
    out_int (0x3ace484c);
    local_next_token ();
    if (store_constructor_contacts_link (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_contacts_link (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "contacts.link", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contacts_link (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_contacts_suggested (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "contacts.suggested", cur_token_len)) {
    out_int (0x5649dcc5);
    local_next_token ();
    if (store_constructor_contacts_suggested (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_contacts_suggested (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 18 && !memcmp (cur_token, "contacts.suggested", cur_token_len)) {
    local_next_token ();
    if (store_constructor_contacts_suggested (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_geochats_located (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 16 && !memcmp (cur_token, "geochats.located", cur_token_len)) {
    out_int (0x48feb267);
    local_next_token ();
    if (store_constructor_geochats_located (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_geochats_located (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 16 && !memcmp (cur_token, "geochats.located", cur_token_len)) {
    local_next_token ();
    if (store_constructor_geochats_located (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_geochats_messages (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "geochats.messages", cur_token_len)) {
    out_int (0xd1526db1);
    local_next_token ();
    if (store_constructor_geochats_messages (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "geochats.messagesSlice", cur_token_len)) {
    out_int (0xbc5863e8);
    local_next_token ();
    if (store_constructor_geochats_messages_slice (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_geochats_messages (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "geochats.messages", cur_token_len)) {
    local_next_token ();
    if (store_constructor_geochats_messages (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "geochats.messagesSlice", cur_token_len)) {
    local_next_token ();
    if (store_constructor_geochats_messages_slice (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_geochats_stated_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 22 && !memcmp (cur_token, "geochats.statedMessage", cur_token_len)) {
    out_int (0x17b1578b);
    local_next_token ();
    if (store_constructor_geochats_stated_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_geochats_stated_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 22 && !memcmp (cur_token, "geochats.statedMessage", cur_token_len)) {
    local_next_token ();
    if (store_constructor_geochats_stated_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_help_app_update (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "help.appUpdate", cur_token_len)) {
    out_int (0x8987f311);
    local_next_token ();
    if (store_constructor_help_app_update (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "help.noAppUpdate", cur_token_len)) {
    out_int (0xc45a6536);
    local_next_token ();
    if (store_constructor_help_no_app_update (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_help_app_update (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 14 && !memcmp (cur_token, "help.appUpdate", cur_token_len)) {
    local_next_token ();
    if (store_constructor_help_app_update (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "help.noAppUpdate", cur_token_len)) {
    local_next_token ();
    if (store_constructor_help_no_app_update (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_help_invite_text (struct paramed_type *T) {
    out_int (0x18cb9f78);
  if (store_constructor_help_invite_text (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_help_invite_text (struct paramed_type *T) {
  if (store_constructor_help_invite_text (T) < 0) { return -1; }
  return 0;
}
int store_type_help_support (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 12 && !memcmp (cur_token, "help.support", cur_token_len)) {
    out_int (0x17c6b5f6);
    local_next_token ();
    if (store_constructor_help_support (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_help_support (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 12 && !memcmp (cur_token, "help.support", cur_token_len)) {
    local_next_token ();
    if (store_constructor_help_support (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_messages_affected_history (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 24 && !memcmp (cur_token, "messages.affectedHistory", cur_token_len)) {
    out_int (0xb45c69d1);
    local_next_token ();
    if (store_constructor_messages_affected_history (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_messages_affected_history (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 24 && !memcmp (cur_token, "messages.affectedHistory", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_affected_history (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_messages_affected_messages (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 25 && !memcmp (cur_token, "messages.affectedMessages", cur_token_len)) {
    out_int (0x84d19185);
    local_next_token ();
    if (store_constructor_messages_affected_messages (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_messages_affected_messages (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 25 && !memcmp (cur_token, "messages.affectedMessages", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_affected_messages (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_messages_all_stickers (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 31 && !memcmp (cur_token, "messages.allStickersNotModified", cur_token_len)) {
    out_int (0xe86602c3);
    local_next_token ();
    if (store_constructor_messages_all_stickers_not_modified (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "messages.allStickers", cur_token_len)) {
    out_int (0x5ce352ec);
    local_next_token ();
    if (store_constructor_messages_all_stickers (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_messages_all_stickers (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 31 && !memcmp (cur_token, "messages.allStickersNotModified", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_all_stickers_not_modified (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "messages.allStickers", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_all_stickers (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_messages_chat_full (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "messages.chatFull", cur_token_len)) {
    out_int (0xe5d7d19c);
    local_next_token ();
    if (store_constructor_messages_chat_full (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_messages_chat_full (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "messages.chatFull", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_chat_full (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_messages_chats (struct paramed_type *T) {
    out_int (0x64ff9fd5);
  if (store_constructor_messages_chats (T) < 0) { return -1; }
  return 0;
}
int store_type_bare_messages_chats (struct paramed_type *T) {
  if (store_constructor_messages_chats (T) < 0) { return -1; }
  return 0;
}
int store_type_messages_dh_config (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 28 && !memcmp (cur_token, "messages.dhConfigNotModified", cur_token_len)) {
    out_int (0xc0e24635);
    local_next_token ();
    if (store_constructor_messages_dh_config_not_modified (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "messages.dhConfig", cur_token_len)) {
    out_int (0x2c221edd);
    local_next_token ();
    if (store_constructor_messages_dh_config (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_messages_dh_config (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 28 && !memcmp (cur_token, "messages.dhConfigNotModified", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_dh_config_not_modified (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "messages.dhConfig", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_dh_config (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_messages_dialogs (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 16 && !memcmp (cur_token, "messages.dialogs", cur_token_len)) {
    out_int (0x15ba6c40);
    local_next_token ();
    if (store_constructor_messages_dialogs (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "messages.dialogsSlice", cur_token_len)) {
    out_int (0x71e094f3);
    local_next_token ();
    if (store_constructor_messages_dialogs_slice (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_messages_dialogs (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 16 && !memcmp (cur_token, "messages.dialogs", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_dialogs (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "messages.dialogsSlice", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_dialogs_slice (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_messages_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 21 && !memcmp (cur_token, "messages.messageEmpty", cur_token_len)) {
    out_int (0x3f4e0648);
    local_next_token ();
    if (store_constructor_messages_message_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_messages_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 21 && !memcmp (cur_token, "messages.messageEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_message_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_messages_messages (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "messages.messages", cur_token_len)) {
    out_int (0x8c718e87);
    local_next_token ();
    if (store_constructor_messages_messages (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "messages.messagesSlice", cur_token_len)) {
    out_int (0x0b446ae3);
    local_next_token ();
    if (store_constructor_messages_messages_slice (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_messages_messages (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 17 && !memcmp (cur_token, "messages.messages", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_messages (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "messages.messagesSlice", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_messages_slice (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_messages_sent_encrypted_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 29 && !memcmp (cur_token, "messages.sentEncryptedMessage", cur_token_len)) {
    out_int (0x560f8935);
    local_next_token ();
    if (store_constructor_messages_sent_encrypted_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "messages.sentEncryptedFile", cur_token_len)) {
    out_int (0x9493ff32);
    local_next_token ();
    if (store_constructor_messages_sent_encrypted_file (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_messages_sent_encrypted_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 29 && !memcmp (cur_token, "messages.sentEncryptedMessage", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_sent_encrypted_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "messages.sentEncryptedFile", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_sent_encrypted_file (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_messages_sent_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 20 && !memcmp (cur_token, "messages.sentMessage", cur_token_len)) {
    out_int (0x4c3d47f3);
    local_next_token ();
    if (store_constructor_messages_sent_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "messages.sentMessageLink", cur_token_len)) {
    out_int (0x35a1a663);
    local_next_token ();
    if (store_constructor_messages_sent_message_link (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_messages_sent_message (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 20 && !memcmp (cur_token, "messages.sentMessage", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_sent_message (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "messages.sentMessageLink", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_sent_message_link (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_messages_sticker_set (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 19 && !memcmp (cur_token, "messages.stickerSet", cur_token_len)) {
    out_int (0xb60a24a6);
    local_next_token ();
    if (store_constructor_messages_sticker_set (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_messages_sticker_set (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 19 && !memcmp (cur_token, "messages.stickerSet", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_sticker_set (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_messages_stickers (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 28 && !memcmp (cur_token, "messages.stickersNotModified", cur_token_len)) {
    out_int (0xf1749a22);
    local_next_token ();
    if (store_constructor_messages_stickers_not_modified (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "messages.stickers", cur_token_len)) {
    out_int (0x8a8ecd32);
    local_next_token ();
    if (store_constructor_messages_stickers (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_messages_stickers (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 28 && !memcmp (cur_token, "messages.stickersNotModified", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_stickers_not_modified (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "messages.stickers", cur_token_len)) {
    local_next_token ();
    if (store_constructor_messages_stickers (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_photos_photo (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 12 && !memcmp (cur_token, "photos.photo", cur_token_len)) {
    out_int (0x20212ca8);
    local_next_token ();
    if (store_constructor_photos_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_photos_photo (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 12 && !memcmp (cur_token, "photos.photo", cur_token_len)) {
    local_next_token ();
    if (store_constructor_photos_photo (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_photos_photos (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "photos.photos", cur_token_len)) {
    out_int (0x8dca6aa5);
    local_next_token ();
    if (store_constructor_photos_photos (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "photos.photosSlice", cur_token_len)) {
    out_int (0x15051f54);
    local_next_token ();
    if (store_constructor_photos_photos_slice (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_photos_photos (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "photos.photos", cur_token_len)) {
    local_next_token ();
    if (store_constructor_photos_photos (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "photos.photosSlice", cur_token_len)) {
    local_next_token ();
    if (store_constructor_photos_photos_slice (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_storage_file_type (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 19 && !memcmp (cur_token, "storage.fileUnknown", cur_token_len)) {
    out_int (0xaa963b05);
    local_next_token ();
    if (store_constructor_storage_file_unknown (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "storage.fileJpeg", cur_token_len)) {
    out_int (0x007efe0e);
    local_next_token ();
    if (store_constructor_storage_file_jpeg (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "storage.fileGif", cur_token_len)) {
    out_int (0xcae1aadf);
    local_next_token ();
    if (store_constructor_storage_file_gif (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "storage.filePng", cur_token_len)) {
    out_int (0x0a4f63c0);
    local_next_token ();
    if (store_constructor_storage_file_png (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "storage.filePdf", cur_token_len)) {
    out_int (0xae1e508d);
    local_next_token ();
    if (store_constructor_storage_file_pdf (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "storage.fileMp3", cur_token_len)) {
    out_int (0x528a0677);
    local_next_token ();
    if (store_constructor_storage_file_mp3 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "storage.fileMov", cur_token_len)) {
    out_int (0x4b09ebbc);
    local_next_token ();
    if (store_constructor_storage_file_mov (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "storage.filePartial", cur_token_len)) {
    out_int (0x40bc6f52);
    local_next_token ();
    if (store_constructor_storage_file_partial (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "storage.fileMp4", cur_token_len)) {
    out_int (0xb3cea0e4);
    local_next_token ();
    if (store_constructor_storage_file_mp4 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "storage.fileWebp", cur_token_len)) {
    out_int (0x1081464c);
    local_next_token ();
    if (store_constructor_storage_file_webp (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_storage_file_type (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 19 && !memcmp (cur_token, "storage.fileUnknown", cur_token_len)) {
    local_next_token ();
    if (store_constructor_storage_file_unknown (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "storage.fileJpeg", cur_token_len)) {
    local_next_token ();
    if (store_constructor_storage_file_jpeg (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "storage.fileGif", cur_token_len)) {
    local_next_token ();
    if (store_constructor_storage_file_gif (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "storage.filePng", cur_token_len)) {
    local_next_token ();
    if (store_constructor_storage_file_png (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "storage.filePdf", cur_token_len)) {
    local_next_token ();
    if (store_constructor_storage_file_pdf (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "storage.fileMp3", cur_token_len)) {
    local_next_token ();
    if (store_constructor_storage_file_mp3 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "storage.fileMov", cur_token_len)) {
    local_next_token ();
    if (store_constructor_storage_file_mov (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "storage.filePartial", cur_token_len)) {
    local_next_token ();
    if (store_constructor_storage_file_partial (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "storage.fileMp4", cur_token_len)) {
    local_next_token ();
    if (store_constructor_storage_file_mp4 (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "storage.fileWebp", cur_token_len)) {
    local_next_token ();
    if (store_constructor_storage_file_webp (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_updates_difference (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 23 && !memcmp (cur_token, "updates.differenceEmpty", cur_token_len)) {
    out_int (0x5d75a138);
    local_next_token ();
    if (store_constructor_updates_difference_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "updates.difference", cur_token_len)) {
    out_int (0x00f49ca0);
    local_next_token ();
    if (store_constructor_updates_difference (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "updates.differenceSlice", cur_token_len)) {
    out_int (0xa8fb1981);
    local_next_token ();
    if (store_constructor_updates_difference_slice (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_updates_difference (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 23 && !memcmp (cur_token, "updates.differenceEmpty", cur_token_len)) {
    local_next_token ();
    if (store_constructor_updates_difference_empty (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "updates.difference", cur_token_len)) {
    local_next_token ();
    if (store_constructor_updates_difference (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "updates.differenceSlice", cur_token_len)) {
    local_next_token ();
    if (store_constructor_updates_difference_slice (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_updates_state (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "updates.state", cur_token_len)) {
    out_int (0xa56c2a3e);
    local_next_token ();
    if (store_constructor_updates_state (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_updates_state (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 13 && !memcmp (cur_token, "updates.state", cur_token_len)) {
    local_next_token ();
    if (store_constructor_updates_state (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_upload_file (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 11 && !memcmp (cur_token, "upload.file", cur_token_len)) {
    out_int (0x096a18d5);
    local_next_token ();
    if (store_constructor_upload_file (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
int store_type_bare_upload_file (struct paramed_type *T) {
  expect_token ("(", 1);
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len < 0) { return -1; }
  if (cur_token_len == 11 && !memcmp (cur_token, "upload.file", cur_token_len)) {
    local_next_token ();
    if (store_constructor_upload_file (T) < 0) { return -1; }
    expect_token (")", 1);
    return 0;
  }
  return -1;
}
struct paramed_type *store_function_account_change_phone (void) {
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "phone_number", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "phone_code_hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "phone_code", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_check_username (void) {
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "username", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_delete_account (void) {
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "reason", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_get_account_t_t_l (void) {
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xb8d0afdf, .id = "AccountDaysTTL", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_get_authorizations (void) {
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1250abde, .id = "account.Authorizations", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_get_notify_settings (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x02b6911b, .id = "InputNotifyPeer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_notify_peer (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xfdf894fc, .id = "PeerNotifySettings", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_get_password (void) {
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xeac2a804, .id = "account.Password", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_get_password_settings (void) {
  if (cur_token_len >= 0 && cur_token_len == 21 && !cur_token_quoted && !memcmp (cur_token, "current_password_hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xb7b72ab3, .id = "account.PasswordSettings", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_get_privacy (void) {
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "key", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4f96cb18, .id = "InputPrivacyKey", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_privacy_key (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x554abb6f, .id = "account.PrivacyRules", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_get_wall_papers (void) {
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xafa14973, .id = "WallPaper", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_register_device (void) {
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "token_type", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "token", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "device_model", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 14 && !cur_token_quoted && !memcmp (cur_token, "system_version", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "app_version", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "app_sandbox", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field6) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "lang_code", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field7) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_reset_authorization (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_reset_notify_settings (void) {
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_send_change_phone_code (void) {
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "phone_number", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xa4f58c4c, .id = "account.SentChangePhoneCode", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_set_account_t_t_l (void) {
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "ttl", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xb8d0afdf, .id = "AccountDaysTTL", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_account_days_t_t_l (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_set_privacy (void) {
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "key", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4f96cb18, .id = "InputPrivacyKey", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_privacy_key (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "rules", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x4b815163, .id = "InputPrivacyRule", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x554abb6f, .id = "account.PrivacyRules", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_unregister_device (void) {
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "token_type", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "token", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_update_device_locked (void) {
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "period", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_update_notify_settings (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x02b6911b, .id = "InputNotifyPeer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_notify_peer (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "settings", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x46a2ce98, .id = "InputPeerNotifySettings", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_peer_notify_settings (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_update_password_settings (void) {
  if (cur_token_len >= 0 && cur_token_len == 21 && !cur_token_quoted && !memcmp (cur_token, "current_password_hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "new_settings", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xbcfc532c, .id = "account.PasswordInputSettings", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_account_password_input_settings (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_update_profile (void) {
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "first_name", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "last_name", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_update_status (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "offline", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_account_update_username (void) {
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "username", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_bind_temp_auth_key (void) {
  if (cur_token_len >= 0 && cur_token_len == 16 && !cur_token_quoted && !memcmp (cur_token, "perm_auth_key_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "nonce", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "expires_at", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 17 && !cur_token_quoted && !memcmp (cur_token, "encrypted_message", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field4) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_check_password (void) {
  if (cur_token_len >= 0 && cur_token_len == 13 && !cur_token_quoted && !memcmp (cur_token, "password_hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xff036af1, .id = "auth.Authorization", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_check_phone (void) {
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "phone_number", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x811ea28e, .id = "auth.CheckedPhone", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_export_authorization (void) {
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "dc_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xdf969c2d, .id = "auth.ExportedAuthorization", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_import_authorization (void) {
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "bytes", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xff036af1, .id = "auth.Authorization", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_import_bot_authorization (void) {
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "api_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "api_hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 14 && !cur_token_quoted && !memcmp (cur_token, "bot_auth_token", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xff036af1, .id = "auth.Authorization", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_log_out (void) {
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_recover_password (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "code", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xff036af1, .id = "auth.Authorization", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_request_password_recovery (void) {
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x137948a5, .id = "auth.PasswordRecovery", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_reset_authorizations (void) {
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_send_call (void) {
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "phone_number", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "phone_code_hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_send_code (void) {
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "phone_number", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "sms_type", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "api_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "api_hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "lang_code", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x0cc8bc16, .id = "auth.SentCode", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_send_invites (void) {
  if (cur_token_len >= 0 && cur_token_len == 13 && !cur_token_quoted && !memcmp (cur_token, "phone_numbers", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "message", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_send_sms (void) {
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "phone_number", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "phone_code_hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_sign_in (void) {
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "phone_number", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "phone_code_hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "phone_code", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xff036af1, .id = "auth.Authorization", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_auth_sign_up (void) {
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "phone_number", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "phone_code_hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "phone_code", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "first_name", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "last_name", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xff036af1, .id = "auth.Authorization", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_contacts_block (void) {
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xadfe0c6a, .id = "InputUser", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_user (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_contacts_delete_contact (void) {
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xadfe0c6a, .id = "InputUser", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_user (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x3ace484c, .id = "contacts.Link", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_contacts_delete_contacts (void) {
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xadfe0c6a, .id = "InputUser", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_contacts_export_card (void) {
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_contacts_get_blocked (void) {
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "offset", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "limit", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x8c1b8fb4, .id = "contacts.Blocked", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_contacts_get_contacts (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xd8c02560, .id = "contacts.Contacts", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_contacts_get_statuses (void) {
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xd3680c61, .id = "ContactStatus", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_contacts_get_suggested (void) {
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "limit", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x5649dcc5, .id = "contacts.Suggested", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_contacts_import_card (void) {
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "export_card", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_contacts_import_contacts (void) {
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "contacts", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xf392b7f4, .id = "InputContact", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "replace", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xad524315, .id = "contacts.ImportedContacts", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_contacts_resolve_username (void) {
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "username", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_contacts_search (void) {
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "q", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "limit", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x0566000e, .id = "contacts.Found", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_contacts_unblock (void) {
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xadfe0c6a, .id = "InputUser", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_user (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_geochats_checkin (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x74d456fa, .id = "InputGeoChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_geo_chat (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x17b1578b, .id = "geochats.StatedMessage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_geochats_create_geo_chat (void) {
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "geo_point", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x17768f1f, .id = "InputGeoPoint", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_geo_point (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "address", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "venue", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x17b1578b, .id = "geochats.StatedMessage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_geochats_edit_chat_photo (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x74d456fa, .id = "InputGeoChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_geo_chat (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "photo", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x3a60776d, .id = "InputChatPhoto", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_chat_photo (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x17b1578b, .id = "geochats.StatedMessage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_geochats_edit_chat_title (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x74d456fa, .id = "InputGeoChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_geo_chat (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "address", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x17b1578b, .id = "geochats.StatedMessage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_geochats_get_full_chat (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x74d456fa, .id = "InputGeoChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_geo_chat (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xe5d7d19c, .id = "messages.ChatFull", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_geochats_get_history (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x74d456fa, .id = "InputGeoChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_geo_chat (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "offset", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "max_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "limit", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x6d0a0e59, .id = "geochats.Messages", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_geochats_get_located (void) {
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "geo_point", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x17768f1f, .id = "InputGeoPoint", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_geo_point (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "radius", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "limit", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x48feb267, .id = "geochats.Located", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_geochats_get_recents (void) {
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "offset", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "limit", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x6d0a0e59, .id = "geochats.Messages", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_geochats_search (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x74d456fa, .id = "InputGeoChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_geo_chat (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "q", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "filter", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x80895ae0, .id = "MessagesFilter", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_messages_filter (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "min_date", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "max_date", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "offset", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field6) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "max_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field7) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "limit", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field8) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x6d0a0e59, .id = "geochats.Messages", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_geochats_send_media (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x74d456fa, .id = "InputGeoChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_geo_chat (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "media", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xb32c91dd, .id = "InputMedia", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_media (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x17b1578b, .id = "geochats.StatedMessage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_geochats_send_message (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x74d456fa, .id = "InputGeoChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_geo_chat (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "message", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x17b1578b, .id = "geochats.StatedMessage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_geochats_set_typing (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x74d456fa, .id = "InputGeoChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_geo_chat (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "typing", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_help_get_app_update (void) {
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "device_model", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 14 && !cur_token_quoted && !memcmp (cur_token, "system_version", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "app_version", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "lang_code", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ddd9627, .id = "help.AppUpdate", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_help_get_config (void) {
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4e32b894, .id = "Config", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_help_get_invite_text (void) {
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "lang_code", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x18cb9f78, .id = "help.InviteText", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_help_get_nearest_dc (void) {
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x8e1a1775, .id = "NearestDc", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_help_get_support (void) {
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x17c6b5f6, .id = "help.Support", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_help_save_app_log (void) {
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "events", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x770656a8, .id = "InputAppEvent", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_init_connection (void) {
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "api_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "device_model", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 14 && !cur_token_quoted && !memcmp (cur_token, "system_version", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "app_version", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field5) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "lang_code", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field6) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "query", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field7 = store_function_any ();
  if (!field7) { return 0; }
  if (ODDP(field7)) { return 0; }
  struct paramed_type *var0 = field7; assert (var0);
  struct paramed_type *R = 
  var0;
  return paramed_type_dup (R);
}
struct paramed_type *store_function_invoke_after_msg (void) {
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "msg_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "query", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = store_function_any ();
  if (!field3) { return 0; }
  if (ODDP(field3)) { return 0; }
  struct paramed_type *var0 = field3; assert (var0);
  struct paramed_type *R = 
  var0;
  return paramed_type_dup (R);
}
struct paramed_type *store_function_invoke_after_msgs (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "msg_ids", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "query", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = store_function_any ();
  if (!field3) { return 0; }
  if (ODDP(field3)) { return 0; }
  struct paramed_type *var0 = field3; assert (var0);
  struct paramed_type *R = 
  var0;
  return paramed_type_dup (R);
}
struct paramed_type *store_function_invoke_with_layer (void) {
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "layer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "query", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = store_function_any ();
  if (!field3) { return 0; }
  if (ODDP(field3)) { return 0; }
  struct paramed_type *var0 = field3; assert (var0);
  struct paramed_type *R = 
  var0;
  return paramed_type_dup (R);
}
struct paramed_type *store_function_invoke_without_updates (void) {
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "query", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = store_function_any ();
  if (!field2) { return 0; }
  if (ODDP(field2)) { return 0; }
  struct paramed_type *var0 = field2; assert (var0);
  struct paramed_type *R = 
  var0;
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_accept_encryption (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf141b5e1, .id = "InputEncryptedChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_encrypted_chat (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "g_b", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "key_fingerprint", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xb1718213, .id = "EncryptedChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_add_chat_user (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xadfe0c6a, .id = "InputUser", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_user (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "fwd_limit", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x22499d27, .id = "Updates", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_check_chat_invite (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x94f910b1, .id = "ChatInvite", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_create_chat (void) {
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "users", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xadfe0c6a, .id = "InputUser", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x22499d27, .id = "Updates", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_delete_chat_user (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xadfe0c6a, .id = "InputUser", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_user (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x22499d27, .id = "Updates", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_delete_history (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x9e67268d, .id = "InputPeer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_peer (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "offset", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xb45c69d1, .id = "messages.AffectedHistory", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_delete_messages (void) {
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x84d19185, .id = "messages.AffectedMessages", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_discard_encryption (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_edit_chat_photo (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "photo", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x3a60776d, .id = "InputChatPhoto", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_chat_photo (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x22499d27, .id = "Updates", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_edit_chat_title (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "title", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x22499d27, .id = "Updates", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_export_chat_invite (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x95f132d5, .id = "ExportedChatInvite", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_forward_message (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x9e67268d, .id = "InputPeer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_peer (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x22499d27, .id = "Updates", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_forward_messages (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x9e67268d, .id = "InputPeer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_peer (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x22499d27, .id = "Updates", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_get_all_stickers (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xb485502f, .id = "messages.AllStickers", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_get_chats (void) {
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x64ff9fd5, .id = "messages.Chats", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_get_dh_config (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "version", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 13 && !cur_token_quoted && !memcmp (cur_token, "random_length", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xecc058e8, .id = "messages.DhConfig", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_get_dialogs (void) {
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "offset", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "max_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "limit", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x645af8b3, .id = "messages.Dialogs", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_get_full_chat (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xe5d7d19c, .id = "messages.ChatFull", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_get_history (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x9e67268d, .id = "InputPeer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_peer (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "offset", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "max_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "limit", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x8735e464, .id = "messages.Messages", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_get_messages (void) {
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x8735e464, .id = "messages.Messages", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_get_sticker_set (void) {
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "stickerset", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xe44d415c, .id = "InputStickerSet", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_sticker_set (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xb60a24a6, .id = "messages.StickerSet", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_get_stickers (void) {
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "emoticon", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x7bfa5710, .id = "messages.Stickers", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_get_web_page_preview (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "message", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x95f2471a, .id = "MessageMedia", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_import_chat_invite (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "hash", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x22499d27, .id = "Updates", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_install_sticker_set (void) {
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "stickerset", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xe44d415c, .id = "InputStickerSet", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_sticker_set (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_read_encrypted_history (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf141b5e1, .id = "InputEncryptedChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_encrypted_chat (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "max_date", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_read_history (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x9e67268d, .id = "InputPeer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_peer (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "max_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "offset", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xb45c69d1, .id = "messages.AffectedHistory", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_read_message_contents (void) {
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x84d19185, .id = "messages.AffectedMessages", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_received_messages (void) {
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "max_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xa384b779, .id = "ReceivedNotifyMessage", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_received_queue (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "max_qts", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_request_encryption (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xadfe0c6a, .id = "InputUser", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_user (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "g_a", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xb1718213, .id = "EncryptedChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_search (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x9e67268d, .id = "InputPeer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_peer (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "q", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "filter", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x80895ae0, .id = "MessagesFilter", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_messages_filter (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "min_date", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "max_date", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field5) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "offset", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field6) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "max_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field7 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field7) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "limit", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field8 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field8) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x8735e464, .id = "messages.Messages", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_send_broadcast (void) {
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "contacts", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xadfe0c6a, .id = "InputUser", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "message", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "media", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xb32c91dd, .id = "InputMedia", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_media (field4) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x22499d27, .id = "Updates", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_send_encrypted (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf141b5e1, .id = "InputEncryptedChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_encrypted_chat (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "data", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xc29c7607, .id = "messages.SentEncryptedMessage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_send_encrypted_file (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf141b5e1, .id = "InputEncryptedChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_encrypted_chat (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "data", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "file", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x0b5c064f, .id = "InputEncryptedFile", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_encrypted_file (field4) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xc29c7607, .id = "messages.SentEncryptedMessage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_send_encrypted_service (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf141b5e1, .id = "InputEncryptedChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_encrypted_chat (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "data", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xc29c7607, .id = "messages.SentEncryptedMessage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_send_media (void) {
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  if (cur_token_len < 0) { return 0; }
  if (!is_int ()) { return 0;}
  struct paramed_type *var0 = INT2PTR (get_int ());
  out_int (get_int ());
  assert (var0);
  local_next_token ();
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x9e67268d, .id = "InputPeer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_peer (field2) < 0) { return 0;}
  if (PTR2INT (var0) & (1 << 0)) {
    if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "reply_to_msg_id", cur_token_len)) {
      local_next_token ();
      expect_token_ptr (":", 1);
    }
    struct paramed_type *field3 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field3) < 0) { return 0;}
  }
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "media", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xb32c91dd, .id = "InputMedia", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_media (field4) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field5) < 0) { return 0;}
  if (PTR2INT (var0) & (1 << 2)) {
    if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "reply_markup", cur_token_len)) {
      local_next_token ();
      expect_token_ptr (":", 1);
    }
    struct paramed_type *field6 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x612ca4a9, .id = "ReplyMarkup", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_reply_markup (field6) < 0) { return 0;}
  }
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x22499d27, .id = "Updates", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_send_message (void) {
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "flags", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  if (cur_token_len < 0) { return 0; }
  if (!is_int ()) { return 0;}
  struct paramed_type *var0 = INT2PTR (get_int ());
  out_int (get_int ());
  assert (var0);
  local_next_token ();
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x9e67268d, .id = "InputPeer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_peer (field2) < 0) { return 0;}
  if (PTR2INT (var0) & (1 << 0)) {
    if (cur_token_len >= 0 && cur_token_len == 15 && !cur_token_quoted && !memcmp (cur_token, "reply_to_msg_id", cur_token_len)) {
      local_next_token ();
      expect_token_ptr (":", 1);
    }
    struct paramed_type *field3 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_bare_int (field3) < 0) { return 0;}
  }
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "message", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field5) < 0) { return 0;}
  if (PTR2INT (var0) & (1 << 2)) {
    if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "reply_markup", cur_token_len)) {
      local_next_token ();
      expect_token_ptr (":", 1);
    }
    struct paramed_type *field6 = 
    &(struct paramed_type){
      .type = &(struct tl_type_descr) {.name = 0x612ca4a9, .id = "ReplyMarkup", .params_num = 0, .params_types = 0},
      .params = 0,
    };
    if (store_type_reply_markup (field6) < 0) { return 0;}
  }
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x799ce190, .id = "messages.SentMessage", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_set_encrypted_typing (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf141b5e1, .id = "InputEncryptedChat", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_encrypted_chat (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "typing", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bool (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_set_typing (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "peer", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x9e67268d, .id = "InputPeer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_peer (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "action", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x70541c7e, .id = "SendMessageAction", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_send_message_action (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_start_bot (void) {
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "bot", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xadfe0c6a, .id = "InputUser", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_user (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "chat_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "random_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 11 && !cur_token_quoted && !memcmp (cur_token, "start_param", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x22499d27, .id = "Updates", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_messages_uninstall_sticker_set (void) {
  if (cur_token_len >= 0 && cur_token_len == 10 && !cur_token_quoted && !memcmp (cur_token, "stickerset", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xe44d415c, .id = "InputStickerSet", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_sticker_set (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_photos_delete_photos (void) {
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xe74279c9, .id = "InputPhoto", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_photos_get_user_photos (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "user_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xadfe0c6a, .id = "InputUser", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_user (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "offset", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "max_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "limit", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field4) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x98cf75f1, .id = "photos.Photos", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_photos_update_profile_photo (void) {
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xe74279c9, .id = "InputPhoto", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_photo (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "crop", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x7477e321, .id = "InputPhotoCrop", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_photo_crop (field2) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x9a486229, .id = "UserProfilePhoto", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_photos_upload_profile_photo (void) {
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "file", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x0f60f9ca, .id = "InputFile", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_file (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "caption", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "geo_point", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x17768f1f, .id = "InputGeoPoint", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_geo_point (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "crop", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x7477e321, .id = "InputPhotoCrop", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_photo_crop (field4) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x20212ca8, .id = "photos.Photo", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_req_d_h_params (void) {
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "nonce", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "server_nonce", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "p", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 1 && !cur_token_quoted && !memcmp (cur_token, "q", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field4) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 22 && !cur_token_quoted && !memcmp (cur_token, "public_key_fingerprint", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field5 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field5) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 14 && !cur_token_quoted && !memcmp (cur_token, "encrypted_data", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field6 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field6) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xa9230301, .id = "Server_DH_Params", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_req_pq (void) {
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "nonce", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x05162463, .id = "ResPQ", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_set_client_d_h_params (void) {
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "nonce", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 12 && !cur_token_quoted && !memcmp (cur_token, "server_nonce", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x82c93bc6, .id = "Bare_Int128", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int128 (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 14 && !cur_token_quoted && !memcmp (cur_token, "encrypted_data", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x4ad791db, .id = "Bare_String", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_string (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xdb8a468f, .id = "Set_client_DH_params_answer", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_updates_get_difference (void) {
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "pts", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 4 && !cur_token_quoted && !memcmp (cur_token, "date", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 3 && !cur_token_quoted && !memcmp (cur_token, "qts", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf57a2419, .id = "updates.Difference", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_updates_get_state (void) {
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xa56c2a3e, .id = "updates.State", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_upload_get_file (void) {
  if (cur_token_len >= 0 && cur_token_len == 8 && !cur_token_quoted && !memcmp (cur_token, "location", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xe6daa38b, .id = "InputFileLocation", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_file_location (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 6 && !cur_token_quoted && !memcmp (cur_token, "offset", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "limit", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x096a18d5, .id = "upload.File", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_upload_save_big_file_part (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "file_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "file_part", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 16 && !cur_token_quoted && !memcmp (cur_token, "file_total_parts", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field3) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "bytes", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field4 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field4) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_upload_save_file_part (void) {
  if (cur_token_len >= 0 && cur_token_len == 7 && !cur_token_quoted && !memcmp (cur_token, "file_id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xddf89345, .id = "Bare_Long", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_long (field1) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 9 && !cur_token_quoted && !memcmp (cur_token, "file_part", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field2 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x57af6425, .id = "Bare_Int", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_int (field2) < 0) { return 0;}
  if (cur_token_len >= 0 && cur_token_len == 5 && !cur_token_quoted && !memcmp (cur_token, "bytes", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field3 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xf11ec860, .id = "Bare_Bytes", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_bare_bytes (field3) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x250be282, .id = "Bool", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_users_get_full_user (void) {
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0xadfe0c6a, .id = "InputUser", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  if (store_type_input_user (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x5a89ac5b, .id = "UserFull", .params_num = 0, .params_types = 0},
    .params = 0,
  };
  return paramed_type_dup (R);
}
struct paramed_type *store_function_users_get_users (void) {
  if (cur_token_len >= 0 && cur_token_len == 2 && !cur_token_quoted && !memcmp (cur_token, "id", cur_token_len)) {
    local_next_token ();
    expect_token_ptr (":", 1);
  }
  struct paramed_type *field1 = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0xadfe0c6a, .id = "InputUser", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  if (store_type_vector (field1) < 0) { return 0;}
  struct paramed_type *R = 
  &(struct paramed_type){
    .type = &(struct tl_type_descr) {.name = 0x1cb5c415, .id = "Vector", .params_num = 1, .params_types = 0},
    .params = (struct paramed_type *[]){
      &(struct paramed_type){
        .type = &(struct tl_type_descr) {.name = 0x02e6c0c8, .id = "User", .params_num = 0, .params_types = 0},
        .params = 0,
      },
    }
  };
  return paramed_type_dup (R);
}
int store_type_any (struct paramed_type *T) {
  switch (T->type->name) {
  case 0xb8d0afdf: return store_type_account_days_t_t_l (T);
  case 0x472f5020: return store_type_bare_account_days_t_t_l (T);
  case 0x9fc5ec4e: return store_type_audio (T);
  case 0x603a13b1: return store_type_bare_audio (T);
  case 0x7bf2e6f6: return store_type_authorization (T);
  case 0x840d1909: return store_type_bare_authorization (T);
  case 0x250be282: return store_type_bool (T);
  case 0xdaf41d7d: return store_type_bare_bool (T);
  case 0x75e7ea6c: return store_type_bot_command (T);
  case 0x8a181593: return store_type_bare_bot_command (T);
  case 0xb2e16f93: return store_type_bot_info (T);
  case 0x4d1e906c: return store_type_bare_bot_info (T);
  case 0x0ee1379f: return store_type_bytes (T);
  case 0xf11ec860: return store_type_bare_bytes (T);
  case 0x7bd865dc: return store_type_chat (T);
  case 0x84279a23: return store_type_bare_chat (T);
  case 0x2e02a614: return store_type_chat_full (T);
  case 0xd1fd59eb: return store_type_bare_chat_full (T);
  case 0x94f910b1: return store_type_chat_invite (T);
  case 0x6b06ef4e: return store_type_bare_chat_invite (T);
  case 0x3631cf4c: return store_type_chat_located (T);
  case 0xc9ce30b3: return store_type_bare_chat_located (T);
  case 0xc8d7493e: return store_type_chat_participant (T);
  case 0x3728b6c1: return store_type_bare_chat_participant (T);
  case 0x77930f9f: return store_type_chat_participants (T);
  case 0x886cf060: return store_type_bare_chat_participants (T);
  case 0x56922676: return store_type_chat_photo (T);
  case 0xa96dd989: return store_type_bare_chat_photo (T);
  case 0x6643b654: return store_type_client_d_h_inner_data (T);
  case 0x99bc49ab: return store_type_bare_client_d_h_inner_data (T);
  case 0x4e32b894: return store_type_config (T);
  case 0xb1cd476b: return store_type_bare_config (T);
  case 0xf911c994: return store_type_contact (T);
  case 0x06ee366b: return store_type_bare_contact (T);
  case 0x561bc879: return store_type_contact_blocked (T);
  case 0xa9e43786: return store_type_bare_contact_blocked (T);
  case 0xea879f95: return store_type_contact_found (T);
  case 0x1578606a: return store_type_bare_contact_found (T);
  case 0x522fbc63: return store_type_contact_link (T);
  case 0xadd0439c: return store_type_bare_contact_link (T);
  case 0xd3680c61: return store_type_contact_status (T);
  case 0x2c97f39e: return store_type_bare_contact_status (T);
  case 0x3de191a1: return store_type_contact_suggested (T);
  case 0xc21e6e5e: return store_type_bare_contact_suggested (T);
  case 0x2b1a62f0: return store_type_dc_option (T);
  case 0xd4e59d0f: return store_type_bare_dc_option (T);
  case 0x535b7918: return store_type_decrypted_message (T);
  case 0xaca486e7: return store_type_bare_decrypted_message (T);
  case 0x4e0eefde: return store_type_decrypted_message_action (T);
  case 0xb1f11021: return store_type_bare_decrypted_message_action (T);
  case 0x1be31789: return store_type_decrypted_message_layer (T);
  case 0xe41ce876: return store_type_bare_decrypted_message_layer (T);
  case 0x34e0d674: return store_type_decrypted_message_media (T);
  case 0xcb1f298b: return store_type_bare_decrypted_message_media (T);
  case 0xc1dd804a: return store_type_dialog (T);
  case 0x3e227fb5: return store_type_bare_dialog (T);
  case 0xae636f24: return store_type_disabled_feature (T);
  case 0x519c90db: return store_type_bare_disabled_feature (T);
  case 0x51a73418: return store_type_document (T);
  case 0xae58cbe7: return store_type_bare_document (T);
  case 0x97c637a3: return store_type_document_attribute (T);
  case 0x6839c85c: return store_type_bare_document_attribute (T);
  case 0x2210c154: return store_type_double (T);
  case 0xddef3eab: return store_type_bare_double (T);
  case 0xb1718213: return store_type_encrypted_chat (T);
  case 0x4e8e7dec: return store_type_bare_encrypted_chat (T);
  case 0x886fd032: return store_type_encrypted_file (T);
  case 0x77902fcd: return store_type_bare_encrypted_file (T);
  case 0xce6b8a1e: return store_type_encrypted_message (T);
  case 0x319475e1: return store_type_bare_encrypted_message (T);
  case 0xc4b9f9bb: return store_type_error (T);
  case 0x3b460644: return store_type_bare_error (T);
  case 0x95f132d5: return store_type_exported_chat_invite (T);
  case 0x6a0ecd2a: return store_type_bare_exported_chat_invite (T);
  case 0x2f8ffb30: return store_type_file_location (T);
  case 0xd07004cf: return store_type_bare_file_location (T);
  case 0xf67b4034: return store_type_geo_chat_message (T);
  case 0x0984bfcb: return store_type_bare_geo_chat_message (T);
  case 0x315e0a53: return store_type_geo_point (T);
  case 0xcea1f5ac: return store_type_bare_geo_point (T);
  case 0xd0028438: return store_type_imported_contact (T);
  case 0x2ffd7bc7: return store_type_bare_imported_contact (T);
  case 0x770656a8: return store_type_input_app_event (T);
  case 0x88f9a957: return store_type_bare_input_app_event (T);
  case 0xae8e9c7b: return store_type_input_audio (T);
  case 0x51716384: return store_type_bare_input_audio (T);
  case 0x3a60776d: return store_type_input_chat_photo (T);
  case 0xc59f8892: return store_type_bare_input_chat_photo (T);
  case 0xf392b7f4: return store_type_input_contact (T);
  case 0x0c6d480b: return store_type_bare_input_contact (T);
  case 0x6a8963fc: return store_type_input_document (T);
  case 0x95769c03: return store_type_bare_input_document (T);
  case 0xf141b5e1: return store_type_input_encrypted_chat (T);
  case 0x0ebe4a1e: return store_type_bare_input_encrypted_chat (T);
  case 0x0b5c064f: return store_type_input_encrypted_file (T);
  case 0xf4a3f9b0: return store_type_bare_input_encrypted_file (T);
  case 0x0f60f9ca: return store_type_input_file (T);
  case 0xf09f0635: return store_type_bare_input_file (T);
  case 0xe6daa38b: return store_type_input_file_location (T);
  case 0x19255c74: return store_type_bare_input_file_location (T);
  case 0x74d456fa: return store_type_input_geo_chat (T);
  case 0x8b2ba905: return store_type_bare_input_geo_chat (T);
  case 0x17768f1f: return store_type_input_geo_point (T);
  case 0xe88970e0: return store_type_bare_input_geo_point (T);
  case 0xb32c91dd: return store_type_input_media (T);
  case 0x4cd36e22: return store_type_bare_input_media (T);
  case 0x02b6911b: return store_type_input_notify_peer (T);
  case 0xfd496ee4: return store_type_bare_input_notify_peer (T);
  case 0x9e67268d: return store_type_input_peer (T);
  case 0x6198d972: return store_type_bare_input_peer (T);
  case 0x185a48ac: return store_type_input_peer_notify_events (T);
  case 0xe7a5b753: return store_type_bare_input_peer_notify_events (T);
  case 0x46a2ce98: return store_type_input_peer_notify_settings (T);
  case 0xb95d3167: return store_type_bare_input_peer_notify_settings (T);
  case 0xe74279c9: return store_type_input_photo (T);
  case 0x18bd8636: return store_type_bare_input_photo (T);
  case 0x7477e321: return store_type_input_photo_crop (T);
  case 0x8b881cde: return store_type_bare_input_photo_crop (T);
  case 0x4f96cb18: return store_type_input_privacy_key (T);
  case 0xb06934e7: return store_type_bare_input_privacy_key (T);
  case 0x4b815163: return store_type_input_privacy_rule (T);
  case 0xb47eae9c: return store_type_bare_input_privacy_rule (T);
  case 0xe44d415c: return store_type_input_sticker_set (T);
  case 0x1bb2bea3: return store_type_bare_input_sticker_set (T);
  case 0xadfe0c6a: return store_type_input_user (T);
  case 0x5201f395: return store_type_bare_input_user (T);
  case 0xbb5f7a27: return store_type_input_video (T);
  case 0x44a085d8: return store_type_bare_input_video (T);
  case 0xa8509bda: return store_type_int (T);
  case 0x57af6425: return store_type_bare_int (T);
  case 0x7d36c439: return store_type_int128 (T);
  case 0x82c93bc6: return store_type_bare_int128 (T);
  case 0xf2c798b3: return store_type_int256 (T);
  case 0x0d38674c: return store_type_bare_int256 (T);
  case 0xa2fa4880: return store_type_keyboard_button (T);
  case 0x5d05b77f: return store_type_bare_keyboard_button (T);
  case 0x77608b83: return store_type_keyboard_button_row (T);
  case 0x889f747c: return store_type_bare_keyboard_button_row (T);
  case 0x22076cba: return store_type_long (T);
  case 0xddf89345: return store_type_bare_long (T);
  case 0x5d652a7f: return store_type_message (T);
  case 0xa29ad580: return store_type_bare_message (T);
  case 0x383415fa: return store_type_message_action (T);
  case 0xc7cbea05: return store_type_bare_message_action (T);
  case 0x95f2471a: return store_type_message_media (T);
  case 0x6a0db8e5: return store_type_bare_message_media (T);
  case 0x80895ae0: return store_type_messages_filter (T);
  case 0x7f76a51f: return store_type_bare_messages_filter (T);
  case 0x8e1a1775: return store_type_nearest_dc (T);
  case 0x71e5e88a: return store_type_bare_nearest_dc (T);
  case 0x9fcb8237: return store_type_notify_peer (T);
  case 0x60347dc8: return store_type_bare_notify_peer (T);
  case 0x56730bcc: return store_type_null (T);
  case 0xa98cf433: return store_type_bare_null (T);
  case 0xbfa3de38: return store_type_p_q_inner_data (T);
  case 0x405c21c7: return store_type_bare_p_q_inner_data (T);
  case 0x276159d6: return store_type_peer (T);
  case 0xd89ea629: return store_type_bare_peer (T);
  case 0xc0c8d13b: return store_type_peer_notify_events (T);
  case 0x3f372ec4: return store_type_bare_peer_notify_events (T);
  case 0xfdf894fc: return store_type_peer_notify_settings (T);
  case 0x02076b03: return store_type_bare_peer_notify_settings (T);
  case 0xc207550a: return store_type_photo (T);
  case 0x3df8aaf5: return store_type_bare_photo (T);
  case 0x900f60dd: return store_type_photo_size (T);
  case 0x6ff09f22: return store_type_bare_photo_size (T);
  case 0xbc2eab30: return store_type_privacy_key (T);
  case 0x43d154cf: return store_type_bare_privacy_key (T);
  case 0xa8638aec: return store_type_privacy_rule (T);
  case 0x579c7513: return store_type_bare_privacy_rule (T);
  case 0xa384b779: return store_type_received_notify_message (T);
  case 0x5c7b4886: return store_type_bare_received_notify_message (T);
  case 0x612ca4a9: return store_type_reply_markup (T);
  case 0x9ed35b56: return store_type_bare_reply_markup (T);
  case 0x05162463: return store_type_res_p_q (T);
  case 0xfae9db9c: return store_type_bare_res_p_q (T);
  case 0x70541c7e: return store_type_send_message_action (T);
  case 0x8fabe381: return store_type_bare_send_message_action (T);
  case 0xa9230301: return store_type_server_d_h_params (T);
  case 0x56dcfcfe: return store_type_bare_server_d_h_params (T);
  case 0xb5890dba: return store_type_server_d_h_inner_data (T);
  case 0x4a76f245: return store_type_bare_server_d_h_inner_data (T);
  case 0xdb8a468f: return store_type_set_client_d_h_params_answer (T);
  case 0x2475b970: return store_type_bare_set_client_d_h_params_answer (T);
  case 0x12b299d4: return store_type_sticker_pack (T);
  case 0xed4d662b: return store_type_bare_sticker_pack (T);
  case 0xa7a43b17: return store_type_sticker_set (T);
  case 0x585bc4e8: return store_type_bare_sticker_set (T);
  case 0xb5286e24: return store_type_string (T);
  case 0x4ad791db: return store_type_bare_string (T);
  case 0x2e02b27e: return store_type_update (T);
  case 0xd1fd4d81: return store_type_bare_update (T);
  case 0x22499d27: return store_type_updates (T);
  case 0xddb662d8: return store_type_bare_updates (T);
  case 0x02e6c0c8: return store_type_user (T);
  case 0xfd193f37: return store_type_bare_user (T);
  case 0x5a89ac5b: return store_type_user_full (T);
  case 0xa57653a4: return store_type_bare_user_full (T);
  case 0x9a486229: return store_type_user_profile_photo (T);
  case 0x65b79dd6: return store_type_bare_user_profile_photo (T);
  case 0x76de9570: return store_type_user_status (T);
  case 0x89216a8f: return store_type_bare_user_status (T);
  case 0x1cb5c415: return store_type_vector (T);
  case 0xe34a3bea: return store_type_bare_vector (T);
  case 0x1716b174: return store_type_video (T);
  case 0xe8e94e8b: return store_type_bare_video (T);
  case 0xafa14973: return store_type_wall_paper (T);
  case 0x505eb68c: return store_type_bare_wall_paper (T);
  case 0x8d8c0d41: return store_type_web_page (T);
  case 0x7273f2be: return store_type_bare_web_page (T);
  case 0x1250abde: return store_type_account_authorizations (T);
  case 0xedaf5421: return store_type_bare_account_authorizations (T);
  case 0xeac2a804: return store_type_account_password (T);
  case 0x153d57fb: return store_type_bare_account_password (T);
  case 0xbcfc532c: return store_type_account_password_input_settings (T);
  case 0x4303acd3: return store_type_bare_account_password_input_settings (T);
  case 0xb7b72ab3: return store_type_account_password_settings (T);
  case 0x4848d54c: return store_type_bare_account_password_settings (T);
  case 0x554abb6f: return store_type_account_privacy_rules (T);
  case 0xaab54490: return store_type_bare_account_privacy_rules (T);
  case 0xa4f58c4c: return store_type_account_sent_change_phone_code (T);
  case 0x5b0a73b3: return store_type_bare_account_sent_change_phone_code (T);
  case 0xff036af1: return store_type_auth_authorization (T);
  case 0x00fc950e: return store_type_bare_auth_authorization (T);
  case 0x811ea28e: return store_type_auth_checked_phone (T);
  case 0x7ee15d71: return store_type_bare_auth_checked_phone (T);
  case 0xdf969c2d: return store_type_auth_exported_authorization (T);
  case 0x206963d2: return store_type_bare_auth_exported_authorization (T);
  case 0x137948a5: return store_type_auth_password_recovery (T);
  case 0xec86b75a: return store_type_bare_auth_password_recovery (T);
  case 0x0cc8bc16: return store_type_auth_sent_code (T);
  case 0xf33743e9: return store_type_bare_auth_sent_code (T);
  case 0x0377168f: return store_type_binlog_encr_key (T);
  case 0xfc88e970: return store_type_bare_binlog_encr_key (T);
  case 0x66ff03a6: return store_type_binlog_update (T);
  case 0x9900fc59: return store_type_bare_binlog_update (T);
  case 0x8c1b8fb4: return store_type_contacts_blocked (T);
  case 0x73e4704b: return store_type_bare_contacts_blocked (T);
  case 0xd8c02560: return store_type_contacts_contacts (T);
  case 0x273fda9f: return store_type_bare_contacts_contacts (T);
  case 0x0566000e: return store_type_contacts_found (T);
  case 0xfa99fff1: return store_type_bare_contacts_found (T);
  case 0xad524315: return store_type_contacts_imported_contacts (T);
  case 0x52adbcea: return store_type_bare_contacts_imported_contacts (T);
  case 0x3ace484c: return store_type_contacts_link (T);
  case 0xc531b7b3: return store_type_bare_contacts_link (T);
  case 0x5649dcc5: return store_type_contacts_suggested (T);
  case 0xa9b6233a: return store_type_bare_contacts_suggested (T);
  case 0x48feb267: return store_type_geochats_located (T);
  case 0xb7014d98: return store_type_bare_geochats_located (T);
  case 0x6d0a0e59: return store_type_geochats_messages (T);
  case 0x92f5f1a6: return store_type_bare_geochats_messages (T);
  case 0x17b1578b: return store_type_geochats_stated_message (T);
  case 0xe84ea874: return store_type_bare_geochats_stated_message (T);
  case 0x4ddd9627: return store_type_help_app_update (T);
  case 0xb22269d8: return store_type_bare_help_app_update (T);
  case 0x18cb9f78: return store_type_help_invite_text (T);
  case 0xe7346087: return store_type_bare_help_invite_text (T);
  case 0x17c6b5f6: return store_type_help_support (T);
  case 0xe8394a09: return store_type_bare_help_support (T);
  case 0xb45c69d1: return store_type_messages_affected_history (T);
  case 0x4ba3962e: return store_type_bare_messages_affected_history (T);
  case 0x84d19185: return store_type_messages_affected_messages (T);
  case 0x7b2e6e7a: return store_type_bare_messages_affected_messages (T);
  case 0xb485502f: return store_type_messages_all_stickers (T);
  case 0x4b7aafd0: return store_type_bare_messages_all_stickers (T);
  case 0xe5d7d19c: return store_type_messages_chat_full (T);
  case 0x1a282e63: return store_type_bare_messages_chat_full (T);
  case 0x64ff9fd5: return store_type_messages_chats (T);
  case 0x9b00602a: return store_type_bare_messages_chats (T);
  case 0xecc058e8: return store_type_messages_dh_config (T);
  case 0x133fa717: return store_type_bare_messages_dh_config (T);
  case 0x645af8b3: return store_type_messages_dialogs (T);
  case 0x9ba5074c: return store_type_bare_messages_dialogs (T);
  case 0x3f4e0648: return store_type_messages_message (T);
  case 0xc0b1f9b7: return store_type_bare_messages_message (T);
  case 0x8735e464: return store_type_messages_messages (T);
  case 0x78ca1b9b: return store_type_bare_messages_messages (T);
  case 0xc29c7607: return store_type_messages_sent_encrypted_message (T);
  case 0x3d6389f8: return store_type_bare_messages_sent_encrypted_message (T);
  case 0x799ce190: return store_type_messages_sent_message (T);
  case 0x86631e6f: return store_type_bare_messages_sent_message (T);
  case 0xb60a24a6: return store_type_messages_sticker_set (T);
  case 0x49f5db59: return store_type_bare_messages_sticker_set (T);
  case 0x7bfa5710: return store_type_messages_stickers (T);
  case 0x8405a8ef: return store_type_bare_messages_stickers (T);
  case 0x20212ca8: return store_type_photos_photo (T);
  case 0xdfded357: return store_type_bare_photos_photo (T);
  case 0x98cf75f1: return store_type_photos_photos (T);
  case 0x67308a0e: return store_type_bare_photos_photos (T);
  case 0x3e2838a8: return store_type_storage_file_type (T);
  case 0xc1d7c757: return store_type_bare_storage_file_type (T);
  case 0xf57a2419: return store_type_updates_difference (T);
  case 0x0a85dbe6: return store_type_bare_updates_difference (T);
  case 0xa56c2a3e: return store_type_updates_state (T);
  case 0x5a93d5c1: return store_type_bare_updates_state (T);
  case 0x096a18d5: return store_type_upload_file (T);
  case 0xf695e72a: return store_type_bare_upload_file (T);
  default: return -1; }
}
struct paramed_type *store_function_any (void) {
  if (cur_token_len != 1 || *cur_token != '(') { return 0; }
  local_next_token ();
  if (cur_token_len == 1 || *cur_token == '.') { 
    local_next_token ();
    if (cur_token_len != 1 || *cur_token != '=') { return 0; }
    local_next_token ();
  };
  if (cur_token_len < 0) { return 0; }
  if (cur_token_len == 19 && !memcmp (cur_token, "account.changePhone", cur_token_len)) {
    out_int (0x70c32edb);
    local_next_token ();
    struct paramed_type *P = store_function_account_change_phone ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "account.checkUsername", cur_token_len)) {
    out_int (0x2714d86c);
    local_next_token ();
    struct paramed_type *P = store_function_account_check_username ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "account.deleteAccount", cur_token_len)) {
    out_int (0x418d4e0b);
    local_next_token ();
    struct paramed_type *P = store_function_account_delete_account ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "account.getAccountTTL", cur_token_len)) {
    out_int (0x08fc711d);
    local_next_token ();
    struct paramed_type *P = store_function_account_get_account_t_t_l ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "account.getAuthorizations", cur_token_len)) {
    out_int (0xe320c158);
    local_next_token ();
    struct paramed_type *P = store_function_account_get_authorizations ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "account.getNotifySettings", cur_token_len)) {
    out_int (0x12b3ad31);
    local_next_token ();
    struct paramed_type *P = store_function_account_get_notify_settings ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "account.getPassword", cur_token_len)) {
    out_int (0x548a30f5);
    local_next_token ();
    struct paramed_type *P = store_function_account_get_password ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "account.getPasswordSettings", cur_token_len)) {
    out_int (0xbc8d11bb);
    local_next_token ();
    struct paramed_type *P = store_function_account_get_password_settings ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "account.getPrivacy", cur_token_len)) {
    out_int (0xdadbc950);
    local_next_token ();
    struct paramed_type *P = store_function_account_get_privacy ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "account.getWallPapers", cur_token_len)) {
    out_int (0xc04cfac2);
    local_next_token ();
    struct paramed_type *P = store_function_account_get_wall_papers ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "account.registerDevice", cur_token_len)) {
    out_int (0x446c712c);
    local_next_token ();
    struct paramed_type *P = store_function_account_register_device ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "account.resetAuthorization", cur_token_len)) {
    out_int (0xdf77f3bc);
    local_next_token ();
    struct paramed_type *P = store_function_account_reset_authorization ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "account.resetNotifySettings", cur_token_len)) {
    out_int (0xdb7e1747);
    local_next_token ();
    struct paramed_type *P = store_function_account_reset_notify_settings ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "account.sendChangePhoneCode", cur_token_len)) {
    out_int (0xa407a8f4);
    local_next_token ();
    struct paramed_type *P = store_function_account_send_change_phone_code ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "account.setAccountTTL", cur_token_len)) {
    out_int (0x2442485e);
    local_next_token ();
    struct paramed_type *P = store_function_account_set_account_t_t_l ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "account.setPrivacy", cur_token_len)) {
    out_int (0xc9f81ce8);
    local_next_token ();
    struct paramed_type *P = store_function_account_set_privacy ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "account.unregisterDevice", cur_token_len)) {
    out_int (0x65c55b40);
    local_next_token ();
    struct paramed_type *P = store_function_account_unregister_device ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "account.updateDeviceLocked", cur_token_len)) {
    out_int (0x38df3532);
    local_next_token ();
    struct paramed_type *P = store_function_account_update_device_locked ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "account.updateNotifySettings", cur_token_len)) {
    out_int (0x84be5b93);
    local_next_token ();
    struct paramed_type *P = store_function_account_update_notify_settings ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 30 && !memcmp (cur_token, "account.updatePasswordSettings", cur_token_len)) {
    out_int (0xfa7c4b86);
    local_next_token ();
    struct paramed_type *P = store_function_account_update_password_settings ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "account.updateProfile", cur_token_len)) {
    out_int (0xf0888d68);
    local_next_token ();
    struct paramed_type *P = store_function_account_update_profile ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "account.updateStatus", cur_token_len)) {
    out_int (0x6628562c);
    local_next_token ();
    struct paramed_type *P = store_function_account_update_status ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "account.updateUsername", cur_token_len)) {
    out_int (0x3e0bdd7c);
    local_next_token ();
    struct paramed_type *P = store_function_account_update_username ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "auth.bindTempAuthKey", cur_token_len)) {
    out_int (0xcdd42a05);
    local_next_token ();
    struct paramed_type *P = store_function_auth_bind_temp_auth_key ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "auth.checkPassword", cur_token_len)) {
    out_int (0x0a63011e);
    local_next_token ();
    struct paramed_type *P = store_function_auth_check_password ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "auth.checkPhone", cur_token_len)) {
    out_int (0x6fe51dfb);
    local_next_token ();
    struct paramed_type *P = store_function_auth_check_phone ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "auth.exportAuthorization", cur_token_len)) {
    out_int (0xe5bfffcd);
    local_next_token ();
    struct paramed_type *P = store_function_auth_export_authorization ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "auth.importAuthorization", cur_token_len)) {
    out_int (0xe3ef9613);
    local_next_token ();
    struct paramed_type *P = store_function_auth_import_authorization ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "auth.importBotAuthorization", cur_token_len)) {
    out_int (0x67a3ff2c);
    local_next_token ();
    struct paramed_type *P = store_function_auth_import_bot_authorization ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 11 && !memcmp (cur_token, "auth.logOut", cur_token_len)) {
    out_int (0x5717da40);
    local_next_token ();
    struct paramed_type *P = store_function_auth_log_out ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "auth.recoverPassword", cur_token_len)) {
    out_int (0x4ea56e92);
    local_next_token ();
    struct paramed_type *P = store_function_auth_recover_password ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "auth.requestPasswordRecovery", cur_token_len)) {
    out_int (0xd897bc66);
    local_next_token ();
    struct paramed_type *P = store_function_auth_request_password_recovery ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "auth.resetAuthorizations", cur_token_len)) {
    out_int (0x9fab0d1a);
    local_next_token ();
    struct paramed_type *P = store_function_auth_reset_authorizations ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "auth.sendCall", cur_token_len)) {
    out_int (0x03c51564);
    local_next_token ();
    struct paramed_type *P = store_function_auth_send_call ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "auth.sendCode", cur_token_len)) {
    out_int (0x768d5f4d);
    local_next_token ();
    struct paramed_type *P = store_function_auth_send_code ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "auth.sendInvites", cur_token_len)) {
    out_int (0x771c1d97);
    local_next_token ();
    struct paramed_type *P = store_function_auth_send_invites ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 12 && !memcmp (cur_token, "auth.sendSms", cur_token_len)) {
    out_int (0x0da9f3e8);
    local_next_token ();
    struct paramed_type *P = store_function_auth_send_sms ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 11 && !memcmp (cur_token, "auth.signIn", cur_token_len)) {
    out_int (0xbcd51581);
    local_next_token ();
    struct paramed_type *P = store_function_auth_sign_in ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 11 && !memcmp (cur_token, "auth.signUp", cur_token_len)) {
    out_int (0x1b067634);
    local_next_token ();
    struct paramed_type *P = store_function_auth_sign_up ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "contacts.block", cur_token_len)) {
    out_int (0x332b49fc);
    local_next_token ();
    struct paramed_type *P = store_function_contacts_block ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "contacts.deleteContact", cur_token_len)) {
    out_int (0x8e953744);
    local_next_token ();
    struct paramed_type *P = store_function_contacts_delete_contact ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "contacts.deleteContacts", cur_token_len)) {
    out_int (0x59ab389e);
    local_next_token ();
    struct paramed_type *P = store_function_contacts_delete_contacts ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "contacts.exportCard", cur_token_len)) {
    out_int (0x84e53737);
    local_next_token ();
    struct paramed_type *P = store_function_contacts_export_card ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "contacts.getBlocked", cur_token_len)) {
    out_int (0xf57c350f);
    local_next_token ();
    struct paramed_type *P = store_function_contacts_get_blocked ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "contacts.getContacts", cur_token_len)) {
    out_int (0x22c6aa08);
    local_next_token ();
    struct paramed_type *P = store_function_contacts_get_contacts ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "contacts.getStatuses", cur_token_len)) {
    out_int (0xc4a353ee);
    local_next_token ();
    struct paramed_type *P = store_function_contacts_get_statuses ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "contacts.getSuggested", cur_token_len)) {
    out_int (0xcd773428);
    local_next_token ();
    struct paramed_type *P = store_function_contacts_get_suggested ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "contacts.importCard", cur_token_len)) {
    out_int (0x4fe196fe);
    local_next_token ();
    struct paramed_type *P = store_function_contacts_import_card ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "contacts.importContacts", cur_token_len)) {
    out_int (0xda30b32d);
    local_next_token ();
    struct paramed_type *P = store_function_contacts_import_contacts ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "contacts.resolveUsername", cur_token_len)) {
    out_int (0x0bf0131c);
    local_next_token ();
    struct paramed_type *P = store_function_contacts_resolve_username ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "contacts.search", cur_token_len)) {
    out_int (0x11f812d8);
    local_next_token ();
    struct paramed_type *P = store_function_contacts_search ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "contacts.unblock", cur_token_len)) {
    out_int (0xe54100bd);
    local_next_token ();
    struct paramed_type *P = store_function_contacts_unblock ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "geochats.checkin", cur_token_len)) {
    out_int (0x55b3e8fb);
    local_next_token ();
    struct paramed_type *P = store_function_geochats_checkin ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "geochats.createGeoChat", cur_token_len)) {
    out_int (0x0e092e16);
    local_next_token ();
    struct paramed_type *P = store_function_geochats_create_geo_chat ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "geochats.editChatPhoto", cur_token_len)) {
    out_int (0x35d81a95);
    local_next_token ();
    struct paramed_type *P = store_function_geochats_edit_chat_photo ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "geochats.editChatTitle", cur_token_len)) {
    out_int (0x4c8e2273);
    local_next_token ();
    struct paramed_type *P = store_function_geochats_edit_chat_title ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "geochats.getFullChat", cur_token_len)) {
    out_int (0x6722dd6f);
    local_next_token ();
    struct paramed_type *P = store_function_geochats_get_full_chat ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "geochats.getHistory", cur_token_len)) {
    out_int (0xb53f7a68);
    local_next_token ();
    struct paramed_type *P = store_function_geochats_get_history ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "geochats.getLocated", cur_token_len)) {
    out_int (0x7f192d8f);
    local_next_token ();
    struct paramed_type *P = store_function_geochats_get_located ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "geochats.getRecents", cur_token_len)) {
    out_int (0xe1427e6f);
    local_next_token ();
    struct paramed_type *P = store_function_geochats_get_recents ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "geochats.search", cur_token_len)) {
    out_int (0xcfcdc44d);
    local_next_token ();
    struct paramed_type *P = store_function_geochats_search ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "geochats.sendMedia", cur_token_len)) {
    out_int (0xb8f0deff);
    local_next_token ();
    struct paramed_type *P = store_function_geochats_send_media ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "geochats.sendMessage", cur_token_len)) {
    out_int (0x061b0044);
    local_next_token ();
    struct paramed_type *P = store_function_geochats_send_message ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "geochats.setTyping", cur_token_len)) {
    out_int (0x08b8a729);
    local_next_token ();
    struct paramed_type *P = store_function_geochats_set_typing ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "help.getAppUpdate", cur_token_len)) {
    out_int (0xc812ac7e);
    local_next_token ();
    struct paramed_type *P = store_function_help_get_app_update ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "help.getConfig", cur_token_len)) {
    out_int (0xc4f9186b);
    local_next_token ();
    struct paramed_type *P = store_function_help_get_config ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "help.getInviteText", cur_token_len)) {
    out_int (0xa4a95186);
    local_next_token ();
    struct paramed_type *P = store_function_help_get_invite_text ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "help.getNearestDc", cur_token_len)) {
    out_int (0x1fb33026);
    local_next_token ();
    struct paramed_type *P = store_function_help_get_nearest_dc ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "help.getSupport", cur_token_len)) {
    out_int (0x9cdf08cd);
    local_next_token ();
    struct paramed_type *P = store_function_help_get_support ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "help.saveAppLog", cur_token_len)) {
    out_int (0x6f02f748);
    local_next_token ();
    struct paramed_type *P = store_function_help_save_app_log ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "initConnection", cur_token_len)) {
    out_int (0x69796de9);
    local_next_token ();
    struct paramed_type *P = store_function_init_connection ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "invokeAfterMsg", cur_token_len)) {
    out_int (0xcb9f372d);
    local_next_token ();
    struct paramed_type *P = store_function_invoke_after_msg ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "invokeAfterMsgs", cur_token_len)) {
    out_int (0x3dc4b4f0);
    local_next_token ();
    struct paramed_type *P = store_function_invoke_after_msgs ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "invokeWithLayer", cur_token_len)) {
    out_int (0xda9b0d0d);
    local_next_token ();
    struct paramed_type *P = store_function_invoke_with_layer ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "invokeWithoutUpdates", cur_token_len)) {
    out_int (0xbf9459b7);
    local_next_token ();
    struct paramed_type *P = store_function_invoke_without_updates ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "messages.acceptEncryption", cur_token_len)) {
    out_int (0x3dbc0415);
    local_next_token ();
    struct paramed_type *P = store_function_messages_accept_encryption ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "messages.addChatUser", cur_token_len)) {
    out_int (0xf9a0aa09);
    local_next_token ();
    struct paramed_type *P = store_function_messages_add_chat_user ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "messages.checkChatInvite", cur_token_len)) {
    out_int (0x3eadb1bb);
    local_next_token ();
    struct paramed_type *P = store_function_messages_check_chat_invite ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "messages.createChat", cur_token_len)) {
    out_int (0x09cb126e);
    local_next_token ();
    struct paramed_type *P = store_function_messages_create_chat ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "messages.deleteChatUser", cur_token_len)) {
    out_int (0xe0611f16);
    local_next_token ();
    struct paramed_type *P = store_function_messages_delete_chat_user ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "messages.deleteHistory", cur_token_len)) {
    out_int (0xf4f8fb61);
    local_next_token ();
    struct paramed_type *P = store_function_messages_delete_history ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "messages.deleteMessages", cur_token_len)) {
    out_int (0xa5f18925);
    local_next_token ();
    struct paramed_type *P = store_function_messages_delete_messages ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "messages.discardEncryption", cur_token_len)) {
    out_int (0xedd923c5);
    local_next_token ();
    struct paramed_type *P = store_function_messages_discard_encryption ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "messages.editChatPhoto", cur_token_len)) {
    out_int (0xca4c79d8);
    local_next_token ();
    struct paramed_type *P = store_function_messages_edit_chat_photo ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "messages.editChatTitle", cur_token_len)) {
    out_int (0xdc452855);
    local_next_token ();
    struct paramed_type *P = store_function_messages_edit_chat_title ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "messages.exportChatInvite", cur_token_len)) {
    out_int (0x7d885289);
    local_next_token ();
    struct paramed_type *P = store_function_messages_export_chat_invite ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "messages.forwardMessage", cur_token_len)) {
    out_int (0x33963bf9);
    local_next_token ();
    struct paramed_type *P = store_function_messages_forward_message ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 24 && !memcmp (cur_token, "messages.forwardMessages", cur_token_len)) {
    out_int (0x55e1728d);
    local_next_token ();
    struct paramed_type *P = store_function_messages_forward_messages ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 23 && !memcmp (cur_token, "messages.getAllStickers", cur_token_len)) {
    out_int (0xaa3bc868);
    local_next_token ();
    struct paramed_type *P = store_function_messages_get_all_stickers ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "messages.getChats", cur_token_len)) {
    out_int (0x3c6aa187);
    local_next_token ();
    struct paramed_type *P = store_function_messages_get_chats ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "messages.getDhConfig", cur_token_len)) {
    out_int (0x26cf8950);
    local_next_token ();
    struct paramed_type *P = store_function_messages_get_dh_config ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "messages.getDialogs", cur_token_len)) {
    out_int (0xeccf1df6);
    local_next_token ();
    struct paramed_type *P = store_function_messages_get_dialogs ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "messages.getFullChat", cur_token_len)) {
    out_int (0x3b831c66);
    local_next_token ();
    struct paramed_type *P = store_function_messages_get_full_chat ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "messages.getHistory", cur_token_len)) {
    out_int (0x92a1df2f);
    local_next_token ();
    struct paramed_type *P = store_function_messages_get_history ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "messages.getMessages", cur_token_len)) {
    out_int (0x4222fa74);
    local_next_token ();
    struct paramed_type *P = store_function_messages_get_messages ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "messages.getStickerSet", cur_token_len)) {
    out_int (0x2619a90e);
    local_next_token ();
    struct paramed_type *P = store_function_messages_get_sticker_set ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "messages.getStickers", cur_token_len)) {
    out_int (0xae22e045);
    local_next_token ();
    struct paramed_type *P = store_function_messages_get_stickers ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "messages.getWebPagePreview", cur_token_len)) {
    out_int (0x25223e24);
    local_next_token ();
    struct paramed_type *P = store_function_messages_get_web_page_preview ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "messages.importChatInvite", cur_token_len)) {
    out_int (0x6c50051c);
    local_next_token ();
    struct paramed_type *P = store_function_messages_import_chat_invite ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "messages.installStickerSet", cur_token_len)) {
    out_int (0xefbbfae9);
    local_next_token ();
    struct paramed_type *P = store_function_messages_install_sticker_set ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "messages.readEncryptedHistory", cur_token_len)) {
    out_int (0x7f4b690a);
    local_next_token ();
    struct paramed_type *P = store_function_messages_read_encrypted_history ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "messages.readHistory", cur_token_len)) {
    out_int (0xb04f2510);
    local_next_token ();
    struct paramed_type *P = store_function_messages_read_history ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "messages.readMessageContents", cur_token_len)) {
    out_int (0x36a73f77);
    local_next_token ();
    struct paramed_type *P = store_function_messages_read_message_contents ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "messages.receivedMessages", cur_token_len)) {
    out_int (0x05a954c0);
    local_next_token ();
    struct paramed_type *P = store_function_messages_received_messages ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "messages.receivedQueue", cur_token_len)) {
    out_int (0x55a5bb66);
    local_next_token ();
    struct paramed_type *P = store_function_messages_received_queue ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "messages.requestEncryption", cur_token_len)) {
    out_int (0xf64daf43);
    local_next_token ();
    struct paramed_type *P = store_function_messages_request_encryption ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 15 && !memcmp (cur_token, "messages.search", cur_token_len)) {
    out_int (0x07e9f2ab);
    local_next_token ();
    struct paramed_type *P = store_function_messages_search ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "messages.sendBroadcast", cur_token_len)) {
    out_int (0xbf73f4da);
    local_next_token ();
    struct paramed_type *P = store_function_messages_send_broadcast ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "messages.sendEncrypted", cur_token_len)) {
    out_int (0xa9776773);
    local_next_token ();
    struct paramed_type *P = store_function_messages_send_encrypted ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 26 && !memcmp (cur_token, "messages.sendEncryptedFile", cur_token_len)) {
    out_int (0x9a901b66);
    local_next_token ();
    struct paramed_type *P = store_function_messages_send_encrypted_file ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 29 && !memcmp (cur_token, "messages.sendEncryptedService", cur_token_len)) {
    out_int (0x32d439a4);
    local_next_token ();
    struct paramed_type *P = store_function_messages_send_encrypted_service ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "messages.sendMedia", cur_token_len)) {
    out_int (0xc8f16791);
    local_next_token ();
    struct paramed_type *P = store_function_messages_send_media ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "messages.sendMessage", cur_token_len)) {
    out_int (0xfc55e6b5);
    local_next_token ();
    struct paramed_type *P = store_function_messages_send_message ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 27 && !memcmp (cur_token, "messages.setEncryptedTyping", cur_token_len)) {
    out_int (0x791451ed);
    local_next_token ();
    struct paramed_type *P = store_function_messages_set_encrypted_typing ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 18 && !memcmp (cur_token, "messages.setTyping", cur_token_len)) {
    out_int (0xa3825e50);
    local_next_token ();
    struct paramed_type *P = store_function_messages_set_typing ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "messages.startBot", cur_token_len)) {
    out_int (0x1b3e0ffc);
    local_next_token ();
    struct paramed_type *P = store_function_messages_start_bot ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 28 && !memcmp (cur_token, "messages.uninstallStickerSet", cur_token_len)) {
    out_int (0xf96e55de);
    local_next_token ();
    struct paramed_type *P = store_function_messages_uninstall_sticker_set ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "photos.deletePhotos", cur_token_len)) {
    out_int (0x87cf7f2f);
    local_next_token ();
    struct paramed_type *P = store_function_photos_delete_photos ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "photos.getUserPhotos", cur_token_len)) {
    out_int (0xb7ee553c);
    local_next_token ();
    struct paramed_type *P = store_function_photos_get_user_photos ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "photos.updateProfilePhoto", cur_token_len)) {
    out_int (0xeef579a0);
    local_next_token ();
    struct paramed_type *P = store_function_photos_update_profile_photo ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 25 && !memcmp (cur_token, "photos.uploadProfilePhoto", cur_token_len)) {
    out_int (0xd50f9c88);
    local_next_token ();
    struct paramed_type *P = store_function_photos_upload_profile_photo ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 13 && !memcmp (cur_token, "req_DH_params", cur_token_len)) {
    out_int (0xd712e4be);
    local_next_token ();
    struct paramed_type *P = store_function_req_d_h_params ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 6 && !memcmp (cur_token, "req_pq", cur_token_len)) {
    out_int (0x60469778);
    local_next_token ();
    struct paramed_type *P = store_function_req_pq ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 20 && !memcmp (cur_token, "set_client_DH_params", cur_token_len)) {
    out_int (0xf5045f1f);
    local_next_token ();
    struct paramed_type *P = store_function_set_client_d_h_params ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 21 && !memcmp (cur_token, "updates.getDifference", cur_token_len)) {
    out_int (0x0a041495);
    local_next_token ();
    struct paramed_type *P = store_function_updates_get_difference ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 16 && !memcmp (cur_token, "updates.getState", cur_token_len)) {
    out_int (0xedd4882a);
    local_next_token ();
    struct paramed_type *P = store_function_updates_get_state ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "upload.getFile", cur_token_len)) {
    out_int (0xe3a6cfb5);
    local_next_token ();
    struct paramed_type *P = store_function_upload_get_file ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 22 && !memcmp (cur_token, "upload.saveBigFilePart", cur_token_len)) {
    out_int (0xde7b673d);
    local_next_token ();
    struct paramed_type *P = store_function_upload_save_big_file_part ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 19 && !memcmp (cur_token, "upload.saveFilePart", cur_token_len)) {
    out_int (0xb304a621);
    local_next_token ();
    struct paramed_type *P = store_function_upload_save_file_part ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 17 && !memcmp (cur_token, "users.getFullUser", cur_token_len)) {
    out_int (0xca30a5b1);
    local_next_token ();
    struct paramed_type *P = store_function_users_get_full_user ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  if (cur_token_len == 14 && !memcmp (cur_token, "users.getUsers", cur_token_len)) {
    out_int (0x0d91a548);
    local_next_token ();
    struct paramed_type *P = store_function_users_get_users ();
    if (!P) { return 0; }
    if (cur_token_len != 1 || *cur_token != ')') { return 0; }
    local_next_token ();
    return P;
  }
  return 0;
}
