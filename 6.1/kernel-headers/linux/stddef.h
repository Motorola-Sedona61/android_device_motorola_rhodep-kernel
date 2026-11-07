/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _LINUX_STDDEF_H
#define _LINUX_STDDEF_H
#ifndef __always_inline
#define __always_inline __inline__
#endif
#ifndef __cplusplus
#define __struct_group_tag(TAG) TAG
#else
#define __struct_group_tag(TAG)
#endif
#define __struct_group(TAG,NAME,ATTRS,MEMBERS...) union { struct { MEMBERS } ATTRS; struct __struct_group_tag(TAG) { MEMBERS } ATTRS NAME; } ATTRS
#define __DECLARE_FLEX_ARRAY(TYPE,NAME) struct { struct { } __empty_ ##NAME; TYPE NAME[]; }
#endif
