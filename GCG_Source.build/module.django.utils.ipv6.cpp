/* Generated code for Python source for module 'django.utils.ipv6'
 * created by Nuitka version 0.5.28.2
 *
 * This code is in part copyright 2017 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_django$utils$ipv6 is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$utils$ipv6;
PyDictObject *moduledict_django$utils$ipv6;

/* The module constants used, if any. */
static PyObject *const_str_plain__is_shorthand_ip;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_clean_ipv6_address;
extern PyObject *const_str_plain_sep;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_47d6b4563740fd244bd70a59b306810b;
extern PyObject *const_tuple_str_plain_ValidationError_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_0;
static PyObject *const_tuple_str_digest_afeb4dd61f2c15f557e3cf9075f592ea_tuple;
static PyObject *const_str_plain_best_doublecolon_start;
static PyObject *const_str_plain_ipv4_unpacked;
extern PyObject *const_str_plain_lstrip;
extern PyObject *const_str_plain_any;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_ip_str;
static PyObject *const_str_plain_hextets;
static PyObject *const_str_digest_db98c59dfbcf07f80b7672c9c9ee911e;
extern PyObject *const_int_pos_6;
extern PyObject *const_tuple_str_chr_58_tuple;
static PyObject *const_str_plain_best_doublecolon_end;
extern PyObject *const_str_plain_join;
static PyObject *const_str_digest_25221799237c7e05d540ffe63fdc4f8b;
static PyObject *const_tuple_30e08b32baf52ade45cbf25724d774ce_tuple;
extern PyObject *const_str_digest_cd342f2524b448df63e7f67ee363fe83;
extern PyObject *const_tuple_str_plain_0_tuple;
extern PyObject *const_int_pos_16;
static PyObject *const_str_plain_symbols_re;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_re;
static PyObject *const_str_plain_new_ip;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_plain__unpack_ipv4;
extern PyObject *const_str_plain_is_valid_ipv6_address;
extern PyObject *const_str_plain___package__;
static PyObject *const_tuple_str_digest_84357d32e37e3f2ff1b5a71c74ce9bcb_tuple;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_str_digest_a591f529fe0f8292e666e2026f83e41a;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
static PyObject *const_str_digest_ebebb18731664a12452b2ba6915b22ed;
extern PyObject *const_tuple_str_plain_ugettext_lazy_tuple;
static PyObject *const_str_digest_28ca88f071337974d041b9e4d690276e;
extern PyObject *const_str_plain_ugettext_lazy;
extern PyObject *const_dict_8c4f07c26ed1eafa99bbb0926295cf67;
extern PyObject *const_slice_int_0_int_pos_6_none;
extern PyObject *const_tuple_str_plain_range_tuple;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_digest_dfb6e1abbed3113ee07234fdc458a320;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_int_pos_65535;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_467c9722f19d9d40d148689532cdc0b1;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_error_message;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_endswith;
static PyObject *const_tuple_73895601aa21357b4c64898e695fec5c_tuple;
static PyObject *const_str_digest_9df67fbae5be2131df2196d0d20135cd;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_match;
static PyObject *const_tuple_str_plain_0000_tuple;
static PyObject *const_str_plain_doublecolon_start;
static PyObject *const_str_plain_doublecolon_len;
extern PyObject *const_str_plain_ModuleSpec;
static PyObject *const_str_digest_23d753b66c064c45a8645d09f3759d54;
static PyObject *const_tuple_str_plain_validate_ipv4_address_tuple;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_plain___;
extern PyObject *const_int_0;
static PyObject *const_str_digest_535b47feb618d0c6653e6a6c3df97b6b;
extern PyObject *const_str_plain_code;
extern PyObject *const_str_digest_320a1371aee1b426fa9eb85eddaf3fe5;
extern PyObject *const_list_str_empty_list;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain_invalid;
static PyObject *const_tuple_str_plain_ip_str_tuple;
static PyObject *const_str_digest_afeb4dd61f2c15f557e3cf9075f592ea;
extern PyObject *const_str_plain_x;
extern PyObject *const_int_pos_4;
static PyObject *const_str_plain_ret_ip;
static PyObject *const_str_plain__explode_shorthand_ip_string;
static PyObject *const_str_plain_ipv4_address;
extern PyObject *const_str_plain_ValidationError;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain__;
static PyObject *const_str_plain_hextet;
extern PyObject *const_str_digest_9b02f1b0a2e763871df839f8958b3dfc;
extern PyObject *const_str_plain_range;
static PyObject *const_str_plain_best_doublecolon_len;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_65892149d328db1832ef7b19b5ed49c9_tuple;
static PyObject *const_tuple_str_digest_c7ab6858d80d5886523932e9f31122a5_tuple;
static PyObject *const_str_plain__sanitize_ipv4_mapping;
extern PyObject *const_str_plain_unpack_ipv4;
extern PyObject *const_int_pos_3;
static PyObject *const_str_plain_0000;
extern PyObject *const_str_plain_rsplit;
static PyObject *const_str_digest_84357d32e37e3f2ff1b5a71c74ce9bcb;
extern PyObject *const_tuple_str_chr_58_int_pos_1_tuple;
extern PyObject *const_int_pos_7;
static PyObject *const_str_digest_af7c44765500d761caed98d6b342a4b2;
static PyObject *const_str_digest_1c80c0dc28ef266ab07daf979b303586;
static PyObject *const_tuple_15f66ca3e946709d7987ba025bdef6e0_tuple;
extern PyObject *const_str_plain_validate_ipv4_address;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_c7ab6858d80d5886523932e9f31122a5;
static PyObject *const_str_plain_fill_to;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_empty;
extern PyObject *const_str_digest_6fed4619fa8d4c69fdb5c74f190acfee;
static PyObject *const_str_digest_772f94bb551591f8965f8bb849e1ccbf;
extern PyObject *const_slice_int_pos_2_int_pos_4_none;
static PyObject *const_tuple_str_digest_ebebb18731664a12452b2ba6915b22ed_tuple;
extern PyObject *const_slice_int_0_int_pos_2_none;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain__is_shorthand_ip = UNSTREAM_STRING( &constant_bin[ 1188041 ], 16, 1 );
    const_str_digest_47d6b4563740fd244bd70a59b306810b = UNSTREAM_STRING( &constant_bin[ 1188057 ], 172, 0 );
    const_tuple_str_digest_afeb4dd61f2c15f557e3cf9075f592ea_tuple = PyTuple_New( 1 );
    const_str_digest_afeb4dd61f2c15f557e3cf9075f592ea = UNSTREAM_STRING( &constant_bin[ 1188229 ], 16, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_afeb4dd61f2c15f557e3cf9075f592ea_tuple, 0, const_str_digest_afeb4dd61f2c15f557e3cf9075f592ea ); Py_INCREF( const_str_digest_afeb4dd61f2c15f557e3cf9075f592ea );
    const_str_plain_best_doublecolon_start = UNSTREAM_STRING( &constant_bin[ 1188245 ], 22, 1 );
    const_str_plain_ipv4_unpacked = UNSTREAM_STRING( &constant_bin[ 1188267 ], 13, 1 );
    const_str_plain_ip_str = UNSTREAM_STRING( &constant_bin[ 1188118 ], 6, 1 );
    const_str_plain_hextets = UNSTREAM_STRING( &constant_bin[ 1188280 ], 7, 1 );
    const_str_digest_db98c59dfbcf07f80b7672c9c9ee911e = UNSTREAM_STRING( &constant_bin[ 1188287 ], 156, 0 );
    const_str_plain_best_doublecolon_end = UNSTREAM_STRING( &constant_bin[ 1188443 ], 20, 1 );
    const_str_digest_25221799237c7e05d540ffe63fdc4f8b = UNSTREAM_STRING( &constant_bin[ 1188463 ], 3, 0 );
    const_tuple_30e08b32baf52ade45cbf25724d774ce_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_30e08b32baf52ade45cbf25724d774ce_tuple, 0, const_str_plain_ip_str ); Py_INCREF( const_str_plain_ip_str );
    const_str_plain_hextet = UNSTREAM_STRING( &constant_bin[ 1188280 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_30e08b32baf52ade45cbf25724d774ce_tuple, 1, const_str_plain_hextet ); Py_INCREF( const_str_plain_hextet );
    const_str_plain_fill_to = UNSTREAM_STRING( &constant_bin[ 1188466 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_30e08b32baf52ade45cbf25724d774ce_tuple, 2, const_str_plain_fill_to ); Py_INCREF( const_str_plain_fill_to );
    PyTuple_SET_ITEM( const_tuple_30e08b32baf52ade45cbf25724d774ce_tuple, 3, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );
    const_str_plain_new_ip = UNSTREAM_STRING( &constant_bin[ 1188473 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_30e08b32baf52ade45cbf25724d774ce_tuple, 4, const_str_plain_new_ip ); Py_INCREF( const_str_plain_new_ip );
    PyTuple_SET_ITEM( const_tuple_30e08b32baf52ade45cbf25724d774ce_tuple, 5, const_str_plain___ ); Py_INCREF( const_str_plain___ );
    const_str_plain_ret_ip = UNSTREAM_STRING( &constant_bin[ 1188479 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_30e08b32baf52ade45cbf25724d774ce_tuple, 6, const_str_plain_ret_ip ); Py_INCREF( const_str_plain_ret_ip );
    const_str_plain_symbols_re = UNSTREAM_STRING( &constant_bin[ 1188485 ], 10, 1 );
    const_str_plain__unpack_ipv4 = UNSTREAM_STRING( &constant_bin[ 1188495 ], 12, 1 );
    const_tuple_str_digest_84357d32e37e3f2ff1b5a71c74ce9bcb_tuple = PyTuple_New( 1 );
    const_str_digest_84357d32e37e3f2ff1b5a71c74ce9bcb = UNSTREAM_STRING( &constant_bin[ 1188507 ], 30, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_84357d32e37e3f2ff1b5a71c74ce9bcb_tuple, 0, const_str_digest_84357d32e37e3f2ff1b5a71c74ce9bcb ); Py_INCREF( const_str_digest_84357d32e37e3f2ff1b5a71c74ce9bcb );
    const_str_digest_a591f529fe0f8292e666e2026f83e41a = UNSTREAM_STRING( &constant_bin[ 1188537 ], 35, 0 );
    const_str_digest_ebebb18731664a12452b2ba6915b22ed = UNSTREAM_STRING( &constant_bin[ 5433 ], 2, 0 );
    const_str_digest_28ca88f071337974d041b9e4d690276e = UNSTREAM_STRING( &constant_bin[ 1188572 ], 597, 0 );
    const_tuple_73895601aa21357b4c64898e695fec5c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_73895601aa21357b4c64898e695fec5c_tuple, 0, const_str_plain_ip_str ); Py_INCREF( const_str_plain_ip_str );
    PyTuple_SET_ITEM( const_tuple_73895601aa21357b4c64898e695fec5c_tuple, 1, const_str_plain_hextets ); Py_INCREF( const_str_plain_hextets );
    const_str_plain_ipv4_address = UNSTREAM_STRING( &constant_bin[ 1189169 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_73895601aa21357b4c64898e695fec5c_tuple, 2, const_str_plain_ipv4_address ); Py_INCREF( const_str_plain_ipv4_address );
    PyTuple_SET_ITEM( const_tuple_73895601aa21357b4c64898e695fec5c_tuple, 3, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_digest_9df67fbae5be2131df2196d0d20135cd = UNSTREAM_STRING( &constant_bin[ 1189181 ], 359, 0 );
    const_tuple_str_plain_0000_tuple = PyTuple_New( 1 );
    const_str_plain_0000 = UNSTREAM_STRING( &constant_bin[ 53567 ], 4, 0 );
    PyTuple_SET_ITEM( const_tuple_str_plain_0000_tuple, 0, const_str_plain_0000 ); Py_INCREF( const_str_plain_0000 );
    const_str_plain_doublecolon_start = UNSTREAM_STRING( &constant_bin[ 1188250 ], 17, 1 );
    const_str_plain_doublecolon_len = UNSTREAM_STRING( &constant_bin[ 1189540 ], 15, 1 );
    const_str_digest_23d753b66c064c45a8645d09f3759d54 = UNSTREAM_STRING( &constant_bin[ 1189555 ], 165, 0 );
    const_tuple_str_plain_validate_ipv4_address_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_validate_ipv4_address_tuple, 0, const_str_plain_validate_ipv4_address ); Py_INCREF( const_str_plain_validate_ipv4_address );
    const_str_digest_535b47feb618d0c6653e6a6c3df97b6b = UNSTREAM_STRING( &constant_bin[ 1189720 ], 26, 0 );
    const_tuple_str_plain_ip_str_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ip_str_tuple, 0, const_str_plain_ip_str ); Py_INCREF( const_str_plain_ip_str );
    const_str_plain__explode_shorthand_ip_string = UNSTREAM_STRING( &constant_bin[ 1189746 ], 28, 1 );
    const_str_plain_best_doublecolon_len = UNSTREAM_STRING( &constant_bin[ 1189774 ], 20, 1 );
    const_tuple_65892149d328db1832ef7b19b5ed49c9_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_65892149d328db1832ef7b19b5ed49c9_tuple, 0, const_str_plain_ip_str ); Py_INCREF( const_str_plain_ip_str );
    PyTuple_SET_ITEM( const_tuple_65892149d328db1832ef7b19b5ed49c9_tuple, 1, const_str_plain_unpack_ipv4 ); Py_INCREF( const_str_plain_unpack_ipv4 );
    PyTuple_SET_ITEM( const_tuple_65892149d328db1832ef7b19b5ed49c9_tuple, 2, const_str_plain_error_message ); Py_INCREF( const_str_plain_error_message );
    PyTuple_SET_ITEM( const_tuple_65892149d328db1832ef7b19b5ed49c9_tuple, 3, const_str_plain_best_doublecolon_start ); Py_INCREF( const_str_plain_best_doublecolon_start );
    PyTuple_SET_ITEM( const_tuple_65892149d328db1832ef7b19b5ed49c9_tuple, 4, const_str_plain_best_doublecolon_len ); Py_INCREF( const_str_plain_best_doublecolon_len );
    PyTuple_SET_ITEM( const_tuple_65892149d328db1832ef7b19b5ed49c9_tuple, 5, const_str_plain_doublecolon_start ); Py_INCREF( const_str_plain_doublecolon_start );
    PyTuple_SET_ITEM( const_tuple_65892149d328db1832ef7b19b5ed49c9_tuple, 6, const_str_plain_doublecolon_len ); Py_INCREF( const_str_plain_doublecolon_len );
    PyTuple_SET_ITEM( const_tuple_65892149d328db1832ef7b19b5ed49c9_tuple, 7, const_str_plain_ipv4_unpacked ); Py_INCREF( const_str_plain_ipv4_unpacked );
    PyTuple_SET_ITEM( const_tuple_65892149d328db1832ef7b19b5ed49c9_tuple, 8, const_str_plain_hextets ); Py_INCREF( const_str_plain_hextets );
    PyTuple_SET_ITEM( const_tuple_65892149d328db1832ef7b19b5ed49c9_tuple, 9, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    PyTuple_SET_ITEM( const_tuple_65892149d328db1832ef7b19b5ed49c9_tuple, 10, const_str_plain_best_doublecolon_end ); Py_INCREF( const_str_plain_best_doublecolon_end );
    PyTuple_SET_ITEM( const_tuple_65892149d328db1832ef7b19b5ed49c9_tuple, 11, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_tuple_str_digest_c7ab6858d80d5886523932e9f31122a5_tuple = PyTuple_New( 1 );
    const_str_digest_c7ab6858d80d5886523932e9f31122a5 = UNSTREAM_STRING( &constant_bin[ 1189794 ], 33, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c7ab6858d80d5886523932e9f31122a5_tuple, 0, const_str_digest_c7ab6858d80d5886523932e9f31122a5 ); Py_INCREF( const_str_digest_c7ab6858d80d5886523932e9f31122a5 );
    const_str_plain__sanitize_ipv4_mapping = UNSTREAM_STRING( &constant_bin[ 1189827 ], 22, 1 );
    const_str_digest_af7c44765500d761caed98d6b342a4b2 = UNSTREAM_STRING( &constant_bin[ 1189849 ], 20, 0 );
    const_str_digest_1c80c0dc28ef266ab07daf979b303586 = UNSTREAM_STRING( &constant_bin[ 1189869 ], 11, 0 );
    const_tuple_15f66ca3e946709d7987ba025bdef6e0_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_15f66ca3e946709d7987ba025bdef6e0_tuple, 0, const_str_plain_ip_str ); Py_INCREF( const_str_plain_ip_str );
    PyTuple_SET_ITEM( const_tuple_15f66ca3e946709d7987ba025bdef6e0_tuple, 1, const_str_plain_validate_ipv4_address ); Py_INCREF( const_str_plain_validate_ipv4_address );
    PyTuple_SET_ITEM( const_tuple_15f66ca3e946709d7987ba025bdef6e0_tuple, 2, const_str_plain_symbols_re ); Py_INCREF( const_str_plain_symbols_re );
    PyTuple_SET_ITEM( const_tuple_15f66ca3e946709d7987ba025bdef6e0_tuple, 3, const_str_plain_hextet ); Py_INCREF( const_str_plain_hextet );
    const_str_digest_772f94bb551591f8965f8bb849e1ccbf = UNSTREAM_STRING( &constant_bin[ 1189880 ], 319, 0 );
    const_tuple_str_digest_ebebb18731664a12452b2ba6915b22ed_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_ebebb18731664a12452b2ba6915b22ed_tuple, 0, const_str_digest_ebebb18731664a12452b2ba6915b22ed ); Py_INCREF( const_str_digest_ebebb18731664a12452b2ba6915b22ed );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$utils$ipv6( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_eaecbbdd48d17b6a1c42bda51689e8ed;
static PyCodeObject *codeobj_bfee92c63ac98a46d424d73bc6695fd3;
static PyCodeObject *codeobj_aa68507ec27dee90f4434c315e0939b9;
static PyCodeObject *codeobj_ab731efb834b5e118690977801e25063;
static PyCodeObject *codeobj_541a429f35586a6a0cd3b59a94bf33e6;
static PyCodeObject *codeobj_7ab5c9b6af75db666b7c6bcd9c3dab79;
static PyCodeObject *codeobj_35ad1dfd7e9aba4e54d162918ef3a14f;
static PyCodeObject *codeobj_be468d806e3cd2e23de058aa59ce4a36;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_af7c44765500d761caed98d6b342a4b2 );
    codeobj_eaecbbdd48d17b6a1c42bda51689e8ed = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 271, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bfee92c63ac98a46d424d73bc6695fd3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_535b47feb618d0c6653e6a6c3df97b6b, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_aa68507ec27dee90f4434c315e0939b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__explode_shorthand_ip_string, 217, const_tuple_30e08b32baf52ade45cbf25724d774ce_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ab731efb834b5e118690977801e25063 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_shorthand_ip, 260, const_tuple_str_plain_ip_str_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_541a429f35586a6a0cd3b59a94bf33e6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sanitize_ipv4_mapping, 93, const_tuple_73895601aa21357b4c64898e695fec5c_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7ab5c9b6af75db666b7c6bcd9c3dab79 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unpack_ipv4, 130, const_tuple_str_plain_ip_str_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_35ad1dfd7e9aba4e54d162918ef3a14f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_clean_ipv6_address, 11, const_tuple_65892149d328db1832ef7b19b5ed49c9_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_be468d806e3cd2e23de058aa59ce4a36 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_valid_ipv6_address, 149, const_tuple_15f66ca3e946709d7987ba025bdef6e0_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$utils$ipv6$$$function_6__is_shorthand_ip$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void django$utils$ipv6$$$function_6__is_shorthand_ip$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


static PyObject *MAKE_FUNCTION_django$utils$ipv6$$$function_1_clean_ipv6_address( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$ipv6$$$function_2__sanitize_ipv4_mapping(  );


static PyObject *MAKE_FUNCTION_django$utils$ipv6$$$function_3__unpack_ipv4(  );


static PyObject *MAKE_FUNCTION_django$utils$ipv6$$$function_4_is_valid_ipv6_address(  );


static PyObject *MAKE_FUNCTION_django$utils$ipv6$$$function_5__explode_shorthand_ip_string(  );


static PyObject *MAKE_FUNCTION_django$utils$ipv6$$$function_6__is_shorthand_ip(  );


// The module function definitions.
static PyObject *impl_django$utils$ipv6$$$function_1_clean_ipv6_address( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ip_str = python_pars[ 0 ];
    PyObject *par_unpack_ipv4 = python_pars[ 1 ];
    PyObject *par_error_message = python_pars[ 2 ];
    PyObject *var_best_doublecolon_start = NULL;
    PyObject *var_best_doublecolon_len = NULL;
    PyObject *var_doublecolon_start = NULL;
    PyObject *var_doublecolon_len = NULL;
    PyObject *var_ipv4_unpacked = NULL;
    PyObject *var_hextets = NULL;
    PyObject *var_index = NULL;
    PyObject *var_best_doublecolon_end = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_35ad1dfd7e9aba4e54d162918ef3a14f = NULL;

    struct Nuitka_FrameObject *frame_35ad1dfd7e9aba4e54d162918ef3a14f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_int_neg_1;
    assert( var_best_doublecolon_start == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_best_doublecolon_start = tmp_assign_source_1;

    tmp_assign_source_2 = const_int_0;
    assert( var_best_doublecolon_len == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_best_doublecolon_len = tmp_assign_source_2;

    tmp_assign_source_3 = const_int_neg_1;
    assert( var_doublecolon_start == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_doublecolon_start = tmp_assign_source_3;

    tmp_assign_source_4 = const_int_0;
    assert( var_doublecolon_len == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_doublecolon_len = tmp_assign_source_4;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_35ad1dfd7e9aba4e54d162918ef3a14f, codeobj_35ad1dfd7e9aba4e54d162918ef3a14f, module_django$utils$ipv6, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_35ad1dfd7e9aba4e54d162918ef3a14f = cache_frame_35ad1dfd7e9aba4e54d162918ef3a14f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_35ad1dfd7e9aba4e54d162918ef3a14f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_35ad1dfd7e9aba4e54d162918ef3a14f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain_is_valid_ipv6_address );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_valid_ipv6_address );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_valid_ipv6_address" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_ip_str;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_35ad1dfd7e9aba4e54d162918ef3a14f->m_frame.f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 36;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain_ValidationError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValidationError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValidationError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_error_message;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error_message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_8c4f07c26ed1eafa99bbb0926295cf67 );
    frame_35ad1dfd7e9aba4e54d162918ef3a14f->m_frame.f_lineno = 37;
    tmp_raise_type_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 37;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain__explode_shorthand_ip_string );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__explode_shorthand_ip_string );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_explode_shorthand_ip_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_ip_str;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_35ad1dfd7e9aba4e54d162918ef3a14f->m_frame.f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_ip_str;
        par_ip_str = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain__sanitize_ipv4_mapping );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sanitize_ipv4_mapping );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_sanitize_ipv4_mapping" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_ip_str;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_35ad1dfd7e9aba4e54d162918ef3a14f->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_ip_str;
        par_ip_str = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_cond_value_2 = par_unpack_ipv4;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "unpack_ipv4" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain__unpack_ipv4 );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unpack_ipv4 );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unpack_ipv4" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_ip_str;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_35ad1dfd7e9aba4e54d162918ef3a14f->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ipv4_unpacked == NULL );
    var_ipv4_unpacked = tmp_assign_source_7;

    tmp_cond_value_3 = var_ipv4_unpacked;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = var_ipv4_unpacked;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    branch_no_2:;
    tmp_called_instance_1 = par_ip_str;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_35ad1dfd7e9aba4e54d162918ef3a14f->m_frame.f_lineno = 53;
    tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_hextets == NULL );
    var_hextets = tmp_assign_source_8;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain_range );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_range );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "range" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_1 = var_hextets;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_args_element_name_5 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_35ad1dfd7e9aba4e54d162918ef3a14f->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_9;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooo";
            exception_lineno = 55;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_assign_source_11 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_index;
        var_index = tmp_assign_source_11;
        Py_INCREF( var_index );
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = const_str_dot;
    tmp_subscribed_name_1 = var_hextets;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = var_index;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_compare_right_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_subscribed_name_2 = var_hextets;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_2 = var_index;

    if ( tmp_subscript_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "index" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_instance_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    frame_35ad1dfd7e9aba4e54d162918ef3a14f->m_frame.f_lineno = 58;
    tmp_ass_subvalue_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_lstrip, &PyTuple_GET_ITEM( const_tuple_str_plain_0_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    tmp_ass_subscribed_1 = var_hextets;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_ass_subscript_1 = var_index;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "index" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    branch_no_4:;
    tmp_subscribed_name_3 = var_hextets;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_3 = var_index;

    if ( tmp_subscript_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "index" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_cond_value_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 59;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_ass_subvalue_2 = const_str_plain_0;
    tmp_ass_subscribed_2 = var_hextets;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_ass_subscript_2 = var_index;

    if ( tmp_ass_subscript_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "index" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    branch_no_5:;
    tmp_subscribed_name_4 = var_hextets;

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_4 = var_index;

    if ( tmp_subscript_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "index" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    tmp_compare_right_2 = const_str_plain_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 63;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_left_name_1 = var_doublecolon_len;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "doublecolon_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_12 = tmp_left_name_1;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    var_doublecolon_len = tmp_assign_source_12;

    tmp_compare_left_3 = var_doublecolon_start;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "doublecolon_start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_3 = const_int_neg_1;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_13 = var_index;

    if ( tmp_assign_source_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "index" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    {
        PyObject *old = var_doublecolon_start;
        var_doublecolon_start = tmp_assign_source_13;
        Py_INCREF( var_doublecolon_start );
        Py_XDECREF( old );
    }

    branch_no_7:;
    tmp_compare_left_4 = var_doublecolon_len;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "doublecolon_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_4 = var_best_doublecolon_len;

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_doublecolon_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_14 = var_doublecolon_len;

    if ( tmp_assign_source_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "doublecolon_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    {
        PyObject *old = var_best_doublecolon_len;
        var_best_doublecolon_len = tmp_assign_source_14;
        Py_INCREF( var_best_doublecolon_len );
        Py_XDECREF( old );
    }

    tmp_assign_source_15 = var_doublecolon_start;

    if ( tmp_assign_source_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "doublecolon_start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    {
        PyObject *old = var_best_doublecolon_start;
        var_best_doublecolon_start = tmp_assign_source_15;
        Py_INCREF( var_best_doublecolon_start );
        Py_XDECREF( old );
    }

    branch_no_8:;
    goto branch_end_6;
    branch_no_6:;
    tmp_assign_source_16 = const_int_0;
    {
        PyObject *old = var_doublecolon_len;
        var_doublecolon_len = tmp_assign_source_16;
        Py_INCREF( var_doublecolon_len );
        Py_XDECREF( old );
    }

    tmp_assign_source_17 = const_int_neg_1;
    {
        PyObject *old = var_doublecolon_start;
        var_doublecolon_start = tmp_assign_source_17;
        Py_INCREF( var_doublecolon_start );
        Py_XDECREF( old );
    }

    branch_end_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_compare_left_5 = var_best_doublecolon_len;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_doublecolon_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = const_int_pos_1;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_2 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_left_name_2 = var_best_doublecolon_start;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_doublecolon_start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = var_best_doublecolon_len;

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_doublecolon_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_18 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_best_doublecolon_end == NULL );
    var_best_doublecolon_end = tmp_assign_source_18;

    tmp_compare_left_6 = var_best_doublecolon_end;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_len_arg_2 = var_hextets;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_right_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_6 );

        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_6 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_3 = var_hextets;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = LIST_COPY( const_list_str_empty_list );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_19 = tmp_left_name_3;
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    var_hextets = tmp_assign_source_19;

    branch_no_10:;
    tmp_ass_subvalue_3 = LIST_COPY( const_list_str_empty_list );
    tmp_ass_subscribed_3 = var_hextets;

    if ( tmp_ass_subscribed_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_1 = var_best_doublecolon_start;

    if ( tmp_start_name_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_doublecolon_start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_stop_name_1 = var_best_doublecolon_end;

    if ( tmp_stop_name_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_doublecolon_end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_step_name_1 = Py_None;
    tmp_ass_subscript_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    assert( tmp_ass_subscript_3 != NULL );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subscript_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_7 = var_best_doublecolon_start;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best_doublecolon_start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = const_int_0;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_left_name_4 = LIST_COPY( const_list_str_empty_list );
    tmp_right_name_4 = var_hextets;

    if ( tmp_right_name_4 == NULL )
    {
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_20 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_hextets;
        var_hextets = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    branch_no_11:;
    branch_no_9:;
    tmp_source_name_1 = const_str_chr_58;
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( tmp_called_name_7 != NULL );
    tmp_args_element_name_6 = var_hextets;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_35ad1dfd7e9aba4e54d162918ef3a14f->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_21;

    tmp_called_instance_3 = var_result;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_35ad1dfd7e9aba4e54d162918ef3a14f->m_frame.f_lineno = 90;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_lower );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35ad1dfd7e9aba4e54d162918ef3a14f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_35ad1dfd7e9aba4e54d162918ef3a14f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35ad1dfd7e9aba4e54d162918ef3a14f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_35ad1dfd7e9aba4e54d162918ef3a14f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_35ad1dfd7e9aba4e54d162918ef3a14f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_35ad1dfd7e9aba4e54d162918ef3a14f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_35ad1dfd7e9aba4e54d162918ef3a14f,
        type_description_1,
        par_ip_str,
        par_unpack_ipv4,
        par_error_message,
        var_best_doublecolon_start,
        var_best_doublecolon_len,
        var_doublecolon_start,
        var_doublecolon_len,
        var_ipv4_unpacked,
        var_hextets,
        var_index,
        var_best_doublecolon_end,
        var_result
    );


    // Release cached frame.
    if ( frame_35ad1dfd7e9aba4e54d162918ef3a14f == cache_frame_35ad1dfd7e9aba4e54d162918ef3a14f )
    {
        Py_DECREF( frame_35ad1dfd7e9aba4e54d162918ef3a14f );
    }
    cache_frame_35ad1dfd7e9aba4e54d162918ef3a14f = NULL;

    assertFrameObject( frame_35ad1dfd7e9aba4e54d162918ef3a14f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_1_clean_ipv6_address );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_ip_str );
    par_ip_str = NULL;

    Py_XDECREF( par_unpack_ipv4 );
    par_unpack_ipv4 = NULL;

    Py_XDECREF( par_error_message );
    par_error_message = NULL;

    Py_XDECREF( var_best_doublecolon_start );
    var_best_doublecolon_start = NULL;

    Py_XDECREF( var_best_doublecolon_len );
    var_best_doublecolon_len = NULL;

    Py_XDECREF( var_doublecolon_start );
    var_doublecolon_start = NULL;

    Py_XDECREF( var_doublecolon_len );
    var_doublecolon_len = NULL;

    Py_XDECREF( var_ipv4_unpacked );
    var_ipv4_unpacked = NULL;

    Py_XDECREF( var_hextets );
    var_hextets = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_best_doublecolon_end );
    var_best_doublecolon_end = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_ip_str );
    par_ip_str = NULL;

    Py_XDECREF( par_unpack_ipv4 );
    par_unpack_ipv4 = NULL;

    Py_XDECREF( par_error_message );
    par_error_message = NULL;

    Py_XDECREF( var_best_doublecolon_start );
    var_best_doublecolon_start = NULL;

    Py_XDECREF( var_best_doublecolon_len );
    var_best_doublecolon_len = NULL;

    Py_XDECREF( var_doublecolon_start );
    var_doublecolon_start = NULL;

    Py_XDECREF( var_doublecolon_len );
    var_doublecolon_len = NULL;

    Py_XDECREF( var_ipv4_unpacked );
    var_ipv4_unpacked = NULL;

    Py_XDECREF( var_hextets );
    var_hextets = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_best_doublecolon_end );
    var_best_doublecolon_end = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_1_clean_ipv6_address );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$utils$ipv6$$$function_2__sanitize_ipv4_mapping( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ip_str = python_pars[ 0 ];
    PyObject *var_hextets = NULL;
    PyObject *var_ipv4_address = NULL;
    PyObject *var_result = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_base_name_1;
    PyObject *tmp_base_name_2;
    PyObject *tmp_base_name_3;
    PyObject *tmp_base_name_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    PyObject *tmp_value_name_3;
    PyObject *tmp_value_name_4;
    static struct Nuitka_FrameObject *cache_frame_541a429f35586a6a0cd3b59a94bf33e6 = NULL;

    struct Nuitka_FrameObject *frame_541a429f35586a6a0cd3b59a94bf33e6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_541a429f35586a6a0cd3b59a94bf33e6, codeobj_541a429f35586a6a0cd3b59a94bf33e6, module_django$utils$ipv6, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_541a429f35586a6a0cd3b59a94bf33e6 = cache_frame_541a429f35586a6a0cd3b59a94bf33e6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_541a429f35586a6a0cd3b59a94bf33e6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_541a429f35586a6a0cd3b59a94bf33e6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_2 = par_ip_str;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_541a429f35586a6a0cd3b59a94bf33e6->m_frame.f_lineno = 107;
    tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_541a429f35586a6a0cd3b59a94bf33e6->m_frame.f_lineno = 107;
    tmp_cond_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_digest_84357d32e37e3f2ff1b5a71c74ce9bcb_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 107;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = par_ip_str;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_instance_3 = par_ip_str;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_541a429f35586a6a0cd3b59a94bf33e6->m_frame.f_lineno = 111;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_hextets == NULL );
    var_hextets = tmp_assign_source_1;

    tmp_compare_left_1 = const_str_dot;
    tmp_subscribed_name_1 = var_hextets;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_neg_1;
    tmp_compare_right_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = par_ip_str;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_left_name_1 = const_str_digest_1c80c0dc28ef266ab07daf979b303586;
    tmp_right_name_1 = PyTuple_New( 4 );
    tmp_subscribed_name_3 = var_hextets;

    if ( tmp_subscribed_name_3 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_int_pos_6;
    tmp_subscribed_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_2 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 118;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = const_slice_int_0_int_pos_2_none;
    tmp_value_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_value_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 118;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_base_name_1 = const_int_pos_16;
    tmp_tuple_element_1 = TO_INT2( tmp_value_name_1, tmp_base_name_1 );
    Py_DECREF( tmp_value_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 118;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_subscribed_name_5 = var_hextets;

    if ( tmp_subscribed_name_5 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_4 = const_int_pos_6;
    tmp_subscribed_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_4 );
    if ( tmp_subscribed_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 119;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_5 = const_slice_int_pos_2_int_pos_4_none;
    tmp_value_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_5 );
    Py_DECREF( tmp_subscribed_name_4 );
    if ( tmp_value_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 119;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_base_name_2 = const_int_pos_16;
    tmp_tuple_element_1 = TO_INT2( tmp_value_name_2, tmp_base_name_2 );
    Py_DECREF( tmp_value_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 119;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_subscribed_name_7 = var_hextets;

    if ( tmp_subscribed_name_7 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_6 = const_int_pos_7;
    tmp_subscribed_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_6 );
    if ( tmp_subscribed_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 120;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_7 = const_slice_int_0_int_pos_2_none;
    tmp_value_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_7 );
    Py_DECREF( tmp_subscribed_name_6 );
    if ( tmp_value_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 120;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_base_name_3 = const_int_pos_16;
    tmp_tuple_element_1 = TO_INT2( tmp_value_name_3, tmp_base_name_3 );
    Py_DECREF( tmp_value_name_3 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 120;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_subscribed_name_9 = var_hextets;

    if ( tmp_subscribed_name_9 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_8 = const_int_pos_7;
    tmp_subscribed_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_8 );
    if ( tmp_subscribed_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 121;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_9 = const_slice_int_pos_2_int_pos_4_none;
    tmp_value_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_9 );
    Py_DECREF( tmp_subscribed_name_8 );
    if ( tmp_value_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 121;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_base_name_4 = const_int_pos_16;
    tmp_tuple_element_1 = TO_INT2( tmp_value_name_4, tmp_base_name_4 );
    Py_DECREF( tmp_value_name_4 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 121;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 3, tmp_tuple_element_1 );
    tmp_assign_source_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_ipv4_address == NULL );
    var_ipv4_address = tmp_assign_source_2;

    tmp_source_name_1 = const_str_chr_58;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( tmp_called_name_1 != NULL );
    tmp_subscribed_name_10 = var_hextets;

    if ( tmp_subscribed_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextets" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_10 = const_slice_int_0_int_pos_6_none;
    tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 124;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_541a429f35586a6a0cd3b59a94bf33e6->m_frame.f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_3;

    tmp_left_name_2 = var_result;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_left_name_3 = const_str_chr_58;
    tmp_right_name_3 = var_ipv4_address;

    if ( tmp_right_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ipv4_address" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_4 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    var_result = tmp_assign_source_4;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_541a429f35586a6a0cd3b59a94bf33e6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_541a429f35586a6a0cd3b59a94bf33e6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_541a429f35586a6a0cd3b59a94bf33e6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_541a429f35586a6a0cd3b59a94bf33e6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_541a429f35586a6a0cd3b59a94bf33e6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_541a429f35586a6a0cd3b59a94bf33e6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_541a429f35586a6a0cd3b59a94bf33e6,
        type_description_1,
        par_ip_str,
        var_hextets,
        var_ipv4_address,
        var_result
    );


    // Release cached frame.
    if ( frame_541a429f35586a6a0cd3b59a94bf33e6 == cache_frame_541a429f35586a6a0cd3b59a94bf33e6 )
    {
        Py_DECREF( frame_541a429f35586a6a0cd3b59a94bf33e6 );
    }
    cache_frame_541a429f35586a6a0cd3b59a94bf33e6 = NULL;

    assertFrameObject( frame_541a429f35586a6a0cd3b59a94bf33e6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_result;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_2__sanitize_ipv4_mapping );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_ip_str );
    par_ip_str = NULL;

    Py_XDECREF( var_hextets );
    var_hextets = NULL;

    Py_XDECREF( var_ipv4_address );
    var_ipv4_address = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_ip_str );
    par_ip_str = NULL;

    Py_XDECREF( var_hextets );
    var_hextets = NULL;

    Py_XDECREF( var_ipv4_address );
    var_ipv4_address = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_2__sanitize_ipv4_mapping );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$utils$ipv6$$$function_3__unpack_ipv4( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ip_str = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_7ab5c9b6af75db666b7c6bcd9c3dab79 = NULL;

    struct Nuitka_FrameObject *frame_7ab5c9b6af75db666b7c6bcd9c3dab79;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7ab5c9b6af75db666b7c6bcd9c3dab79, codeobj_7ab5c9b6af75db666b7c6bcd9c3dab79, module_django$utils$ipv6, sizeof(void *) );
    frame_7ab5c9b6af75db666b7c6bcd9c3dab79 = cache_frame_7ab5c9b6af75db666b7c6bcd9c3dab79;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7ab5c9b6af75db666b7c6bcd9c3dab79 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7ab5c9b6af75db666b7c6bcd9c3dab79 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_2 = par_ip_str;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_7ab5c9b6af75db666b7c6bcd9c3dab79->m_frame.f_lineno = 143;
    tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_7ab5c9b6af75db666b7c6bcd9c3dab79->m_frame.f_lineno = 143;
    tmp_cond_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_digest_84357d32e37e3f2ff1b5a71c74ce9bcb_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 143;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_instance_3 = par_ip_str;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_7ab5c9b6af75db666b7c6bcd9c3dab79->m_frame.f_lineno = 146;
    tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_rsplit, &PyTuple_GET_ITEM( const_tuple_str_chr_58_int_pos_1_tuple, 0 ) );

    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ab5c9b6af75db666b7c6bcd9c3dab79 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ab5c9b6af75db666b7c6bcd9c3dab79 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ab5c9b6af75db666b7c6bcd9c3dab79 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7ab5c9b6af75db666b7c6bcd9c3dab79, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7ab5c9b6af75db666b7c6bcd9c3dab79->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7ab5c9b6af75db666b7c6bcd9c3dab79, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7ab5c9b6af75db666b7c6bcd9c3dab79,
        type_description_1,
        par_ip_str
    );


    // Release cached frame.
    if ( frame_7ab5c9b6af75db666b7c6bcd9c3dab79 == cache_frame_7ab5c9b6af75db666b7c6bcd9c3dab79 )
    {
        Py_DECREF( frame_7ab5c9b6af75db666b7c6bcd9c3dab79 );
    }
    cache_frame_7ab5c9b6af75db666b7c6bcd9c3dab79 = NULL;

    assertFrameObject( frame_7ab5c9b6af75db666b7c6bcd9c3dab79 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_3__unpack_ipv4 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_ip_str );
    par_ip_str = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_ip_str );
    par_ip_str = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_3__unpack_ipv4 );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$utils$ipv6$$$function_4_is_valid_ipv6_address( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ip_str = python_pars[ 0 ];
    PyObject *var_validate_ipv4_address = NULL;
    PyObject *var_symbols_re = NULL;
    PyObject *var_hextet = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_base_name_1;
    PyObject *tmp_base_name_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    PyObject *tmp_called_instance_10;
    PyObject *tmp_called_instance_11;
    PyObject *tmp_called_instance_12;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_In_1;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    static struct Nuitka_FrameObject *cache_frame_be468d806e3cd2e23de058aa59ce4a36 = NULL;

    struct Nuitka_FrameObject *frame_be468d806e3cd2e23de058aa59ce4a36;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_be468d806e3cd2e23de058aa59ce4a36, codeobj_be468d806e3cd2e23de058aa59ce4a36, module_django$utils$ipv6, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_be468d806e3cd2e23de058aa59ce4a36 = cache_frame_be468d806e3cd2e23de058aa59ce4a36;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be468d806e3cd2e23de058aa59ce4a36 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be468d806e3cd2e23de058aa59ce4a36 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_320a1371aee1b426fa9eb85eddaf3fe5;
    tmp_globals_name_1 = (PyObject *)moduledict_django$utils$ipv6;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_validate_ipv4_address_tuple;
    tmp_level_name_1 = const_int_0;
    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 159;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_validate_ipv4_address );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_validate_ipv4_address == NULL );
    var_validate_ipv4_address = tmp_assign_source_1;

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 161;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 161;
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_afeb4dd61f2c15f557e3cf9075f592ea_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_symbols_re == NULL );
    var_symbols_re = tmp_assign_source_2;

    tmp_source_name_1 = var_symbols_re;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_match );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_ip_str;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 162;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 162;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_1 = const_str_chr_58;
    tmp_compare_right_1 = par_ip_str;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_called_instance_2 = par_ip_str;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 170;
    tmp_compare_left_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_count, &PyTuple_GET_ITEM( const_tuple_str_digest_ebebb18731664a12452b2ba6915b22ed_tuple, 0 ) );

    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_compare_left_3 = const_str_digest_25221799237c7e05d540ffe63fdc4f8b;
    tmp_compare_right_3 = par_ip_str;

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_4:;
    tmp_called_instance_3 = par_ip_str;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 178;
    tmp_and_left_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 178;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_called_instance_4 = par_ip_str;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 178;
    tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_digest_ebebb18731664a12452b2ba6915b22ed_tuple, 0 ) );

    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
    tmp_or_left_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_or_left_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 179;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    Py_DECREF( tmp_or_left_value_1 );
    tmp_called_instance_5 = par_ip_str;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 179;
    tmp_and_left_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_endswith, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 179;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    Py_DECREF( tmp_and_left_value_2 );
    tmp_called_instance_6 = par_ip_str;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 179;
    tmp_operand_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_endswith, &PyTuple_GET_ITEM( const_tuple_str_digest_ebebb18731664a12452b2ba6915b22ed_tuple, 0 ) );

    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_2 );
    tmp_or_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_or_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_value_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_2 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 179;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_5:;
    tmp_called_instance_7 = par_ip_str;

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 183;
    tmp_compare_left_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_count, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_int_pos_7;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 183;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_Gt_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_6:;
    tmp_compexpr_left_1 = const_str_digest_ebebb18731664a12452b2ba6915b22ed;
    tmp_compexpr_right_1 = par_ip_str;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_3 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    assert( !(tmp_and_left_truth_3 == -1) );
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    tmp_called_instance_8 = par_ip_str;

    if ( tmp_called_instance_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 187;
    tmp_compexpr_left_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_count, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_pos_7;
    tmp_and_right_value_3 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    Py_INCREF( tmp_and_left_value_3 );
    tmp_cond_value_3 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 187;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_instance_9 = par_ip_str;

    if ( tmp_called_instance_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 189;
    tmp_compare_left_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_count, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = const_int_pos_3;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 189;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_8:;
    branch_no_7:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain__explode_shorthand_ip_string );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__explode_shorthand_ip_string );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_explode_shorthand_ip_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_ip_str;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 192;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_ip_str;
        par_ip_str = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_called_instance_10 = par_ip_str;

    CHECK_OBJECT( tmp_called_instance_10 );
    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 196;
    tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            exception_lineno = 196;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_hextet;
        var_hextet = tmp_assign_source_6;
        Py_INCREF( var_hextet );
        Py_XDECREF( old );
    }

    tmp_called_instance_11 = var_hextet;

    CHECK_OBJECT( tmp_called_instance_11 );
    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 197;
    tmp_compare_left_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_count, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_compare_right_6 = const_int_pos_3;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        exception_lineno = 197;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_6 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_called_instance_12 = par_ip_str;

    if ( tmp_called_instance_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 200;
    tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_1 = const_int_neg_1;
    tmp_compare_left_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_compare_right_7 = var_hextet;

    if ( tmp_compare_right_7 == NULL )
    {
        Py_DECREF( tmp_compare_left_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        exception_lineno = 200;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_7 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_no_10;
    }
    else
    {
        goto branch_yes_10;
    }
    branch_yes_10:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_10:;
    // Tried code:
    tmp_called_name_3 = var_validate_ipv4_address;

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "validate_ipv4_address" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_3 = var_hextet;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = 203;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_be468d806e3cd2e23de058aa59ce4a36, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_be468d806e3cd2e23de058aa59ce4a36, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_8 = PyThreadState_GET()->exc_type;
    tmp_compare_right_8 = GET_STRING_DICT_VALUE( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain_ValidationError );

    if (unlikely( tmp_compare_right_8 == NULL ))
    {
        tmp_compare_right_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValidationError );
    }

    if ( tmp_compare_right_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValidationError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_4;
    goto branch_end_11;
    branch_no_11:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 202;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_be468d806e3cd2e23de058aa59ce4a36->m_frame) frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_4;
    branch_end_11:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_4_is_valid_ipv6_address );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    // End of try:
    try_end_1:;
    goto branch_end_9;
    branch_no_9:;
    // Tried code:
    tmp_value_name_1 = var_hextet;

    if ( tmp_value_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }

    tmp_base_name_1 = const_int_pos_16;
    tmp_compexpr_left_3 = TO_INT2( tmp_value_name_1, tmp_base_name_1 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
    tmp_compexpr_right_3 = const_int_0;
    tmp_or_left_value_2 = RICH_COMPARE_LT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 210;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    Py_DECREF( tmp_or_left_value_2 );
    tmp_value_name_2 = var_hextet;

    if ( tmp_value_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }

    tmp_base_name_2 = const_int_pos_16;
    tmp_compexpr_left_4 = TO_INT2( tmp_value_name_2, tmp_base_name_2 );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
    tmp_compexpr_right_4 = const_int_pos_65535;
    tmp_or_right_value_2 = RICH_COMPARE_GT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
    tmp_cond_value_4 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_cond_value_4 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 210;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_12:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_2 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_be468d806e3cd2e23de058aa59ce4a36, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_be468d806e3cd2e23de058aa59ce4a36, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_9 = PyThreadState_GET()->exc_type;
    tmp_compare_right_9 = PyExc_ValueError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "oooo";
        goto try_except_handler_6;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_6;
    goto branch_end_13;
    branch_no_13:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 207;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_be468d806e3cd2e23de058aa59ce4a36->m_frame) frame_be468d806e3cd2e23de058aa59ce4a36->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_6;
    branch_end_13:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_4_is_valid_ipv6_address );
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    // End of try:
    try_end_2:;
    branch_end_9:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_be468d806e3cd2e23de058aa59ce4a36 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_be468d806e3cd2e23de058aa59ce4a36 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_be468d806e3cd2e23de058aa59ce4a36 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be468d806e3cd2e23de058aa59ce4a36, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be468d806e3cd2e23de058aa59ce4a36->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be468d806e3cd2e23de058aa59ce4a36, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be468d806e3cd2e23de058aa59ce4a36,
        type_description_1,
        par_ip_str,
        var_validate_ipv4_address,
        var_symbols_re,
        var_hextet
    );


    // Release cached frame.
    if ( frame_be468d806e3cd2e23de058aa59ce4a36 == cache_frame_be468d806e3cd2e23de058aa59ce4a36 )
    {
        Py_DECREF( frame_be468d806e3cd2e23de058aa59ce4a36 );
    }
    cache_frame_be468d806e3cd2e23de058aa59ce4a36 = NULL;

    assertFrameObject( frame_be468d806e3cd2e23de058aa59ce4a36 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_4_is_valid_ipv6_address );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_ip_str );
    par_ip_str = NULL;

    Py_XDECREF( var_validate_ipv4_address );
    var_validate_ipv4_address = NULL;

    Py_XDECREF( var_symbols_re );
    var_symbols_re = NULL;

    Py_XDECREF( var_hextet );
    var_hextet = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_ip_str );
    par_ip_str = NULL;

    Py_XDECREF( var_validate_ipv4_address );
    var_validate_ipv4_address = NULL;

    Py_XDECREF( var_symbols_re );
    var_symbols_re = NULL;

    Py_XDECREF( var_hextet );
    var_hextet = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_4_is_valid_ipv6_address );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$utils$ipv6$$$function_5__explode_shorthand_ip_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ip_str = python_pars[ 0 ];
    PyObject *var_hextet = NULL;
    PyObject *var_fill_to = NULL;
    PyObject *var_sep = NULL;
    PyObject *var_new_ip = NULL;
    PyObject *var___ = NULL;
    PyObject *var_ret_ip = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Gt_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_aa68507ec27dee90f4434c315e0939b9 = NULL;

    struct Nuitka_FrameObject *frame_aa68507ec27dee90f4434c315e0939b9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aa68507ec27dee90f4434c315e0939b9, codeobj_aa68507ec27dee90f4434c315e0939b9, module_django$utils$ipv6, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aa68507ec27dee90f4434c315e0939b9 = cache_frame_aa68507ec27dee90f4434c315e0939b9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aa68507ec27dee90f4434c315e0939b9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aa68507ec27dee90f4434c315e0939b9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain__is_shorthand_ip );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__is_shorthand_ip );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_is_shorthand_ip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_ip_str;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_aa68507ec27dee90f4434c315e0939b9->m_frame.f_lineno = 227;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 227;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = par_ip_str;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_instance_1 = par_ip_str;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_aa68507ec27dee90f4434c315e0939b9->m_frame.f_lineno = 231;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_digest_ebebb18731664a12452b2ba6915b22ed_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_hextet == NULL );
    var_hextet = tmp_assign_source_1;

    tmp_compare_left_1 = const_str_dot;
    tmp_called_instance_2 = par_ip_str;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_aa68507ec27dee90f4434c315e0939b9->m_frame.f_lineno = 236;
    tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_neg_1;
    tmp_compare_right_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = const_int_pos_7;
    assert( var_fill_to == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_fill_to = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_3 = const_int_pos_8;
    assert( var_fill_to == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_fill_to = tmp_assign_source_3;

    branch_end_2:;
    tmp_len_arg_1 = var_hextet;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 241;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_subscribed_name_2 = var_hextet;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_int_0;
    tmp_called_instance_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_aa68507ec27dee90f4434c315e0939b9->m_frame.f_lineno = 242;
    tmp_len_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_3 = var_hextet;

    if ( tmp_subscribed_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_3 = const_int_pos_1;
    tmp_called_instance_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 242;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_aa68507ec27dee90f4434c315e0939b9->m_frame.f_lineno = 242;
    tmp_len_arg_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_len_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 242;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_3 );
    Py_DECREF( tmp_len_arg_3 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 242;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_sep == NULL );
    var_sep = tmp_assign_source_4;

    tmp_subscribed_name_4 = var_hextet;

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_4 = const_int_0;
    tmp_called_instance_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_aa68507ec27dee90f4434c315e0939b9->m_frame.f_lineno = 243;
    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_new_ip == NULL );
    var_new_ip = tmp_assign_source_5;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain_range );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_range );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "range" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = var_fill_to;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fill_to" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = var_sep;

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_aa68507ec27dee90f4434c315e0939b9->m_frame.f_lineno = 245;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            exception_lineno = 245;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var___;
        var___ = tmp_assign_source_8;
        Py_INCREF( var___ );
        Py_XDECREF( old );
    }

    tmp_called_instance_6 = var_new_ip;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_ip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    frame_aa68507ec27dee90f4434c315e0939b9->m_frame.f_lineno = 246;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_plain_0000_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_left_name_3 = var_new_ip;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_ip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_5 = var_hextet;

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_5 = const_int_pos_1;
    tmp_called_instance_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_called_instance_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_aa68507ec27dee90f4434c315e0939b9->m_frame.f_lineno = 247;
    tmp_right_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_7 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_9 = tmp_left_name_3;
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    var_new_ip = tmp_assign_source_9;

    goto branch_end_3;
    branch_no_3:;
    tmp_called_instance_8 = par_ip_str;

    if ( tmp_called_instance_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 250;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_aa68507ec27dee90f4434c315e0939b9->m_frame.f_lineno = 250;
    tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_new_ip == NULL );
    var_new_ip = tmp_assign_source_10;

    branch_end_3:;
    tmp_assign_source_11 = PyList_New( 0 );
    assert( var_ret_ip == NULL );
    var_ret_ip = tmp_assign_source_11;

    tmp_iter_arg_2 = var_new_ip;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_12;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            exception_lineno = 255;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_14 );
    {
        PyObject *old = var_hextet;
        var_hextet = tmp_assign_source_14;
        Py_INCREF( var_hextet );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = var_ret_ip;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ret_ip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    tmp_left_name_5 = const_str_plain_0;
    tmp_left_name_6 = const_int_pos_4;
    tmp_len_arg_4 = var_hextet;

    if ( tmp_len_arg_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }

    tmp_right_name_5 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    tmp_right_name_4 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    tmp_left_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    tmp_right_name_6 = var_hextet;

    if ( tmp_right_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hextet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }

    tmp_called_instance_9 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_called_instance_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    frame_aa68507ec27dee90f4434c315e0939b9->m_frame.f_lineno = 256;
    tmp_args_element_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_lower );
    Py_DECREF( tmp_called_instance_9 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    frame_aa68507ec27dee90f4434c315e0939b9->m_frame.f_lineno = 256;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_source_name_2 = const_str_chr_58;
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    assert( tmp_called_name_4 != NULL );
    tmp_args_element_name_4 = var_ret_ip;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ret_ip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_aa68507ec27dee90f4434c315e0939b9->m_frame.f_lineno = 257;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa68507ec27dee90f4434c315e0939b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa68507ec27dee90f4434c315e0939b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa68507ec27dee90f4434c315e0939b9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aa68507ec27dee90f4434c315e0939b9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aa68507ec27dee90f4434c315e0939b9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aa68507ec27dee90f4434c315e0939b9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aa68507ec27dee90f4434c315e0939b9,
        type_description_1,
        par_ip_str,
        var_hextet,
        var_fill_to,
        var_sep,
        var_new_ip,
        var___,
        var_ret_ip
    );


    // Release cached frame.
    if ( frame_aa68507ec27dee90f4434c315e0939b9 == cache_frame_aa68507ec27dee90f4434c315e0939b9 )
    {
        Py_DECREF( frame_aa68507ec27dee90f4434c315e0939b9 );
    }
    cache_frame_aa68507ec27dee90f4434c315e0939b9 = NULL;

    assertFrameObject( frame_aa68507ec27dee90f4434c315e0939b9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_5__explode_shorthand_ip_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_ip_str );
    par_ip_str = NULL;

    Py_XDECREF( var_hextet );
    var_hextet = NULL;

    Py_XDECREF( var_fill_to );
    var_fill_to = NULL;

    Py_XDECREF( var_sep );
    var_sep = NULL;

    Py_XDECREF( var_new_ip );
    var_new_ip = NULL;

    Py_XDECREF( var___ );
    var___ = NULL;

    Py_XDECREF( var_ret_ip );
    var_ret_ip = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_ip_str );
    par_ip_str = NULL;

    Py_XDECREF( var_hextet );
    var_hextet = NULL;

    Py_XDECREF( var_fill_to );
    var_fill_to = NULL;

    Py_XDECREF( var_sep );
    var_sep = NULL;

    Py_XDECREF( var_new_ip );
    var_new_ip = NULL;

    Py_XDECREF( var___ );
    var___ = NULL;

    Py_XDECREF( var_ret_ip );
    var_ret_ip = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_5__explode_shorthand_ip_string );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$utils$ipv6$$$function_6__is_shorthand_ip( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ip_str = python_pars[ 0 ];
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_ab731efb834b5e118690977801e25063 = NULL;

    struct Nuitka_FrameObject *frame_ab731efb834b5e118690977801e25063;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ab731efb834b5e118690977801e25063, codeobj_ab731efb834b5e118690977801e25063, module_django$utils$ipv6, sizeof(void *) );
    frame_ab731efb834b5e118690977801e25063 = cache_frame_ab731efb834b5e118690977801e25063;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ab731efb834b5e118690977801e25063 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ab731efb834b5e118690977801e25063 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_ip_str;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_ab731efb834b5e118690977801e25063->m_frame.f_lineno = 269;
    tmp_compare_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_count, &PyTuple_GET_ITEM( const_tuple_str_digest_ebebb18731664a12452b2ba6915b22ed_tuple, 0 ) );

    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 269;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_any );
    assert( tmp_called_name_1 != NULL );
    tmp_called_instance_2 = par_ip_str;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_ab731efb834b5e118690977801e25063->m_frame.f_lineno = 271;
    tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_1;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        django$utils$ipv6$$$function_6__is_shorthand_ip$$$genexpr_1_genexpr_context,
        module_django$utils$ipv6,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_a591f529fe0f8292e666e2026f83e41a,
#endif
        codeobj_eaecbbdd48d17b6a1c42bda51689e8ed,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 1 ); 


    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_6__is_shorthand_ip );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_6__is_shorthand_ip );
    return NULL;
    outline_result_1:;
    tmp_args_element_name_1 = tmp_outline_return_value_1;
    frame_ab731efb834b5e118690977801e25063->m_frame.f_lineno = 271;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 271;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab731efb834b5e118690977801e25063 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab731efb834b5e118690977801e25063 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab731efb834b5e118690977801e25063 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ab731efb834b5e118690977801e25063, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ab731efb834b5e118690977801e25063->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ab731efb834b5e118690977801e25063, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ab731efb834b5e118690977801e25063,
        type_description_1,
        par_ip_str
    );


    // Release cached frame.
    if ( frame_ab731efb834b5e118690977801e25063 == cache_frame_ab731efb834b5e118690977801e25063 )
    {
        Py_DECREF( frame_ab731efb834b5e118690977801e25063 );
    }
    cache_frame_ab731efb834b5e118690977801e25063 = NULL;

    assertFrameObject( frame_ab731efb834b5e118690977801e25063 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_6__is_shorthand_ip );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_ip_str );
    par_ip_str = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_ip_str );
    par_ip_str = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$ipv6$$$function_6__is_shorthand_ip );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct django$utils$ipv6$$$function_6__is_shorthand_ip$$$genexpr_1_genexpr_locals {
    PyObject *var_x
    PyObject *tmp_iter_value_0
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$utils$ipv6$$$function_6__is_shorthand_ip$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void django$utils$ipv6$$$function_6__is_shorthand_ip$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_x = NULL;
    PyObject *tmp_iter_value_0 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_eaecbbdd48d17b6a1c42bda51689e8ed, module_django$utils$ipv6, sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->m_frame.f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    if ( generator->m_closure[0] == NULL )
    {
        tmp_next_source_1 = NULL;
    }
    else
    {
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
    }

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "No";
            exception_lineno = 271;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_assign_source_2 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_assign_source_2 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_2;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_len_arg_1 = var_x;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    tmp_compexpr_right_1 = const_int_pos_4;
    tmp_expression_name_1 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            type_description_1,
            NULL,
            var_x
        );


        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}



static PyObject *MAKE_FUNCTION_django$utils$ipv6$$$function_1_clean_ipv6_address( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$ipv6$$$function_1_clean_ipv6_address,
        const_str_plain_clean_ipv6_address,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_35ad1dfd7e9aba4e54d162918ef3a14f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$ipv6,
        const_str_digest_28ca88f071337974d041b9e4d690276e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$ipv6$$$function_2__sanitize_ipv4_mapping(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$ipv6$$$function_2__sanitize_ipv4_mapping,
        const_str_plain__sanitize_ipv4_mapping,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_541a429f35586a6a0cd3b59a94bf33e6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$ipv6,
        const_str_digest_772f94bb551591f8965f8bb849e1ccbf,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$ipv6$$$function_3__unpack_ipv4(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$ipv6$$$function_3__unpack_ipv4,
        const_str_plain__unpack_ipv4,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7ab5c9b6af75db666b7c6bcd9c3dab79,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$ipv6,
        const_str_digest_9df67fbae5be2131df2196d0d20135cd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$ipv6$$$function_4_is_valid_ipv6_address(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$ipv6$$$function_4_is_valid_ipv6_address,
        const_str_plain_is_valid_ipv6_address,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_be468d806e3cd2e23de058aa59ce4a36,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$ipv6,
        const_str_digest_47d6b4563740fd244bd70a59b306810b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$ipv6$$$function_5__explode_shorthand_ip_string(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$ipv6$$$function_5__explode_shorthand_ip_string,
        const_str_plain__explode_shorthand_ip_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aa68507ec27dee90f4434c315e0939b9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$ipv6,
        const_str_digest_db98c59dfbcf07f80b7672c9c9ee911e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$ipv6$$$function_6__is_shorthand_ip(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$ipv6$$$function_6__is_shorthand_ip,
        const_str_plain__is_shorthand_ip,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ab731efb834b5e118690977801e25063,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$ipv6,
        const_str_digest_23d753b66c064c45a8645d09f3759d54,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$utils$ipv6 =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.ipv6",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( django$utils$ipv6 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$utils$ipv6 );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.utils.ipv6: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.utils.ipv6: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$utils$ipv6" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$utils$ipv6 = Py_InitModule4(
        "django.utils.ipv6",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$utils$ipv6 = PyModule_Create( &mdef_django$utils$ipv6 );
#endif

    moduledict_django$utils$ipv6 = MODULE_DICT( module_django$utils$ipv6 );

    CHECK_OBJECT( module_django$utils$ipv6 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9b02f1b0a2e763871df839f8958b3dfc, module_django$utils$ipv6 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_tuple_element_1;
    struct Nuitka_FrameObject *frame_bfee92c63ac98a46d424d73bc6695fd3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_bfee92c63ac98a46d424d73bc6695fd3 = MAKE_MODULE_FRAME( codeobj_bfee92c63ac98a46d424d73bc6695fd3, module_django$utils$ipv6 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_bfee92c63ac98a46d424d73bc6695fd3 );
    assert( Py_REFCNT( frame_bfee92c63ac98a46d424d73bc6695fd3 ) == 2 );

    // Framed code:
    frame_bfee92c63ac98a46d424d73bc6695fd3->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("importlib._bootstrap");
        if (likely( module != NULL ))
        {
            tmp_called_name_1 = PyObject_GetAttr( module, const_str_plain_ModuleSpec );
        }
        else
        {
            tmp_called_name_1 = NULL;
        }
    }

    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_9b02f1b0a2e763871df839f8958b3dfc;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_bfee92c63ac98a46d424d73bc6695fd3->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_467c9722f19d9d40d148689532cdc0b1;
    UPDATE_STRING_DICT0( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_re;
    tmp_globals_name_1 = (PyObject *)moduledict_django$utils$ipv6;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_bfee92c63ac98a46d424d73bc6695fd3->m_frame.f_lineno = 4;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_digest_dfb6e1abbed3113ee07234fdc458a320;
    tmp_globals_name_2 = (PyObject *)moduledict_django$utils$ipv6;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_ValidationError_tuple;
    tmp_level_name_2 = const_int_0;
    frame_bfee92c63ac98a46d424d73bc6695fd3->m_frame.f_lineno = 6;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ValidationError );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain_ValidationError, tmp_assign_source_8 );
    tmp_name_name_3 = const_str_digest_6fed4619fa8d4c69fdb5c74f190acfee;
    tmp_globals_name_3 = (PyObject *)moduledict_django$utils$ipv6;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_range_tuple;
    tmp_level_name_3 = const_int_0;
    frame_bfee92c63ac98a46d424d73bc6695fd3->m_frame.f_lineno = 7;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_range );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_9 );
    tmp_name_name_4 = const_str_digest_cd342f2524b448df63e7f67ee363fe83;
    tmp_globals_name_4 = (PyObject *)moduledict_django$utils$ipv6;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_ugettext_lazy_tuple;
    tmp_level_name_4 = const_int_0;
    frame_bfee92c63ac98a46d424d73bc6695fd3->m_frame.f_lineno = 8;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_ugettext_lazy );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain__, tmp_assign_source_10 );
    tmp_defaults_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = Py_False;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain__ );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 12;

        goto frame_exception_exit_1;
    }

    frame_bfee92c63ac98a46d424d73bc6695fd3->m_frame.f_lineno = 12;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_c7ab6858d80d5886523932e9f31122a5_tuple, 0 ) );

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_11 = MAKE_FUNCTION_django$utils$ipv6$$$function_1_clean_ipv6_address( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain_clean_ipv6_address, tmp_assign_source_11 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bfee92c63ac98a46d424d73bc6695fd3 );
#endif
    popFrameStack();

    assertFrameObject( frame_bfee92c63ac98a46d424d73bc6695fd3 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bfee92c63ac98a46d424d73bc6695fd3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bfee92c63ac98a46d424d73bc6695fd3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bfee92c63ac98a46d424d73bc6695fd3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bfee92c63ac98a46d424d73bc6695fd3, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_12 = MAKE_FUNCTION_django$utils$ipv6$$$function_2__sanitize_ipv4_mapping(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain__sanitize_ipv4_mapping, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_django$utils$ipv6$$$function_3__unpack_ipv4(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain__unpack_ipv4, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_django$utils$ipv6$$$function_4_is_valid_ipv6_address(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain_is_valid_ipv6_address, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_django$utils$ipv6$$$function_5__explode_shorthand_ip_string(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain__explode_shorthand_ip_string, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_django$utils$ipv6$$$function_6__is_shorthand_ip(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$ipv6, (Nuitka_StringObject *)const_str_plain__is_shorthand_ip, tmp_assign_source_16 );

    return MOD_RETURN_VALUE( module_django$utils$ipv6 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
