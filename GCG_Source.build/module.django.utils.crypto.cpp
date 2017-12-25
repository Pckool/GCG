/* Generated code for Python source for module 'django.utils.crypto'
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

/* The _module_django$utils$crypto is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$utils$crypto;
PyDictObject *moduledict_django$utils$crypto;

/* The module constants used, if any. */
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_digest_d020d7680a7e61670f2e44e8ba3b4e40;
extern PyObject *const_int_pos_12;
extern PyObject *const_str_plain_inner;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_unhexlify;
static PyObject *const_str_plain_outer;
static PyObject *const_str_plain_key_salt;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_digest_size;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_hmac;
static PyObject *const_tuple_str_plain_val1_str_plain_val2_tuple;
extern PyObject *const_str_digest_e3393b2e61653c3df2c7d436c253bbee;
static PyObject *const_str_plain_pbkdf2_hmac;
static PyObject *const_str_digest_9d032572d7c57a86de2cf89c2dd7bad1;
static PyObject *const_str_plain_trans_36;
extern PyObject *const_str_plain_struct;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_angle_listcontraction;
extern PyObject *const_str_plain_get_random_string;
static PyObject *const_str_plain_digestmod;
extern PyObject *const_str_plain_SECRET_KEY;
extern PyObject *const_str_plain_hexlify;
static PyObject *const_str_plain_val2;
extern PyObject *const_str_plain_join;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain_choice;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_3db85e995106375493c0a841cfd8997b_tuple;
extern PyObject *const_str_plain_L;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_str_plain_ascii_tuple;
extern PyObject *const_str_plain_warnings;
static PyObject *const_tuple_aa05feea18a8ac129ca78396be9a12c7_tuple;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_tuple_int_0_none_tuple;
extern PyObject *const_str_plain_j;
static PyObject *const_tuple_1dd5470b3206a2bb26c699c881c360dc_tuple;
static PyObject *const_str_digest_322a1b5cbe8e44526c9ca8b59c36ac49;
extern PyObject *const_str_plain_hashlib;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
static PyObject *const_tuple_str_plain_x_str_plain_L_str_plain_F_tuple;
static PyObject *const_tuple_08fca001e6302230fc64801166315787_tuple;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_block_size;
extern PyObject *const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
static PyObject *const_str_digest_2770cfd0d0dca869ef04e4f94d86877b;
extern PyObject *const_str_digest_169c96f1aee42be47b96f77d66a0607e;
extern PyObject *const_str_plain_random;
extern PyObject *const_tuple_str_plain_range_tuple;
static PyObject *const_str_digest_965b9b11cb48dee9f9853b2777900561;
static PyObject *const_str_plain__bin_to_long;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_length_str_plain_allowed_chars_tuple;
extern PyObject *const_str_digest_467c9722f19d9d40d148689532cdc0b1;
static PyObject *const_tuple_str_plain_x_str_plain_hex_format_string_tuple;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_r;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_str_plain_getstate;
extern PyObject *const_str_plain_salt;
extern PyObject *const_str_plain_constant_time_compare;
static PyObject *const_str_plain_pbkdf2;
static PyObject *const_str_digest_1d1e6397611ed5d3a791e856e6c24b01;
extern PyObject *const_str_plain_ModuleSpec;
static PyObject *const_str_digest_053e69b1027629d4b1ec711dda974822;
extern PyObject *const_int_pos_4294967295;
extern PyObject *const_str_plain_pack;
extern PyObject *const_str_plain_SystemRandom;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
static PyObject *const_str_plain_val1;
static PyObject *const_str_digest_799a5291c1877750f63ec873d6d1b9bb;
static PyObject *const_str_plain_seed;
static PyObject *const_str_plain_iterations;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_9b40607a55961c64eeb5675a39cb5170;
static PyObject *const_str_digest_c44f8132b00f749e4f0c84e396209abf;
extern PyObject *const_str_plain_msg;
static PyObject *const_str_digest_d2ac1091e83ebb92fc97727dfd43f6d9;
extern PyObject *const_tuple_str_plain_settings_tuple;
extern PyObject *const_str_plain_F;
static PyObject *const_str_digest_58b0739cbb8760e9568bc358e8d4cedd;
static PyObject *const_str_plain_dklen;
static PyObject *const_str_plain_using_sysrandom;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_plain_x;
static PyObject *const_bytes_digest_d3adc4a439f3e17d607e806b9f2108bb;
extern PyObject *const_str_plain_settings;
static PyObject *const_str_plain_dig1;
static PyObject *const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple;
static PyObject *const_str_plain_trans_5C;
extern PyObject *const_str_plain_secret;
extern PyObject *const_bytes_empty;
extern PyObject *const_str_plain_salted_hmac;
static PyObject *const_tuple_86e82b6ba0e788699ee9ceec707977b1_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_dig2;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_allowed_chars;
extern PyObject *const_str_plain_password;
static PyObject *const_str_plain_hlen;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_binascii;
extern PyObject *const_str_plain_sha1;
extern PyObject *const_str_plain_range;
static PyObject *const_str_plain__long_to_bin;
static PyObject *const_str_digest_d92a7dce2ca13cd80dd2a7032c44f506;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_copy;
static PyObject *const_str_digest_52cc21ad8cb7b294039a286b7aa9a4f7;
static PyObject *const_str_plain_hex_format_string;
extern PyObject *const_str_plain_digest;
static PyObject *const_tuple_int_pos_12_str_digest_169c96f1aee42be47b96f77d66a0607e_tuple;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_compare_digest;
extern PyObject *const_tuple_str_plain_force_bytes_tuple;
static PyObject *const_tuple_str_digest_d2ac1091e83ebb92fc97727dfd43f6d9_tuple;
extern PyObject *const_str_digest_83f99027874593222e45fae974a2895d;
extern PyObject *const_tuple_str_plain_six_tuple;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_translate;
extern PyObject *const_str_plain_u;
static PyObject *const_str_digest_3ea5dc8a70965f0bbc5e684b2dd53ace;
extern PyObject *const_str_plain_force_bytes;
extern PyObject *const_str_plain_sha256;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_ascii;
extern PyObject *const_bytes_chr_0;
extern PyObject *const_str_empty;
extern PyObject *const_str_digest_6fed4619fa8d4c69fdb5c74f190acfee;
static PyObject *const_str_digest_56e7ade4d40fe838d87877ca83a60e41;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_d020d7680a7e61670f2e44e8ba3b4e40 = UNSTREAM_STRING( &constant_bin[ 1149487 ], 17, 0 );
    const_str_plain_outer = UNSTREAM_STRING( &constant_bin[ 847179 ], 5, 1 );
    const_str_plain_key_salt = UNSTREAM_STRING( &constant_bin[ 1149504 ], 8, 1 );
    const_str_plain_digest_size = UNSTREAM_STRING( &constant_bin[ 1149512 ], 11, 1 );
    const_tuple_str_plain_val1_str_plain_val2_tuple = PyTuple_New( 2 );
    const_str_plain_val1 = UNSTREAM_STRING( &constant_bin[ 1149523 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_val1_str_plain_val2_tuple, 0, const_str_plain_val1 ); Py_INCREF( const_str_plain_val1 );
    const_str_plain_val2 = UNSTREAM_STRING( &constant_bin[ 1149527 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_val1_str_plain_val2_tuple, 1, const_str_plain_val2 ); Py_INCREF( const_str_plain_val2 );
    const_str_plain_pbkdf2_hmac = UNSTREAM_STRING( &constant_bin[ 1149531 ], 11, 1 );
    const_str_digest_9d032572d7c57a86de2cf89c2dd7bad1 = UNSTREAM_STRING( &constant_bin[ 1149542 ], 113, 0 );
    const_str_plain_trans_36 = UNSTREAM_STRING( &constant_bin[ 1149655 ], 8, 1 );
    const_str_plain_digestmod = UNSTREAM_STRING( &constant_bin[ 1149663 ], 9, 1 );
    const_tuple_3db85e995106375493c0a841cfd8997b_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_3db85e995106375493c0a841cfd8997b_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_3db85e995106375493c0a841cfd8997b_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_3db85e995106375493c0a841cfd8997b_tuple, 2, const_str_plain_allowed_chars ); Py_INCREF( const_str_plain_allowed_chars );
    const_tuple_aa05feea18a8ac129ca78396be9a12c7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_aa05feea18a8ac129ca78396be9a12c7_tuple, 0, const_str_plain_val1 ); Py_INCREF( const_str_plain_val1 );
    PyTuple_SET_ITEM( const_tuple_aa05feea18a8ac129ca78396be9a12c7_tuple, 1, const_str_plain_val2 ); Py_INCREF( const_str_plain_val2 );
    PyTuple_SET_ITEM( const_tuple_aa05feea18a8ac129ca78396be9a12c7_tuple, 2, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_aa05feea18a8ac129ca78396be9a12c7_tuple, 3, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_aa05feea18a8ac129ca78396be9a12c7_tuple, 4, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    const_tuple_1dd5470b3206a2bb26c699c881c360dc_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_1dd5470b3206a2bb26c699c881c360dc_tuple, 0, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    PyTuple_SET_ITEM( const_tuple_1dd5470b3206a2bb26c699c881c360dc_tuple, 1, const_str_plain_salt ); Py_INCREF( const_str_plain_salt );
    const_str_plain_iterations = UNSTREAM_STRING( &constant_bin[ 1149672 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_1dd5470b3206a2bb26c699c881c360dc_tuple, 2, const_str_plain_iterations ); Py_INCREF( const_str_plain_iterations );
    const_str_plain_dklen = UNSTREAM_STRING( &constant_bin[ 1149682 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_1dd5470b3206a2bb26c699c881c360dc_tuple, 3, const_str_plain_dklen ); Py_INCREF( const_str_plain_dklen );
    PyTuple_SET_ITEM( const_tuple_1dd5470b3206a2bb26c699c881c360dc_tuple, 4, const_str_plain_digest ); Py_INCREF( const_str_plain_digest );
    const_str_digest_322a1b5cbe8e44526c9ca8b59c36ac49 = UNSTREAM_STRING( &constant_bin[ 1149687 ], 214, 0 );
    const_tuple_str_plain_x_str_plain_L_str_plain_F_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_L_str_plain_F_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_L_str_plain_F_tuple, 1, const_str_plain_L ); Py_INCREF( const_str_plain_L );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_L_str_plain_F_tuple, 2, const_str_plain_F ); Py_INCREF( const_str_plain_F );
    const_tuple_08fca001e6302230fc64801166315787_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_08fca001e6302230fc64801166315787_tuple, 0, const_str_plain_key_salt ); Py_INCREF( const_str_plain_key_salt );
    PyTuple_SET_ITEM( const_tuple_08fca001e6302230fc64801166315787_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_08fca001e6302230fc64801166315787_tuple, 2, const_str_plain_secret ); Py_INCREF( const_str_plain_secret );
    PyTuple_SET_ITEM( const_tuple_08fca001e6302230fc64801166315787_tuple, 3, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_str_digest_2770cfd0d0dca869ef04e4f94d86877b = UNSTREAM_STRING( &constant_bin[ 1149901 ], 13, 0 );
    const_str_digest_965b9b11cb48dee9f9853b2777900561 = UNSTREAM_STRING( &constant_bin[ 1149914 ], 28, 0 );
    const_str_plain__bin_to_long = UNSTREAM_STRING( &constant_bin[ 1149942 ], 12, 1 );
    const_tuple_str_plain_length_str_plain_allowed_chars_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_length_str_plain_allowed_chars_tuple, 0, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    PyTuple_SET_ITEM( const_tuple_str_plain_length_str_plain_allowed_chars_tuple, 1, const_str_plain_allowed_chars ); Py_INCREF( const_str_plain_allowed_chars );
    const_tuple_str_plain_x_str_plain_hex_format_string_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_hex_format_string_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_hex_format_string = UNSTREAM_STRING( &constant_bin[ 1149954 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_hex_format_string_tuple, 1, const_str_plain_hex_format_string ); Py_INCREF( const_str_plain_hex_format_string );
    const_str_plain_getstate = UNSTREAM_STRING( &constant_bin[ 18674 ], 8, 1 );
    const_str_plain_pbkdf2 = UNSTREAM_STRING( &constant_bin[ 1149487 ], 6, 1 );
    const_str_digest_1d1e6397611ed5d3a791e856e6c24b01 = UNSTREAM_STRING( &constant_bin[ 1149971 ], 36, 0 );
    const_str_digest_053e69b1027629d4b1ec711dda974822 = UNSTREAM_STRING( &constant_bin[ 1150007 ], 119, 0 );
    const_str_digest_799a5291c1877750f63ec873d6d1b9bb = UNSTREAM_STRING( &constant_bin[ 1150126 ], 22, 0 );
    const_str_plain_seed = UNSTREAM_STRING( &constant_bin[ 1150148 ], 4, 1 );
    const_str_digest_c44f8132b00f749e4f0c84e396209abf = UNSTREAM_STRING( &constant_bin[ 1150152 ], 180, 0 );
    const_str_digest_d2ac1091e83ebb92fc97727dfd43f6d9 = UNSTREAM_STRING( &constant_bin[ 1150332 ], 106, 0 );
    const_str_digest_58b0739cbb8760e9568bc358e8d4cedd = UNSTREAM_STRING( &constant_bin[ 1150438 ], 447, 0 );
    const_str_plain_using_sysrandom = UNSTREAM_STRING( &constant_bin[ 1150885 ], 15, 1 );
    const_bytes_digest_d3adc4a439f3e17d607e806b9f2108bb = UNSTREAM_BYTES( &constant_bin[ 92820 ], 2 );
    const_str_plain_dig1 = UNSTREAM_STRING( &constant_bin[ 1150900 ], 4, 1 );
    const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple, 0, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    PyTuple_SET_ITEM( const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple, 1, const_str_plain_salt ); Py_INCREF( const_str_plain_salt );
    PyTuple_SET_ITEM( const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple, 2, const_str_plain_iterations ); Py_INCREF( const_str_plain_iterations );
    PyTuple_SET_ITEM( const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple, 3, const_str_plain_dklen ); Py_INCREF( const_str_plain_dklen );
    PyTuple_SET_ITEM( const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple, 4, const_str_plain_digest ); Py_INCREF( const_str_plain_digest );
    const_str_plain_hlen = UNSTREAM_STRING( &constant_bin[ 1150904 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple, 5, const_str_plain_hlen ); Py_INCREF( const_str_plain_hlen );
    PyTuple_SET_ITEM( const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple, 6, const_str_plain_L ); Py_INCREF( const_str_plain_L );
    PyTuple_SET_ITEM( const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple, 7, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple, 8, const_str_plain_hex_format_string ); Py_INCREF( const_str_plain_hex_format_string );
    PyTuple_SET_ITEM( const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple, 9, const_str_plain_inner ); Py_INCREF( const_str_plain_inner );
    PyTuple_SET_ITEM( const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple, 10, const_str_plain_outer ); Py_INCREF( const_str_plain_outer );
    PyTuple_SET_ITEM( const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple, 11, const_str_plain_F ); Py_INCREF( const_str_plain_F );
    PyTuple_SET_ITEM( const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple, 12, const_str_plain_T ); Py_INCREF( const_str_plain_T );
    const_str_plain_trans_5C = UNSTREAM_STRING( &constant_bin[ 1150908 ], 8, 1 );
    const_tuple_86e82b6ba0e788699ee9ceec707977b1_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_86e82b6ba0e788699ee9ceec707977b1_tuple, 0, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_86e82b6ba0e788699ee9ceec707977b1_tuple, 1, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_86e82b6ba0e788699ee9ceec707977b1_tuple, 2, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_86e82b6ba0e788699ee9ceec707977b1_tuple, 3, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_86e82b6ba0e788699ee9ceec707977b1_tuple, 4, const_str_plain_dig1 ); Py_INCREF( const_str_plain_dig1 );
    const_str_plain_dig2 = UNSTREAM_STRING( &constant_bin[ 1150916 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_86e82b6ba0e788699ee9ceec707977b1_tuple, 5, const_str_plain_dig2 ); Py_INCREF( const_str_plain_dig2 );
    PyTuple_SET_ITEM( const_tuple_86e82b6ba0e788699ee9ceec707977b1_tuple, 6, const_str_plain_salt ); Py_INCREF( const_str_plain_salt );
    PyTuple_SET_ITEM( const_tuple_86e82b6ba0e788699ee9ceec707977b1_tuple, 7, const_str_plain_iterations ); Py_INCREF( const_str_plain_iterations );
    PyTuple_SET_ITEM( const_tuple_86e82b6ba0e788699ee9ceec707977b1_tuple, 8, const_str_plain_inner ); Py_INCREF( const_str_plain_inner );
    PyTuple_SET_ITEM( const_tuple_86e82b6ba0e788699ee9ceec707977b1_tuple, 9, const_str_plain_outer ); Py_INCREF( const_str_plain_outer );
    PyTuple_SET_ITEM( const_tuple_86e82b6ba0e788699ee9ceec707977b1_tuple, 10, const_str_plain_hex_format_string ); Py_INCREF( const_str_plain_hex_format_string );
    const_str_plain__long_to_bin = UNSTREAM_STRING( &constant_bin[ 1150920 ], 12, 1 );
    const_str_digest_d92a7dce2ca13cd80dd2a7032c44f506 = UNSTREAM_STRING( &constant_bin[ 1150932 ], 51, 0 );
    const_str_digest_52cc21ad8cb7b294039a286b7aa9a4f7 = UNSTREAM_STRING( &constant_bin[ 1150983 ], 6, 0 );
    const_tuple_int_pos_12_str_digest_169c96f1aee42be47b96f77d66a0607e_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_12_str_digest_169c96f1aee42be47b96f77d66a0607e_tuple, 0, const_int_pos_12 ); Py_INCREF( const_int_pos_12 );
    PyTuple_SET_ITEM( const_tuple_int_pos_12_str_digest_169c96f1aee42be47b96f77d66a0607e_tuple, 1, const_str_digest_169c96f1aee42be47b96f77d66a0607e ); Py_INCREF( const_str_digest_169c96f1aee42be47b96f77d66a0607e );
    const_tuple_str_digest_d2ac1091e83ebb92fc97727dfd43f6d9_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d2ac1091e83ebb92fc97727dfd43f6d9_tuple, 0, const_str_digest_d2ac1091e83ebb92fc97727dfd43f6d9 ); Py_INCREF( const_str_digest_d2ac1091e83ebb92fc97727dfd43f6d9 );
    const_str_digest_3ea5dc8a70965f0bbc5e684b2dd53ace = UNSTREAM_STRING( &constant_bin[ 1150989 ], 722, 0 );
    const_str_digest_56e7ade4d40fe838d87877ca83a60e41 = UNSTREAM_STRING( &constant_bin[ 1151711 ], 165, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$utils$crypto( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b7bd1fc068973f0b37e1a0e8b2b9f03f;
static PyCodeObject *codeobj_9fb67ce92a6670f0d8da432c84457484;
static PyCodeObject *codeobj_7583cc756abced9aa415e67e788abc6f;
static PyCodeObject *codeobj_b6c549851526024fe1f34909d6c54e24;
static PyCodeObject *codeobj_4e7b4b76a6e2ededc830e6d3a68257b4;
static PyCodeObject *codeobj_146927bd95a37f2dd09b2ce8dcce1fdb;
static PyCodeObject *codeobj_20420cb95098a1258dbe567f200850f6;
static PyCodeObject *codeobj_4d5bdf63a1d726c79fab15e68c680c0f;
static PyCodeObject *codeobj_4d1c7089d4ea3cfb7ad631c942a4974d;
static PyCodeObject *codeobj_4739d0fd9b0b541eccf41092c3ae7988;
static PyCodeObject *codeobj_526018fd99bc7739c60880b48fbf6c1a;
static PyCodeObject *codeobj_0b4e33a5a063a82d1f5eb8d432e4e97c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_799a5291c1877750f63ec873d6d1b9bb );
    codeobj_b7bd1fc068973f0b37e1a0e8b2b9f03f = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 77, const_tuple_3db85e995106375493c0a841cfd8997b_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_9fb67ce92a6670f0d8da432c84457484 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 190, const_tuple_str_plain_x_str_plain_L_str_plain_F_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_7583cc756abced9aa415e67e788abc6f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_965b9b11cb48dee9f9853b2777900561, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_b6c549851526024fe1f34909d6c54e24 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_F, 179, const_tuple_86e82b6ba0e788699ee9ceec707977b1_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS );
    codeobj_4e7b4b76a6e2ededc830e6d3a68257b4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__bin_to_long, 108, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_146927bd95a37f2dd09b2ce8dcce1fdb = MAKE_CODEOBJ( module_filename_obj, const_str_plain__long_to_bin, 117, const_tuple_str_plain_x_str_plain_hex_format_string_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_20420cb95098a1258dbe567f200850f6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_constant_time_compare, 82, const_tuple_str_plain_val1_str_plain_val2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_4d5bdf63a1d726c79fab15e68c680c0f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_constant_time_compare, 85, const_tuple_aa05feea18a8ac129ca78396be9a12c7_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_4d1c7089d4ea3cfb7ad631c942a4974d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_random_string, 54, const_tuple_str_plain_length_str_plain_allowed_chars_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_4739d0fd9b0b541eccf41092c3ae7988 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pbkdf2, 126, const_tuple_1dd5470b3206a2bb26c699c881c360dc_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_526018fd99bc7739c60880b48fbf6c1a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pbkdf2, 142, const_tuple_e6843aa53f3aef5bae5c58425567a2be_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_0b4e33a5a063a82d1f5eb8d432e4e97c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_salted_hmac, 29, const_tuple_08fca001e6302230fc64801166315787_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$utils$crypto$$$function_2_get_random_string$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void django$utils$crypto$$$function_2_get_random_string$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_1_salted_hmac( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_2_get_random_string( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_3_constant_time_compare(  );


static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_4_constant_time_compare(  );


static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_5__bin_to_long(  );


static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_6__long_to_bin(  );


static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_7_pbkdf2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_8_pbkdf2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_8_pbkdf2$$$function_1_F( struct Nuitka_CellObject *closure_hex_format_string, struct Nuitka_CellObject *closure_inner, struct Nuitka_CellObject *closure_iterations, struct Nuitka_CellObject *closure_outer, struct Nuitka_CellObject *closure_salt );


// The module function definitions.
static PyObject *impl_django$utils$crypto$$$function_1_salted_hmac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key_salt = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *par_secret = python_pars[ 2 ];
    PyObject *var_key = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_0b4e33a5a063a82d1f5eb8d432e4e97c = NULL;

    struct Nuitka_FrameObject *frame_0b4e33a5a063a82d1f5eb8d432e4e97c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0b4e33a5a063a82d1f5eb8d432e4e97c, codeobj_0b4e33a5a063a82d1f5eb8d432e4e97c, module_django$utils$crypto, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0b4e33a5a063a82d1f5eb8d432e4e97c = cache_frame_0b4e33a5a063a82d1f5eb8d432e4e97c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0b4e33a5a063a82d1f5eb8d432e4e97c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0b4e33a5a063a82d1f5eb8d432e4e97c ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_secret;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SECRET_KEY );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_secret;
        par_secret = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_force_bytes );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_bytes );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_key_salt;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key_salt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_0b4e33a5a063a82d1f5eb8d432e4e97c->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_key_salt;
        par_key_salt = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_force_bytes );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_bytes );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_secret;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "secret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_0b4e33a5a063a82d1f5eb8d432e4e97c->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_secret;
        par_secret = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_hashlib );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sha1 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = par_key_salt;

    if ( tmp_left_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key_salt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = par_secret;

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "secret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 45;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_0b4e33a5a063a82d1f5eb8d432e4e97c->m_frame.f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_0b4e33a5a063a82d1f5eb8d432e4e97c->m_frame.f_lineno = 45;
    tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_digest );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_key == NULL );
    var_key = tmp_assign_source_4;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_hmac );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hmac );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hmac" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_new );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_key;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_msg;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_force_bytes );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_bytes );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_value;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_0b4e33a5a063a82d1f5eb8d432e4e97c->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 51;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_digestmod;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_hashlib );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sha1 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 51;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_0b4e33a5a063a82d1f5eb8d432e4e97c->m_frame.f_lineno = 51;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b4e33a5a063a82d1f5eb8d432e4e97c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b4e33a5a063a82d1f5eb8d432e4e97c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b4e33a5a063a82d1f5eb8d432e4e97c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0b4e33a5a063a82d1f5eb8d432e4e97c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0b4e33a5a063a82d1f5eb8d432e4e97c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0b4e33a5a063a82d1f5eb8d432e4e97c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0b4e33a5a063a82d1f5eb8d432e4e97c,
        type_description_1,
        par_key_salt,
        par_value,
        par_secret,
        var_key
    );


    // Release cached frame.
    if ( frame_0b4e33a5a063a82d1f5eb8d432e4e97c == cache_frame_0b4e33a5a063a82d1f5eb8d432e4e97c )
    {
        Py_DECREF( frame_0b4e33a5a063a82d1f5eb8d432e4e97c );
    }
    cache_frame_0b4e33a5a063a82d1f5eb8d432e4e97c = NULL;

    assertFrameObject( frame_0b4e33a5a063a82d1f5eb8d432e4e97c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_1_salted_hmac );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_key_salt );
    par_key_salt = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_secret );
    par_secret = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

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

    Py_XDECREF( par_key_salt );
    par_key_salt = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_secret );
    par_secret = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_1_salted_hmac );
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


static PyObject *impl_django$utils$crypto$$$function_2_get_random_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_length = python_pars[ 0 ];
    struct Nuitka_CellObject *par_allowed_chars = PyCell_NEW1( python_pars[ 1 ] );
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4d1c7089d4ea3cfb7ad631c942a4974d = NULL;

    struct Nuitka_FrameObject *frame_4d1c7089d4ea3cfb7ad631c942a4974d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4d1c7089d4ea3cfb7ad631c942a4974d, codeobj_4d1c7089d4ea3cfb7ad631c942a4974d, module_django$utils$crypto, sizeof(void *)+sizeof(void *) );
    frame_4d1c7089d4ea3cfb7ad631c942a4974d = cache_frame_4d1c7089d4ea3cfb7ad631c942a4974d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4d1c7089d4ea3cfb7ad631c942a4974d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4d1c7089d4ea3cfb7ad631c942a4974d ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_using_sysrandom );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_using_sysrandom );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "using_sysrandom" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_random );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "random" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_seed );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_hashlib );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sha256 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 71;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_83f99027874593222e45fae974a2895d;
    tmp_right_name_1 = PyTuple_New( 3 );
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_random );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random );
    }

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "random" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    frame_4d1c7089d4ea3cfb7ad631c942a4974d->m_frame.f_lineno = 73;
    tmp_tuple_element_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_getstate );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 73;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_called_instance_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    frame_4d1c7089d4ea3cfb7ad631c942a4974d->m_frame.f_lineno = 74;
    tmp_tuple_element_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_time );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 74;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SECRET_KEY );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 75;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_called_instance_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 72;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    frame_4d1c7089d4ea3cfb7ad631c942a4974d->m_frame.f_lineno = 72;
    tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 72;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    frame_4d1c7089d4ea3cfb7ad631c942a4974d->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 71;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    frame_4d1c7089d4ea3cfb7ad631c942a4974d->m_frame.f_lineno = 71;
    tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_digest );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 71;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    frame_4d1c7089d4ea3cfb7ad631c942a4974d->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_4 = const_str_empty;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join );
    assert( tmp_called_name_3 != NULL );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_range );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_range );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "range" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_length;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "length" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    frame_4d1c7089d4ea3cfb7ad631c942a4974d->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_1;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        django$utils$crypto$$$function_2_get_random_string$$$genexpr_1_genexpr_context,
        module_django$utils$crypto,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_1d1e6397611ed5d3a791e856e6c24b01,
#endif
        codeobj_b7bd1fc068973f0b37e1a0e8b2b9f03f,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = par_allowed_chars;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[1] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 2 ); 


    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_2_get_random_string );
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
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_2_get_random_string );
    return NULL;
    outline_result_1:;
    tmp_args_element_name_3 = tmp_outline_return_value_1;
    frame_4d1c7089d4ea3cfb7ad631c942a4974d->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d1c7089d4ea3cfb7ad631c942a4974d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d1c7089d4ea3cfb7ad631c942a4974d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d1c7089d4ea3cfb7ad631c942a4974d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d1c7089d4ea3cfb7ad631c942a4974d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d1c7089d4ea3cfb7ad631c942a4974d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d1c7089d4ea3cfb7ad631c942a4974d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4d1c7089d4ea3cfb7ad631c942a4974d,
        type_description_1,
        par_length,
        par_allowed_chars
    );


    // Release cached frame.
    if ( frame_4d1c7089d4ea3cfb7ad631c942a4974d == cache_frame_4d1c7089d4ea3cfb7ad631c942a4974d )
    {
        Py_DECREF( frame_4d1c7089d4ea3cfb7ad631c942a4974d );
    }
    cache_frame_4d1c7089d4ea3cfb7ad631c942a4974d = NULL;

    assertFrameObject( frame_4d1c7089d4ea3cfb7ad631c942a4974d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_2_get_random_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_length );
    par_length = NULL;

    CHECK_OBJECT( (PyObject *)par_allowed_chars );
    Py_DECREF( par_allowed_chars );
    par_allowed_chars = NULL;

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

    Py_XDECREF( par_length );
    par_length = NULL;

    CHECK_OBJECT( (PyObject *)par_allowed_chars );
    Py_DECREF( par_allowed_chars );
    par_allowed_chars = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_2_get_random_string );
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
struct django$utils$crypto$$$function_2_get_random_string$$$genexpr_1_genexpr_locals {
    PyObject *var_i
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_source_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$utils$crypto$$$function_2_get_random_string$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void django$utils$crypto$$$function_2_get_random_string$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_i = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_b7bd1fc068973f0b37e1a0e8b2b9f03f, module_django$utils$crypto, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
    if ( generator->m_closure[1] == NULL )
    {
        tmp_next_source_1 = NULL;
    }
    else
    {
        tmp_next_source_1 = PyCell_GET( generator->m_closure[1] );
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
            type_description_1 = "Noc";
            exception_lineno = 77;
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
        PyObject *old = var_i;
        var_i = tmp_assign_source_2;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_random );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "random" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_choice );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    if ( generator->m_closure[0] == NULL )
    {
        tmp_args_element_name_1 = NULL;
    }
    else
    {
        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "allowed_chars" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    generator->m_frame->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "Noc";
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
            var_i,
            generator->m_closure[0]
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

    Py_XDECREF( var_i );
    var_i = NULL;

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

    Py_XDECREF( var_i );
    var_i = NULL;


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


static PyObject *impl_django$utils$crypto$$$function_3_constant_time_compare( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val1 = python_pars[ 0 ];
    PyObject *par_val2 = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_20420cb95098a1258dbe567f200850f6 = NULL;

    struct Nuitka_FrameObject *frame_20420cb95098a1258dbe567f200850f6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_20420cb95098a1258dbe567f200850f6, codeobj_20420cb95098a1258dbe567f200850f6, module_django$utils$crypto, sizeof(void *)+sizeof(void *) );
    frame_20420cb95098a1258dbe567f200850f6 = cache_frame_20420cb95098a1258dbe567f200850f6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_20420cb95098a1258dbe567f200850f6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_20420cb95098a1258dbe567f200850f6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_hmac );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hmac );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hmac" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compare_digest );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_force_bytes );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_bytes );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_val1;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "val1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_20420cb95098a1258dbe567f200850f6->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_force_bytes );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_bytes );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_val2;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "val2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_20420cb95098a1258dbe567f200850f6->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_20420cb95098a1258dbe567f200850f6->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20420cb95098a1258dbe567f200850f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_20420cb95098a1258dbe567f200850f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20420cb95098a1258dbe567f200850f6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_20420cb95098a1258dbe567f200850f6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_20420cb95098a1258dbe567f200850f6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_20420cb95098a1258dbe567f200850f6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_20420cb95098a1258dbe567f200850f6,
        type_description_1,
        par_val1,
        par_val2
    );


    // Release cached frame.
    if ( frame_20420cb95098a1258dbe567f200850f6 == cache_frame_20420cb95098a1258dbe567f200850f6 )
    {
        Py_DECREF( frame_20420cb95098a1258dbe567f200850f6 );
    }
    cache_frame_20420cb95098a1258dbe567f200850f6 = NULL;

    assertFrameObject( frame_20420cb95098a1258dbe567f200850f6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_3_constant_time_compare );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_val1 );
    par_val1 = NULL;

    Py_XDECREF( par_val2 );
    par_val2 = NULL;

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

    Py_XDECREF( par_val1 );
    par_val1 = NULL;

    Py_XDECREF( par_val2 );
    par_val2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_3_constant_time_compare );
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


static PyObject *impl_django$utils$crypto$$$function_4_constant_time_compare( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val1 = python_pars[ 0 ];
    PyObject *par_val2 = python_pars[ 1 ];
    PyObject *var_result = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
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
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_ord_arg_1;
    PyObject *tmp_ord_arg_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    static struct Nuitka_FrameObject *cache_frame_4d5bdf63a1d726c79fab15e68c680c0f = NULL;

    struct Nuitka_FrameObject *frame_4d5bdf63a1d726c79fab15e68c680c0f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4d5bdf63a1d726c79fab15e68c680c0f, codeobj_4d5bdf63a1d726c79fab15e68c680c0f, module_django$utils$crypto, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4d5bdf63a1d726c79fab15e68c680c0f = cache_frame_4d5bdf63a1d726c79fab15e68c680c0f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4d5bdf63a1d726c79fab15e68c680c0f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4d5bdf63a1d726c79fab15e68c680c0f ) == 2 ); // Frame stack

    // Framed code:
    tmp_len_arg_1 = par_val1;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_val2;

    if ( tmp_len_arg_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "val2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 96;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 96;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = const_int_0;
    assert( var_result == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_result = tmp_assign_source_1;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PY3 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 99;
        type_description_1 = "ooooo";
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
    tmp_isinstance_inst_1 = par_val1;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "val1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
    tmp_and_left_value_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "ooooo";
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
    tmp_isinstance_inst_2 = par_val2;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "val2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = (PyObject *)&PyBytes_Type;
    tmp_and_right_value_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 99;
        type_description_1 = "ooooo";
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
    tmp_called_name_1 = (PyObject *)&PyZip_Type;
    tmp_args_element_name_1 = par_val1;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "val1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_val2;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "val2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_4d5bdf63a1d726c79fab15e68c680c0f->m_frame.f_lineno = 100;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            exception_lineno = 100;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "ooooo";
        exception_lineno = 100;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "ooooo";
        exception_lineno = 100;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooo";
                exception_lineno = 100;
                goto try_except_handler_4;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooo";
        exception_lineno = 100;
        goto try_except_handler_4;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_7;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_y;
        var_y = tmp_assign_source_8;
        Py_INCREF( var_y );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_left_name_1 = var_result;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_left_name_2 = var_x;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_right_name_2 = var_y;

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_right_name_1 = BINARY_OPERATION( PyNumber_Xor, tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_9 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    var_result = tmp_assign_source_9;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_2 = (PyObject *)&PyZip_Type;
    tmp_args_element_name_3 = par_val1;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "val1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_val2;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "val2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_4d5bdf63a1d726c79fab15e68c680c0f->m_frame.f_lineno = 103;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_10;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            exception_lineno = 103;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_4 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_iter_arg_4 );
    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
    if ( tmp_assign_source_13 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "ooooo";
        exception_lineno = 103;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
    if ( tmp_assign_source_14 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "ooooo";
        exception_lineno = 103;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_iterator_name_2 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooo";
                exception_lineno = 103;
                goto try_except_handler_7;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooo";
        exception_lineno = 103;
        goto try_except_handler_7;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_15 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_15;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_16 );
    {
        PyObject *old = var_y;
        var_y = tmp_assign_source_16;
        Py_INCREF( var_y );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_left_name_3 = var_result;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_ord_arg_1 = var_x;

    if ( tmp_ord_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_left_name_4 = BUILTIN_ORD( tmp_ord_arg_1 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    tmp_ord_arg_2 = var_y;

    if ( tmp_ord_arg_2 == NULL )
    {
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_right_name_4 = BUILTIN_ORD( tmp_ord_arg_2 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 104;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    tmp_right_name_3 = BINARY_OPERATION( PyNumber_Xor, tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_17 = tmp_left_name_3;
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    var_result = tmp_assign_source_17;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_end_2:;
    tmp_compexpr_left_1 = var_result;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d5bdf63a1d726c79fab15e68c680c0f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d5bdf63a1d726c79fab15e68c680c0f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d5bdf63a1d726c79fab15e68c680c0f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d5bdf63a1d726c79fab15e68c680c0f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d5bdf63a1d726c79fab15e68c680c0f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d5bdf63a1d726c79fab15e68c680c0f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4d5bdf63a1d726c79fab15e68c680c0f,
        type_description_1,
        par_val1,
        par_val2,
        var_result,
        var_x,
        var_y
    );


    // Release cached frame.
    if ( frame_4d5bdf63a1d726c79fab15e68c680c0f == cache_frame_4d5bdf63a1d726c79fab15e68c680c0f )
    {
        Py_DECREF( frame_4d5bdf63a1d726c79fab15e68c680c0f );
    }
    cache_frame_4d5bdf63a1d726c79fab15e68c680c0f = NULL;

    assertFrameObject( frame_4d5bdf63a1d726c79fab15e68c680c0f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_4_constant_time_compare );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_val1 );
    par_val1 = NULL;

    Py_XDECREF( par_val2 );
    par_val2 = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_val1 );
    par_val1 = NULL;

    Py_XDECREF( par_val2 );
    par_val2 = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_4_constant_time_compare );
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


static PyObject *impl_django$utils$crypto$$$function_5__bin_to_long( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_base_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_4e7b4b76a6e2ededc830e6d3a68257b4 = NULL;

    struct Nuitka_FrameObject *frame_4e7b4b76a6e2ededc830e6d3a68257b4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4e7b4b76a6e2ededc830e6d3a68257b4, codeobj_4e7b4b76a6e2ededc830e6d3a68257b4, module_django$utils$crypto, sizeof(void *) );
    frame_4e7b4b76a6e2ededc830e6d3a68257b4 = cache_frame_4e7b4b76a6e2ededc830e6d3a68257b4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4e7b4b76a6e2ededc830e6d3a68257b4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4e7b4b76a6e2ededc830e6d3a68257b4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_binascii );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_binascii );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "binascii" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hexlify );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_x;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_4e7b4b76a6e2ededc830e6d3a68257b4->m_frame.f_lineno = 114;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_value_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_value_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_base_name_1 = const_int_pos_16;
    tmp_return_value = TO_INT2( tmp_value_name_1, tmp_base_name_1 );
    Py_DECREF( tmp_value_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e7b4b76a6e2ededc830e6d3a68257b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e7b4b76a6e2ededc830e6d3a68257b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e7b4b76a6e2ededc830e6d3a68257b4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4e7b4b76a6e2ededc830e6d3a68257b4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4e7b4b76a6e2ededc830e6d3a68257b4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4e7b4b76a6e2ededc830e6d3a68257b4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4e7b4b76a6e2ededc830e6d3a68257b4,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_4e7b4b76a6e2ededc830e6d3a68257b4 == cache_frame_4e7b4b76a6e2ededc830e6d3a68257b4 )
    {
        Py_DECREF( frame_4e7b4b76a6e2ededc830e6d3a68257b4 );
    }
    cache_frame_4e7b4b76a6e2ededc830e6d3a68257b4 = NULL;

    assertFrameObject( frame_4e7b4b76a6e2ededc830e6d3a68257b4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_5__bin_to_long );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_5__bin_to_long );
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


static PyObject *impl_django$utils$crypto$$$function_6__long_to_bin( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_hex_format_string = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_146927bd95a37f2dd09b2ce8dcce1fdb = NULL;

    struct Nuitka_FrameObject *frame_146927bd95a37f2dd09b2ce8dcce1fdb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_146927bd95a37f2dd09b2ce8dcce1fdb, codeobj_146927bd95a37f2dd09b2ce8dcce1fdb, module_django$utils$crypto, sizeof(void *)+sizeof(void *) );
    frame_146927bd95a37f2dd09b2ce8dcce1fdb = cache_frame_146927bd95a37f2dd09b2ce8dcce1fdb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_146927bd95a37f2dd09b2ce8dcce1fdb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_146927bd95a37f2dd09b2ce8dcce1fdb ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_binascii );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_binascii );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "binascii" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_unhexlify );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = par_hex_format_string;

    if ( tmp_left_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hex_format_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = par_x;

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 122;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_146927bd95a37f2dd09b2ce8dcce1fdb->m_frame.f_lineno = 122;
    tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 122;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_146927bd95a37f2dd09b2ce8dcce1fdb->m_frame.f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_146927bd95a37f2dd09b2ce8dcce1fdb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_146927bd95a37f2dd09b2ce8dcce1fdb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_146927bd95a37f2dd09b2ce8dcce1fdb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_146927bd95a37f2dd09b2ce8dcce1fdb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_146927bd95a37f2dd09b2ce8dcce1fdb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_146927bd95a37f2dd09b2ce8dcce1fdb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_146927bd95a37f2dd09b2ce8dcce1fdb,
        type_description_1,
        par_x,
        par_hex_format_string
    );


    // Release cached frame.
    if ( frame_146927bd95a37f2dd09b2ce8dcce1fdb == cache_frame_146927bd95a37f2dd09b2ce8dcce1fdb )
    {
        Py_DECREF( frame_146927bd95a37f2dd09b2ce8dcce1fdb );
    }
    cache_frame_146927bd95a37f2dd09b2ce8dcce1fdb = NULL;

    assertFrameObject( frame_146927bd95a37f2dd09b2ce8dcce1fdb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_6__long_to_bin );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

    Py_XDECREF( par_hex_format_string );
    par_hex_format_string = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    Py_XDECREF( par_hex_format_string );
    par_hex_format_string = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_6__long_to_bin );
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


static PyObject *impl_django$utils$crypto$$$function_7_pbkdf2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_password = python_pars[ 0 ];
    PyObject *par_salt = python_pars[ 1 ];
    PyObject *par_iterations = python_pars[ 2 ];
    PyObject *par_dklen = python_pars[ 3 ];
    PyObject *par_digest = python_pars[ 4 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_4739d0fd9b0b541eccf41092c3ae7988 = NULL;

    struct Nuitka_FrameObject *frame_4739d0fd9b0b541eccf41092c3ae7988;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4739d0fd9b0b541eccf41092c3ae7988, codeobj_4739d0fd9b0b541eccf41092c3ae7988, module_django$utils$crypto, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4739d0fd9b0b541eccf41092c3ae7988 = cache_frame_4739d0fd9b0b541eccf41092c3ae7988;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4739d0fd9b0b541eccf41092c3ae7988 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4739d0fd9b0b541eccf41092c3ae7988 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_digest;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_hashlib );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sha256 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_digest;
        par_digest = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_cond_value_1 = par_dklen;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dklen" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = Py_None;
    {
        PyObject *old = par_dklen;
        par_dklen = tmp_assign_source_2;
        Py_INCREF( par_dklen );
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_force_bytes );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_bytes );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_password;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_4739d0fd9b0b541eccf41092c3ae7988->m_frame.f_lineno = 137;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_password;
        par_password = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_force_bytes );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_bytes );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 138;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_salt;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "salt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 138;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_4739d0fd9b0b541eccf41092c3ae7988->m_frame.f_lineno = 138;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_salt;
        par_salt = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_hashlib );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pbkdf2_hmac );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = par_digest;

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "digest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_4739d0fd9b0b541eccf41092c3ae7988->m_frame.f_lineno = 140;
    tmp_source_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 140;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_name );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 140;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_password;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_salt;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "salt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_iterations;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "iterations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_dklen;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dklen" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_4739d0fd9b0b541eccf41092c3ae7988->m_frame.f_lineno = 139;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4739d0fd9b0b541eccf41092c3ae7988 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4739d0fd9b0b541eccf41092c3ae7988 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4739d0fd9b0b541eccf41092c3ae7988 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4739d0fd9b0b541eccf41092c3ae7988, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4739d0fd9b0b541eccf41092c3ae7988->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4739d0fd9b0b541eccf41092c3ae7988, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4739d0fd9b0b541eccf41092c3ae7988,
        type_description_1,
        par_password,
        par_salt,
        par_iterations,
        par_dklen,
        par_digest
    );


    // Release cached frame.
    if ( frame_4739d0fd9b0b541eccf41092c3ae7988 == cache_frame_4739d0fd9b0b541eccf41092c3ae7988 )
    {
        Py_DECREF( frame_4739d0fd9b0b541eccf41092c3ae7988 );
    }
    cache_frame_4739d0fd9b0b541eccf41092c3ae7988 = NULL;

    assertFrameObject( frame_4739d0fd9b0b541eccf41092c3ae7988 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_7_pbkdf2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_password );
    par_password = NULL;

    Py_XDECREF( par_salt );
    par_salt = NULL;

    Py_XDECREF( par_iterations );
    par_iterations = NULL;

    Py_XDECREF( par_dklen );
    par_dklen = NULL;

    Py_XDECREF( par_digest );
    par_digest = NULL;

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

    Py_XDECREF( par_password );
    par_password = NULL;

    Py_XDECREF( par_salt );
    par_salt = NULL;

    Py_XDECREF( par_iterations );
    par_iterations = NULL;

    Py_XDECREF( par_dklen );
    par_dklen = NULL;

    Py_XDECREF( par_digest );
    par_digest = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_7_pbkdf2 );
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


static PyObject *impl_django$utils$crypto$$$function_8_pbkdf2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_password = python_pars[ 0 ];
    struct Nuitka_CellObject *par_salt = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_iterations = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *par_dklen = python_pars[ 3 ];
    PyObject *par_digest = python_pars[ 4 ];
    PyObject *var_hlen = NULL;
    PyObject *var_L = NULL;
    PyObject *var_r = NULL;
    struct Nuitka_CellObject *var_hex_format_string = PyCell_EMPTY();
    struct Nuitka_CellObject *var_inner = PyCell_EMPTY();
    struct Nuitka_CellObject *var_outer = PyCell_EMPTY();
    PyObject *var_F = NULL;
    PyObject *var_T = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcontraction_1__$0 = NULL;
    PyObject *tmp_listcontraction_1__contraction = NULL;
    PyObject *tmp_listcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_Gt_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9fb67ce92a6670f0d8da432c84457484_2 = NULL;

    struct Nuitka_FrameObject *frame_9fb67ce92a6670f0d8da432c84457484_2;

    static struct Nuitka_FrameObject *cache_frame_526018fd99bc7739c60880b48fbf6c1a = NULL;

    struct Nuitka_FrameObject *frame_526018fd99bc7739c60880b48fbf6c1a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_526018fd99bc7739c60880b48fbf6c1a, codeobj_526018fd99bc7739c60880b48fbf6c1a, module_django$utils$crypto, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_526018fd99bc7739c60880b48fbf6c1a = cache_frame_526018fd99bc7739c60880b48fbf6c1a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_526018fd99bc7739c60880b48fbf6c1a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_526018fd99bc7739c60880b48fbf6c1a ) == 2 ); // Frame stack

    // Framed code:
    if ( par_iterations == NULL )
    {
        tmp_compare_left_1 = NULL;
    }
    else
    {
        tmp_compare_left_1 = PyCell_GET( par_iterations );
    }

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "iterations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 157;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "occooooocccoo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_cond_value_1 = par_digest;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "digest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_hashlib );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sha256 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_digest;
        par_digest = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_force_bytes );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_bytes );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_password;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    frame_526018fd99bc7739c60880b48fbf6c1a->m_frame.f_lineno = 160;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_password;
        par_password = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_force_bytes );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_bytes );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 161;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    if ( par_salt == NULL )
    {
        tmp_args_element_name_2 = NULL;
    }
    else
    {
        tmp_args_element_name_2 = PyCell_GET( par_salt );
    }

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "salt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 161;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    frame_526018fd99bc7739c60880b48fbf6c1a->m_frame.f_lineno = 161;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( par_salt );
        PyCell_SET( par_salt, tmp_assign_source_3 );
        Py_XDECREF( old );
    }

    tmp_called_name_3 = par_digest;

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "digest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    frame_526018fd99bc7739c60880b48fbf6c1a->m_frame.f_lineno = 162;
    tmp_source_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_digest_size );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    assert( var_hlen == NULL );
    var_hlen = tmp_assign_source_4;

    tmp_cond_value_2 = par_dklen;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dklen" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_assign_source_5 = var_hlen;

    if ( tmp_assign_source_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hlen" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = par_dklen;
        par_dklen = tmp_assign_source_5;
        Py_INCREF( par_dklen );
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_compare_left_2 = par_dklen;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dklen" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_int_pos_4294967295;
    tmp_right_name_1 = var_hlen;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hlen" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 165;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Gt_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_1 = const_str_digest_2770cfd0d0dca869ef04e4f94d86877b;
    frame_526018fd99bc7739c60880b48fbf6c1a->m_frame.f_lineno = 166;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_OverflowError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 166;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "occooooocccoo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_operand_name_2 = par_dklen;

    if ( tmp_operand_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dklen" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = var_hlen;

    if ( tmp_right_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hlen" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_operand_name_1 = BINARY_OPERATION_FLOORDIV( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    assert( var_L == NULL );
    var_L = tmp_assign_source_6;

    tmp_left_name_3 = par_dklen;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dklen" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_5 = var_L;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_4 = const_int_pos_1;
    tmp_left_name_4 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_4 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = var_hlen;

    if ( tmp_right_name_5 == NULL )
    {
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hlen" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_7;

    tmp_left_name_6 = const_str_digest_52cc21ad8cb7b294039a286b7aa9a4f7;
    tmp_left_name_7 = var_hlen;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hlen" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = const_int_pos_2;
    tmp_right_name_6 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_hex_format_string );
        PyCell_SET( var_hex_format_string, tmp_assign_source_8 );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_1 = PyTuple_New( 2 );
    tmp_called_name_4 = par_digest;

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "digest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        type_description_1 = "occooooocccoo";
        goto try_except_handler_2;
    }

    frame_526018fd99bc7739c60880b48fbf6c1a->m_frame.f_lineno = 172;
    tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        exception_lineno = 172;
        type_description_1 = "occooooocccoo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
    tmp_called_name_5 = par_digest;

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "digest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        type_description_1 = "occooooocccoo";
        goto try_except_handler_2;
    }

    frame_526018fd99bc7739c60880b48fbf6c1a->m_frame.f_lineno = 172;
    tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        exception_lineno = 172;
        type_description_1 = "occooooocccoo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "occooooocccoo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_10 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "occooooocccoo";
        exception_lineno = 172;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_11 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "occooooocccoo";
        exception_lineno = 172;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "occooooocccoo";
                exception_lineno = 172;
                goto try_except_handler_3;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "occooooocccoo";
        exception_lineno = 172;
        goto try_except_handler_3;
    }
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

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = PyCell_GET( var_inner );
        PyCell_SET( var_inner, tmp_assign_source_12 );
        Py_INCREF( tmp_assign_source_12 );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = PyCell_GET( var_outer );
        PyCell_SET( var_outer, tmp_assign_source_13 );
        Py_INCREF( tmp_assign_source_13 );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_len_arg_1 = par_password;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    if ( var_inner == NULL )
    {
        tmp_source_name_3 = NULL;
    }
    else
    {
        tmp_source_name_3 = PyCell_GET( var_inner );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "inner" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_block_size );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 173;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_3 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 173;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_Gt_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_6 = par_digest;

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "digest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_password;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    frame_526018fd99bc7739c60880b48fbf6c1a->m_frame.f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    frame_526018fd99bc7739c60880b48fbf6c1a->m_frame.f_lineno = 174;
    tmp_assign_source_14 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_digest );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_password;
        par_password = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    branch_no_5:;
    tmp_left_name_8 = par_password;

    if ( tmp_left_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_9 = const_bytes_chr_0;
    if ( var_inner == NULL )
    {
        tmp_source_name_4 = NULL;
    }
    else
    {
        tmp_source_name_4 = PyCell_GET( var_inner );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "inner" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_block_size );
    if ( tmp_left_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_password;

    if ( tmp_len_arg_2 == NULL )
    {
        Py_DECREF( tmp_left_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_10 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_right_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_10 );

        exception_lineno = 175;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_9 = BINARY_OPERATION_SUB( tmp_left_name_10, tmp_right_name_10 );
    Py_DECREF( tmp_left_name_10 );
    Py_DECREF( tmp_right_name_10 );
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_8 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_right_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
    tmp_assign_source_15 = tmp_left_name_8;
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    par_password = tmp_assign_source_15;

    if ( var_inner == NULL )
    {
        tmp_source_name_5 = NULL;
    }
    else
    {
        tmp_source_name_5 = PyCell_GET( var_inner );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "inner" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_update );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_password;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_translate );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 176;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_hmac );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hmac );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hmac" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_trans_36 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 176;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    frame_526018fd99bc7739c60880b48fbf6c1a->m_frame.f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 176;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    frame_526018fd99bc7739c60880b48fbf6c1a->m_frame.f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( var_outer == NULL )
    {
        tmp_source_name_8 = NULL;
    }
    else
    {
        tmp_source_name_8 = PyCell_GET( var_outer );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "outer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_update );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = par_password;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_translate );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 177;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_hmac );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hmac );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hmac" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_trans_5C );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 177;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    frame_526018fd99bc7739c60880b48fbf6c1a->m_frame.f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 177;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    frame_526018fd99bc7739c60880b48fbf6c1a->m_frame.f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_16 = MAKE_FUNCTION_django$utils$crypto$$$function_8_pbkdf2$$$function_1_F( var_hex_format_string, var_inner, par_iterations, var_outer, par_salt );
    assert( var_F == NULL );
    var_F = tmp_assign_source_16;

    // Tried code:
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_range );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_range );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "range" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_1 = "occooooocccoo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_8 = const_int_pos_1;
    tmp_args_element_name_9 = var_L;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "L" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_1 = "occooooocccoo";
        goto try_except_handler_4;
    }

    frame_526018fd99bc7739c60880b48fbf6c1a->m_frame.f_lineno = 190;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "occooooocccoo";
        goto try_except_handler_4;
    }
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "occooooocccoo";
        goto try_except_handler_4;
    }
    assert( tmp_listcontraction_1__$0 == NULL );
    tmp_listcontraction_1__$0 = tmp_assign_source_18;

    tmp_assign_source_19 = PyList_New( 0 );
    assert( tmp_listcontraction_1__contraction == NULL );
    tmp_listcontraction_1__contraction = tmp_assign_source_19;

    MAKE_OR_REUSE_FRAME( cache_frame_9fb67ce92a6670f0d8da432c84457484_2, codeobj_9fb67ce92a6670f0d8da432c84457484, module_django$utils$crypto, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9fb67ce92a6670f0d8da432c84457484_2 = cache_frame_9fb67ce92a6670f0d8da432c84457484_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9fb67ce92a6670f0d8da432c84457484_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9fb67ce92a6670f0d8da432c84457484_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_listcontraction_1__$0;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_20 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_2 = "ooo";
            exception_lineno = 190;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_listcontraction_1__iter_value_0;
        tmp_listcontraction_1__iter_value_0 = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_assign_source_21 = tmp_listcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_21 );
    {
        PyObject *old = outline_0_var_x;
        outline_0_var_x = tmp_assign_source_21;
        Py_INCREF( outline_0_var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_called_name_12 = var_F;

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "F" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_2 = "ooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_10 = outline_0_var_x;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_9fb67ce92a6670f0d8da432c84457484_2->m_frame.f_lineno = 190;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_2 = "ooo";
        goto try_except_handler_5;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_2 = "ooo";
        goto try_except_handler_5;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_2 = "ooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_8_pbkdf2 );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
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

    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9fb67ce92a6670f0d8da432c84457484_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9fb67ce92a6670f0d8da432c84457484_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_4;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9fb67ce92a6670f0d8da432c84457484_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9fb67ce92a6670f0d8da432c84457484_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9fb67ce92a6670f0d8da432c84457484_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9fb67ce92a6670f0d8da432c84457484_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9fb67ce92a6670f0d8da432c84457484_2,
        type_description_2,
        outline_0_var_x,
        var_L,
        var_F
    );


    // Release cached frame.
    if ( frame_9fb67ce92a6670f0d8da432c84457484_2 == cache_frame_9fb67ce92a6670f0d8da432c84457484_2 )
    {
        Py_DECREF( frame_9fb67ce92a6670f0d8da432c84457484_2 );
    }
    cache_frame_9fb67ce92a6670f0d8da432c84457484_2 = NULL;

    assertFrameObject( frame_9fb67ce92a6670f0d8da432c84457484_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "occooooocccoo";
    goto try_except_handler_4;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_8_pbkdf2 );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF( outline_0_var_x );
    outline_0_var_x = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var_x );
    outline_0_var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_8_pbkdf2 );
    return NULL;
    outline_exception_1:;
    exception_lineno = 190;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_assign_source_17 = tmp_outline_return_value_1;
    assert( var_T == NULL );
    var_T = tmp_assign_source_17;

    tmp_called_instance_2 = const_bytes_empty;
    tmp_args_element_name_11 = var_T;

    CHECK_OBJECT( tmp_args_element_name_11 );
    frame_526018fd99bc7739c60880b48fbf6c1a->m_frame.f_lineno = 191;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_left_name_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_join, call_args );
    }

    if ( tmp_left_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_13 = var_F;

    if ( tmp_called_name_13 == NULL )
    {
        Py_DECREF( tmp_left_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "F" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = var_L;

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_left_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "L" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    frame_526018fd99bc7739c60880b48fbf6c1a->m_frame.f_lineno = 191;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_11 );

        exception_lineno = 191;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_start_name_1 = Py_None;
    tmp_stop_name_1 = var_r;

    if ( tmp_stop_name_1 == NULL )
    {
        Py_DECREF( tmp_left_name_11 );
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }

    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    assert( tmp_subscript_name_1 != NULL );
    tmp_right_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_right_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_11 );

        exception_lineno = 191;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_left_name_11 );
    Py_DECREF( tmp_right_name_11 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "occooooocccoo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_526018fd99bc7739c60880b48fbf6c1a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_526018fd99bc7739c60880b48fbf6c1a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_526018fd99bc7739c60880b48fbf6c1a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_526018fd99bc7739c60880b48fbf6c1a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_526018fd99bc7739c60880b48fbf6c1a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_526018fd99bc7739c60880b48fbf6c1a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_526018fd99bc7739c60880b48fbf6c1a,
        type_description_1,
        par_password,
        par_salt,
        par_iterations,
        par_dklen,
        par_digest,
        var_hlen,
        var_L,
        var_r,
        var_hex_format_string,
        var_inner,
        var_outer,
        var_F,
        var_T
    );


    // Release cached frame.
    if ( frame_526018fd99bc7739c60880b48fbf6c1a == cache_frame_526018fd99bc7739c60880b48fbf6c1a )
    {
        Py_DECREF( frame_526018fd99bc7739c60880b48fbf6c1a );
    }
    cache_frame_526018fd99bc7739c60880b48fbf6c1a = NULL;

    assertFrameObject( frame_526018fd99bc7739c60880b48fbf6c1a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_8_pbkdf2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)par_salt );
    Py_DECREF( par_salt );
    par_salt = NULL;

    CHECK_OBJECT( (PyObject *)par_iterations );
    Py_DECREF( par_iterations );
    par_iterations = NULL;

    Py_XDECREF( par_dklen );
    par_dklen = NULL;

    Py_XDECREF( par_digest );
    par_digest = NULL;

    Py_XDECREF( var_hlen );
    var_hlen = NULL;

    Py_XDECREF( var_L );
    var_L = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)var_hex_format_string );
    Py_DECREF( var_hex_format_string );
    var_hex_format_string = NULL;

    CHECK_OBJECT( (PyObject *)var_inner );
    Py_DECREF( var_inner );
    var_inner = NULL;

    CHECK_OBJECT( (PyObject *)var_outer );
    Py_DECREF( var_outer );
    var_outer = NULL;

    Py_XDECREF( var_F );
    var_F = NULL;

    Py_XDECREF( var_T );
    var_T = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)par_salt );
    Py_DECREF( par_salt );
    par_salt = NULL;

    CHECK_OBJECT( (PyObject *)par_iterations );
    Py_DECREF( par_iterations );
    par_iterations = NULL;

    Py_XDECREF( par_dklen );
    par_dklen = NULL;

    Py_XDECREF( par_digest );
    par_digest = NULL;

    Py_XDECREF( var_hlen );
    var_hlen = NULL;

    Py_XDECREF( var_L );
    var_L = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)var_hex_format_string );
    Py_DECREF( var_hex_format_string );
    var_hex_format_string = NULL;

    CHECK_OBJECT( (PyObject *)var_inner );
    Py_DECREF( var_inner );
    var_inner = NULL;

    CHECK_OBJECT( (PyObject *)var_outer );
    Py_DECREF( var_outer );
    var_outer = NULL;

    Py_XDECREF( var_F );
    var_F = NULL;

    Py_XDECREF( var_T );
    var_T = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_8_pbkdf2 );
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


static PyObject *impl_django$utils$crypto$$$function_8_pbkdf2$$$function_1_F( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    PyObject *var_u = NULL;
    PyObject *var_result = NULL;
    PyObject *var_j = NULL;
    PyObject *var_dig1 = NULL;
    PyObject *var_dig2 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b6c549851526024fe1f34909d6c54e24 = NULL;

    struct Nuitka_FrameObject *frame_b6c549851526024fe1f34909d6c54e24;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b6c549851526024fe1f34909d6c54e24, codeobj_b6c549851526024fe1f34909d6c54e24, module_django$utils$crypto, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b6c549851526024fe1f34909d6c54e24 = cache_frame_b6c549851526024fe1f34909d6c54e24;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b6c549851526024fe1f34909d6c54e24 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b6c549851526024fe1f34909d6c54e24 ) == 2 ); // Frame stack

    // Framed code:
    if ( self->m_closure[4] == NULL )
    {
        tmp_left_name_1 = NULL;
    }
    else
    {
        tmp_left_name_1 = PyCell_GET( self->m_closure[4] );
    }

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "salt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "ooooooccccc";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_struct );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "struct" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "ooooooccccc";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pack );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooooooccccc";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_bytes_digest_d3adc4a439f3e17d607e806b9f2108bb;
    tmp_args_element_name_2 = par_i;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "ooooooccccc";
        goto frame_exception_exit_1;
    }

    frame_b6c549851526024fe1f34909d6c54e24->m_frame.f_lineno = 180;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooooooccccc";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooooooccccc";
        goto frame_exception_exit_1;
    }
    assert( var_u == NULL );
    var_u = tmp_assign_source_1;

    tmp_assign_source_2 = const_int_0;
    assert( var_result == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_result = tmp_assign_source_2;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_range );

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

        exception_lineno = 182;
        type_description_1 = "ooooooccccc";
        goto frame_exception_exit_1;
    }

    if ( self->m_closure[2] == NULL )
    {
        tmp_int_arg_1 = NULL;
    }
    else
    {
        tmp_int_arg_1 = PyCell_GET( self->m_closure[2] );
    }

    if ( tmp_int_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "iterations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "ooooooccccc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ooooooccccc";
        goto frame_exception_exit_1;
    }
    frame_b6c549851526024fe1f34909d6c54e24->m_frame.f_lineno = 182;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ooooooccccc";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ooooooccccc";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooccccc";
            exception_lineno = 182;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_j;
        var_j = tmp_assign_source_5;
        Py_INCREF( var_j );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = PyTuple_New( 2 );
    if ( self->m_closure[1] == NULL )
    {
        tmp_called_instance_1 = NULL;
    }
    else
    {
        tmp_called_instance_1 = PyCell_GET( self->m_closure[1] );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_iter_arg_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "inner" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_3;
    }

    frame_b6c549851526024fe1f34909d6c54e24->m_frame.f_lineno = 183;
    tmp_tuple_element_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_2 );

        exception_lineno = 183;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_1 );
    if ( self->m_closure[3] == NULL )
    {
        tmp_called_instance_2 = NULL;
    }
    else
    {
        tmp_called_instance_2 = PyCell_GET( self->m_closure[3] );
    }

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_iter_arg_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "outer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_3;
    }

    frame_b6c549851526024fe1f34909d6c54e24->m_frame.f_lineno = 183;
    tmp_tuple_element_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_copy );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_2 );

        exception_lineno = 183;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_1 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "ooooooccccc";
        exception_lineno = 183;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "ooooooccccc";
        exception_lineno = 183;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooccccc";
                exception_lineno = 183;
                goto try_except_handler_4;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooccccc";
        exception_lineno = 183;
        goto try_except_handler_4;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_dig1;
        var_dig1 = tmp_assign_source_9;
        Py_INCREF( var_dig1 );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = var_dig2;
        var_dig2 = tmp_assign_source_10;
        Py_INCREF( var_dig2 );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_2 = var_dig1;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dig1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_update );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = var_u;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }

    frame_b6c549851526024fe1f34909d6c54e24->m_frame.f_lineno = 184;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = var_dig2;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dig2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_update );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }
    tmp_called_instance_3 = var_dig1;

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dig1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }

    frame_b6c549851526024fe1f34909d6c54e24->m_frame.f_lineno = 185;
    tmp_args_element_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_digest );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 185;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }
    frame_b6c549851526024fe1f34909d6c54e24->m_frame.f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_4 = var_dig2;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dig2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }

    frame_b6c549851526024fe1f34909d6c54e24->m_frame.f_lineno = 186;
    tmp_assign_source_11 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_digest );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_u;
        var_u = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_left_name_2 = var_result;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain__bin_to_long );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__bin_to_long );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_bin_to_long" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }

    tmp_args_element_name_6 = var_u;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_b6c549851526024fe1f34909d6c54e24->m_frame.f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceXor, &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_12 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }
    var_result = tmp_assign_source_12;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ooooooccccc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain__long_to_bin );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__long_to_bin );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_long_to_bin" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "ooooooccccc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_result;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "ooooooccccc";
        goto frame_exception_exit_1;
    }

    if ( self->m_closure[0] == NULL )
    {
        tmp_args_element_name_8 = NULL;
    }
    else
    {
        tmp_args_element_name_8 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "hex_format_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "ooooooccccc";
        goto frame_exception_exit_1;
    }

    frame_b6c549851526024fe1f34909d6c54e24->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ooooooccccc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6c549851526024fe1f34909d6c54e24 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6c549851526024fe1f34909d6c54e24 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6c549851526024fe1f34909d6c54e24 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b6c549851526024fe1f34909d6c54e24, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b6c549851526024fe1f34909d6c54e24->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b6c549851526024fe1f34909d6c54e24, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b6c549851526024fe1f34909d6c54e24,
        type_description_1,
        par_i,
        var_u,
        var_result,
        var_j,
        var_dig1,
        var_dig2,
        self->m_closure[4],
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[3],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_b6c549851526024fe1f34909d6c54e24 == cache_frame_b6c549851526024fe1f34909d6c54e24 )
    {
        Py_DECREF( frame_b6c549851526024fe1f34909d6c54e24 );
    }
    cache_frame_b6c549851526024fe1f34909d6c54e24 = NULL;

    assertFrameObject( frame_b6c549851526024fe1f34909d6c54e24 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_8_pbkdf2$$$function_1_F );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_i );
    par_i = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_dig1 );
    var_dig1 = NULL;

    Py_XDECREF( var_dig2 );
    var_dig2 = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_i );
    par_i = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_dig1 );
    var_dig1 = NULL;

    Py_XDECREF( var_dig2 );
    var_dig2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$crypto$$$function_8_pbkdf2$$$function_1_F );
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



static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_1_salted_hmac( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$crypto$$$function_1_salted_hmac,
        const_str_plain_salted_hmac,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0b4e33a5a063a82d1f5eb8d432e4e97c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$crypto,
        const_str_digest_322a1b5cbe8e44526c9ca8b59c36ac49,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_2_get_random_string( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$crypto$$$function_2_get_random_string,
        const_str_plain_get_random_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4d1c7089d4ea3cfb7ad631c942a4974d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$crypto,
        const_str_digest_c44f8132b00f749e4f0c84e396209abf,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_3_constant_time_compare(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$crypto$$$function_3_constant_time_compare,
        const_str_plain_constant_time_compare,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_20420cb95098a1258dbe567f200850f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$crypto,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_4_constant_time_compare(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$crypto$$$function_4_constant_time_compare,
        const_str_plain_constant_time_compare,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4d5bdf63a1d726c79fab15e68c680c0f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$crypto,
        const_str_digest_58b0739cbb8760e9568bc358e8d4cedd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_5__bin_to_long(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$crypto$$$function_5__bin_to_long,
        const_str_plain__bin_to_long,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4e7b4b76a6e2ededc830e6d3a68257b4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$crypto,
        const_str_digest_9d032572d7c57a86de2cf89c2dd7bad1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_6__long_to_bin(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$crypto$$$function_6__long_to_bin,
        const_str_plain__long_to_bin,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_146927bd95a37f2dd09b2ce8dcce1fdb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$crypto,
        const_str_digest_053e69b1027629d4b1ec711dda974822,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_7_pbkdf2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$crypto$$$function_7_pbkdf2,
        const_str_plain_pbkdf2,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4739d0fd9b0b541eccf41092c3ae7988,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$crypto,
        const_str_digest_56e7ade4d40fe838d87877ca83a60e41,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_8_pbkdf2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$crypto$$$function_8_pbkdf2,
        const_str_plain_pbkdf2,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_526018fd99bc7739c60880b48fbf6c1a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$crypto,
        const_str_digest_3ea5dc8a70965f0bbc5e684b2dd53ace,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$crypto$$$function_8_pbkdf2$$$function_1_F( struct Nuitka_CellObject *closure_hex_format_string, struct Nuitka_CellObject *closure_inner, struct Nuitka_CellObject *closure_iterations, struct Nuitka_CellObject *closure_outer, struct Nuitka_CellObject *closure_salt )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$crypto$$$function_8_pbkdf2$$$function_1_F,
        const_str_plain_F,
#if PYTHON_VERSION >= 330
        const_str_digest_d020d7680a7e61670f2e44e8ba3b4e40,
#endif
        codeobj_b6c549851526024fe1f34909d6c54e24,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$crypto,
        Py_None,
        5
    );

result->m_closure[0] = closure_hex_format_string;
Py_INCREF( result->m_closure[0] );
result->m_closure[1] = closure_inner;
Py_INCREF( result->m_closure[1] );
result->m_closure[2] = closure_iterations;
Py_INCREF( result->m_closure[2] );
result->m_closure[3] = closure_outer;
Py_INCREF( result->m_closure[3] );
result->m_closure[4] = closure_salt;
Py_INCREF( result->m_closure[4] );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$utils$crypto =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.crypto",   /* m_name */
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

MOD_INIT_DECL( django$utils$crypto )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$utils$crypto );
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
    puts("django.utils.crypto: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.utils.crypto: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$utils$crypto" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$utils$crypto = Py_InitModule4(
        "django.utils.crypto",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$utils$crypto = PyModule_Create( &mdef_django$utils$crypto );
#endif

    moduledict_django$utils$crypto = MODULE_DICT( module_django$utils$crypto );

    CHECK_OBJECT( module_django$utils$crypto );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9b40607a55961c64eeb5675a39cb5170, module_django$utils$crypto );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_fromlist_name_10;
    PyObject *tmp_fromlist_name_11;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
    PyObject *tmp_globals_name_10;
    PyObject *tmp_globals_name_11;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_level_name_9;
    PyObject *tmp_level_name_10;
    PyObject *tmp_level_name_11;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_locals_name_10;
    PyObject *tmp_locals_name_11;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    PyObject *tmp_name_name_10;
    PyObject *tmp_name_name_11;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_7583cc756abced9aa415e67e788abc6f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_d92a7dce2ca13cd80dd2a7032c44f506;
    UPDATE_STRING_DICT0( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_7583cc756abced9aa415e67e788abc6f = MAKE_MODULE_FRAME( codeobj_7583cc756abced9aa415e67e788abc6f, module_django$utils$crypto );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_7583cc756abced9aa415e67e788abc6f );
    assert( Py_REFCNT( frame_7583cc756abced9aa415e67e788abc6f ) == 2 );

    // Framed code:
    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_9b40607a55961c64eeb5675a39cb5170;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_467c9722f19d9d40d148689532cdc0b1;
    UPDATE_STRING_DICT0( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 4;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_unicode_literals );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_plain_binascii;
    tmp_globals_name_1 = (PyObject *)moduledict_django$utils$crypto;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 6;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( tmp_assign_source_8 != NULL );
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_binascii, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_hashlib;
    tmp_globals_name_2 = (PyObject *)moduledict_django$utils$crypto;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 7;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_hashlib, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_plain_hmac;
    tmp_globals_name_3 = (PyObject *)moduledict_django$utils$crypto;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 8;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_hmac, tmp_assign_source_10 );
    tmp_name_name_4 = const_str_plain_random;
    tmp_globals_name_4 = (PyObject *)moduledict_django$utils$crypto;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 9;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_random, tmp_assign_source_11 );
    tmp_name_name_5 = const_str_plain_struct;
    tmp_globals_name_5 = (PyObject *)moduledict_django$utils$crypto;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    tmp_level_name_5 = const_int_0;
    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 10;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_struct, tmp_assign_source_12 );
    tmp_name_name_6 = const_str_plain_time;
    tmp_globals_name_6 = (PyObject *)moduledict_django$utils$crypto;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = Py_None;
    tmp_level_name_6 = const_int_0;
    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 11;
    tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    assert( tmp_assign_source_13 != NULL );
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_13 );
    tmp_name_name_7 = const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
    tmp_globals_name_7 = (PyObject *)moduledict_django$utils$crypto;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_settings_tuple;
    tmp_level_name_7 = const_int_0;
    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 13;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_settings );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_settings, tmp_assign_source_14 );
    tmp_name_name_8 = const_str_digest_467c9722f19d9d40d148689532cdc0b1;
    tmp_globals_name_8 = (PyObject *)moduledict_django$utils$crypto;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_six_tuple;
    tmp_level_name_8 = const_int_0;
    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 14;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_six );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_15 );
    tmp_name_name_9 = const_str_digest_e3393b2e61653c3df2c7d436c253bbee;
    tmp_globals_name_9 = (PyObject *)moduledict_django$utils$crypto;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_force_bytes_tuple;
    tmp_level_name_9 = const_int_0;
    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 15;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_force_bytes );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_force_bytes, tmp_assign_source_16 );
    tmp_name_name_10 = const_str_digest_6fed4619fa8d4c69fdb5c74f190acfee;
    tmp_globals_name_10 = (PyObject *)moduledict_django$utils$crypto;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_range_tuple;
    tmp_level_name_10 = const_int_0;
    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 16;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_range );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_17 );
    // Tried code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_random );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "random" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;

        goto try_except_handler_1;
    }

    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 20;
    tmp_assign_source_18 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_SystemRandom );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_random, tmp_assign_source_18 );
    tmp_assign_source_19 = Py_True;
    UPDATE_STRING_DICT0( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_using_sysrandom, tmp_assign_source_19 );
    goto try_end_1;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_7583cc756abced9aa415e67e788abc6f, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_7583cc756abced9aa415e67e788abc6f, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_NotImplementedError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_name_name_11 = const_str_plain_warnings;
    tmp_globals_name_11 = (PyObject *)moduledict_django$utils$crypto;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = Py_None;
    tmp_level_name_11 = const_int_0;
    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 23;
    tmp_assign_source_20 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_20 );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;

        goto try_except_handler_2;
    }

    frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = 24;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_warn, &PyTuple_GET_ITEM( const_tuple_str_digest_d2ac1091e83ebb92fc97727dfd43f6d9_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_21 = Py_False;
    UPDATE_STRING_DICT0( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_using_sysrandom, tmp_assign_source_21 );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 19;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_7583cc756abced9aa415e67e788abc6f->m_frame) frame_7583cc756abced9aa415e67e788abc6f->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$crypto );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_22 = MAKE_FUNCTION_django$utils$crypto$$$function_1_salted_hmac( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_salted_hmac, tmp_assign_source_22 );
    tmp_defaults_2 = const_tuple_int_pos_12_str_digest_169c96f1aee42be47b96f77d66a0607e_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_23 = MAKE_FUNCTION_django$utils$crypto$$$function_2_get_random_string( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_get_random_string, tmp_assign_source_23 );
    tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_hmac );

    if (unlikely( tmp_hasattr_source_1 == NULL ))
    {
        tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hmac );
    }

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hmac" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;

        goto frame_exception_exit_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_compare_digest;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_24 = MAKE_FUNCTION_django$utils$crypto$$$function_3_constant_time_compare(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_constant_time_compare, tmp_assign_source_24 );
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_25 = MAKE_FUNCTION_django$utils$crypto$$$function_4_constant_time_compare(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_constant_time_compare, tmp_assign_source_25 );
    branch_end_2:;
    tmp_assign_source_26 = MAKE_FUNCTION_django$utils$crypto$$$function_5__bin_to_long(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain__bin_to_long, tmp_assign_source_26 );
    tmp_assign_source_27 = MAKE_FUNCTION_django$utils$crypto$$$function_6__long_to_bin(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain__long_to_bin, tmp_assign_source_27 );
    tmp_hasattr_source_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_hashlib );

    if (unlikely( tmp_hasattr_source_2 == NULL ))
    {
        tmp_hasattr_source_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
    }

    if ( tmp_hasattr_source_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;

        goto frame_exception_exit_1;
    }

    tmp_hasattr_attr_2 = const_str_plain_pbkdf2_hmac;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_defaults_3 = const_tuple_int_0_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_28 = MAKE_FUNCTION_django$utils$crypto$$$function_7_pbkdf2( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_pbkdf2, tmp_assign_source_28 );
    goto branch_end_3;
    branch_no_3:;
    tmp_defaults_4 = const_tuple_int_0_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_29 = MAKE_FUNCTION_django$utils$crypto$$$function_8_pbkdf2( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_django$utils$crypto, (Nuitka_StringObject *)const_str_plain_pbkdf2, tmp_assign_source_29 );
    branch_end_3:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_7583cc756abced9aa415e67e788abc6f );
#endif
    popFrameStack();

    assertFrameObject( frame_7583cc756abced9aa415e67e788abc6f );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_7583cc756abced9aa415e67e788abc6f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7583cc756abced9aa415e67e788abc6f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7583cc756abced9aa415e67e788abc6f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7583cc756abced9aa415e67e788abc6f, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_django$utils$crypto );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
