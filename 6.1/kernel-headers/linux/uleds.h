/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef __ULEDS_H_
#define __ULEDS_H_
#define LED_MAX_NAME_SIZE 64
struct uleds_user_dev {
  char name[LED_MAX_NAME_SIZE];
  int max_brightness;
};
#endif
