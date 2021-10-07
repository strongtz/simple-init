#ifndef _MSGBOX_H
#define _MSGBOX_H
#include"gui.h"
typedef bool(*msgbox_callback)(uint16_t id,const char*btn);
extern void msgbox_create_yesno(msgbox_callback callback,const char*content,...) __attribute__((format(printf,2,3)));
extern void msgbox_create_ok(msgbox_callback callback,const char*content,...) __attribute__((format(printf,2,3)));
extern void msgbox_create_custom(msgbox_callback callback,const char**btn,const char*content,...) __attribute__((format(printf,3,4)));
extern void msgbox_alert(const char*content,...) __attribute__((format(printf,1,2)));
#endif
