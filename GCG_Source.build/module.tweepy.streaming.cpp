/* Generated code for Python source for module 'tweepy.streaming'
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

/* The _module_tweepy$streaming is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_tweepy$streaming;
PyDictObject *moduledict_tweepy$streaming;

/* The module constants used, if any. */
extern PyObject *const_str_plain_threading;
extern PyObject *const_str_plain_Status;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
static PyObject *const_tuple_none_none_false_none_false_none_str_plain_utf8_none_tuple;
extern PyObject *const_str_plain_sample;
extern PyObject *const_str_plain_headers;
static PyObject *const_float_60_0;
static PyObject *const_str_plain_status_id;
extern PyObject *const_str_plain__encoding;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_plain_next_status_obj;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_3b6ab6efad72198611a41175ffd8fe96;
extern PyObject *const_str_plain_request;
static PyObject *const_str_plain__buffer;
static PyObject *const_str_digest_58178cbf4f5a287345711f196bc75eb4;
static PyObject *const_tuple_str_plain_retry_time_float_5_0_tuple;
extern PyObject *const_str_digest_01815186f693d6c36c2765b5da31be5e;
extern PyObject *const_str_plain_sep;
extern PyObject *const_int_pos_420;
extern PyObject *const_str_plain__thread;
static PyObject *const_tuple_e4a9c3b6f12f5f57393b47e472c2aae6_tuple;
static PyObject *const_tuple_d9e387b166c6df605a0a49e5066da6a2_tuple;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_tuple_str_plain_snooze_time_cap_int_pos_16_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_on_friends;
static PyObject *const_str_digest_6f0340395000a1ec214046fde63d2a72;
extern PyObject *const_str_digest_eefde7c00c3216345f2e7c1eca9ec9bc;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_8df002b91d4d7d6dcd79f559dda41e06;
extern PyObject *const_str_plain_retweet;
extern PyObject *const_str_plain_POST;
static PyObject *const_str_plain_on_event;
static PyObject *const_str_digest_3aaa656a269b84577c77cd7e0da18489;
extern PyObject *const_str_plain_group;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_max;
static PyObject *const_str_digest_ffcc9004c74d6c3b65a67c906ab27ca4;
static PyObject *const_str_plain_on_timeout;
static PyObject *const_str_digest_c69fe247004d23a697b01b2a3332e5f3;
static PyObject *const_tuple_str_plain_chunk_size_int_pos_512_tuple;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_angle_listcontraction;
extern PyObject *const_str_plain_json;
extern PyObject *const_str_plain__stream;
extern PyObject *const_str_plain_default;
static PyObject *const_str_digest_e1d75803f793ccbcffdb113dfee2c962;
static PyObject *const_str_plain_ReadBuffer;
static PyObject *const_str_digest_5c175abed9cf1957c3fc709c29a36d21;
extern PyObject *const_str_plain_exception;
extern PyObject *const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
static PyObject *const_str_digest_7bb883d519d747356c3594119760af56;
extern PyObject *const_str_plain_id;
static PyObject *const_str_digest_dac79b251701b803513c0eaa2afb6480;
static PyObject *const_str_plain_listener;
static PyObject *const_str_digest_8e5d29e7b2bc346521620753154e3729;
extern PyObject *const_str_plain_charset;
static PyObject *const_tuple_str_plain_self_str_plain_notice_tuple;
extern PyObject *const_str_plain_TweepError;
extern PyObject *const_str_plain_friends;
static PyObject *const_float_0_25;
static PyObject *const_str_plain_on_data;
extern PyObject *const_str_plain_strip;
extern PyObject *const_int_pos_512;
static PyObject *const_str_plain_on_exception;
extern PyObject *const_str_plain_sleep;
extern PyObject *const_str_plain_filter;
extern PyObject *const_str_plain_enc;
static PyObject *const_str_plain_snooze_time;
static PyObject *const_str_plain_new_session;
extern PyObject *const_str_plain_tweepy;
static PyObject *const_str_digest_8461b642c2155e0a0bd4750f46de9da4;
extern PyObject *const_str_plain_body;
static PyObject *const_tuple_str_plain_Thread_tuple;
extern PyObject *const_str_plain_read;
static PyObject *const_str_plain__start;
extern PyObject *const_str_plain__pop;
extern PyObject *const_str_plain_start;
static PyObject *const_tuple_str_plain_headers_tuple;
static PyObject *const_str_digest_26e3dc8e069beb27fb3b41d946b409a1;
static PyObject *const_str_digest_d833718dcb8b2c2031a18139fb0c5346;
static PyObject *const_str_plain_read_line;
extern PyObject *const_tuple_str_plain_self_str_plain_api_tuple;
static PyObject *const_str_plain_async;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_str_plain_self_str_plain_status_tuple;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain_follow;
static PyObject *const_str_digest_6784573428e147e32ed52def527db378;
static PyObject *const_str_digest_8186b603c95bc019420426a6174e1322;
extern PyObject *const_str_plain_time;
static PyObject *const_tuple_str_plain_l_str_plain_locations_tuple;
extern PyObject *const_str_plain_data;
static PyObject *const_str_plain_on_status;
static PyObject *const_str_digest_11c96f3c9cfb0bfe98136da6da2ae9f1;
extern PyObject *const_str_plain_closed;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_d8d7ff1965350df89c11c0b7adae8926;
extern PyObject *const_str_plain_close;
static PyObject *const_str_digest_ed2d1ea9b82a69a1772b0c248b17f9c9;
static PyObject *const_str_digest_35b41f02132ba86dbfbe0a3f04b099bd;
extern PyObject *const_tuple_none_false_tuple;
static PyObject *const_str_digest_43148b21c002a95284e68ac343b1f238;
static PyObject *const_str_plain_running;
extern PyObject *const_str_chr_44;
static PyObject *const_str_plain_on_error;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_140942abdd81d83593535fe616106fa4;
static PyObject *const_str_digest_c7d77ae96464fdb39311dae9f158309f;
extern PyObject *const_str_plain_host;
extern PyObject *const_str_plain_status;
static PyObject *const_tuple_str_plain_self_str_plain_count_str_plain_async_tuple;
extern PyObject *const_str_plain_isdigit;
extern PyObject *const_str_plain_min;
static PyObject *const_str_digest_77bb8d77b07b9b3008366fe16586bac8;
extern PyObject *const_str_plain_Session;
static PyObject *const_tuple_str_plain_self_str_plain_length_str_plain_read_len_tuple;
static PyObject *const_str_plain_enc_search;
extern PyObject *const_str_plain_six;
static PyObject *const_tuple_str_plain_Status_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_str_plain_limit;
static PyObject *const_tuple_str_plain_self_str_plain_sep_str_plain_start_str_plain_loc_tuple;
static PyObject *const_str_digest_c11484d73b3b6e8bf3e31408f4233993;
extern PyObject *const_str_plain_line;
static PyObject *const_str_digest_fa743648d06e8ccce1bde3b0c6f9ceb6;
static PyObject *const_tuple_str_plain_self_str_plain_resp_tuple;
static PyObject *const_dict_792dcbb12846adb787e2e09ec4c9959c;
static PyObject *const_tuple_str_plain_self_str_plain_status_code_tuple;
extern PyObject *const_str_plain_loc;
static PyObject *const_str_digest_71488f318ffa5eab9d38fdbb8a7ba895;
static PyObject *const_str_digest_40113b95a8a5eb8cef7fb4eb48a287ee;
extern PyObject *const_str_plain_l;
extern PyObject *const_tuple_str_newline_tuple;
static PyObject *const_str_digest_1383f0647caa2bbdab83d2461584c3fd;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_error_counter;
extern PyObject *const_str_plain_event;
extern PyObject *const_str_plain_status_code;
static PyObject *const_str_plain_userstream;
extern PyObject *const_str_plain___loader__;
static PyObject *const_tuple_str_plain_self_str_plain_async_tuple;
static PyObject *const_str_digest_eb98632d14442ee992155a61e4882305;
static PyObject *const_tuple_str_plain_self_str_plain_async_str_plain_languages_tuple;
static PyObject *const_str_plain_on_direct_message;
extern PyObject *const_tuple_str_plain_API_tuple;
extern PyObject *const_str_plain_session;
extern PyObject *const_str_plain_raw;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_with;
static PyObject *const_str_digest_e637942fa5ad4655e4099c334a1f1642;
static PyObject *const_str_digest_0a821dc89c2ff3e7f793a0ba384d50ca;
extern PyObject *const_str_plain_on_delete;
static PyObject *const_str_digest_45058a5b5ed72f807e9f0d88a0b9e6e0;
static PyObject *const_tuple_str_plain_self_str_plain_length_str_plain_r_tuple;
static PyObject *const_str_digest_30331783e70b307d6fe8be0c17a8135d;
extern PyObject *const_str_plain_error;
static PyObject *const_str_digest_ee4ea5c31d2db910c0c22ca8ae18231c;
static PyObject *const_str_plain_sitestream;
static PyObject *const_str_plain_STREAM_VERSION;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_join;
static PyObject *const_str_plain_filter_level;
extern PyObject *const_tuple_str_plain_self_str_plain_exception_tuple;
static PyObject *const_str_plain_retry_420_start;
extern PyObject *const_str_plain_ModuleSpec;
static PyObject *const_str_digest_28bb8d95fcc67f27cb375c882b016d59;
static PyObject *const_tuple_589726bf565d8b3fa91b39b1fe8d751a_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_status_id_str_plain_user_id_tuple;
extern PyObject *const_str_plain_decode;
extern PyObject *const_tuple_str_empty_tuple;
extern PyObject *const_str_plain_keep_alive;
static PyObject *const_str_digest_9d146fe17f68f6ee8f2e0d4158c002e4;
static PyObject *const_tuple_false_str_plain_user_false_false_tuple;
static PyObject *const_str_plain_notice;
extern PyObject *const_str_plain_stream;
static PyObject *const_str_digest_16d787ff3c4ad0ab473a0593cc4fdb3b;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
static PyObject *const_str_plain_read_len;
static PyObject *const_str_digest_7aca9d6ab7b89f0565226a86d745799e;
static PyObject *const_tuple_e0ca80233ab9f1fda15af93fe2a67707_tuple;
static PyObject *const_tuple_str_plain_retry_420_float_60_0_tuple;
extern PyObject *const_str_plain_encoding;
static PyObject *const_float_5_0;
static PyObject *const_str_plain__with;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_plain_ssl;
extern PyObject *const_str_plain_buf;
static PyObject *const_str_digest_a7320611f8f08b4f3a228e9c29cadc98;
extern PyObject *const_int_0;
static PyObject *const_str_digest_3d3d221f0c0525b510d4c17b7293c731;
extern PyObject *const_str_plain_raw_data;
extern PyObject *const_str_plain_API;
extern PyObject *const_tuple_false_none_tuple;
static PyObject *const_str_digest_b405e1469da16c802dbf92224bdc85b8;
extern PyObject *const_str_plain_languages;
extern PyObject *const_str_plain_utf8;
static PyObject *const_str_plain_retry_time;
extern PyObject *const_str_plain_import_simplejson;
static PyObject *const_tuple_d90aa02fc863085a555f416b574a77b9_tuple;
extern PyObject *const_str_plain_search;
extern PyObject *const_str_digest_e54518659f8bd83bab5b18e0c951bc41;
extern PyObject *const_str_plain_Timeout;
extern PyObject *const_str_digest_4fe4e33419813bebd8b0147aaca0d197;
static PyObject *const_str_digest_41bf1a10c3f6dc9f5f559813f1e7dfd2;
static PyObject *const_str_plain_firehose;
static PyObject *const_tuple_str_plain_retry_time_cap_float_320_0_tuple;
extern PyObject *const_str_plain_length;
static PyObject *const_str_digest_761b208be678c3d9a0fad8408ebf4589;
static PyObject *const_str_plain_with_;
extern PyObject *const_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8;
static PyObject *const_tuple_str_plain_verify_true_tuple;
extern PyObject *const_str_plain_warning;
extern PyObject *const_str_plain_verify;
static PyObject *const_str_digest_c3c000b769072d3888600e0558a503f7;
static PyObject *const_tuple_2e274ba9398f1cbc1f891df1f4334ffa_tuple;
extern PyObject *const_str_plain_StreamListener;
extern PyObject *const_int_pos_4;
static PyObject *const_str_digest_9b1f98e83b9e181dc946f50b95371b80;
extern PyObject *const_int_pos_200;
extern PyObject *const_str_plain_direct_message;
static PyObject *const_str_plain_snooze_time_cap;
static PyObject *const_str_plain_Thread;
extern PyObject *const_str_digest_ca0d94460f56234ef147c7fbf497fc49;
static PyObject *const_str_plain_snooze_time_step;
static PyObject *const_tuple_str_digest_16d787ff3c4ad0ab473a0593cc4fdb3b_tuple;
static PyObject *const_str_digest_c2cfc1d38a254d67108f7c6f42807fb1;
static PyObject *const_str_digest_8ae23802a2d9c9c3bf7ea95f68884923;
static PyObject *const_str_digest_5be720d8caff7975ffdf29bb4daa8712;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_str_digest_e637942fa5ad4655e4099c334a1f1642_tuple;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_ed2045eba39a73784d52bc0e6bc61a1b;
static PyObject *const_str_plain_on_limit;
static PyObject *const_str_plain_replies;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_d7828d2f4b1420557334eda416b50100;
static PyObject *const_str_plain_retry_time_start;
static PyObject *const_str_digest_6a75f21d933bac1f61977a4c64854242;
static PyObject *const_str_plain_delimited;
static PyObject *const_tuple_str_plain_timeout_float_300_0_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_on_connect;
static PyObject *const_str_plain__read_loop;
extern PyObject *const_str_plain_api;
extern PyObject *const_str_plain_Stream;
static PyObject *const_tuple_str_digest_40113b95a8a5eb8cef7fb4eb48a287ee_tuple;
static PyObject *const_tuple_5a4a07835a17fe2d8b60c36f8b32bde5_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_friends_tuple;
static PyObject *const_str_plain_on_warning;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_digest_42e125dde2b0dfbc83d32ab394284b81;
static PyObject *const_str_digest_e8efece438a583fab63d9d1291af1975;
extern PyObject *const_str_plain_params;
extern PyObject *const_str_plain_requests;
extern PyObject *const_str_plain_text_type;
static PyObject *const_tuple_str_plain_snooze_time_float_0_25_tuple;
static PyObject *const_str_digest_05c758a57c70463a3c55556de5c77ca9;
static PyObject *const_str_digest_1d1980b518eebf5640dce24db3c49349;
static PyObject *const_str_digest_e34b69b512f5f14ad3ef21685591c288;
static PyObject *const_str_digest_b2813d83300370be515aec6e4cfd9f79;
static PyObject *const_str_digest_7a6c5685c07babc2f91efdea687a8363;
extern PyObject *const_str_plain__chunk_size;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_stall_warnings;
static PyObject *const_str_digest_23f45c62a803b3d6b45593ee0bcbcdd4;
extern PyObject *const_tuple_str_plain_TweepError_tuple;
static PyObject *const_dict_be7c76ce8c5dc8badebcfeb1d22ff954;
static PyObject *const_tuple_str_plain_sleep_tuple;
extern PyObject *const_str_plain_language;
extern PyObject *const_str_plain_exc;
extern PyObject *const_str_plain_apply_auth;
static PyObject *const_str_digest_df90d729ed99b9215b05d00aa40fb185;
static PyObject *const_tuple_77a73f6201f17138716a472d98076dee_tuple;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain_target;
extern PyObject *const_str_plain_auth;
static PyObject *const_str_digest_c4a6d8965c7d140f1c553688c5f3c3f0;
static PyObject *const_str_digest_5c3703a899f303d1b1ea99d1013e44f1;
static PyObject *const_str_digest_56665bf09354d6f2e034971086407f48;
static PyObject *const_str_digest_0a96326ecc59988539ec5fa960bce9eb;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_c161c983a1be5adc1f59cf1e97ed8b57;
static PyObject *const_str_plain_on_closed;
static PyObject *const_str_plain_locations;
extern PyObject *const_str_plain_user_id;
extern PyObject *const_tuple_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8_tuple;
static PyObject *const_tuple_9f7e928dd1e8bf438bbf8bd045ca67a3_tuple;
extern PyObject *const_str_plain_parse;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_on_disconnect;
static PyObject *const_str_digest_6612e3f1345fb7a94ada90b2d03323d5;
extern PyObject *const_tuple_str_plain_Timeout_tuple;
static PyObject *const_str_digest_97b96d4df9a2e59d8ddb709b3e03141c;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_track_tuple;
extern PyObject *const_str_plain_user;
extern PyObject *const_str_plain_loads;
static PyObject *const_str_plain_retry_420;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_chunk_size;
extern PyObject *const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
static PyObject *const_tuple_str_plain_retry_count_tuple;
static PyObject *const_str_digest_4a7645f398fd0a431a4fc76eadb605e7;
extern PyObject *const_str_plain_disconnect;
static PyObject *const_str_plain_track;
static PyObject *const_tuple_false_none_none_none_none_false_str_plain_utf8_tuple;
extern PyObject *const_str_plain_in_reply_to_status_id;
extern PyObject *const_str_plain_retry_count;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_delete;
static PyObject *const_tuple_str_plain_enc_tuple;
extern PyObject *const_str_plain_resp;
static PyObject *const_str_digest_1d2f36a1f5079aaf2d5c8180a96122ff;
extern PyObject *const_str_plain_logging;
extern PyObject *const_tuple_str_plain_import_simplejson_tuple;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_str_plain_find;
static PyObject *const_str_plain_retry_time_cap;
extern PyObject *const_str_plain__data;
static PyObject *const_float_320_0;
static PyObject *const_str_plain__run;
static PyObject *const_float_300_0;
static PyObject *const_str_digest_8843fb623236b98def0f05dea30590de;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_none_none_false_none_false_none_str_plain_utf8_none_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_false_none_str_plain_utf8_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_false_none_str_plain_utf8_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_false_none_str_plain_utf8_none_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_false_none_str_plain_utf8_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_false_none_str_plain_utf8_none_tuple, 4, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_false_none_str_plain_utf8_none_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_false_none_str_plain_utf8_none_tuple, 6, const_str_plain_utf8 ); Py_INCREF( const_str_plain_utf8 );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_false_none_str_plain_utf8_none_tuple, 7, Py_None ); Py_INCREF( Py_None );
    const_float_60_0 = UNSTREAM_FLOAT( &constant_bin[ 1912870 ] );
    const_str_plain_status_id = UNSTREAM_STRING( &constant_bin[ 1886350 ], 9, 1 );
    const_str_plain_next_status_obj = UNSTREAM_STRING( &constant_bin[ 1912878 ], 15, 1 );
    const_str_digest_3b6ab6efad72198611a41175ffd8fe96 = UNSTREAM_STRING( &constant_bin[ 1912893 ], 17, 0 );
    const_str_plain__buffer = UNSTREAM_STRING( &constant_bin[ 121764 ], 7, 1 );
    const_str_digest_58178cbf4f5a287345711f196bc75eb4 = UNSTREAM_STRING( &constant_bin[ 1912910 ], 189, 0 );
    const_tuple_str_plain_retry_time_float_5_0_tuple = PyTuple_New( 2 );
    const_str_plain_retry_time = UNSTREAM_STRING( &constant_bin[ 1913099 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_retry_time_float_5_0_tuple, 0, const_str_plain_retry_time ); Py_INCREF( const_str_plain_retry_time );
    const_float_5_0 = UNSTREAM_FLOAT( &constant_bin[ 1913109 ] );
    PyTuple_SET_ITEM( const_tuple_str_plain_retry_time_float_5_0_tuple, 1, const_float_5_0 ); Py_INCREF( const_float_5_0 );
    const_tuple_e4a9c3b6f12f5f57393b47e472c2aae6_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e4a9c3b6f12f5f57393b47e472c2aae6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e4a9c3b6f12f5f57393b47e472c2aae6_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_e4a9c3b6f12f5f57393b47e472c2aae6_tuple, 2, const_str_plain_chunk_size ); Py_INCREF( const_str_plain_chunk_size );
    PyTuple_SET_ITEM( const_tuple_e4a9c3b6f12f5f57393b47e472c2aae6_tuple, 3, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    const_tuple_d9e387b166c6df605a0a49e5066da6a2_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_d9e387b166c6df605a0a49e5066da6a2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_stall_warnings = UNSTREAM_STRING( &constant_bin[ 1913117 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_d9e387b166c6df605a0a49e5066da6a2_tuple, 1, const_str_plain_stall_warnings ); Py_INCREF( const_str_plain_stall_warnings );
    const_str_plain__with = UNSTREAM_STRING( &constant_bin[ 116179 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_d9e387b166c6df605a0a49e5066da6a2_tuple, 2, const_str_plain__with ); Py_INCREF( const_str_plain__with );
    const_str_plain_replies = UNSTREAM_STRING( &constant_bin[ 1913131 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_d9e387b166c6df605a0a49e5066da6a2_tuple, 3, const_str_plain_replies ); Py_INCREF( const_str_plain_replies );
    const_str_plain_track = UNSTREAM_STRING( &constant_bin[ 736787 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_d9e387b166c6df605a0a49e5066da6a2_tuple, 4, const_str_plain_track ); Py_INCREF( const_str_plain_track );
    const_str_plain_locations = UNSTREAM_STRING( &constant_bin[ 731877 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_d9e387b166c6df605a0a49e5066da6a2_tuple, 5, const_str_plain_locations ); Py_INCREF( const_str_plain_locations );
    const_str_plain_async = UNSTREAM_STRING( &constant_bin[ 1422234 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_d9e387b166c6df605a0a49e5066da6a2_tuple, 6, const_str_plain_async ); Py_INCREF( const_str_plain_async );
    PyTuple_SET_ITEM( const_tuple_d9e387b166c6df605a0a49e5066da6a2_tuple, 7, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    const_tuple_str_plain_snooze_time_cap_int_pos_16_tuple = PyTuple_New( 2 );
    const_str_plain_snooze_time_cap = UNSTREAM_STRING( &constant_bin[ 1913138 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_snooze_time_cap_int_pos_16_tuple, 0, const_str_plain_snooze_time_cap ); Py_INCREF( const_str_plain_snooze_time_cap );
    PyTuple_SET_ITEM( const_tuple_str_plain_snooze_time_cap_int_pos_16_tuple, 1, const_int_pos_16 ); Py_INCREF( const_int_pos_16 );
    const_str_plain_on_friends = UNSTREAM_STRING( &constant_bin[ 1913153 ], 10, 1 );
    const_str_digest_6f0340395000a1ec214046fde63d2a72 = UNSTREAM_STRING( &constant_bin[ 1913163 ], 227, 0 );
    const_str_digest_8df002b91d4d7d6dcd79f559dda41e06 = UNSTREAM_STRING( &constant_bin[ 1913390 ], 27, 0 );
    const_str_plain_on_event = UNSTREAM_STRING( &constant_bin[ 1913417 ], 8, 1 );
    const_str_digest_3aaa656a269b84577c77cd7e0da18489 = UNSTREAM_STRING( &constant_bin[ 1913425 ], 31, 0 );
    const_str_digest_ffcc9004c74d6c3b65a67c906ab27ca4 = UNSTREAM_STRING( &constant_bin[ 1913456 ], 22, 0 );
    const_str_plain_on_timeout = UNSTREAM_STRING( &constant_bin[ 1913478 ], 10, 1 );
    const_str_digest_c69fe247004d23a697b01b2a3332e5f3 = UNSTREAM_STRING( &constant_bin[ 1913488 ], 32, 0 );
    const_tuple_str_plain_chunk_size_int_pos_512_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_chunk_size_int_pos_512_tuple, 0, const_str_plain_chunk_size ); Py_INCREF( const_str_plain_chunk_size );
    PyTuple_SET_ITEM( const_tuple_str_plain_chunk_size_int_pos_512_tuple, 1, const_int_pos_512 ); Py_INCREF( const_int_pos_512 );
    const_str_digest_e1d75803f793ccbcffdb113dfee2c962 = UNSTREAM_STRING( &constant_bin[ 1913520 ], 20, 0 );
    const_str_plain_ReadBuffer = UNSTREAM_STRING( &constant_bin[ 1913540 ], 10, 1 );
    const_str_digest_5c175abed9cf1957c3fc709c29a36d21 = UNSTREAM_STRING( &constant_bin[ 1913550 ], 12, 0 );
    const_str_digest_7bb883d519d747356c3594119760af56 = UNSTREAM_STRING( &constant_bin[ 1913562 ], 17, 0 );
    const_str_digest_dac79b251701b803513c0eaa2afb6480 = UNSTREAM_STRING( &constant_bin[ 1913579 ], 19, 0 );
    const_str_plain_listener = UNSTREAM_STRING( &constant_bin[ 737681 ], 8, 1 );
    const_str_digest_8e5d29e7b2bc346521620753154e3729 = UNSTREAM_STRING( &constant_bin[ 1913598 ], 22, 0 );
    const_tuple_str_plain_self_str_plain_notice_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_notice_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_notice = UNSTREAM_STRING( &constant_bin[ 1203277 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_notice_tuple, 1, const_str_plain_notice ); Py_INCREF( const_str_plain_notice );
    const_float_0_25 = UNSTREAM_FLOAT( &constant_bin[ 1913620 ] );
    const_str_plain_on_data = UNSTREAM_STRING( &constant_bin[ 1068401 ], 7, 1 );
    const_str_plain_on_exception = UNSTREAM_STRING( &constant_bin[ 1913405 ], 12, 1 );
    const_str_plain_snooze_time = UNSTREAM_STRING( &constant_bin[ 1913138 ], 11, 1 );
    const_str_plain_new_session = UNSTREAM_STRING( &constant_bin[ 1913628 ], 11, 1 );
    const_str_digest_8461b642c2155e0a0bd4750f46de9da4 = UNSTREAM_STRING( &constant_bin[ 1913639 ], 12, 0 );
    const_tuple_str_plain_Thread_tuple = PyTuple_New( 1 );
    const_str_plain_Thread = UNSTREAM_STRING( &constant_bin[ 1913651 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Thread_tuple, 0, const_str_plain_Thread ); Py_INCREF( const_str_plain_Thread );
    const_str_plain__start = UNSTREAM_STRING( &constant_bin[ 830981 ], 6, 1 );
    const_tuple_str_plain_headers_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_headers_tuple, 0, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    const_str_digest_26e3dc8e069beb27fb3b41d946b409a1 = UNSTREAM_STRING( &constant_bin[ 1913657 ], 39, 0 );
    const_str_digest_d833718dcb8b2c2031a18139fb0c5346 = UNSTREAM_STRING( &constant_bin[ 1913696 ], 19, 0 );
    const_str_plain_read_line = UNSTREAM_STRING( &constant_bin[ 1913715 ], 9, 1 );
    const_tuple_str_plain_self_str_plain_status_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_status_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_status_tuple, 1, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    const_str_digest_6784573428e147e32ed52def527db378 = UNSTREAM_STRING( &constant_bin[ 1913724 ], 23, 0 );
    const_str_digest_8186b603c95bc019420426a6174e1322 = UNSTREAM_STRING( &constant_bin[ 1913747 ], 13, 0 );
    const_tuple_str_plain_l_str_plain_locations_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_l_str_plain_locations_tuple, 0, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    PyTuple_SET_ITEM( const_tuple_str_plain_l_str_plain_locations_tuple, 1, const_str_plain_locations ); Py_INCREF( const_str_plain_locations );
    const_str_plain_on_status = UNSTREAM_STRING( &constant_bin[ 1913760 ], 9, 1 );
    const_str_digest_11c96f3c9cfb0bfe98136da6da2ae9f1 = UNSTREAM_STRING( &constant_bin[ 1913769 ], 24, 0 );
    const_str_digest_d8d7ff1965350df89c11c0b7adae8926 = UNSTREAM_STRING( &constant_bin[ 1913793 ], 15, 0 );
    const_str_digest_ed2d1ea9b82a69a1772b0c248b17f9c9 = UNSTREAM_STRING( &constant_bin[ 1913808 ], 9, 0 );
    const_str_digest_35b41f02132ba86dbfbe0a3f04b099bd = UNSTREAM_STRING( &constant_bin[ 1913817 ], 24, 0 );
    const_str_digest_43148b21c002a95284e68ac343b1f238 = UNSTREAM_STRING( &constant_bin[ 1913841 ], 24, 0 );
    const_str_plain_running = UNSTREAM_STRING( &constant_bin[ 812326 ], 7, 1 );
    const_str_plain_on_error = UNSTREAM_STRING( &constant_bin[ 1913865 ], 8, 1 );
    const_str_digest_140942abdd81d83593535fe616106fa4 = UNSTREAM_STRING( &constant_bin[ 1913873 ], 45, 0 );
    const_str_digest_c7d77ae96464fdb39311dae9f158309f = UNSTREAM_STRING( &constant_bin[ 1913918 ], 17, 0 );
    const_tuple_str_plain_self_str_plain_count_str_plain_async_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_count_str_plain_async_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_count_str_plain_async_tuple, 1, const_str_plain_count ); Py_INCREF( const_str_plain_count );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_count_str_plain_async_tuple, 2, const_str_plain_async ); Py_INCREF( const_str_plain_async );
    const_str_digest_77bb8d77b07b9b3008366fe16586bac8 = UNSTREAM_STRING( &constant_bin[ 1913935 ], 247, 0 );
    const_tuple_str_plain_self_str_plain_length_str_plain_read_len_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_length_str_plain_read_len_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_length_str_plain_read_len_tuple, 1, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    const_str_plain_read_len = UNSTREAM_STRING( &constant_bin[ 1913707 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_length_str_plain_read_len_tuple, 2, const_str_plain_read_len ); Py_INCREF( const_str_plain_read_len );
    const_str_plain_enc_search = UNSTREAM_STRING( &constant_bin[ 1914182 ], 10, 1 );
    const_tuple_str_plain_Status_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Status_tuple, 0, const_str_plain_Status ); Py_INCREF( const_str_plain_Status );
    const_tuple_str_plain_self_str_plain_sep_str_plain_start_str_plain_loc_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sep_str_plain_start_str_plain_loc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sep_str_plain_start_str_plain_loc_tuple, 1, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sep_str_plain_start_str_plain_loc_tuple, 2, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sep_str_plain_start_str_plain_loc_tuple, 3, const_str_plain_loc ); Py_INCREF( const_str_plain_loc );
    const_str_digest_c11484d73b3b6e8bf3e31408f4233993 = UNSTREAM_STRING( &constant_bin[ 1914192 ], 25, 0 );
    const_str_digest_fa743648d06e8ccce1bde3b0c6f9ceb6 = UNSTREAM_STRING( &constant_bin[ 1914217 ], 51, 0 );
    const_tuple_str_plain_self_str_plain_resp_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_resp_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_resp_tuple, 1, const_str_plain_resp ); Py_INCREF( const_str_plain_resp );
    const_dict_792dcbb12846adb787e2e09ec4c9959c = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_792dcbb12846adb787e2e09ec4c9959c, const_str_plain_default, const_str_empty );
    assert( PyDict_Size( const_dict_792dcbb12846adb787e2e09ec4c9959c ) == 1 );
    const_tuple_str_plain_self_str_plain_status_code_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_status_code_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_status_code_tuple, 1, const_str_plain_status_code ); Py_INCREF( const_str_plain_status_code );
    const_str_digest_71488f318ffa5eab9d38fdbb8a7ba895 = UNSTREAM_STRING( &constant_bin[ 1914268 ], 18, 0 );
    const_str_digest_40113b95a8a5eb8cef7fb4eb48a287ee = UNSTREAM_STRING( &constant_bin[ 1914286 ], 32, 0 );
    const_str_digest_1383f0647caa2bbdab83d2461584c3fd = UNSTREAM_STRING( &constant_bin[ 1914318 ], 22, 0 );
    const_str_plain_error_counter = UNSTREAM_STRING( &constant_bin[ 1914340 ], 13, 1 );
    const_str_plain_userstream = UNSTREAM_STRING( &constant_bin[ 1913925 ], 10, 1 );
    const_tuple_str_plain_self_str_plain_async_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_async_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_async_tuple, 1, const_str_plain_async ); Py_INCREF( const_str_plain_async );
    const_str_digest_eb98632d14442ee992155a61e4882305 = UNSTREAM_STRING( &constant_bin[ 1914353 ], 15, 0 );
    const_tuple_str_plain_self_str_plain_async_str_plain_languages_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_async_str_plain_languages_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_async_str_plain_languages_tuple, 1, const_str_plain_async ); Py_INCREF( const_str_plain_async );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_async_str_plain_languages_tuple, 2, const_str_plain_languages ); Py_INCREF( const_str_plain_languages );
    const_str_plain_on_direct_message = UNSTREAM_STRING( &constant_bin[ 1913503 ], 17, 1 );
    const_str_digest_e637942fa5ad4655e4099c334a1f1642 = UNSTREAM_STRING( &constant_bin[ 1914368 ], 62, 0 );
    const_str_digest_0a821dc89c2ff3e7f793a0ba384d50ca = UNSTREAM_STRING( &constant_bin[ 1914430 ], 17, 0 );
    const_str_digest_45058a5b5ed72f807e9f0d88a0b9e6e0 = UNSTREAM_STRING( &constant_bin[ 1914447 ], 24, 0 );
    const_tuple_str_plain_self_str_plain_length_str_plain_r_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_length_str_plain_r_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_length_str_plain_r_tuple, 1, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_length_str_plain_r_tuple, 2, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_str_digest_30331783e70b307d6fe8be0c17a8135d = UNSTREAM_STRING( &constant_bin[ 1914471 ], 25, 0 );
    const_str_digest_ee4ea5c31d2db910c0c22ca8ae18231c = UNSTREAM_STRING( &constant_bin[ 1914496 ], 23, 0 );
    const_str_plain_sitestream = UNSTREAM_STRING( &constant_bin[ 1913569 ], 10, 1 );
    const_str_plain_STREAM_VERSION = UNSTREAM_STRING( &constant_bin[ 1914519 ], 14, 1 );
    const_str_plain_filter_level = UNSTREAM_STRING( &constant_bin[ 1914533 ], 12, 1 );
    const_str_plain_retry_420_start = UNSTREAM_STRING( &constant_bin[ 1914545 ], 15, 1 );
    const_str_digest_28bb8d95fcc67f27cb375c882b016d59 = UNSTREAM_STRING( &constant_bin[ 1914560 ], 16, 0 );
    const_tuple_589726bf565d8b3fa91b39b1fe8d751a_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_589726bf565d8b3fa91b39b1fe8d751a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_589726bf565d8b3fa91b39b1fe8d751a_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_589726bf565d8b3fa91b39b1fe8d751a_tuple, 2, const_str_plain_error_counter ); Py_INCREF( const_str_plain_error_counter );
    PyTuple_SET_ITEM( const_tuple_589726bf565d8b3fa91b39b1fe8d751a_tuple, 3, const_str_plain_resp ); Py_INCREF( const_str_plain_resp );
    PyTuple_SET_ITEM( const_tuple_589726bf565d8b3fa91b39b1fe8d751a_tuple, 4, const_str_plain_exception ); Py_INCREF( const_str_plain_exception );
    PyTuple_SET_ITEM( const_tuple_589726bf565d8b3fa91b39b1fe8d751a_tuple, 5, const_str_plain_auth ); Py_INCREF( const_str_plain_auth );
    PyTuple_SET_ITEM( const_tuple_589726bf565d8b3fa91b39b1fe8d751a_tuple, 6, const_str_plain_exc ); Py_INCREF( const_str_plain_exc );
    const_tuple_str_plain_self_str_plain_status_id_str_plain_user_id_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_status_id_str_plain_user_id_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_status_id_str_plain_user_id_tuple, 1, const_str_plain_status_id ); Py_INCREF( const_str_plain_status_id );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_status_id_str_plain_user_id_tuple, 2, const_str_plain_user_id ); Py_INCREF( const_str_plain_user_id );
    const_str_digest_9d146fe17f68f6ee8f2e0d4158c002e4 = UNSTREAM_STRING( &constant_bin[ 1914576 ], 12, 0 );
    const_tuple_false_str_plain_user_false_false_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_false_str_plain_user_false_false_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_str_plain_user_false_false_tuple, 1, const_str_plain_user ); Py_INCREF( const_str_plain_user );
    PyTuple_SET_ITEM( const_tuple_false_str_plain_user_false_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_str_plain_user_false_false_tuple, 3, Py_False ); Py_INCREF( Py_False );
    const_str_digest_16d787ff3c4ad0ab473a0593cc4fdb3b = UNSTREAM_STRING( &constant_bin[ 1914588 ], 40, 0 );
    const_str_digest_7aca9d6ab7b89f0565226a86d745799e = UNSTREAM_STRING( &constant_bin[ 1914628 ], 23, 0 );
    const_tuple_e0ca80233ab9f1fda15af93fe2a67707_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_e0ca80233ab9f1fda15af93fe2a67707_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e0ca80233ab9f1fda15af93fe2a67707_tuple, 1, const_str_plain_follow ); Py_INCREF( const_str_plain_follow );
    PyTuple_SET_ITEM( const_tuple_e0ca80233ab9f1fda15af93fe2a67707_tuple, 2, const_str_plain_stall_warnings ); Py_INCREF( const_str_plain_stall_warnings );
    const_str_plain_with_ = UNSTREAM_STRING( &constant_bin[ 116180 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_e0ca80233ab9f1fda15af93fe2a67707_tuple, 3, const_str_plain_with_ ); Py_INCREF( const_str_plain_with_ );
    PyTuple_SET_ITEM( const_tuple_e0ca80233ab9f1fda15af93fe2a67707_tuple, 4, const_str_plain_replies ); Py_INCREF( const_str_plain_replies );
    PyTuple_SET_ITEM( const_tuple_e0ca80233ab9f1fda15af93fe2a67707_tuple, 5, const_str_plain_async ); Py_INCREF( const_str_plain_async );
    const_tuple_str_plain_retry_420_float_60_0_tuple = PyTuple_New( 2 );
    const_str_plain_retry_420 = UNSTREAM_STRING( &constant_bin[ 1914545 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_retry_420_float_60_0_tuple, 0, const_str_plain_retry_420 ); Py_INCREF( const_str_plain_retry_420 );
    PyTuple_SET_ITEM( const_tuple_str_plain_retry_420_float_60_0_tuple, 1, const_float_60_0 ); Py_INCREF( const_float_60_0 );
    const_str_digest_a7320611f8f08b4f3a228e9c29cadc98 = UNSTREAM_STRING( &constant_bin[ 1914651 ], 4, 0 );
    const_str_digest_3d3d221f0c0525b510d4c17b7293c731 = UNSTREAM_STRING( &constant_bin[ 1914655 ], 32, 0 );
    const_str_digest_b405e1469da16c802dbf92224bdc85b8 = UNSTREAM_STRING( &constant_bin[ 1914687 ], 93, 0 );
    const_tuple_d90aa02fc863085a555f416b574a77b9_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_d90aa02fc863085a555f416b574a77b9_tuple, 0, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    PyTuple_SET_ITEM( const_tuple_d90aa02fc863085a555f416b574a77b9_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_d90aa02fc863085a555f416b574a77b9_tuple, 2, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_d90aa02fc863085a555f416b574a77b9_tuple, 3, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    PyTuple_SET_ITEM( const_tuple_d90aa02fc863085a555f416b574a77b9_tuple, 4, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    PyTuple_SET_ITEM( const_tuple_d90aa02fc863085a555f416b574a77b9_tuple, 5, const_str_plain_read_len ); Py_INCREF( const_str_plain_read_len );
    PyTuple_SET_ITEM( const_tuple_d90aa02fc863085a555f416b574a77b9_tuple, 6, const_str_plain_read_line ); Py_INCREF( const_str_plain_read_line );
    PyTuple_SET_ITEM( const_tuple_d90aa02fc863085a555f416b574a77b9_tuple, 7, const_str_plain__pop ); Py_INCREF( const_str_plain__pop );
    const_str_digest_41bf1a10c3f6dc9f5f559813f1e7dfd2 = UNSTREAM_STRING( &constant_bin[ 1914780 ], 25, 0 );
    const_str_plain_firehose = UNSTREAM_STRING( &constant_bin[ 1913800 ], 8, 1 );
    const_tuple_str_plain_retry_time_cap_float_320_0_tuple = PyTuple_New( 2 );
    const_str_plain_retry_time_cap = UNSTREAM_STRING( &constant_bin[ 1914805 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_retry_time_cap_float_320_0_tuple, 0, const_str_plain_retry_time_cap ); Py_INCREF( const_str_plain_retry_time_cap );
    const_float_320_0 = UNSTREAM_FLOAT( &constant_bin[ 1914819 ] );
    PyTuple_SET_ITEM( const_tuple_str_plain_retry_time_cap_float_320_0_tuple, 1, const_float_320_0 ); Py_INCREF( const_float_320_0 );
    const_str_digest_761b208be678c3d9a0fad8408ebf4589 = UNSTREAM_STRING( &constant_bin[ 1914827 ], 19, 0 );
    const_tuple_str_plain_verify_true_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_verify_true_tuple, 0, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyTuple_SET_ITEM( const_tuple_str_plain_verify_true_tuple, 1, Py_True ); Py_INCREF( Py_True );
    const_str_digest_c3c000b769072d3888600e0558a503f7 = UNSTREAM_STRING( &constant_bin[ 1914846 ], 32, 0 );
    const_tuple_2e274ba9398f1cbc1f891df1f4334ffa_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_2e274ba9398f1cbc1f891df1f4334ffa_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2e274ba9398f1cbc1f891df1f4334ffa_tuple, 1, const_str_plain_follow ); Py_INCREF( const_str_plain_follow );
    PyTuple_SET_ITEM( const_tuple_2e274ba9398f1cbc1f891df1f4334ffa_tuple, 2, const_str_plain_track ); Py_INCREF( const_str_plain_track );
    PyTuple_SET_ITEM( const_tuple_2e274ba9398f1cbc1f891df1f4334ffa_tuple, 3, const_str_plain_async ); Py_INCREF( const_str_plain_async );
    PyTuple_SET_ITEM( const_tuple_2e274ba9398f1cbc1f891df1f4334ffa_tuple, 4, const_str_plain_locations ); Py_INCREF( const_str_plain_locations );
    PyTuple_SET_ITEM( const_tuple_2e274ba9398f1cbc1f891df1f4334ffa_tuple, 5, const_str_plain_stall_warnings ); Py_INCREF( const_str_plain_stall_warnings );
    PyTuple_SET_ITEM( const_tuple_2e274ba9398f1cbc1f891df1f4334ffa_tuple, 6, const_str_plain_languages ); Py_INCREF( const_str_plain_languages );
    PyTuple_SET_ITEM( const_tuple_2e274ba9398f1cbc1f891df1f4334ffa_tuple, 7, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_2e274ba9398f1cbc1f891df1f4334ffa_tuple, 8, const_str_plain_filter_level ); Py_INCREF( const_str_plain_filter_level );
    const_str_digest_9b1f98e83b9e181dc946f50b95371b80 = UNSTREAM_STRING( &constant_bin[ 1914878 ], 26, 0 );
    const_str_plain_snooze_time_step = UNSTREAM_STRING( &constant_bin[ 1914904 ], 16, 1 );
    const_tuple_str_digest_16d787ff3c4ad0ab473a0593cc4fdb3b_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_16d787ff3c4ad0ab473a0593cc4fdb3b_tuple, 0, const_str_digest_16d787ff3c4ad0ab473a0593cc4fdb3b ); Py_INCREF( const_str_digest_16d787ff3c4ad0ab473a0593cc4fdb3b );
    const_str_digest_c2cfc1d38a254d67108f7c6f42807fb1 = UNSTREAM_STRING( &constant_bin[ 1914920 ], 28, 0 );
    const_str_digest_8ae23802a2d9c9c3bf7ea95f68884923 = UNSTREAM_STRING( &constant_bin[ 389 ], 3, 0 );
    const_str_digest_5be720d8caff7975ffdf29bb4daa8712 = UNSTREAM_STRING( &constant_bin[ 1914948 ], 25, 0 );
    const_tuple_str_digest_e637942fa5ad4655e4099c334a1f1642_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_e637942fa5ad4655e4099c334a1f1642_tuple, 0, const_str_digest_e637942fa5ad4655e4099c334a1f1642 ); Py_INCREF( const_str_digest_e637942fa5ad4655e4099c334a1f1642 );
    const_str_digest_ed2045eba39a73784d52bc0e6bc61a1b = UNSTREAM_STRING( &constant_bin[ 1914973 ], 20, 0 );
    const_str_plain_on_limit = UNSTREAM_STRING( &constant_bin[ 1008363 ], 8, 1 );
    const_str_digest_d7828d2f4b1420557334eda416b50100 = UNSTREAM_STRING( &constant_bin[ 1914993 ], 14, 0 );
    const_str_plain_retry_time_start = UNSTREAM_STRING( &constant_bin[ 1915007 ], 16, 1 );
    const_str_digest_6a75f21d933bac1f61977a4c64854242 = UNSTREAM_STRING( &constant_bin[ 1915023 ], 53, 0 );
    const_str_plain_delimited = UNSTREAM_STRING( &constant_bin[ 162169 ], 9, 1 );
    const_tuple_str_plain_timeout_float_300_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_timeout_float_300_0_tuple, 0, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    const_float_300_0 = UNSTREAM_FLOAT( &constant_bin[ 1915076 ] );
    PyTuple_SET_ITEM( const_tuple_str_plain_timeout_float_300_0_tuple, 1, const_float_300_0 ); Py_INCREF( const_float_300_0 );
    const_str_plain_on_connect = UNSTREAM_STRING( &constant_bin[ 1914486 ], 10, 1 );
    const_str_plain__read_loop = UNSTREAM_STRING( &constant_bin[ 1912900 ], 10, 1 );
    const_tuple_str_digest_40113b95a8a5eb8cef7fb4eb48a287ee_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_40113b95a8a5eb8cef7fb4eb48a287ee_tuple, 0, const_str_digest_40113b95a8a5eb8cef7fb4eb48a287ee ); Py_INCREF( const_str_digest_40113b95a8a5eb8cef7fb4eb48a287ee );
    const_tuple_5a4a07835a17fe2d8b60c36f8b32bde5_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_5a4a07835a17fe2d8b60c36f8b32bde5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5a4a07835a17fe2d8b60c36f8b32bde5_tuple, 1, const_str_plain_resp ); Py_INCREF( const_str_plain_resp );
    PyTuple_SET_ITEM( const_tuple_5a4a07835a17fe2d8b60c36f8b32bde5_tuple, 2, const_str_plain_charset ); Py_INCREF( const_str_plain_charset );
    PyTuple_SET_ITEM( const_tuple_5a4a07835a17fe2d8b60c36f8b32bde5_tuple, 3, const_str_plain_enc_search ); Py_INCREF( const_str_plain_enc_search );
    PyTuple_SET_ITEM( const_tuple_5a4a07835a17fe2d8b60c36f8b32bde5_tuple, 4, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_5a4a07835a17fe2d8b60c36f8b32bde5_tuple, 5, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    PyTuple_SET_ITEM( const_tuple_5a4a07835a17fe2d8b60c36f8b32bde5_tuple, 6, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    PyTuple_SET_ITEM( const_tuple_5a4a07835a17fe2d8b60c36f8b32bde5_tuple, 7, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    PyTuple_SET_ITEM( const_tuple_5a4a07835a17fe2d8b60c36f8b32bde5_tuple, 8, const_str_plain_next_status_obj ); Py_INCREF( const_str_plain_next_status_obj );
    const_tuple_str_plain_self_str_plain_friends_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_friends_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_friends_tuple, 1, const_str_plain_friends ); Py_INCREF( const_str_plain_friends );
    const_str_plain_on_warning = UNSTREAM_STRING( &constant_bin[ 1915084 ], 10, 1 );
    const_str_digest_e8efece438a583fab63d9d1291af1975 = UNSTREAM_STRING( &constant_bin[ 1915094 ], 13, 0 );
    const_tuple_str_plain_snooze_time_float_0_25_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_snooze_time_float_0_25_tuple, 0, const_str_plain_snooze_time ); Py_INCREF( const_str_plain_snooze_time );
    PyTuple_SET_ITEM( const_tuple_str_plain_snooze_time_float_0_25_tuple, 1, const_float_0_25 ); Py_INCREF( const_float_0_25 );
    const_str_digest_05c758a57c70463a3c55556de5c77ca9 = UNSTREAM_STRING( &constant_bin[ 1915107 ], 13, 0 );
    const_str_digest_1d1980b518eebf5640dce24db3c49349 = UNSTREAM_STRING( &constant_bin[ 1915120 ], 194, 0 );
    const_str_digest_e34b69b512f5f14ad3ef21685591c288 = UNSTREAM_STRING( &constant_bin[ 1915314 ], 25, 0 );
    const_str_digest_b2813d83300370be515aec6e4cfd9f79 = UNSTREAM_STRING( &constant_bin[ 1915339 ], 667, 0 );
    const_str_digest_7a6c5685c07babc2f91efdea687a8363 = UNSTREAM_STRING( &constant_bin[ 1916006 ], 11, 0 );
    const_str_digest_23f45c62a803b3d6b45593ee0bcbcdd4 = UNSTREAM_STRING( &constant_bin[ 1916017 ], 13, 0 );
    const_dict_be7c76ce8c5dc8badebcfeb1d22ff954 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_be7c76ce8c5dc8badebcfeb1d22ff954, const_str_plain_delimited, const_str_plain_length );
    assert( PyDict_Size( const_dict_be7c76ce8c5dc8badebcfeb1d22ff954 ) == 1 );
    const_tuple_str_plain_sleep_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sleep_tuple, 0, const_str_plain_sleep ); Py_INCREF( const_str_plain_sleep );
    const_str_digest_df90d729ed99b9215b05d00aa40fb185 = UNSTREAM_STRING( &constant_bin[ 1916030 ], 48, 0 );
    const_tuple_77a73f6201f17138716a472d98076dee_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_77a73f6201f17138716a472d98076dee_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_77a73f6201f17138716a472d98076dee_tuple, 1, const_str_plain_auth ); Py_INCREF( const_str_plain_auth );
    PyTuple_SET_ITEM( const_tuple_77a73f6201f17138716a472d98076dee_tuple, 2, const_str_plain_listener ); Py_INCREF( const_str_plain_listener );
    PyTuple_SET_ITEM( const_tuple_77a73f6201f17138716a472d98076dee_tuple, 3, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    const_str_digest_c4a6d8965c7d140f1c553688c5f3c3f0 = UNSTREAM_STRING( &constant_bin[ 1916078 ], 42, 0 );
    const_str_digest_5c3703a899f303d1b1ea99d1013e44f1 = UNSTREAM_STRING( &constant_bin[ 1916120 ], 13, 0 );
    const_str_digest_56665bf09354d6f2e034971086407f48 = UNSTREAM_STRING( &constant_bin[ 1916133 ], 4, 0 );
    const_str_digest_0a96326ecc59988539ec5fa960bce9eb = UNSTREAM_STRING( &constant_bin[ 1916137 ], 25, 0 );
    const_str_digest_c161c983a1be5adc1f59cf1e97ed8b57 = UNSTREAM_STRING( &constant_bin[ 1916162 ], 25, 0 );
    const_str_plain_on_closed = UNSTREAM_STRING( &constant_bin[ 1914567 ], 9, 1 );
    const_tuple_9f7e928dd1e8bf438bbf8bd045ca67a3_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_9f7e928dd1e8bf438bbf8bd045ca67a3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9f7e928dd1e8bf438bbf8bd045ca67a3_tuple, 1, const_str_plain_raw_data ); Py_INCREF( const_str_plain_raw_data );
    PyTuple_SET_ITEM( const_tuple_9f7e928dd1e8bf438bbf8bd045ca67a3_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_9f7e928dd1e8bf438bbf8bd045ca67a3_tuple, 3, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyTuple_SET_ITEM( const_tuple_9f7e928dd1e8bf438bbf8bd045ca67a3_tuple, 4, const_str_plain_delete ); Py_INCREF( const_str_plain_delete );
    const_str_plain_on_disconnect = UNSTREAM_STRING( &constant_bin[ 1914935 ], 13, 1 );
    const_str_digest_6612e3f1345fb7a94ada90b2d03323d5 = UNSTREAM_STRING( &constant_bin[ 1914322 ], 18, 0 );
    const_str_digest_97b96d4df9a2e59d8ddb709b3e03141c = UNSTREAM_STRING( &constant_bin[ 1916187 ], 39, 0 );
    const_tuple_str_plain_self_str_plain_track_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_track_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_track_tuple, 1, const_str_plain_track ); Py_INCREF( const_str_plain_track );
    const_tuple_str_plain_retry_count_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_retry_count_tuple, 0, const_str_plain_retry_count ); Py_INCREF( const_str_plain_retry_count );
    const_str_digest_4a7645f398fd0a431a4fc76eadb605e7 = UNSTREAM_STRING( &constant_bin[ 84495 ], 15, 0 );
    const_tuple_false_none_none_none_none_false_str_plain_utf8_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_none_false_str_plain_utf8_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_none_false_str_plain_utf8_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_none_false_str_plain_utf8_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_none_false_str_plain_utf8_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_none_false_str_plain_utf8_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_none_false_str_plain_utf8_tuple, 5, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_none_false_str_plain_utf8_tuple, 6, const_str_plain_utf8 ); Py_INCREF( const_str_plain_utf8 );
    const_tuple_str_plain_enc_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_enc_tuple, 0, const_str_plain_enc ); Py_INCREF( const_str_plain_enc );
    const_str_digest_1d2f36a1f5079aaf2d5c8180a96122ff = UNSTREAM_STRING( &constant_bin[ 1916226 ], 40, 0 );
    const_str_plain__run = UNSTREAM_STRING( &constant_bin[ 751941 ], 4, 1 );
    const_str_digest_8843fb623236b98def0f05dea30590de = UNSTREAM_STRING( &constant_bin[ 1916266 ], 23, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_tweepy$streaming( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_52efa7ff60fd6c43b353e8ed29bbcdb6;
static PyCodeObject *codeobj_703ffb3566cc227d38743760fdede181;
static PyCodeObject *codeobj_a8c563be65dca5c2226cb0ecf70916fd;
static PyCodeObject *codeobj_37306869e419692dbe36828def1b8537;
static PyCodeObject *codeobj_1f9b0181b047dae427418c73a35dbd2b;
static PyCodeObject *codeobj_7d83006044b2e49de903ea11e6d07bb3;
static PyCodeObject *codeobj_adf4b399e6ec3887d950e753508aed1f;
static PyCodeObject *codeobj_854a6ccb089267e0c88e4baed3cc3010;
static PyCodeObject *codeobj_9675ad53a1000f1170baf3d6ac4f0952;
static PyCodeObject *codeobj_7eef715f77860b39b9c4f371af8a92e0;
static PyCodeObject *codeobj_ea72bb2cd57bc21d6a9685dcdd4e5408;
static PyCodeObject *codeobj_055027f7316f610a64f0b8bd9dc8a32f;
static PyCodeObject *codeobj_e6bfed0d02cf4c4ff6d618371e76baa6;
static PyCodeObject *codeobj_9650a3a9a1d30600269e9dff41839ef7;
static PyCodeObject *codeobj_369522e17a6d8c097e306fa6db832a39;
static PyCodeObject *codeobj_64ee6d5b0b5ba384f3dc6474d0cd8ff5;
static PyCodeObject *codeobj_a7c912e20ff7ff1e96cd2ea6af5c8235;
static PyCodeObject *codeobj_c26da18af1306f2a83b816c464a91347;
static PyCodeObject *codeobj_8e61baff1daf29694885b2c1142496fc;
static PyCodeObject *codeobj_d0aaf420ad73bd908c531132d32f9683;
static PyCodeObject *codeobj_5b2c0ce40e19f798bf1ac4a0bf3f17fd;
static PyCodeObject *codeobj_8993549b5c5362229170d69e70414936;
static PyCodeObject *codeobj_e46bf508324ffe8f998603b2a1695841;
static PyCodeObject *codeobj_dc0c4fff35234199bd2d01771f567502;
static PyCodeObject *codeobj_05a5e6484463bf668ff7f2ac6a541eff;
static PyCodeObject *codeobj_04616467b77b764190cd2374fc34c3f6;
static PyCodeObject *codeobj_c713b7e7acbd80b7925f3dd936cd2ea7;
static PyCodeObject *codeobj_222617b92552bb44ed7cd225722648ec;
static PyCodeObject *codeobj_f6b5c9147dd7bb6946c220733047cd1e;
static PyCodeObject *codeobj_f6ba26f94a6804c3f765100fa0dacd1b;
static PyCodeObject *codeobj_b8a8154ef2e6e67d28d4e9c94573b71a;
static PyCodeObject *codeobj_35af982864b2a0dad5e780ffcf03ba2f;
static PyCodeObject *codeobj_f00fa758bb5541f6e9308e16f121e240;
static PyCodeObject *codeobj_893488410f55a8c0f326bfe1e7c6c6c4;
static PyCodeObject *codeobj_8ea2764473bdd4d706c25fdbd24cd016;
static PyCodeObject *codeobj_6169f60485f96948bb74c4f72f98d49c;
static PyCodeObject *codeobj_d93fbc46f87efa9530c9eca86e3640e4;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_761b208be678c3d9a0fad8408ebf4589 );
    codeobj_52efa7ff60fd6c43b353e8ed29bbcdb6 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 390, const_tuple_str_plain_l_str_plain_locations_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_703ffb3566cc227d38743760fdede181 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 436, const_tuple_str_plain_l_str_plain_locations_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a8c563be65dca5c2226cb0ecf70916fd = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0a96326ecc59988539ec5fa960bce9eb, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_37306869e419692dbe36828def1b8537 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ReadBuffer, 139, const_tuple_d90aa02fc863085a555f416b574a77b9_tuple, 0, 0, CO_NOFREE );
    codeobj_1f9b0181b047dae427418c73a35dbd2b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 32, const_tuple_str_plain_self_str_plain_api_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7d83006044b2e49de903ea11e6d07bb3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 152, const_tuple_e4a9c3b6f12f5f57393b47e472c2aae6_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_adf4b399e6ec3887d950e753508aed1f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 191, const_tuple_77a73f6201f17138716a472d98076dee_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_854a6ccb089267e0c88e4baed3cc3010 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__data, 296, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9675ad53a1000f1170baf3d6ac4f0952 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__pop, 181, const_tuple_str_plain_self_str_plain_length_str_plain_r_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7eef715f77860b39b9c4f371af8a92e0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__read_loop, 300, const_tuple_5a4a07835a17fe2d8b60c36f8b32bde5_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ea72bb2cd57bc21d6a9685dcdd4e5408 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__run, 226, const_tuple_589726bf565d8b3fa91b39b1fe8d751a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_055027f7316f610a64f0b8bd9dc8a32f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__start, 355, const_tuple_str_plain_self_str_plain_async_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e6bfed0d02cf4c4ff6d618371e76baa6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_disconnect, 463, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9650a3a9a1d30600269e9dff41839ef7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter, 421, const_tuple_2e274ba9398f1cbc1f891df1f4334ffa_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_369522e17a6d8c097e306fa6db832a39 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_firehose, 396, const_tuple_str_plain_self_str_plain_count_str_plain_async_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_64ee6d5b0b5ba384f3dc6474d0cd8ff5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_keep_alive, 83, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a7c912e20ff7ff1e96cd2ea6af5c8235 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_new_session, 221, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c26da18af1306f2a83b816c464a91347 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_on_closed, 363, const_tuple_str_plain_self_str_plain_resp_tuple, 2, 0, CO_NOFREE );
    codeobj_8e61baff1daf29694885b2c1142496fc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_on_connect, 35, const_tuple_str_plain_self_tuple, 1, 0, CO_NOFREE );
    codeobj_d0aaf420ad73bd908c531132d32f9683 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_on_data, 44, const_tuple_9f7e928dd1e8bf438bbf8bd045ca67a3_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5b2c0ce40e19f798bf1ac4a0bf3f17fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_on_delete, 95, const_tuple_str_plain_self_str_plain_status_id_str_plain_user_id_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8993549b5c5362229170d69e70414936 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_on_direct_message, 103, const_tuple_str_plain_self_str_plain_status_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e46bf508324ffe8f998603b2a1695841 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_on_disconnect, 126, const_tuple_str_plain_self_str_plain_notice_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dc0c4fff35234199bd2d01771f567502 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_on_error, 118, const_tuple_str_plain_self_str_plain_status_code_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_05a5e6484463bf668ff7f2ac6a541eff = MAKE_CODEOBJ( module_filename_obj, const_str_plain_on_event, 99, const_tuple_str_plain_self_str_plain_status_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_04616467b77b764190cd2374fc34c3f6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_on_exception, 91, const_tuple_str_plain_self_str_plain_exception_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c713b7e7acbd80b7925f3dd936cd2ea7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_on_friends, 107, const_tuple_str_plain_self_str_plain_friends_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_222617b92552bb44ed7cd225722648ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_on_limit, 114, const_tuple_str_plain_self_str_plain_track_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f6b5c9147dd7bb6946c220733047cd1e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_on_status, 87, const_tuple_str_plain_self_str_plain_status_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f6ba26f94a6804c3f765100fa0dacd1b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_on_timeout, 122, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b8a8154ef2e6e67d28d4e9c94573b71a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_on_warning, 134, const_tuple_str_plain_self_str_plain_notice_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_35af982864b2a0dad5e780ffcf03ba2f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read_len, 158, const_tuple_str_plain_self_str_plain_length_str_plain_read_len_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f00fa758bb5541f6e9308e16f121e240 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read_line, 165, const_tuple_str_plain_self_str_plain_sep_str_plain_start_str_plain_loc_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_893488410f55a8c0f326bfe1e7c6c6c4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_retweet, 405, const_tuple_str_plain_self_str_plain_async_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8ea2764473bdd4d706c25fdbd24cd016 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sample, 412, const_tuple_str_plain_self_str_plain_async_str_plain_languages_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6169f60485f96948bb74c4f72f98d49c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sitestream, 447, const_tuple_e0ca80233ab9f1fda15af93fe2a67707_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d93fbc46f87efa9530c9eca86e3640e4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_userstream, 367, const_tuple_d9e387b166c6df605a0a49e5066da6a2_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_10_on_friends(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_11_on_limit(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_12_on_error(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_13_on_timeout(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_14_on_disconnect(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_15_on_warning(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_16___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_17_read_len(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_18_read_line( PyObject *defaults );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_19__pop(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_20___init__(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_21_new_session(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_22__run(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_23__data(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_24__read_loop(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_25__start(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_26_on_closed(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_27_userstream( PyObject *defaults );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_28_firehose( PyObject *defaults );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_29_retweet( PyObject *defaults );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_2_on_connect(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_30_sample( PyObject *defaults );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_31_filter( PyObject *defaults );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_32_sitestream( PyObject *defaults );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_33_disconnect(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_3_on_data(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_4_keep_alive(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_5_on_status(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_6_on_exception(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_7_on_delete(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_8_on_event(  );


static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_9_on_direct_message(  );


// The module function definitions.
static PyObject *impl_tweepy$streaming$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_api = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_1f9b0181b047dae427418c73a35dbd2b = NULL;

    struct Nuitka_FrameObject *frame_1f9b0181b047dae427418c73a35dbd2b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1f9b0181b047dae427418c73a35dbd2b, codeobj_1f9b0181b047dae427418c73a35dbd2b, module_tweepy$streaming, sizeof(void *)+sizeof(void *) );
    frame_1f9b0181b047dae427418c73a35dbd2b = cache_frame_1f9b0181b047dae427418c73a35dbd2b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1f9b0181b047dae427418c73a35dbd2b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1f9b0181b047dae427418c73a35dbd2b ) == 2 ); // Frame stack

    // Framed code:
    tmp_or_left_value_1 = par_api;

    CHECK_OBJECT( tmp_or_left_value_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "oo";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_API );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_API );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "API" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_1f9b0181b047dae427418c73a35dbd2b->m_frame.f_lineno = 33;
    tmp_or_right_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_assattr_name_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_api, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f9b0181b047dae427418c73a35dbd2b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f9b0181b047dae427418c73a35dbd2b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f9b0181b047dae427418c73a35dbd2b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f9b0181b047dae427418c73a35dbd2b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f9b0181b047dae427418c73a35dbd2b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f9b0181b047dae427418c73a35dbd2b,
        type_description_1,
        par_self,
        par_api
    );


    // Release cached frame.
    if ( frame_1f9b0181b047dae427418c73a35dbd2b == cache_frame_1f9b0181b047dae427418c73a35dbd2b )
    {
        Py_DECREF( frame_1f9b0181b047dae427418c73a35dbd2b );
    }
    cache_frame_1f9b0181b047dae427418c73a35dbd2b = NULL;

    assertFrameObject( frame_1f9b0181b047dae427418c73a35dbd2b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_api );
    par_api = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_api );
    par_api = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_1___init__ );
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


static PyObject *impl_tweepy$streaming$$$function_2_on_connect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_2_on_connect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_2_on_connect );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_tweepy$streaming$$$function_3_on_data( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_raw_data = python_pars[ 1 ];
    PyObject *var_data = NULL;
    PyObject *var_status = NULL;
    PyObject *var_delete = NULL;
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
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
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
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    bool tmp_is_5;
    bool tmp_is_6;
    bool tmp_is_7;
    bool tmp_is_8;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_unicode_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d0aaf420ad73bd908c531132d32f9683 = NULL;

    struct Nuitka_FrameObject *frame_d0aaf420ad73bd908c531132d32f9683;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d0aaf420ad73bd908c531132d32f9683, codeobj_d0aaf420ad73bd908c531132d32f9683, module_tweepy$streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d0aaf420ad73bd908c531132d32f9683 = cache_frame_d0aaf420ad73bd908c531132d32f9683;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d0aaf420ad73bd908c531132d32f9683 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d0aaf420ad73bd908c531132d32f9683 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_json );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_json );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "json" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_loads );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_raw_data;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "raw_data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_d0aaf420ad73bd908c531132d32f9683->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_data == NULL );
    var_data = tmp_assign_source_1;

    tmp_compare_left_1 = const_str_plain_in_reply_to_status_id;
    tmp_compare_right_1 = var_data;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_Status );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Status );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Status" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_parse );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_api );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_data;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_d0aaf420ad73bd908c531132d32f9683->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_status == NULL );
    var_status = tmp_assign_source_2;

    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_on_status );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_status;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_d0aaf420ad73bd908c531132d32f9683->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_compare_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_False;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_is_1 )
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
    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_3 = const_str_plain_delete;
    tmp_compare_right_3 = var_data;

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_subscribed_name_2 = var_data;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_str_plain_delete;
    tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_str_plain_status;
    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_delete == NULL );
    var_delete = tmp_assign_source_3;

    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_on_delete );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_3 = var_delete;

    if ( tmp_subscribed_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "delete" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_3 = const_str_plain_id;
    tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_4 = var_delete;

    if ( tmp_subscribed_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "delete" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_4 = const_str_plain_user_id;
    tmp_args_element_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_d0aaf420ad73bd908c531132d32f9683->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_compare_left_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = Py_False;
    tmp_is_2 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_is_2 )
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
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_5 = const_str_plain_event;
    tmp_compare_right_5 = var_data;

    if ( tmp_compare_right_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_Status );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Status );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Status" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_parse );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_api );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = var_data;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_d0aaf420ad73bd908c531132d32f9683->m_frame.f_lineno = 61;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_status == NULL );
    var_status = tmp_assign_source_4;

    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_on_event );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = var_status;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_d0aaf420ad73bd908c531132d32f9683->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_compare_left_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_6 = Py_False;
    tmp_is_3 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    Py_DECREF( tmp_compare_left_6 );
    if ( tmp_is_3 )
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
    goto branch_end_5;
    branch_no_5:;
    tmp_compare_left_7 = const_str_plain_direct_message;
    tmp_compare_right_7 = var_data;

    if ( tmp_compare_right_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_Status );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Status );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Status" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_parse );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_api );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 65;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = var_data;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_d0aaf420ad73bd908c531132d32f9683->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_status == NULL );
    var_status = tmp_assign_source_5;

    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_on_direct_message );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = var_status;

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_d0aaf420ad73bd908c531132d32f9683->m_frame.f_lineno = 66;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_compare_left_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_8 = Py_False;
    tmp_is_4 = ( tmp_compare_left_8 == tmp_compare_right_8 );
    Py_DECREF( tmp_compare_left_8 );
    if ( tmp_is_4 )
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
    goto branch_end_7;
    branch_no_7:;
    tmp_compare_left_9 = const_str_plain_friends;
    tmp_compare_right_9 = var_data;

    if ( tmp_compare_right_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    assert( !(tmp_cmp_In_5 == -1) );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_12 = par_self;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_on_friends );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_5 = var_data;

    if ( tmp_subscribed_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_5 = const_str_plain_friends;
    tmp_args_element_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 69;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_d0aaf420ad73bd908c531132d32f9683->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_compare_left_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_10 = Py_False;
    tmp_is_5 = ( tmp_compare_left_10 == tmp_compare_right_10 );
    Py_DECREF( tmp_compare_left_10 );
    if ( tmp_is_5 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    tmp_compare_left_11 = const_str_plain_limit;
    tmp_compare_right_11 = var_data;

    if ( tmp_compare_right_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_13 = par_self;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_on_limit );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_7 = var_data;

    if ( tmp_subscribed_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_6 = const_str_plain_limit;
    tmp_subscribed_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_6 );
    if ( tmp_subscribed_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 72;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_7 = const_str_plain_track;
    tmp_args_element_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_7 );
    Py_DECREF( tmp_subscribed_name_6 );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 72;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_d0aaf420ad73bd908c531132d32f9683->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_compare_left_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_compare_left_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_12 = Py_False;
    tmp_is_6 = ( tmp_compare_left_12 == tmp_compare_right_12 );
    Py_DECREF( tmp_compare_left_12 );
    if ( tmp_is_6 )
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
    goto frame_return_exit_1;
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    tmp_compare_left_13 = const_str_plain_disconnect;
    tmp_compare_right_13 = var_data;

    if ( tmp_compare_right_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    assert( !(tmp_cmp_In_7 == -1) );
    if ( tmp_cmp_In_7 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_on_disconnect );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_8 = var_data;

    if ( tmp_subscribed_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_8 = const_str_plain_disconnect;
    tmp_args_element_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_d0aaf420ad73bd908c531132d32f9683->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_compare_left_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_compare_left_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_14 = Py_False;
    tmp_is_7 = ( tmp_compare_left_14 == tmp_compare_right_14 );
    Py_DECREF( tmp_compare_left_14 );
    if ( tmp_is_7 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    tmp_compare_left_15 = const_str_plain_warning;
    tmp_compare_right_15 = var_data;

    if ( tmp_compare_right_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_15, tmp_compare_left_15 );
    assert( !(tmp_cmp_In_8 == -1) );
    if ( tmp_cmp_In_8 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_15 = par_self;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_on_warning );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_9 = var_data;

    if ( tmp_subscribed_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_9 = const_str_plain_warning;
    tmp_args_element_name_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_d0aaf420ad73bd908c531132d32f9683->m_frame.f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_compare_left_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_compare_left_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_16 = Py_False;
    tmp_is_8 = ( tmp_compare_left_16 == tmp_compare_right_16 );
    Py_DECREF( tmp_compare_left_16 );
    if ( tmp_is_8 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_16:;
    goto branch_end_15;
    branch_no_15:;
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_error );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_ffcc9004c74d6c3b65a67c906ab27ca4;
    tmp_unicode_arg_1 = par_raw_data;

    if ( tmp_unicode_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "raw_data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = PyObject_Unicode( tmp_unicode_arg_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_17 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_d0aaf420ad73bd908c531132d32f9683->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_15:;
    branch_end_13:;
    branch_end_11:;
    branch_end_9:;
    branch_end_7:;
    branch_end_5:;
    branch_end_3:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0aaf420ad73bd908c531132d32f9683 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0aaf420ad73bd908c531132d32f9683 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0aaf420ad73bd908c531132d32f9683 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d0aaf420ad73bd908c531132d32f9683, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d0aaf420ad73bd908c531132d32f9683->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d0aaf420ad73bd908c531132d32f9683, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d0aaf420ad73bd908c531132d32f9683,
        type_description_1,
        par_self,
        par_raw_data,
        var_data,
        var_status,
        var_delete
    );


    // Release cached frame.
    if ( frame_d0aaf420ad73bd908c531132d32f9683 == cache_frame_d0aaf420ad73bd908c531132d32f9683 )
    {
        Py_DECREF( frame_d0aaf420ad73bd908c531132d32f9683 );
    }
    cache_frame_d0aaf420ad73bd908c531132d32f9683 = NULL;

    assertFrameObject( frame_d0aaf420ad73bd908c531132d32f9683 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_3_on_data );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_raw_data );
    par_raw_data = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_delete );
    var_delete = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_raw_data );
    par_raw_data = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_delete );
    var_delete = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_3_on_data );
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


static PyObject *impl_tweepy$streaming$$$function_4_keep_alive( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_4_keep_alive );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_4_keep_alive );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_tweepy$streaming$$$function_5_on_status( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_status = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_5_on_status );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_status );
    par_status = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_status );
    par_status = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_5_on_status );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_tweepy$streaming$$$function_6_on_exception( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_exception = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_6_on_exception );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_exception );
    par_exception = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_exception );
    par_exception = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_6_on_exception );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_tweepy$streaming$$$function_7_on_delete( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_status_id = python_pars[ 1 ];
    PyObject *par_user_id = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_7_on_delete );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_status_id );
    par_status_id = NULL;

    Py_XDECREF( par_user_id );
    par_user_id = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_status_id );
    par_status_id = NULL;

    Py_XDECREF( par_user_id );
    par_user_id = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_7_on_delete );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_tweepy$streaming$$$function_8_on_event( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_status = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_8_on_event );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_status );
    par_status = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_status );
    par_status = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_8_on_event );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_tweepy$streaming$$$function_9_on_direct_message( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_status = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_9_on_direct_message );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_status );
    par_status = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_status );
    par_status = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_9_on_direct_message );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_tweepy$streaming$$$function_10_on_friends( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_friends = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_10_on_friends );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_friends );
    par_friends = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_friends );
    par_friends = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_10_on_friends );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_tweepy$streaming$$$function_11_on_limit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_track = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_11_on_limit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_track );
    par_track = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_track );
    par_track = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_11_on_limit );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_tweepy$streaming$$$function_12_on_error( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_status_code = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_12_on_error );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_status_code );
    par_status_code = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_status_code );
    par_status_code = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_12_on_error );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_tweepy$streaming$$$function_13_on_timeout( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_13_on_timeout );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_13_on_timeout );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_tweepy$streaming$$$function_14_on_disconnect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_notice = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_14_on_disconnect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_notice );
    par_notice = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_notice );
    par_notice = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_14_on_disconnect );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_tweepy$streaming$$$function_15_on_warning( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_notice = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_15_on_warning );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_notice );
    par_notice = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_notice );
    par_notice = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_15_on_warning );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_tweepy$streaming$$$function_16___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_stream = python_pars[ 1 ];
    PyObject *par_chunk_size = python_pars[ 2 ];
    PyObject *par_encoding = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_7d83006044b2e49de903ea11e6d07bb3 = NULL;

    struct Nuitka_FrameObject *frame_7d83006044b2e49de903ea11e6d07bb3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7d83006044b2e49de903ea11e6d07bb3, codeobj_7d83006044b2e49de903ea11e6d07bb3, module_tweepy$streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7d83006044b2e49de903ea11e6d07bb3 = cache_frame_7d83006044b2e49de903ea11e6d07bb3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7d83006044b2e49de903ea11e6d07bb3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7d83006044b2e49de903ea11e6d07bb3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_stream;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__stream, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_7d83006044b2e49de903ea11e6d07bb3->m_frame.f_lineno = 154;
    tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_b, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__buffer, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_assattr_name_3 = par_chunk_size;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chunk_size" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__chunk_size, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_encoding;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__encoding, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d83006044b2e49de903ea11e6d07bb3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d83006044b2e49de903ea11e6d07bb3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7d83006044b2e49de903ea11e6d07bb3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7d83006044b2e49de903ea11e6d07bb3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7d83006044b2e49de903ea11e6d07bb3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7d83006044b2e49de903ea11e6d07bb3,
        type_description_1,
        par_self,
        par_stream,
        par_chunk_size,
        par_encoding
    );


    // Release cached frame.
    if ( frame_7d83006044b2e49de903ea11e6d07bb3 == cache_frame_7d83006044b2e49de903ea11e6d07bb3 )
    {
        Py_DECREF( frame_7d83006044b2e49de903ea11e6d07bb3 );
    }
    cache_frame_7d83006044b2e49de903ea11e6d07bb3 = NULL;

    assertFrameObject( frame_7d83006044b2e49de903ea11e6d07bb3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_16___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_chunk_size );
    par_chunk_size = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_chunk_size );
    par_chunk_size = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_16___init__ );
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


static PyObject *impl_tweepy$streaming$$$function_17_read_len( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_length = python_pars[ 1 ];
    PyObject *var_read_len = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_isnot_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    static struct Nuitka_FrameObject *cache_frame_35af982864b2a0dad5e780ffcf03ba2f = NULL;

    struct Nuitka_FrameObject *frame_35af982864b2a0dad5e780ffcf03ba2f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_35af982864b2a0dad5e780ffcf03ba2f, codeobj_35af982864b2a0dad5e780ffcf03ba2f, module_tweepy$streaming, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_35af982864b2a0dad5e780ffcf03ba2f = cache_frame_35af982864b2a0dad5e780ffcf03ba2f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_35af982864b2a0dad5e780ffcf03ba2f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_35af982864b2a0dad5e780ffcf03ba2f ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__stream );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_closed );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 159;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__buffer );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = par_length;

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "length" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 160;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 161;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__pop );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_length;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "length" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 161;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_35af982864b2a0dad5e780ffcf03ba2f->m_frame.f_lineno = 161;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__chunk_size );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = par_length;

    if ( tmp_left_name_1 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "length" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__buffer );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 162;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 162;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 162;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_35af982864b2a0dad5e780ffcf03ba2f->m_frame.f_lineno = 162;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_read_len;
        var_read_len = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__buffer );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = tmp_inplace_assign_attr_1__start;
        tmp_inplace_assign_attr_1__start = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_left_name_2 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__stream );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_read );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = var_read_len;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "read_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    frame_35af982864b2a0dad5e780ffcf03ba2f->m_frame.f_lineno = 163;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_inplace_assign_attr_1__end;
        tmp_inplace_assign_attr_1__end = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_compare_left_2 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__buffer, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    branch_no_3:;
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

    Py_XDECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    Py_XDECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    Py_XDECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35af982864b2a0dad5e780ffcf03ba2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_35af982864b2a0dad5e780ffcf03ba2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35af982864b2a0dad5e780ffcf03ba2f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_35af982864b2a0dad5e780ffcf03ba2f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_35af982864b2a0dad5e780ffcf03ba2f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_35af982864b2a0dad5e780ffcf03ba2f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_35af982864b2a0dad5e780ffcf03ba2f,
        type_description_1,
        par_self,
        par_length,
        var_read_len
    );


    // Release cached frame.
    if ( frame_35af982864b2a0dad5e780ffcf03ba2f == cache_frame_35af982864b2a0dad5e780ffcf03ba2f )
    {
        Py_DECREF( frame_35af982864b2a0dad5e780ffcf03ba2f );
    }
    cache_frame_35af982864b2a0dad5e780ffcf03ba2f = NULL;

    assertFrameObject( frame_35af982864b2a0dad5e780ffcf03ba2f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_17_read_len );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_length );
    par_length = NULL;

    Py_XDECREF( var_read_len );
    var_read_len = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_length );
    par_length = NULL;

    Py_XDECREF( var_read_len );
    var_read_len = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_17_read_len );
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


static PyObject *impl_tweepy$streaming$$$function_18_read_line( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_sep = python_pars[ 1 ];
    PyObject *var_start = NULL;
    PyObject *var_loc = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_isnot_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
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
    static struct Nuitka_FrameObject *cache_frame_f00fa758bb5541f6e9308e16f121e240 = NULL;

    struct Nuitka_FrameObject *frame_f00fa758bb5541f6e9308e16f121e240;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_int_0;
    assert( var_start == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_start = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f00fa758bb5541f6e9308e16f121e240, codeobj_f00fa758bb5541f6e9308e16f121e240, module_tweepy$streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f00fa758bb5541f6e9308e16f121e240 = cache_frame_f00fa758bb5541f6e9308e16f121e240;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f00fa758bb5541f6e9308e16f121e240 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f00fa758bb5541f6e9308e16f121e240 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__stream );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_closed );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 173;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__buffer );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_find );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_sep;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_start;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_f00fa758bb5541f6e9308e16f121e240->m_frame.f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_loc;
        var_loc = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_loc;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__pop );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = var_loc;

    if ( tmp_left_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_1 = par_sep;

    if ( tmp_len_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 176;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 176;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_f00fa758bb5541f6e9308e16f121e240->m_frame.f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__buffer );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_start;
        var_start = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    branch_end_2:;
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__buffer );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = tmp_inplace_assign_attr_1__start;
        tmp_inplace_assign_attr_1__start = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_left_name_2 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__stream );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_read );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__chunk_size );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 179;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    frame_f00fa758bb5541f6e9308e16f121e240->m_frame.f_lineno = 179;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_5 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_inplace_assign_attr_1__end;
        tmp_inplace_assign_attr_1__end = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_compare_left_2 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__buffer, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    branch_no_3:;
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

    Py_XDECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    Py_XDECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    Py_XDECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f00fa758bb5541f6e9308e16f121e240 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f00fa758bb5541f6e9308e16f121e240 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f00fa758bb5541f6e9308e16f121e240 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f00fa758bb5541f6e9308e16f121e240, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f00fa758bb5541f6e9308e16f121e240->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f00fa758bb5541f6e9308e16f121e240, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f00fa758bb5541f6e9308e16f121e240,
        type_description_1,
        par_self,
        par_sep,
        var_start,
        var_loc
    );


    // Release cached frame.
    if ( frame_f00fa758bb5541f6e9308e16f121e240 == cache_frame_f00fa758bb5541f6e9308e16f121e240 )
    {
        Py_DECREF( frame_f00fa758bb5541f6e9308e16f121e240 );
    }
    cache_frame_f00fa758bb5541f6e9308e16f121e240 = NULL;

    assertFrameObject( frame_f00fa758bb5541f6e9308e16f121e240 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_18_read_line );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_sep );
    par_sep = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_loc );
    var_loc = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_sep );
    par_sep = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_loc );
    var_loc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_18_read_line );
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


static PyObject *impl_tweepy$streaming$$$function_19__pop( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_length = python_pars[ 1 ];
    PyObject *var_r = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_start_name_1;
    PyObject *tmp_start_name_2;
    PyObject *tmp_step_name_1;
    PyObject *tmp_step_name_2;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_stop_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_9675ad53a1000f1170baf3d6ac4f0952 = NULL;

    struct Nuitka_FrameObject *frame_9675ad53a1000f1170baf3d6ac4f0952;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9675ad53a1000f1170baf3d6ac4f0952, codeobj_9675ad53a1000f1170baf3d6ac4f0952, module_tweepy$streaming, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9675ad53a1000f1170baf3d6ac4f0952 = cache_frame_9675ad53a1000f1170baf3d6ac4f0952;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9675ad53a1000f1170baf3d6ac4f0952 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9675ad53a1000f1170baf3d6ac4f0952 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__buffer );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_start_name_1 = Py_None;
    tmp_stop_name_1 = par_length;

    if ( tmp_stop_name_1 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "length" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    assert( tmp_subscript_name_1 != NULL );
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__buffer );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_start_name_2 = par_length;

    if ( tmp_start_name_2 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "length" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_stop_name_2 = Py_None;
    tmp_step_name_2 = Py_None;
    tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
    assert( tmp_subscript_name_2 != NULL );
    tmp_assattr_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    Py_DECREF( tmp_subscript_name_2 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__buffer, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 183;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_3 = var_r;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_decode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__encoding );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 184;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_9675ad53a1000f1170baf3d6ac4f0952->m_frame.f_lineno = 184;
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


        exception_lineno = 184;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9675ad53a1000f1170baf3d6ac4f0952 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9675ad53a1000f1170baf3d6ac4f0952 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9675ad53a1000f1170baf3d6ac4f0952 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9675ad53a1000f1170baf3d6ac4f0952, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9675ad53a1000f1170baf3d6ac4f0952->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9675ad53a1000f1170baf3d6ac4f0952, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9675ad53a1000f1170baf3d6ac4f0952,
        type_description_1,
        par_self,
        par_length,
        var_r
    );


    // Release cached frame.
    if ( frame_9675ad53a1000f1170baf3d6ac4f0952 == cache_frame_9675ad53a1000f1170baf3d6ac4f0952 )
    {
        Py_DECREF( frame_9675ad53a1000f1170baf3d6ac4f0952 );
    }
    cache_frame_9675ad53a1000f1170baf3d6ac4f0952 = NULL;

    assertFrameObject( frame_9675ad53a1000f1170baf3d6ac4f0952 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_19__pop );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_length );
    par_length = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_length );
    par_length = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_19__pop );
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


static PyObject *impl_tweepy$streaming$$$function_20___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_auth = python_pars[ 1 ];
    PyObject *par_listener = python_pars[ 2 ];
    PyObject *par_options = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_name_14;
    PyObject *tmp_assattr_name_15;
    PyObject *tmp_assattr_name_16;
    PyObject *tmp_assattr_name_17;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assattr_target_13;
    PyObject *tmp_assattr_target_14;
    PyObject *tmp_assattr_target_15;
    PyObject *tmp_assattr_target_16;
    PyObject *tmp_assattr_target_17;
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
    PyObject *tmp_called_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_adf4b399e6ec3887d950e753508aed1f = NULL;

    struct Nuitka_FrameObject *frame_adf4b399e6ec3887d950e753508aed1f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_adf4b399e6ec3887d950e753508aed1f, codeobj_adf4b399e6ec3887d950e753508aed1f, module_tweepy$streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_adf4b399e6ec3887d950e753508aed1f = cache_frame_adf4b399e6ec3887d950e753508aed1f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_adf4b399e6ec3887d950e753508aed1f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_adf4b399e6ec3887d950e753508aed1f ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_auth;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_auth, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_listener;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "listener" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_listener, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = Py_False;
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_running, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = par_options;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_adf4b399e6ec3887d950e753508aed1f->m_frame.f_lineno = 195;
    tmp_assattr_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_timeout_float_300_0_tuple, 0 ) );

    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_timeout, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 195;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_called_instance_2 = par_options;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_adf4b399e6ec3887d950e753508aed1f->m_frame.f_lineno = 196;
    tmp_assattr_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_retry_count_tuple, 0 ) );

    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_retry_count, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 196;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_called_instance_3 = par_options;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_adf4b399e6ec3887d950e753508aed1f->m_frame.f_lineno = 199;
    tmp_assattr_name_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_retry_time_float_5_0_tuple, 0 ) );

    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_6 = par_self;

    if ( tmp_assattr_target_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_retry_time_start, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 199;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_called_instance_4 = par_options;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_adf4b399e6ec3887d950e753508aed1f->m_frame.f_lineno = 200;
    tmp_assattr_name_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_retry_420_float_60_0_tuple, 0 ) );

    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_7 = par_self;

    if ( tmp_assattr_target_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_retry_420_start, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 200;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_7 );
    tmp_called_instance_5 = par_options;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_adf4b399e6ec3887d950e753508aed1f->m_frame.f_lineno = 201;
    tmp_assattr_name_8 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_retry_time_cap_float_320_0_tuple, 0 ) );

    if ( tmp_assattr_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_8 = par_self;

    if ( tmp_assattr_target_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_retry_time_cap, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_8 );

        exception_lineno = 201;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_8 );
    tmp_called_instance_6 = par_options;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_adf4b399e6ec3887d950e753508aed1f->m_frame.f_lineno = 202;
    tmp_assattr_name_9 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_snooze_time_float_0_25_tuple, 0 ) );

    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_9 = par_self;

    if ( tmp_assattr_target_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_snooze_time_step, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_9 );

        exception_lineno = 202;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_9 );
    tmp_called_instance_7 = par_options;

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_adf4b399e6ec3887d950e753508aed1f->m_frame.f_lineno = 203;
    tmp_assattr_name_10 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_snooze_time_cap_int_pos_16_tuple, 0 ) );

    if ( tmp_assattr_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_10 = par_self;

    if ( tmp_assattr_target_10 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_snooze_time_cap, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_10 );

        exception_lineno = 203;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_10 );
    tmp_called_instance_8 = par_options;

    if ( tmp_called_instance_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_adf4b399e6ec3887d950e753508aed1f->m_frame.f_lineno = 210;
    tmp_assattr_name_11 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_chunk_size_int_pos_512_tuple, 0 ) );

    if ( tmp_assattr_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_11 = par_self;

    if ( tmp_assattr_target_11 == NULL )
    {
        Py_DECREF( tmp_assattr_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_chunk_size, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_11 );

        exception_lineno = 210;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_11 );
    tmp_called_instance_9 = par_options;

    if ( tmp_called_instance_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 212;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_adf4b399e6ec3887d950e753508aed1f->m_frame.f_lineno = 212;
    tmp_assattr_name_12 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_9, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_verify_true_tuple, 0 ) );

    if ( tmp_assattr_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_12 = par_self;

    if ( tmp_assattr_target_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 212;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_verify, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 212;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_12 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_API );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_API );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "API" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 214;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_adf4b399e6ec3887d950e753508aed1f->m_frame.f_lineno = 214;
    tmp_assattr_name_13 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assattr_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_13 = par_self;

    if ( tmp_assattr_target_13 == NULL )
    {
        Py_DECREF( tmp_assattr_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 214;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_api, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_13 );

        exception_lineno = 214;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_13 );
    tmp_called_instance_10 = par_options;

    if ( tmp_called_instance_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_adf4b399e6ec3887d950e753508aed1f->m_frame.f_lineno = 215;
    tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_headers_tuple, 0 ) );

    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 215;
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
    tmp_or_right_value_1 = PyDict_New();
    tmp_assattr_name_14 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assattr_name_14 = tmp_or_left_value_1;
    or_end_1:;
    tmp_assattr_target_14 = par_self;

    if ( tmp_assattr_target_14 == NULL )
    {
        Py_DECREF( tmp_assattr_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_headers, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_14 );

        exception_lineno = 215;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_14 );
    tmp_called_instance_11 = par_self;

    if ( tmp_called_instance_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_adf4b399e6ec3887d950e753508aed1f->m_frame.f_lineno = 216;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_11, const_str_plain_new_session );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_15 = Py_None;
    tmp_assattr_target_15 = par_self;

    if ( tmp_assattr_target_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_body, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_retry_time_start );
    if ( tmp_assattr_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_16 = par_self;

    if ( tmp_assattr_target_16 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_retry_time, tmp_assattr_name_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_16 );

        exception_lineno = 218;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_16 );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_snooze_time_step );
    if ( tmp_assattr_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_17 = par_self;

    if ( tmp_assattr_target_17 == NULL )
    {
        Py_DECREF( tmp_assattr_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_snooze_time, tmp_assattr_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_17 );

        exception_lineno = 219;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_17 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_adf4b399e6ec3887d950e753508aed1f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_adf4b399e6ec3887d950e753508aed1f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_adf4b399e6ec3887d950e753508aed1f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_adf4b399e6ec3887d950e753508aed1f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_adf4b399e6ec3887d950e753508aed1f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_adf4b399e6ec3887d950e753508aed1f,
        type_description_1,
        par_self,
        par_auth,
        par_listener,
        par_options
    );


    // Release cached frame.
    if ( frame_adf4b399e6ec3887d950e753508aed1f == cache_frame_adf4b399e6ec3887d950e753508aed1f )
    {
        Py_DECREF( frame_adf4b399e6ec3887d950e753508aed1f );
    }
    cache_frame_adf4b399e6ec3887d950e753508aed1f = NULL;

    assertFrameObject( frame_adf4b399e6ec3887d950e753508aed1f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_20___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_auth );
    par_auth = NULL;

    Py_XDECREF( par_listener );
    par_listener = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_auth );
    par_auth = NULL;

    Py_XDECREF( par_listener );
    par_listener = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_20___init__ );
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


static PyObject *impl_tweepy$streaming$$$function_21_new_session( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_a7c912e20ff7ff1e96cd2ea6af5c8235 = NULL;

    struct Nuitka_FrameObject *frame_a7c912e20ff7ff1e96cd2ea6af5c8235;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a7c912e20ff7ff1e96cd2ea6af5c8235, codeobj_a7c912e20ff7ff1e96cd2ea6af5c8235, module_tweepy$streaming, sizeof(void *) );
    frame_a7c912e20ff7ff1e96cd2ea6af5c8235 = cache_frame_a7c912e20ff7ff1e96cd2ea6af5c8235;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a7c912e20ff7ff1e96cd2ea6af5c8235 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a7c912e20ff7ff1e96cd2ea6af5c8235 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_requests );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_requests );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "requests" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_a7c912e20ff7ff1e96cd2ea6af5c8235->m_frame.f_lineno = 222;
    tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_Session );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_session, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 222;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_session );
    if ( tmp_assattr_target_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 223;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_headers, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_target_2 );

        exception_lineno = 223;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_target_2 );
    tmp_assattr_name_3 = Py_None;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_session );
    if ( tmp_assattr_target_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_params, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_3 );

        exception_lineno = 224;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_3 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7c912e20ff7ff1e96cd2ea6af5c8235 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7c912e20ff7ff1e96cd2ea6af5c8235 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a7c912e20ff7ff1e96cd2ea6af5c8235, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a7c912e20ff7ff1e96cd2ea6af5c8235->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a7c912e20ff7ff1e96cd2ea6af5c8235, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a7c912e20ff7ff1e96cd2ea6af5c8235,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a7c912e20ff7ff1e96cd2ea6af5c8235 == cache_frame_a7c912e20ff7ff1e96cd2ea6af5c8235 )
    {
        Py_DECREF( frame_a7c912e20ff7ff1e96cd2ea6af5c8235 );
    }
    cache_frame_a7c912e20ff7ff1e96cd2ea6af5c8235 = NULL;

    assertFrameObject( frame_a7c912e20ff7ff1e96cd2ea6af5c8235 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_21_new_session );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_21_new_session );
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


static PyObject *impl_tweepy$streaming$$$function_22__run( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_url = NULL;
    PyObject *var_error_counter = NULL;
    PyObject *var_resp = NULL;
    PyObject *var_exception = NULL;
    PyObject *var_auth = NULL;
    PyObject *var_exc = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
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
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_NotEq_1;
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
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
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
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unicode_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ea72bb2cd57bc21d6a9685dcdd4e5408 = NULL;

    struct Nuitka_FrameObject *frame_ea72bb2cd57bc21d6a9685dcdd4e5408;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ea72bb2cd57bc21d6a9685dcdd4e5408, codeobj_ea72bb2cd57bc21d6a9685dcdd4e5408, module_tweepy$streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ea72bb2cd57bc21d6a9685dcdd4e5408 = cache_frame_ea72bb2cd57bc21d6a9685dcdd4e5408;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ea72bb2cd57bc21d6a9685dcdd4e5408 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ea72bb2cd57bc21d6a9685dcdd4e5408 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_8461b642c2155e0a0bd4750f46de9da4;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_host );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 228;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 228;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_url == NULL );
    var_url = tmp_assign_source_1;

    tmp_assign_source_2 = const_int_0;
    assert( var_error_counter == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_error_counter = tmp_assign_source_2;

    tmp_assign_source_3 = Py_None;
    assert( var_resp == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_resp = tmp_assign_source_3;

    tmp_assign_source_4 = Py_None;
    assert( var_exception == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_exception = tmp_assign_source_4;

    loop_start_1:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_running );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 234;
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
    goto loop_end_1;
    branch_no_1:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 235;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_retry_count );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_compare_left_2 = var_error_counter;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error_counter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_retry_count );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 236;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    branch_no_2:;
    // Tried code:
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 240;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_auth );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame.f_lineno = 240;
    tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_apply_auth );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_auth;
        var_auth = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_session );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_request );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_POST;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_url;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 5 );
    tmp_dict_key_1 = const_str_plain_data;
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_body );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 243;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_timeout;
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 244;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_timeout );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 244;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_stream;
    tmp_dict_value_3 = Py_True;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_auth;
    tmp_dict_value_4 = var_auth;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "auth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_verify;
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_verify );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 247;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame.f_lineno = 241;
    tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_resp;
        var_resp = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_source_name_12 = var_resp;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_status_code );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_compare_right_3 = const_int_pos_200;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 248;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_listener );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_on_error );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_15 = var_resp;

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_status_code );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 249;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame.f_lineno = 249;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compare_left_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_compare_right_4 = Py_False;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    goto loop_end_1;
    branch_no_5:;
    tmp_left_name_2 = var_error_counter;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error_counter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 251;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_7 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    var_error_counter = tmp_assign_source_7;

    tmp_source_name_16 = var_resp;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_status_code );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_compare_right_5 = const_int_pos_420;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 252;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_5 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_3 != NULL );
    tmp_source_name_17 = par_self;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_retry_420_start );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_18 = par_self;

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_retry_time );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 254;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame.f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_retry_time, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 253;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_no_6:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_sleep );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sleep );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sleep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 255;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_19 = par_self;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 255;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_retry_time );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame.f_lineno = 255;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_5 != NULL );
    tmp_source_name_20 = par_self;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_retry_time );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_right_name_3 = const_int_pos_2;
    tmp_args_element_name_5 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_21 = par_self;

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_retry_time_cap );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 257;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame.f_lineno = 256;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_retry_time, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_2 );
    goto branch_end_4;
    branch_no_4:;
    tmp_assign_source_8 = const_int_0;
    {
        PyObject *old = var_error_counter;
        var_error_counter = tmp_assign_source_8;
        Py_INCREF( var_error_counter );
        Py_XDECREF( old );
    }

    tmp_source_name_22 = par_self;

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_retry_time_start );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_retry_time, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 260;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_source_name_23 = par_self;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_snooze_time_step );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_snooze_time, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 261;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_source_name_24 = par_self;

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 262;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_listener );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame.f_lineno = 262;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_on_connect );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_25 = par_self;

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__read_loop );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = var_resp;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame.f_lineno = 263;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_end_4:;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_ea72bb2cd57bc21d6a9685dcdd4e5408, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_ea72bb2cd57bc21d6a9685dcdd4e5408, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_6 = PyThreadState_GET()->exc_type;
    tmp_compare_right_6 = PyTuple_New( 2 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_Timeout );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Timeout );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_compare_right_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_compare_right_6, 0, tmp_tuple_element_3 );
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_compare_right_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_SSLError );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_6 );

        exception_lineno = 264;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_compare_right_6, 1, tmp_tuple_element_3 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_6 );

        exception_lineno = 264;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_compare_right_6 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_9 = PyThreadState_GET()->exc_value;
    {
        PyObject *old = var_exc;
        var_exc = tmp_assign_source_9;
        Py_INCREF( var_exc );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_isinstance_inst_1 = var_exc;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 268;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_SSLError );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_28 = var_exc;

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_args );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 269;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
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
    tmp_compexpr_left_1 = const_str_digest_01815186f693d6c36c2765b5da31be5e;
    tmp_source_name_29 = var_exc;

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_args );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_unicode_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_unicode_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_compexpr_right_1 = PyObject_Unicode( tmp_unicode_arg_1 );
    Py_DECREF( tmp_unicode_arg_1 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_and_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 269;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    tmp_assign_source_10 = var_exc;

    if ( tmp_assign_source_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    {
        PyObject *old = var_exception;
        var_exception = tmp_assign_source_10;
        Py_INCREF( var_exception );
        Py_XDECREF( old );
    }

    goto try_break_handler_4;
    branch_no_9:;
    branch_no_8:;
    tmp_source_name_30 = par_self;

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 272;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_listener );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame.f_lineno = 272;
    tmp_compare_left_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_on_timeout );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_compare_right_7 = Py_False;
    tmp_is_2 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    Py_DECREF( tmp_compare_left_7 );
    if ( tmp_is_2 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    goto try_break_handler_4;
    branch_no_10:;
    tmp_source_name_31 = par_self;

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_compare_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_running );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_compare_right_8 = Py_False;
    tmp_is_3 = ( tmp_compare_left_8 == tmp_compare_right_8 );
    Py_DECREF( tmp_compare_left_8 );
    if ( tmp_is_3 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    goto try_break_handler_4;
    branch_no_11:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_sleep );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sleep );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sleep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_source_name_32 = par_self;

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_snooze_time );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame.f_lineno = 276;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_8 != NULL );
    tmp_source_name_33 = par_self;

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_snooze_time );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_source_name_34 = par_self;

    if ( tmp_source_name_34 == NULL )
    {
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_snooze_time_step );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 277;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_9 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_source_name_35 = par_self;

    if ( tmp_source_name_35 == NULL )
    {
        Py_DECREF( tmp_args_element_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_snooze_time_cap );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_9 );

        exception_lineno = 278;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame.f_lineno = 277;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_assattr_target_5 = par_self;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_snooze_time, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 277;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_assattr_name_5 );
    goto try_end_2;
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

    Py_XDECREF( var_exc );
    var_exc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // try break handler code:
    try_break_handler_4:;
    Py_XDECREF( var_exc );
    var_exc = NULL;

    goto try_break_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF( var_exc );
    var_exc = NULL;

    goto branch_end_7;
    branch_no_7:;
    tmp_compare_left_9 = PyThreadState_GET()->exc_type;
    tmp_compare_right_9 = PyExc_Exception;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_11 = PyThreadState_GET()->exc_value;
    {
        PyObject *old = var_exc;
        var_exc = tmp_assign_source_11;
        Py_INCREF( var_exc );
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = var_exc;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = var_exception;
        var_exception = tmp_assign_source_12;
        Py_INCREF( var_exception );
        Py_XDECREF( old );
    }

    // Tried code:
    goto try_break_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_22__run );
    return NULL;
    // try break handler code:
    try_break_handler_5:;
    Py_XDECREF( var_exc );
    var_exc = NULL;

    goto try_break_handler_3;
    // End of try:
    goto branch_end_12;
    branch_no_12:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 239;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame) frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_3;
    branch_end_12:;
    branch_end_7:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // try break handler code:
    try_break_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto loop_end_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_22__run );
    return NULL;
    // End of try:
    try_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_assattr_name_6 = Py_False;
    tmp_assattr_target_6 = par_self;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 285;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_running, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = var_resp;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_called_instance_4 = var_resp;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame.f_lineno = 287;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_13:;
    tmp_called_instance_5 = par_self;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 289;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame.f_lineno = 289;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_new_session );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_4 = var_exception;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 291;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_37 = par_self;

    if ( tmp_source_name_37 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 293;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_listener );
    if ( tmp_source_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_on_exception );
    Py_DECREF( tmp_source_name_36 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = var_exception;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 293;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame.f_lineno = 293;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_raise_type_1 = var_exception;

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 294;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
    branch_no_14:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ea72bb2cd57bc21d6a9685dcdd4e5408 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ea72bb2cd57bc21d6a9685dcdd4e5408 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ea72bb2cd57bc21d6a9685dcdd4e5408, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ea72bb2cd57bc21d6a9685dcdd4e5408->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ea72bb2cd57bc21d6a9685dcdd4e5408, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ea72bb2cd57bc21d6a9685dcdd4e5408,
        type_description_1,
        par_self,
        var_url,
        var_error_counter,
        var_resp,
        var_exception,
        var_auth,
        var_exc
    );


    // Release cached frame.
    if ( frame_ea72bb2cd57bc21d6a9685dcdd4e5408 == cache_frame_ea72bb2cd57bc21d6a9685dcdd4e5408 )
    {
        Py_DECREF( frame_ea72bb2cd57bc21d6a9685dcdd4e5408 );
    }
    cache_frame_ea72bb2cd57bc21d6a9685dcdd4e5408 = NULL;

    assertFrameObject( frame_ea72bb2cd57bc21d6a9685dcdd4e5408 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_22__run );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    Py_XDECREF( var_error_counter );
    var_error_counter = NULL;

    Py_XDECREF( var_resp );
    var_resp = NULL;

    Py_XDECREF( var_exception );
    var_exception = NULL;

    Py_XDECREF( var_auth );
    var_auth = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    Py_XDECREF( var_error_counter );
    var_error_counter = NULL;

    Py_XDECREF( var_resp );
    var_resp = NULL;

    Py_XDECREF( var_exception );
    var_exception = NULL;

    Py_XDECREF( var_auth );
    var_auth = NULL;

    Py_XDECREF( var_exc );
    var_exc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_22__run );
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


static PyObject *impl_tweepy$streaming$$$function_23__data( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_854a6ccb089267e0c88e4baed3cc3010 = NULL;

    struct Nuitka_FrameObject *frame_854a6ccb089267e0c88e4baed3cc3010;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_854a6ccb089267e0c88e4baed3cc3010, codeobj_854a6ccb089267e0c88e4baed3cc3010, module_tweepy$streaming, sizeof(void *)+sizeof(void *) );
    frame_854a6ccb089267e0c88e4baed3cc3010 = cache_frame_854a6ccb089267e0c88e4baed3cc3010;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_854a6ccb089267e0c88e4baed3cc3010 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_854a6ccb089267e0c88e4baed3cc3010 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_listener );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_on_data );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_data;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 297;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_854a6ccb089267e0c88e4baed3cc3010->m_frame.f_lineno = 297;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compare_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_False;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assattr_name_1 = Py_False;
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 298;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_running, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_854a6ccb089267e0c88e4baed3cc3010 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_854a6ccb089267e0c88e4baed3cc3010 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_854a6ccb089267e0c88e4baed3cc3010, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_854a6ccb089267e0c88e4baed3cc3010->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_854a6ccb089267e0c88e4baed3cc3010, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_854a6ccb089267e0c88e4baed3cc3010,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if ( frame_854a6ccb089267e0c88e4baed3cc3010 == cache_frame_854a6ccb089267e0c88e4baed3cc3010 )
    {
        Py_DECREF( frame_854a6ccb089267e0c88e4baed3cc3010 );
    }
    cache_frame_854a6ccb089267e0c88e4baed3cc3010 = NULL;

    assertFrameObject( frame_854a6ccb089267e0c88e4baed3cc3010 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_23__data );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_23__data );
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


static PyObject *impl_tweepy$streaming$$$function_24__read_loop( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_resp = python_pars[ 1 ];
    PyObject *var_charset = NULL;
    PyObject *var_enc_search = NULL;
    PyObject *var_encoding = NULL;
    PyObject *var_buf = NULL;
    PyObject *var_length = NULL;
    PyObject *var_line = NULL;
    PyObject *var_next_status_obj = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_int_arg_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
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
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7eef715f77860b39b9c4f371af8a92e0 = NULL;

    struct Nuitka_FrameObject *frame_7eef715f77860b39b9c4f371af8a92e0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7eef715f77860b39b9c4f371af8a92e0, codeobj_7eef715f77860b39b9c4f371af8a92e0, module_tweepy$streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7eef715f77860b39b9c4f371af8a92e0 = cache_frame_7eef715f77860b39b9c4f371af8a92e0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7eef715f77860b39b9c4f371af8a92e0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7eef715f77860b39b9c4f371af8a92e0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_resp;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_headers );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = const_tuple_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8_tuple;
    tmp_kw_name_1 = PyDict_Copy( const_dict_792dcbb12846adb787e2e09ec4c9959c );
    frame_7eef715f77860b39b9c4f371af8a92e0->m_frame.f_lineno = 301;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_charset == NULL );
    var_charset = tmp_assign_source_1;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 302;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_search );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_e1d75803f793ccbcffdb113dfee2c962;
    tmp_args_element_name_2 = var_charset;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "charset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 302;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_7eef715f77860b39b9c4f371af8a92e0->m_frame.f_lineno = 302;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_enc_search == NULL );
    var_enc_search = tmp_assign_source_2;

    tmp_compare_left_1 = var_enc_search;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = var_enc_search;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "enc_search" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 304;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_7eef715f77860b39b9c4f371af8a92e0->m_frame.f_lineno = 304;
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_str_plain_enc_tuple, 0 ) );

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_encoding == NULL );
    var_encoding = tmp_assign_source_3;

    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_4 = const_str_digest_c075052d723d6707083e869a0e3659bb;
    assert( var_encoding == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_encoding = tmp_assign_source_4;

    branch_end_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_ReadBuffer );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadBuffer );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ReadBuffer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 308;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_source_name_4 = par_resp;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 308;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_raw );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 308;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_1 );
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 308;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_chunk_size );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 308;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_1 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_encoding;
    tmp_dict_value_1 = var_encoding;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 308;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_7eef715f77860b39b9c4f371af8a92e0->m_frame.f_lineno = 308;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_buf == NULL );
    var_buf = tmp_assign_source_5;

    loop_start_1:;
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 310;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_running );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 310;
        type_description_1 = "ooooooooo";
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
    tmp_source_name_8 = par_resp;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 310;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_raw );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_closed );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
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

        exception_lineno = 310;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    tmp_assign_source_6 = const_int_0;
    {
        PyObject *old = var_length;
        var_length = tmp_assign_source_6;
        Py_INCREF( var_length );
        Py_XDECREF( old );
    }

    loop_start_2:;
    tmp_source_name_10 = par_resp;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_raw );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_closed );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 312;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    goto loop_end_2;
    branch_no_3:;
    tmp_called_instance_3 = var_buf;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 313;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_7eef715f77860b39b9c4f371af8a92e0->m_frame.f_lineno = 313;
    tmp_called_instance_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_read_line );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_7eef715f77860b39b9c4f371af8a92e0->m_frame.f_lineno = 313;
    tmp_assign_source_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_strip );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_cond_value_3 = var_line;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_listener );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_7eef715f77860b39b9c4f371af8a92e0->m_frame.f_lineno = 315;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_keep_alive );
    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_4;
    branch_no_4:;
    tmp_called_instance_5 = var_line;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 316;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_7eef715f77860b39b9c4f371af8a92e0->m_frame.f_lineno = 316;
    tmp_cond_value_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_isdigit );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 316;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_int_arg_1 = var_line;

    if ( tmp_int_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 317;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_8 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_length;
        var_length = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    goto loop_end_2;
    goto branch_end_5;
    branch_no_5:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_TweepError );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TweepError );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TweepError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 320;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_7eef715f77860b39b9c4f371af8a92e0->m_frame.f_lineno = 320;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_digest_16d787ff3c4ad0ab473a0593cc4fdb3b_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 320;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    branch_end_5:;
    branch_end_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_source_name_12 = var_buf;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 322;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_read_len );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_length;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "length" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 322;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_7eef715f77860b39b9c4f371af8a92e0->m_frame.f_lineno = 322;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_next_status_obj;
        var_next_status_obj = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_source_name_13 = par_self;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 323;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_running );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 323;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 324;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__data );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_next_status_obj;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "next_status_obj" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 324;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_7eef715f77860b39b9c4f371af8a92e0->m_frame.f_lineno = 324;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_source_name_16 = par_resp;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_raw );
    if ( tmp_source_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_closed );
    Py_DECREF( tmp_source_name_15 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 352;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_17 = par_self;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 353;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_on_closed );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_resp;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 353;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_7eef715f77860b39b9c4f371af8a92e0->m_frame.f_lineno = 353;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7eef715f77860b39b9c4f371af8a92e0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7eef715f77860b39b9c4f371af8a92e0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7eef715f77860b39b9c4f371af8a92e0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7eef715f77860b39b9c4f371af8a92e0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7eef715f77860b39b9c4f371af8a92e0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7eef715f77860b39b9c4f371af8a92e0,
        type_description_1,
        par_self,
        par_resp,
        var_charset,
        var_enc_search,
        var_encoding,
        var_buf,
        var_length,
        var_line,
        var_next_status_obj
    );


    // Release cached frame.
    if ( frame_7eef715f77860b39b9c4f371af8a92e0 == cache_frame_7eef715f77860b39b9c4f371af8a92e0 )
    {
        Py_DECREF( frame_7eef715f77860b39b9c4f371af8a92e0 );
    }
    cache_frame_7eef715f77860b39b9c4f371af8a92e0 = NULL;

    assertFrameObject( frame_7eef715f77860b39b9c4f371af8a92e0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_24__read_loop );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_resp );
    par_resp = NULL;

    Py_XDECREF( var_charset );
    var_charset = NULL;

    Py_XDECREF( var_enc_search );
    var_enc_search = NULL;

    Py_XDECREF( var_encoding );
    var_encoding = NULL;

    Py_XDECREF( var_buf );
    var_buf = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_next_status_obj );
    var_next_status_obj = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_resp );
    par_resp = NULL;

    Py_XDECREF( var_charset );
    var_charset = NULL;

    Py_XDECREF( var_enc_search );
    var_enc_search = NULL;

    Py_XDECREF( var_encoding );
    var_encoding = NULL;

    Py_XDECREF( var_buf );
    var_buf = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_next_status_obj );
    var_next_status_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_24__read_loop );
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


static PyObject *impl_tweepy$streaming$$$function_25__start( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_async = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_055027f7316f610a64f0b8bd9dc8a32f = NULL;

    struct Nuitka_FrameObject *frame_055027f7316f610a64f0b8bd9dc8a32f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_055027f7316f610a64f0b8bd9dc8a32f, codeobj_055027f7316f610a64f0b8bd9dc8a32f, module_tweepy$streaming, sizeof(void *)+sizeof(void *) );
    frame_055027f7316f610a64f0b8bd9dc8a32f = cache_frame_055027f7316f610a64f0b8bd9dc8a32f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_055027f7316f610a64f0b8bd9dc8a32f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_055027f7316f610a64f0b8bd9dc8a32f ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_running, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = par_async;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "async" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_Thread );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Thread );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Thread" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 358;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_target;
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 358;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__run );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 358;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_055027f7316f610a64f0b8bd9dc8a32f->m_frame.f_lineno = 358;
    tmp_assattr_name_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 358;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__thread, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 358;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 359;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__thread );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_055027f7316f610a64f0b8bd9dc8a32f->m_frame.f_lineno = 359;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_start );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_2 = par_self;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 361;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_055027f7316f610a64f0b8bd9dc8a32f->m_frame.f_lineno = 361;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__run );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_055027f7316f610a64f0b8bd9dc8a32f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_055027f7316f610a64f0b8bd9dc8a32f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_055027f7316f610a64f0b8bd9dc8a32f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_055027f7316f610a64f0b8bd9dc8a32f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_055027f7316f610a64f0b8bd9dc8a32f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_055027f7316f610a64f0b8bd9dc8a32f,
        type_description_1,
        par_self,
        par_async
    );


    // Release cached frame.
    if ( frame_055027f7316f610a64f0b8bd9dc8a32f == cache_frame_055027f7316f610a64f0b8bd9dc8a32f )
    {
        Py_DECREF( frame_055027f7316f610a64f0b8bd9dc8a32f );
    }
    cache_frame_055027f7316f610a64f0b8bd9dc8a32f = NULL;

    assertFrameObject( frame_055027f7316f610a64f0b8bd9dc8a32f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_25__start );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_async );
    par_async = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_async );
    par_async = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_25__start );
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


static PyObject *impl_tweepy$streaming$$$function_26_on_closed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_resp = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_26_on_closed );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_resp );
    par_resp = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_resp );
    par_resp = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_26_on_closed );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_tweepy$streaming$$$function_27_userstream( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_stall_warnings = python_pars[ 1 ];
    PyObject *par__with = python_pars[ 2 ];
    PyObject *par_replies = python_pars[ 3 ];
    PyObject *par_track = python_pars[ 4 ];
    PyObject *par_locations = python_pars[ 5 ];
    PyObject *par_async = python_pars[ 6 ];
    PyObject *par_encoding = python_pars[ 7 ];
    PyObject *outline_0_var_l = NULL;
    PyObject *tmp_listcontraction_1__$0 = NULL;
    PyObject *tmp_listcontraction_1__contraction = NULL;
    PyObject *tmp_listcontraction_1__iter_value_0 = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
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
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2 = NULL;

    struct Nuitka_FrameObject *frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2;

    static struct Nuitka_FrameObject *cache_frame_d93fbc46f87efa9530c9eca86e3640e4 = NULL;

    struct Nuitka_FrameObject *frame_d93fbc46f87efa9530c9eca86e3640e4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d93fbc46f87efa9530c9eca86e3640e4, codeobj_d93fbc46f87efa9530c9eca86e3640e4, module_tweepy$streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d93fbc46f87efa9530c9eca86e3640e4 = cache_frame_d93fbc46f87efa9530c9eca86e3640e4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d93fbc46f87efa9530c9eca86e3640e4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d93fbc46f87efa9530c9eca86e3640e4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = PyDict_Copy( const_dict_be7c76ce8c5dc8badebcfeb1d22ff954 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_session );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 375;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_params, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );

        exception_lineno = 375;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_target_1 );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 376;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_running );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 376;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_TweepError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TweepError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TweepError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 377;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_d93fbc46f87efa9530c9eca86e3640e4->m_frame.f_lineno = 377;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_40113b95a8a5eb8cef7fb4eb48a287ee_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 377;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_left_name_1 = const_str_digest_05c758a57c70463a3c55556de5c77ca9;
    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_STREAM_VERSION );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STREAM_VERSION );
    }

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STREAM_VERSION" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 378;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 378;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_url, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 378;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_assattr_name_3 = const_str_digest_1383f0647caa2bbdab83d2461584c3fd;
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 379;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_host, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = par_stall_warnings;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stall_warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        type_description_1 = "oooooooo";
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
    tmp_ass_subvalue_1 = par_stall_warnings;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stall_warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 381;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 381;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_session );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_params );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = const_str_plain_stall_warnings;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_cond_value_3 = par__with;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_with" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 382;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "oooooooo";
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
    tmp_ass_subvalue_2 = par__with;

    if ( tmp_ass_subvalue_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_with" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 383;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 383;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_session );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_params );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_ass_subscribed_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_2 = const_str_plain_with;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscribed_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_cond_value_4 = par_replies;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "replies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 384;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 384;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_ass_subvalue_3 = par_replies;

    if ( tmp_ass_subvalue_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "replies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_session );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_params );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_ass_subscribed_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_3 = const_str_plain_replies;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subscribed_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_and_left_value_1 = par_locations;

    if ( tmp_and_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "locations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 386;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        type_description_1 = "oooooooo";
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
    tmp_len_arg_1 = par_locations;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "locations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 386;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_5 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_5 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 386;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_len_arg_2 = par_locations;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "locations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 387;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_4;
    tmp_compare_left_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 387;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_TweepError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TweepError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TweepError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_d93fbc46f87efa9530c9eca86e3640e4->m_frame.f_lineno = 388;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_e637942fa5ad4655e4099c334a1f1642_tuple, 0 ) );

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 388;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    branch_no_6:;
    tmp_source_name_9 = const_str_chr_44;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_join );
    assert( tmp_called_name_3 != NULL );
    // Tried code:
    tmp_iter_arg_1 = par_locations;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "locations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 390;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_listcontraction_1__$0 == NULL );
    tmp_listcontraction_1__$0 = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( tmp_listcontraction_1__contraction == NULL );
    tmp_listcontraction_1__contraction = tmp_assign_source_2;

    MAKE_OR_REUSE_FRAME( cache_frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2, codeobj_52efa7ff60fd6c43b353e8ed29bbcdb6, module_tweepy$streaming, sizeof(void *)+sizeof(void *) );
    frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2 = cache_frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_listcontraction_1__$0;

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
            type_description_2 = "oo";
            exception_lineno = 390;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_listcontraction_1__iter_value_0;
        tmp_listcontraction_1__iter_value_0 = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_listcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = outline_0_var_l;
        outline_0_var_l = tmp_assign_source_4;
        Py_INCREF( outline_0_var_l );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_left_name_3 = const_str_digest_a7320611f8f08b4f3a228e9c29cadc98;
    tmp_right_name_3 = outline_0_var_l;

    CHECK_OBJECT( tmp_right_name_3 );
    tmp_append_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_2 = "oo";
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_2 = "oo";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_2 = "oo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_27_userstream );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2,
        type_description_2,
        outline_0_var_l,
        par_locations
    );


    // Release cached frame.
    if ( frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2 == cache_frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2 )
    {
        Py_DECREF( frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2 );
    }
    cache_frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2 = NULL;

    assertFrameObject( frame_52efa7ff60fd6c43b353e8ed29bbcdb6_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oooooooo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_27_userstream );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_l );
    outline_0_var_l = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var_l );
    outline_0_var_l = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_27_userstream );
    return NULL;
    outline_exception_1:;
    exception_lineno = 390;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_args_element_name_1 = tmp_outline_return_value_1;
    frame_d93fbc46f87efa9530c9eca86e3640e4->m_frame.f_lineno = 390;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_ass_subvalue_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 390;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_session );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_4 );

        exception_lineno = 390;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_params );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_ass_subscribed_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_4 );

        exception_lineno = 390;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_4 = const_str_plain_locations;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subscribed_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    tmp_cond_value_6 = par_track;

    if ( tmp_cond_value_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "track" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_13 = const_str_chr_44;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_join );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_2 = par_track;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "track" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 392;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_d93fbc46f87efa9530c9eca86e3640e4->m_frame.f_lineno = 392;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_encode );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_encoding;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 392;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_d93fbc46f87efa9530c9eca86e3640e4->m_frame.f_lineno = 392;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_ass_subvalue_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_ass_subvalue_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = par_self;

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 392;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_session );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_5 );

        exception_lineno = 392;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_params );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_ass_subscribed_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_5 );

        exception_lineno = 392;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_5 = const_str_plain_track;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    Py_DECREF( tmp_ass_subscribed_5 );
    Py_DECREF( tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    tmp_source_name_16 = par_self;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 394;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__start );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_async;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "async" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 394;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_d93fbc46f87efa9530c9eca86e3640e4->m_frame.f_lineno = 394;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d93fbc46f87efa9530c9eca86e3640e4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d93fbc46f87efa9530c9eca86e3640e4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d93fbc46f87efa9530c9eca86e3640e4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d93fbc46f87efa9530c9eca86e3640e4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d93fbc46f87efa9530c9eca86e3640e4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d93fbc46f87efa9530c9eca86e3640e4,
        type_description_1,
        par_self,
        par_stall_warnings,
        par__with,
        par_replies,
        par_track,
        par_locations,
        par_async,
        par_encoding
    );


    // Release cached frame.
    if ( frame_d93fbc46f87efa9530c9eca86e3640e4 == cache_frame_d93fbc46f87efa9530c9eca86e3640e4 )
    {
        Py_DECREF( frame_d93fbc46f87efa9530c9eca86e3640e4 );
    }
    cache_frame_d93fbc46f87efa9530c9eca86e3640e4 = NULL;

    assertFrameObject( frame_d93fbc46f87efa9530c9eca86e3640e4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_27_userstream );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_stall_warnings );
    par_stall_warnings = NULL;

    Py_XDECREF( par__with );
    par__with = NULL;

    Py_XDECREF( par_replies );
    par_replies = NULL;

    Py_XDECREF( par_track );
    par_track = NULL;

    Py_XDECREF( par_locations );
    par_locations = NULL;

    Py_XDECREF( par_async );
    par_async = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_stall_warnings );
    par_stall_warnings = NULL;

    Py_XDECREF( par__with );
    par__with = NULL;

    Py_XDECREF( par_replies );
    par_replies = NULL;

    Py_XDECREF( par_track );
    par_track = NULL;

    Py_XDECREF( par_locations );
    par_locations = NULL;

    Py_XDECREF( par_async );
    par_async = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_27_userstream );
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


static PyObject *impl_tweepy$streaming$$$function_28_firehose( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_count = python_pars[ 1 ];
    PyObject *par_async = python_pars[ 2 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    bool tmp_isnot_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_369522e17a6d8c097e306fa6db832a39 = NULL;

    struct Nuitka_FrameObject *frame_369522e17a6d8c097e306fa6db832a39;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_369522e17a6d8c097e306fa6db832a39, codeobj_369522e17a6d8c097e306fa6db832a39, module_tweepy$streaming, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_369522e17a6d8c097e306fa6db832a39 = cache_frame_369522e17a6d8c097e306fa6db832a39;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_369522e17a6d8c097e306fa6db832a39 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_369522e17a6d8c097e306fa6db832a39 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = PyDict_Copy( const_dict_be7c76ce8c5dc8badebcfeb1d22ff954 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_session );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 397;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_params, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );

        exception_lineno = 397;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_target_1 );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 398;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_running );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 398;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_TweepError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TweepError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TweepError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 399;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_369522e17a6d8c097e306fa6db832a39->m_frame.f_lineno = 399;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_40113b95a8a5eb8cef7fb4eb48a287ee_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 399;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_left_name_1 = const_str_digest_9b1f98e83b9e181dc946f50b95371b80;
    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_STREAM_VERSION );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STREAM_VERSION );
    }

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STREAM_VERSION" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 400;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 400;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_url, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 400;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_cond_value_2 = par_count;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "count" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 401;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "ooo";
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
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 402;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_url );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_1__start == NULL );
    tmp_inplace_assign_attr_1__start = tmp_assign_source_1;

    // Tried code:
    tmp_left_name_2 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_left_name_3 = const_str_digest_ed2d1ea9b82a69a1772b0c248b17f9c9;
    tmp_right_name_3 = par_count;

    if ( tmp_right_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "count" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 402;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_right_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    assert( tmp_inplace_assign_attr_1__end == NULL );
    tmp_inplace_assign_attr_1__end = tmp_assign_source_2;

    // Tried code:
    tmp_compare_left_1 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assattr_name_3 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 402;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_url, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    branch_no_3:;
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

    Py_XDECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    Py_XDECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    Py_XDECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    branch_no_2:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 403;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__start );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_async;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "async" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 403;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_369522e17a6d8c097e306fa6db832a39->m_frame.f_lineno = 403;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_369522e17a6d8c097e306fa6db832a39 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_369522e17a6d8c097e306fa6db832a39 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_369522e17a6d8c097e306fa6db832a39, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_369522e17a6d8c097e306fa6db832a39->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_369522e17a6d8c097e306fa6db832a39, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_369522e17a6d8c097e306fa6db832a39,
        type_description_1,
        par_self,
        par_count,
        par_async
    );


    // Release cached frame.
    if ( frame_369522e17a6d8c097e306fa6db832a39 == cache_frame_369522e17a6d8c097e306fa6db832a39 )
    {
        Py_DECREF( frame_369522e17a6d8c097e306fa6db832a39 );
    }
    cache_frame_369522e17a6d8c097e306fa6db832a39 = NULL;

    assertFrameObject( frame_369522e17a6d8c097e306fa6db832a39 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_28_firehose );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_count );
    par_count = NULL;

    Py_XDECREF( par_async );
    par_async = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_count );
    par_count = NULL;

    Py_XDECREF( par_async );
    par_async = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_28_firehose );
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


static PyObject *impl_tweepy$streaming$$$function_29_retweet( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_async = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_893488410f55a8c0f326bfe1e7c6c6c4 = NULL;

    struct Nuitka_FrameObject *frame_893488410f55a8c0f326bfe1e7c6c6c4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_893488410f55a8c0f326bfe1e7c6c6c4, codeobj_893488410f55a8c0f326bfe1e7c6c6c4, module_tweepy$streaming, sizeof(void *)+sizeof(void *) );
    frame_893488410f55a8c0f326bfe1e7c6c6c4 = cache_frame_893488410f55a8c0f326bfe1e7c6c6c4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_893488410f55a8c0f326bfe1e7c6c6c4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_893488410f55a8c0f326bfe1e7c6c6c4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = PyDict_Copy( const_dict_be7c76ce8c5dc8badebcfeb1d22ff954 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_session );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 406;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_params, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );

        exception_lineno = 406;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_target_1 );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 407;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_running );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 407;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_TweepError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TweepError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TweepError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 408;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_893488410f55a8c0f326bfe1e7c6c6c4->m_frame.f_lineno = 408;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_40113b95a8a5eb8cef7fb4eb48a287ee_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 408;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 408;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_left_name_1 = const_str_digest_c11484d73b3b6e8bf3e31408f4233993;
    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_STREAM_VERSION );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STREAM_VERSION );
    }

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STREAM_VERSION" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 409;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 409;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_url, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 409;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 410;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__start );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_async;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "async" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 410;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_893488410f55a8c0f326bfe1e7c6c6c4->m_frame.f_lineno = 410;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_893488410f55a8c0f326bfe1e7c6c6c4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_893488410f55a8c0f326bfe1e7c6c6c4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_893488410f55a8c0f326bfe1e7c6c6c4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_893488410f55a8c0f326bfe1e7c6c6c4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_893488410f55a8c0f326bfe1e7c6c6c4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_893488410f55a8c0f326bfe1e7c6c6c4,
        type_description_1,
        par_self,
        par_async
    );


    // Release cached frame.
    if ( frame_893488410f55a8c0f326bfe1e7c6c6c4 == cache_frame_893488410f55a8c0f326bfe1e7c6c6c4 )
    {
        Py_DECREF( frame_893488410f55a8c0f326bfe1e7c6c6c4 );
    }
    cache_frame_893488410f55a8c0f326bfe1e7c6c6c4 = NULL;

    assertFrameObject( frame_893488410f55a8c0f326bfe1e7c6c6c4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_29_retweet );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_async );
    par_async = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_async );
    par_async = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_29_retweet );
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


static PyObject *impl_tweepy$streaming$$$function_30_sample( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_async = python_pars[ 1 ];
    PyObject *par_languages = python_pars[ 2 ];
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8ea2764473bdd4d706c25fdbd24cd016 = NULL;

    struct Nuitka_FrameObject *frame_8ea2764473bdd4d706c25fdbd24cd016;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8ea2764473bdd4d706c25fdbd24cd016, codeobj_8ea2764473bdd4d706c25fdbd24cd016, module_tweepy$streaming, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8ea2764473bdd4d706c25fdbd24cd016 = cache_frame_8ea2764473bdd4d706c25fdbd24cd016;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8ea2764473bdd4d706c25fdbd24cd016 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8ea2764473bdd4d706c25fdbd24cd016 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = PyDict_Copy( const_dict_be7c76ce8c5dc8badebcfeb1d22ff954 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_session );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 413;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_params, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );

        exception_lineno = 413;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_target_1 );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 414;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_running );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 414;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_TweepError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TweepError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TweepError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 415;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_8ea2764473bdd4d706c25fdbd24cd016->m_frame.f_lineno = 415;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_40113b95a8a5eb8cef7fb4eb48a287ee_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 415;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 415;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_left_name_1 = const_str_digest_43148b21c002a95284e68ac343b1f238;
    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_STREAM_VERSION );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STREAM_VERSION );
    }

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STREAM_VERSION" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 416;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 416;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_url, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 416;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_cond_value_2 = par_languages;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "languages" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 417;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 417;
        type_description_1 = "ooo";
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
    tmp_source_name_3 = const_str_chr_44;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
    assert( tmp_called_name_2 != NULL );
    tmp_called_name_3 = (PyObject *)&PyMap_Type;
    tmp_args_element_name_2 = (PyObject *)&PyUnicode_Type;
    tmp_args_element_name_3 = par_languages;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "languages" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 418;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_8ea2764473bdd4d706c25fdbd24cd016->m_frame.f_lineno = 418;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 418;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_8ea2764473bdd4d706c25fdbd24cd016->m_frame.f_lineno = 418;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 418;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_session );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 418;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_params );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 418;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = const_str_plain_language;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 419;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__start );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_async;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "async" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 419;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_8ea2764473bdd4d706c25fdbd24cd016->m_frame.f_lineno = 419;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ea2764473bdd4d706c25fdbd24cd016 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ea2764473bdd4d706c25fdbd24cd016 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8ea2764473bdd4d706c25fdbd24cd016, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8ea2764473bdd4d706c25fdbd24cd016->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8ea2764473bdd4d706c25fdbd24cd016, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8ea2764473bdd4d706c25fdbd24cd016,
        type_description_1,
        par_self,
        par_async,
        par_languages
    );


    // Release cached frame.
    if ( frame_8ea2764473bdd4d706c25fdbd24cd016 == cache_frame_8ea2764473bdd4d706c25fdbd24cd016 )
    {
        Py_DECREF( frame_8ea2764473bdd4d706c25fdbd24cd016 );
    }
    cache_frame_8ea2764473bdd4d706c25fdbd24cd016 = NULL;

    assertFrameObject( frame_8ea2764473bdd4d706c25fdbd24cd016 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_30_sample );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_async );
    par_async = NULL;

    Py_XDECREF( par_languages );
    par_languages = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_async );
    par_async = NULL;

    Py_XDECREF( par_languages );
    par_languages = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_30_sample );
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


static PyObject *impl_tweepy$streaming$$$function_31_filter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_follow = python_pars[ 1 ];
    PyObject *par_track = python_pars[ 2 ];
    PyObject *par_async = python_pars[ 3 ];
    PyObject *par_locations = python_pars[ 4 ];
    PyObject *par_stall_warnings = python_pars[ 5 ];
    PyObject *par_languages = python_pars[ 6 ];
    PyObject *par_encoding = python_pars[ 7 ];
    PyObject *par_filter_level = python_pars[ 8 ];
    PyObject *outline_0_var_l = NULL;
    PyObject *tmp_listcontraction_1__$0 = NULL;
    PyObject *tmp_listcontraction_1__contraction = NULL;
    PyObject *tmp_listcontraction_1__iter_value_0 = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscribed_6;
    PyObject *tmp_ass_subscribed_7;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    PyObject *tmp_ass_subscript_6;
    PyObject *tmp_ass_subscript_7;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
    PyObject *tmp_ass_subvalue_6;
    PyObject *tmp_ass_subvalue_7;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
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
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
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
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_703ffb3566cc227d38743760fdede181_2 = NULL;

    struct Nuitka_FrameObject *frame_703ffb3566cc227d38743760fdede181_2;

    static struct Nuitka_FrameObject *cache_frame_9650a3a9a1d30600269e9dff41839ef7 = NULL;

    struct Nuitka_FrameObject *frame_9650a3a9a1d30600269e9dff41839ef7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9650a3a9a1d30600269e9dff41839ef7, codeobj_9650a3a9a1d30600269e9dff41839ef7, module_tweepy$streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9650a3a9a1d30600269e9dff41839ef7 = cache_frame_9650a3a9a1d30600269e9dff41839ef7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9650a3a9a1d30600269e9dff41839ef7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9650a3a9a1d30600269e9dff41839ef7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = PyDict_New();
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_body, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 423;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_ass_subvalue_1 = const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 424;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_session );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = const_str_digest_5c175abed9cf1957c3fc709c29a36d21;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 425;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_running );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 425;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_TweepError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TweepError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TweepError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 426;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9650a3a9a1d30600269e9dff41839ef7->m_frame.f_lineno = 426;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_40113b95a8a5eb8cef7fb4eb48a287ee_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 426;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 426;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_left_name_1 = const_str_digest_45058a5b5ed72f807e9f0d88a0b9e6e0;
    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_STREAM_VERSION );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STREAM_VERSION );
    }

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STREAM_VERSION" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 427;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 427;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 427;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_url, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 427;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_cond_value_2 = par_follow;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "follow" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 428;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 428;
        type_description_1 = "ooooooooo";
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
    tmp_source_name_5 = const_str_chr_44;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_1 = par_follow;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "follow" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 429;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9650a3a9a1d30600269e9dff41839ef7->m_frame.f_lineno = 429;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 429;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_encode );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 429;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_encoding;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 429;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9650a3a9a1d30600269e9dff41839ef7->m_frame.f_lineno = 429;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 429;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 429;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_body );
    if ( tmp_ass_subscribed_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_2 );

        exception_lineno = 429;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_2 = const_str_plain_follow;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscribed_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 429;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_cond_value_3 = par_track;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "track" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 430;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 430;
        type_description_1 = "ooooooooo";
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
    tmp_source_name_8 = const_str_chr_44;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_join );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_3 = par_track;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "track" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 431;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9650a3a9a1d30600269e9dff41839ef7->m_frame.f_lineno = 431;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_source_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 431;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_encode );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 431;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_encoding;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 431;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9650a3a9a1d30600269e9dff41839ef7->m_frame.f_lineno = 431;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 431;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 431;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_body );
    if ( tmp_ass_subscribed_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_3 );

        exception_lineno = 431;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_3 = const_str_plain_track;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subscribed_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 431;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_and_left_value_1 = par_locations;

    if ( tmp_and_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "locations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 432;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 432;
        type_description_1 = "ooooooooo";
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
    tmp_len_arg_1 = par_locations;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "locations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 432;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 432;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 432;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_4 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_4 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 432;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_len_arg_2 = par_locations;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "locations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 433;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 433;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_4;
    tmp_compare_left_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 433;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 433;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_TweepError );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TweepError );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TweepError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 434;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9650a3a9a1d30600269e9dff41839ef7->m_frame.f_lineno = 434;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_digest_e637942fa5ad4655e4099c334a1f1642_tuple, 0 ) );

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 434;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 434;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_source_name_10 = const_str_chr_44;
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_join );
    assert( tmp_called_name_7 != NULL );
    // Tried code:
    tmp_iter_arg_1 = par_locations;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "locations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 436;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_listcontraction_1__$0 == NULL );
    tmp_listcontraction_1__$0 = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( tmp_listcontraction_1__contraction == NULL );
    tmp_listcontraction_1__contraction = tmp_assign_source_2;

    MAKE_OR_REUSE_FRAME( cache_frame_703ffb3566cc227d38743760fdede181_2, codeobj_703ffb3566cc227d38743760fdede181, module_tweepy$streaming, sizeof(void *)+sizeof(void *) );
    frame_703ffb3566cc227d38743760fdede181_2 = cache_frame_703ffb3566cc227d38743760fdede181_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_703ffb3566cc227d38743760fdede181_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_703ffb3566cc227d38743760fdede181_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_listcontraction_1__$0;

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
            type_description_2 = "oo";
            exception_lineno = 436;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_listcontraction_1__iter_value_0;
        tmp_listcontraction_1__iter_value_0 = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_listcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = outline_0_var_l;
        outline_0_var_l = tmp_assign_source_4;
        Py_INCREF( outline_0_var_l );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_left_name_3 = const_str_digest_56665bf09354d6f2e034971086407f48;
    tmp_right_name_3 = outline_0_var_l;

    CHECK_OBJECT( tmp_right_name_3 );
    tmp_append_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
        type_description_2 = "oo";
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
        type_description_2 = "oo";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
        type_description_2 = "oo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_31_filter );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_703ffb3566cc227d38743760fdede181_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_703ffb3566cc227d38743760fdede181_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_703ffb3566cc227d38743760fdede181_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_703ffb3566cc227d38743760fdede181_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_703ffb3566cc227d38743760fdede181_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_703ffb3566cc227d38743760fdede181_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_703ffb3566cc227d38743760fdede181_2,
        type_description_2,
        outline_0_var_l,
        par_locations
    );


    // Release cached frame.
    if ( frame_703ffb3566cc227d38743760fdede181_2 == cache_frame_703ffb3566cc227d38743760fdede181_2 )
    {
        Py_DECREF( frame_703ffb3566cc227d38743760fdede181_2 );
    }
    cache_frame_703ffb3566cc227d38743760fdede181_2 = NULL;

    assertFrameObject( frame_703ffb3566cc227d38743760fdede181_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "ooooooooo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_31_filter );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_l );
    outline_0_var_l = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var_l );
    outline_0_var_l = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_31_filter );
    return NULL;
    outline_exception_1:;
    exception_lineno = 436;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_args_element_name_5 = tmp_outline_return_value_1;
    frame_9650a3a9a1d30600269e9dff41839ef7->m_frame.f_lineno = 436;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_ass_subvalue_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 436;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_body );
    if ( tmp_ass_subscribed_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_4 );

        exception_lineno = 436;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_4 = const_str_plain_locations;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subscribed_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_cond_value_5 = par_stall_warnings;

    if ( tmp_cond_value_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stall_warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 437;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 437;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_ass_subvalue_5 = par_stall_warnings;

    if ( tmp_ass_subvalue_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stall_warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 438;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = par_self;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 438;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_body );
    if ( tmp_ass_subscribed_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 438;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_5 = const_str_plain_stall_warnings;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    Py_DECREF( tmp_ass_subscribed_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 438;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    tmp_cond_value_6 = par_languages;

    if ( tmp_cond_value_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "languages" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 439;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 439;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_13 = const_str_chr_44;
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_join );
    assert( tmp_called_name_8 != NULL );
    tmp_called_name_9 = (PyObject *)&PyMap_Type;
    tmp_args_element_name_7 = (PyObject *)&PyUnicode_Type;
    tmp_args_element_name_8 = par_languages;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "languages" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 440;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9650a3a9a1d30600269e9dff41839ef7->m_frame.f_lineno = 440;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 440;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_9650a3a9a1d30600269e9dff41839ef7->m_frame.f_lineno = 440;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_ass_subvalue_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_ass_subvalue_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 440;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 440;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_body );
    if ( tmp_ass_subscribed_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_6 );

        exception_lineno = 440;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_6 = const_str_plain_language;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    Py_DECREF( tmp_ass_subscribed_6 );
    Py_DECREF( tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 440;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    tmp_cond_value_7 = par_filter_level;

    if ( tmp_cond_value_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filter_level" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 441;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 441;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 442;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = par_filter_level;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filter_level" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 442;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = par_encoding;

    if ( tmp_args_element_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 442;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9650a3a9a1d30600269e9dff41839ef7->m_frame.f_lineno = 442;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_ass_subvalue_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    if ( tmp_ass_subvalue_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 442;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = par_self;

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 442;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_7 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_body );
    if ( tmp_ass_subscribed_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_7 );

        exception_lineno = 442;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_7 = const_str_plain_filter_level;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
    Py_DECREF( tmp_ass_subscribed_7 );
    Py_DECREF( tmp_ass_subvalue_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 442;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    tmp_assattr_name_3 = PyDict_Copy( const_dict_be7c76ce8c5dc8badebcfeb1d22ff954 );
    tmp_source_name_16 = par_self;

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 443;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_session );
    if ( tmp_assattr_target_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 443;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_params, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_target_3 );

        exception_lineno = 443;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_target_3 );
    tmp_assattr_name_4 = const_str_digest_6612e3f1345fb7a94ada90b2d03323d5;
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 444;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_host, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 444;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = par_self;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 445;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__start );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = par_async;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "async" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 445;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9650a3a9a1d30600269e9dff41839ef7->m_frame.f_lineno = 445;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9650a3a9a1d30600269e9dff41839ef7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9650a3a9a1d30600269e9dff41839ef7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9650a3a9a1d30600269e9dff41839ef7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9650a3a9a1d30600269e9dff41839ef7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9650a3a9a1d30600269e9dff41839ef7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9650a3a9a1d30600269e9dff41839ef7,
        type_description_1,
        par_self,
        par_follow,
        par_track,
        par_async,
        par_locations,
        par_stall_warnings,
        par_languages,
        par_encoding,
        par_filter_level
    );


    // Release cached frame.
    if ( frame_9650a3a9a1d30600269e9dff41839ef7 == cache_frame_9650a3a9a1d30600269e9dff41839ef7 )
    {
        Py_DECREF( frame_9650a3a9a1d30600269e9dff41839ef7 );
    }
    cache_frame_9650a3a9a1d30600269e9dff41839ef7 = NULL;

    assertFrameObject( frame_9650a3a9a1d30600269e9dff41839ef7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_31_filter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_follow );
    par_follow = NULL;

    Py_XDECREF( par_track );
    par_track = NULL;

    Py_XDECREF( par_async );
    par_async = NULL;

    Py_XDECREF( par_locations );
    par_locations = NULL;

    Py_XDECREF( par_stall_warnings );
    par_stall_warnings = NULL;

    Py_XDECREF( par_languages );
    par_languages = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_filter_level );
    par_filter_level = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_follow );
    par_follow = NULL;

    Py_XDECREF( par_track );
    par_track = NULL;

    Py_XDECREF( par_async );
    par_async = NULL;

    Py_XDECREF( par_locations );
    par_locations = NULL;

    Py_XDECREF( par_stall_warnings );
    par_stall_warnings = NULL;

    Py_XDECREF( par_languages );
    par_languages = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_filter_level );
    par_filter_level = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_31_filter );
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


static PyObject *impl_tweepy$streaming$$$function_32_sitestream( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_follow = python_pars[ 1 ];
    PyObject *par_stall_warnings = python_pars[ 2 ];
    PyObject *par_with_ = python_pars[ 3 ];
    PyObject *par_replies = python_pars[ 4 ];
    PyObject *par_async = python_pars[ 5 ];
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_left_name_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6169f60485f96948bb74c4f72f98d49c = NULL;

    struct Nuitka_FrameObject *frame_6169f60485f96948bb74c4f72f98d49c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6169f60485f96948bb74c4f72f98d49c, codeobj_6169f60485f96948bb74c4f72f98d49c, module_tweepy$streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6169f60485f96948bb74c4f72f98d49c = cache_frame_6169f60485f96948bb74c4f72f98d49c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6169f60485f96948bb74c4f72f98d49c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6169f60485f96948bb74c4f72f98d49c ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = PyDict_New();
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_body, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 449;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 450;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_running );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 450;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 450;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_TweepError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TweepError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TweepError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 451;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_6169f60485f96948bb74c4f72f98d49c->m_frame.f_lineno = 451;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_40113b95a8a5eb8cef7fb4eb48a287ee_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 451;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 451;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_left_name_1 = const_str_digest_23f45c62a803b3d6b45593ee0bcbcdd4;
    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_STREAM_VERSION );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STREAM_VERSION );
    }

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STREAM_VERSION" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 452;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 452;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_url, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 452;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_2 = const_str_chr_44;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    assert( tmp_called_name_2 != NULL );
    tmp_called_name_3 = (PyObject *)&PyMap_Type;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 453;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_text_type );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 453;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_follow;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "follow" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 453;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_6169f60485f96948bb74c4f72f98d49c->m_frame.f_lineno = 453;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 453;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_6169f60485f96948bb74c4f72f98d49c->m_frame.f_lineno = 453;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 453;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 453;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_body );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 453;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = const_str_plain_follow;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 453;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_2 = const_str_plain_length;
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 454;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_body );
    if ( tmp_ass_subscribed_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 454;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_2 = const_str_plain_delimited;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscribed_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 454;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = par_stall_warnings;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stall_warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 455;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        type_description_1 = "oooooo";
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
    tmp_ass_subvalue_3 = par_stall_warnings;

    if ( tmp_ass_subvalue_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stall_warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 456;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 456;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_body );
    if ( tmp_ass_subscribed_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 456;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_3 = const_str_plain_stall_warnings;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subscribed_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 456;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_cond_value_3 = par_with_;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "with_" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 457;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 457;
        type_description_1 = "oooooo";
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
    tmp_ass_subvalue_4 = par_with_;

    if ( tmp_ass_subvalue_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "with_" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 458;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 458;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_body );
    if ( tmp_ass_subscribed_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_4 = const_str_plain_with;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subscribed_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_cond_value_4 = par_replies;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "replies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 459;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 459;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_ass_subvalue_5 = par_replies;

    if ( tmp_ass_subvalue_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "replies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 460;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 460;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_body );
    if ( tmp_ass_subscribed_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_5 = const_str_plain_replies;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    Py_DECREF( tmp_ass_subscribed_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 461;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__start );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_async;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "async" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 461;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_6169f60485f96948bb74c4f72f98d49c->m_frame.f_lineno = 461;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6169f60485f96948bb74c4f72f98d49c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6169f60485f96948bb74c4f72f98d49c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6169f60485f96948bb74c4f72f98d49c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6169f60485f96948bb74c4f72f98d49c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6169f60485f96948bb74c4f72f98d49c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6169f60485f96948bb74c4f72f98d49c,
        type_description_1,
        par_self,
        par_follow,
        par_stall_warnings,
        par_with_,
        par_replies,
        par_async
    );


    // Release cached frame.
    if ( frame_6169f60485f96948bb74c4f72f98d49c == cache_frame_6169f60485f96948bb74c4f72f98d49c )
    {
        Py_DECREF( frame_6169f60485f96948bb74c4f72f98d49c );
    }
    cache_frame_6169f60485f96948bb74c4f72f98d49c = NULL;

    assertFrameObject( frame_6169f60485f96948bb74c4f72f98d49c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_32_sitestream );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_follow );
    par_follow = NULL;

    Py_XDECREF( par_stall_warnings );
    par_stall_warnings = NULL;

    Py_XDECREF( par_with_ );
    par_with_ = NULL;

    Py_XDECREF( par_replies );
    par_replies = NULL;

    Py_XDECREF( par_async );
    par_async = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_follow );
    par_follow = NULL;

    Py_XDECREF( par_stall_warnings );
    par_stall_warnings = NULL;

    Py_XDECREF( par_with_ );
    par_with_ = NULL;

    Py_XDECREF( par_replies );
    par_replies = NULL;

    Py_XDECREF( par_async );
    par_async = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_32_sitestream );
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


static PyObject *impl_tweepy$streaming$$$function_33_disconnect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_e6bfed0d02cf4c4ff6d618371e76baa6 = NULL;

    struct Nuitka_FrameObject *frame_e6bfed0d02cf4c4ff6d618371e76baa6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e6bfed0d02cf4c4ff6d618371e76baa6, codeobj_e6bfed0d02cf4c4ff6d618371e76baa6, module_tweepy$streaming, sizeof(void *) );
    frame_e6bfed0d02cf4c4ff6d618371e76baa6 = cache_frame_e6bfed0d02cf4c4ff6d618371e76baa6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e6bfed0d02cf4c4ff6d618371e76baa6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e6bfed0d02cf4c4ff6d618371e76baa6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_running );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 464;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_False;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_assattr_name_1 = Py_False;
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 466;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_running, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 466;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6bfed0d02cf4c4ff6d618371e76baa6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6bfed0d02cf4c4ff6d618371e76baa6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6bfed0d02cf4c4ff6d618371e76baa6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e6bfed0d02cf4c4ff6d618371e76baa6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e6bfed0d02cf4c4ff6d618371e76baa6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e6bfed0d02cf4c4ff6d618371e76baa6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e6bfed0d02cf4c4ff6d618371e76baa6,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_e6bfed0d02cf4c4ff6d618371e76baa6 == cache_frame_e6bfed0d02cf4c4ff6d618371e76baa6 )
    {
        Py_DECREF( frame_e6bfed0d02cf4c4ff6d618371e76baa6 );
    }
    cache_frame_e6bfed0d02cf4c4ff6d618371e76baa6 = NULL;

    assertFrameObject( frame_e6bfed0d02cf4c4ff6d618371e76baa6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_33_disconnect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming$$$function_33_disconnect );
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



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_10_on_friends(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_10_on_friends,
        const_str_plain_on_friends,
#if PYTHON_VERSION >= 330
        const_str_digest_5be720d8caff7975ffdf29bb4daa8712,
#endif
        codeobj_c713b7e7acbd80b7925f3dd936cd2ea7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_b405e1469da16c802dbf92224bdc85b8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_11_on_limit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_11_on_limit,
        const_str_plain_on_limit,
#if PYTHON_VERSION >= 330
        const_str_digest_8843fb623236b98def0f05dea30590de,
#endif
        codeobj_222617b92552bb44ed7cd225722648ec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_97b96d4df9a2e59d8ddb709b3e03141c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_12_on_error(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_12_on_error,
        const_str_plain_on_error,
#if PYTHON_VERSION >= 330
        const_str_digest_ee4ea5c31d2db910c0c22ca8ae18231c,
#endif
        codeobj_dc0c4fff35234199bd2d01771f567502,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_140942abdd81d83593535fe616106fa4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_13_on_timeout(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_13_on_timeout,
        const_str_plain_on_timeout,
#if PYTHON_VERSION >= 330
        const_str_digest_c161c983a1be5adc1f59cf1e97ed8b57,
#endif
        codeobj_f6ba26f94a6804c3f765100fa0dacd1b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_26e3dc8e069beb27fb3b41d946b409a1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_14_on_disconnect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_14_on_disconnect,
        const_str_plain_on_disconnect,
#if PYTHON_VERSION >= 330
        const_str_digest_c2cfc1d38a254d67108f7c6f42807fb1,
#endif
        codeobj_e46bf508324ffe8f998603b2a1695841,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_58178cbf4f5a287345711f196bc75eb4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_15_on_warning(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_15_on_warning,
        const_str_plain_on_warning,
#if PYTHON_VERSION >= 330
        const_str_digest_e34b69b512f5f14ad3ef21685591c288,
#endif
        codeobj_b8a8154ef2e6e67d28d4e9c94573b71a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_fa743648d06e8ccce1bde3b0c6f9ceb6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_16___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_16___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_dac79b251701b803513c0eaa2afb6480,
#endif
        codeobj_7d83006044b2e49de903ea11e6d07bb3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_17_read_len(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_17_read_len,
        const_str_plain_read_len,
#if PYTHON_VERSION >= 330
        const_str_digest_d833718dcb8b2c2031a18139fb0c5346,
#endif
        codeobj_35af982864b2a0dad5e780ffcf03ba2f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_18_read_line( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_18_read_line,
        const_str_plain_read_line,
#if PYTHON_VERSION >= 330
        const_str_digest_ed2045eba39a73784d52bc0e6bc61a1b,
#endif
        codeobj_f00fa758bb5541f6e9308e16f121e240,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_77bb8d77b07b9b3008366fe16586bac8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_19__pop(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_19__pop,
        const_str_plain__pop,
#if PYTHON_VERSION >= 330
        const_str_digest_eb98632d14442ee992155a61e4882305,
#endif
        codeobj_9675ad53a1000f1170baf3d6ac4f0952,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_6784573428e147e32ed52def527db378,
#endif
        codeobj_1f9b0181b047dae427418c73a35dbd2b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_20___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_20___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_4a7645f398fd0a431a4fc76eadb605e7,
#endif
        codeobj_adf4b399e6ec3887d950e753508aed1f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_21_new_session(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_21_new_session,
        const_str_plain_new_session,
#if PYTHON_VERSION >= 330
        const_str_digest_71488f318ffa5eab9d38fdbb8a7ba895,
#endif
        codeobj_a7c912e20ff7ff1e96cd2ea6af5c8235,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_22__run(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_22__run,
        const_str_plain__run,
#if PYTHON_VERSION >= 330
        const_str_digest_7a6c5685c07babc2f91efdea687a8363,
#endif
        codeobj_ea72bb2cd57bc21d6a9685dcdd4e5408,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_23__data(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_23__data,
        const_str_plain__data,
#if PYTHON_VERSION >= 330
        const_str_digest_9d146fe17f68f6ee8f2e0d4158c002e4,
#endif
        codeobj_854a6ccb089267e0c88e4baed3cc3010,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_24__read_loop(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_24__read_loop,
        const_str_plain__read_loop,
#if PYTHON_VERSION >= 330
        const_str_digest_3b6ab6efad72198611a41175ffd8fe96,
#endif
        codeobj_7eef715f77860b39b9c4f371af8a92e0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_25__start(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_25__start,
        const_str_plain__start,
#if PYTHON_VERSION >= 330
        const_str_digest_e8efece438a583fab63d9d1291af1975,
#endif
        codeobj_055027f7316f610a64f0b8bd9dc8a32f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_26_on_closed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_26_on_closed,
        const_str_plain_on_closed,
#if PYTHON_VERSION >= 330
        const_str_digest_28bb8d95fcc67f27cb375c882b016d59,
#endif
        codeobj_c26da18af1306f2a83b816c464a91347,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_6a75f21d933bac1f61977a4c64854242,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_27_userstream( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_27_userstream,
        const_str_plain_userstream,
#if PYTHON_VERSION >= 330
        const_str_digest_c7d77ae96464fdb39311dae9f158309f,
#endif
        codeobj_d93fbc46f87efa9530c9eca86e3640e4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_28_firehose( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_28_firehose,
        const_str_plain_firehose,
#if PYTHON_VERSION >= 330
        const_str_digest_d8d7ff1965350df89c11c0b7adae8926,
#endif
        codeobj_369522e17a6d8c097e306fa6db832a39,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_29_retweet( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_29_retweet,
        const_str_plain_retweet,
#if PYTHON_VERSION >= 330
        const_str_digest_d7828d2f4b1420557334eda416b50100,
#endif
        codeobj_893488410f55a8c0f326bfe1e7c6c6c4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_2_on_connect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_2_on_connect,
        const_str_plain_on_connect,
#if PYTHON_VERSION >= 330
        const_str_digest_30331783e70b307d6fe8be0c17a8135d,
#endif
        codeobj_8e61baff1daf29694885b2c1142496fc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_6f0340395000a1ec214046fde63d2a72,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_30_sample( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_30_sample,
        const_str_plain_sample,
#if PYTHON_VERSION >= 330
        const_str_digest_5c3703a899f303d1b1ea99d1013e44f1,
#endif
        codeobj_8ea2764473bdd4d706c25fdbd24cd016,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_31_filter( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_31_filter,
        const_str_plain_filter,
#if PYTHON_VERSION >= 330
        const_str_digest_8186b603c95bc019420426a6174e1322,
#endif
        codeobj_9650a3a9a1d30600269e9dff41839ef7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_32_sitestream( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_32_sitestream,
        const_str_plain_sitestream,
#if PYTHON_VERSION >= 330
        const_str_digest_7bb883d519d747356c3594119760af56,
#endif
        codeobj_6169f60485f96948bb74c4f72f98d49c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_33_disconnect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_33_disconnect,
        const_str_plain_disconnect,
#if PYTHON_VERSION >= 330
        const_str_digest_0a821dc89c2ff3e7f793a0ba384d50ca,
#endif
        codeobj_e6bfed0d02cf4c4ff6d618371e76baa6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_3_on_data(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_3_on_data,
        const_str_plain_on_data,
#if PYTHON_VERSION >= 330
        const_str_digest_8e5d29e7b2bc346521620753154e3729,
#endif
        codeobj_d0aaf420ad73bd908c531132d32f9683,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_1d1980b518eebf5640dce24db3c49349,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_4_keep_alive(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_4_keep_alive,
        const_str_plain_keep_alive,
#if PYTHON_VERSION >= 330
        const_str_digest_41bf1a10c3f6dc9f5f559813f1e7dfd2,
#endif
        codeobj_64ee6d5b0b5ba384f3dc6474d0cd8ff5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_3d3d221f0c0525b510d4c17b7293c731,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_5_on_status(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_5_on_status,
        const_str_plain_on_status,
#if PYTHON_VERSION >= 330
        const_str_digest_35b41f02132ba86dbfbe0a3f04b099bd,
#endif
        codeobj_f6b5c9147dd7bb6946c220733047cd1e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_c3c000b769072d3888600e0558a503f7,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_6_on_exception(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_6_on_exception,
        const_str_plain_on_exception,
#if PYTHON_VERSION >= 330
        const_str_digest_8df002b91d4d7d6dcd79f559dda41e06,
#endif
        codeobj_04616467b77b764190cd2374fc34c3f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_c4a6d8965c7d140f1c553688c5f3c3f0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_7_on_delete(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_7_on_delete,
        const_str_plain_on_delete,
#if PYTHON_VERSION >= 330
        const_str_digest_11c96f3c9cfb0bfe98136da6da2ae9f1,
#endif
        codeobj_5b2c0ce40e19f798bf1ac4a0bf3f17fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_df90d729ed99b9215b05d00aa40fb185,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_8_on_event(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_8_on_event,
        const_str_plain_on_event,
#if PYTHON_VERSION >= 330
        const_str_digest_7aca9d6ab7b89f0565226a86d745799e,
#endif
        codeobj_05a5e6484463bf668ff7f2ac6a541eff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_3aaa656a269b84577c77cd7e0da18489,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tweepy$streaming$$$function_9_on_direct_message(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$streaming$$$function_9_on_direct_message,
        const_str_plain_on_direct_message,
#if PYTHON_VERSION >= 330
        const_str_digest_c69fe247004d23a697b01b2a3332e5f3,
#endif
        codeobj_8993549b5c5362229170d69e70414936,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy$streaming,
        const_str_digest_1d2f36a1f5079aaf2d5c8180a96122ff,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_tweepy$streaming =
{
    PyModuleDef_HEAD_INIT,
    "tweepy.streaming",   /* m_name */
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

MOD_INIT_DECL( tweepy$streaming )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_tweepy$streaming );
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
    puts("tweepy.streaming: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("tweepy.streaming: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inittweepy$streaming" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_tweepy$streaming = Py_InitModule4(
        "tweepy.streaming",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_tweepy$streaming = PyModule_Create( &mdef_tweepy$streaming );
#endif

    moduledict_tweepy$streaming = MODULE_DICT( module_tweepy$streaming );

    CHECK_OBJECT( module_tweepy$streaming );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e54518659f8bd83bab5b18e0c951bc41, module_tweepy$streaming );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_on_connect = NULL;
    PyObject *outline_0_var_on_data = NULL;
    PyObject *outline_0_var_keep_alive = NULL;
    PyObject *outline_0_var_on_status = NULL;
    PyObject *outline_0_var_on_exception = NULL;
    PyObject *outline_0_var_on_delete = NULL;
    PyObject *outline_0_var_on_event = NULL;
    PyObject *outline_0_var_on_direct_message = NULL;
    PyObject *outline_0_var_on_friends = NULL;
    PyObject *outline_0_var_on_limit = NULL;
    PyObject *outline_0_var_on_error = NULL;
    PyObject *outline_0_var_on_timeout = NULL;
    PyObject *outline_0_var_on_disconnect = NULL;
    PyObject *outline_0_var_on_warning = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_1_var___qualname__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var___doc__ = NULL;
    PyObject *outline_1_var___init__ = NULL;
    PyObject *outline_1_var_read_len = NULL;
    PyObject *outline_1_var_read_line = NULL;
    PyObject *outline_1_var__pop = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_2_var___qualname__ = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var_host = NULL;
    PyObject *outline_2_var___init__ = NULL;
    PyObject *outline_2_var_new_session = NULL;
    PyObject *outline_2_var__run = NULL;
    PyObject *outline_2_var__data = NULL;
    PyObject *outline_2_var__read_loop = NULL;
    PyObject *outline_2_var__start = NULL;
    PyObject *outline_2_var_on_closed = NULL;
    PyObject *outline_2_var_userstream = NULL;
    PyObject *outline_2_var_firehose = NULL;
    PyObject *outline_2_var_retweet = NULL;
    PyObject *outline_2_var_sample = NULL;
    PyObject *outline_2_var_filter = NULL;
    PyObject *outline_2_var_sitestream = NULL;
    PyObject *outline_2_var_disconnect = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
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
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_defaults_8;
    PyObject *tmp_defaults_9;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
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
    PyObject *tmp_fromlist_name_12;
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
    PyObject *tmp_globals_name_12;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
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
    PyObject *tmp_level_name_12;
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
    PyObject *tmp_locals_name_12;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
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
    PyObject *tmp_name_name_12;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    static struct Nuitka_FrameObject *cache_frame_37306869e419692dbe36828def1b8537_2 = NULL;

    struct Nuitka_FrameObject *frame_37306869e419692dbe36828def1b8537_2;

    struct Nuitka_FrameObject *frame_a8c563be65dca5c2226cb0ecf70916fd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_2 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_3 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_a8c563be65dca5c2226cb0ecf70916fd = MAKE_MODULE_FRAME( codeobj_a8c563be65dca5c2226cb0ecf70916fd, module_tweepy$streaming );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a8c563be65dca5c2226cb0ecf70916fd );
    assert( Py_REFCNT( frame_a8c563be65dca5c2226cb0ecf70916fd ) == 2 );

    // Framed code:
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_e54518659f8bd83bab5b18e0c951bc41;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_tweepy;
    UPDATE_STRING_DICT0( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 7;
    tmp_assign_source_7 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_7 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_7 );
    tmp_import_from_1__module = tmp_assign_source_7;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_8 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_9 );
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

    Py_XDECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_name_name_1 = const_str_plain_logging;
    tmp_globals_name_1 = (PyObject *)moduledict_tweepy$streaming;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 9;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_10 );
    tmp_name_name_2 = const_str_plain_re;
    tmp_globals_name_2 = (PyObject *)moduledict_tweepy$streaming;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 10;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_11 );
    tmp_name_name_3 = const_str_plain_requests;
    tmp_globals_name_3 = (PyObject *)moduledict_tweepy$streaming;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 11;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_requests, tmp_assign_source_12 );
    tmp_name_name_4 = const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
    tmp_globals_name_4 = (PyObject *)moduledict_tweepy$streaming;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_Timeout_tuple;
    tmp_level_name_4 = const_int_0;
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 12;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Timeout );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_Timeout, tmp_assign_source_13 );
    tmp_name_name_5 = const_str_plain_threading;
    tmp_globals_name_5 = (PyObject *)moduledict_tweepy$streaming;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_Thread_tuple;
    tmp_level_name_5 = const_int_0;
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 13;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Thread );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_Thread, tmp_assign_source_14 );
    tmp_name_name_6 = const_str_plain_time;
    tmp_globals_name_6 = (PyObject *)moduledict_tweepy$streaming;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_sleep_tuple;
    tmp_level_name_6 = const_int_0;
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 14;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    assert( tmp_import_name_from_5 != NULL );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_sleep );
    Py_DECREF( tmp_import_name_from_5 );
    assert( tmp_assign_source_15 != NULL );
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_sleep, tmp_assign_source_15 );
    tmp_name_name_7 = const_str_plain_six;
    tmp_globals_name_7 = (PyObject *)moduledict_tweepy$streaming;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = Py_None;
    tmp_level_name_7 = const_int_0;
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 16;
    tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_16 );
    tmp_name_name_8 = const_str_plain_ssl;
    tmp_globals_name_8 = (PyObject *)moduledict_tweepy$streaming;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = Py_None;
    tmp_level_name_8 = const_int_0;
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 18;
    tmp_assign_source_17 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_17 );
    tmp_name_name_9 = const_str_digest_ca0d94460f56234ef147c7fbf497fc49;
    tmp_globals_name_9 = (PyObject *)moduledict_tweepy$streaming;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_Status_tuple;
    tmp_level_name_9 = const_int_0;
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 20;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Status );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_Status, tmp_assign_source_18 );
    tmp_name_name_10 = const_str_digest_eefde7c00c3216345f2e7c1eca9ec9bc;
    tmp_globals_name_10 = (PyObject *)moduledict_tweepy$streaming;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_API_tuple;
    tmp_level_name_10 = const_int_0;
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 21;
    tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_API );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_API, tmp_assign_source_19 );
    tmp_name_name_11 = const_str_digest_4fe4e33419813bebd8b0147aaca0d197;
    tmp_globals_name_11 = (PyObject *)moduledict_tweepy$streaming;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_TweepError_tuple;
    tmp_level_name_11 = const_int_0;
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 22;
    tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_TweepError );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_TweepError, tmp_assign_source_20 );
    tmp_name_name_12 = const_str_digest_42e125dde2b0dfbc83d32ab394284b81;
    tmp_globals_name_12 = (PyObject *)moduledict_tweepy$streaming;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_str_plain_import_simplejson_tuple;
    tmp_level_name_12 = const_int_0;
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 24;
    tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_import_simplejson );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_import_simplejson, tmp_assign_source_21 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_import_simplejson );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_import_simplejson );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "import_simplejson" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;

        goto frame_exception_exit_1;
    }

    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 25;
    tmp_assign_source_22 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_json, tmp_assign_source_22 );
    tmp_assign_source_23 = const_str_digest_8ae23802a2d9c9c3bf7ea95f68884923;
    UPDATE_STRING_DICT0( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_STREAM_VERSION, tmp_assign_source_23 );
    tmp_assign_source_24 = const_tuple_type_object_tuple;
    assert( tmp_class_creation_1__bases == NULL );
    Py_INCREF( tmp_assign_source_24 );
    tmp_class_creation_1__bases = tmp_assign_source_24;

    tmp_assign_source_25 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_25;

    // Tried code:
    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_26 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_26;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_source_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_StreamListener;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 30;
    tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_27 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_27;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_29 = const_str_digest_e54518659f8bd83bab5b18e0c951bc41;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_29 );
    outline_0_var___module__ = tmp_assign_source_29;

    tmp_assign_source_30 = const_str_plain_StreamListener;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_30 );
    outline_0_var___qualname__ = tmp_assign_source_30;

    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_31 = MAKE_FUNCTION_tweepy$streaming$$$function_1___init__( tmp_defaults_1 );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_31;

    tmp_assign_source_32 = MAKE_FUNCTION_tweepy$streaming$$$function_2_on_connect(  );
    assert( outline_0_var_on_connect == NULL );
    outline_0_var_on_connect = tmp_assign_source_32;

    tmp_assign_source_33 = MAKE_FUNCTION_tweepy$streaming$$$function_3_on_data(  );
    assert( outline_0_var_on_data == NULL );
    outline_0_var_on_data = tmp_assign_source_33;

    tmp_assign_source_34 = MAKE_FUNCTION_tweepy$streaming$$$function_4_keep_alive(  );
    assert( outline_0_var_keep_alive == NULL );
    outline_0_var_keep_alive = tmp_assign_source_34;

    tmp_assign_source_35 = MAKE_FUNCTION_tweepy$streaming$$$function_5_on_status(  );
    assert( outline_0_var_on_status == NULL );
    outline_0_var_on_status = tmp_assign_source_35;

    tmp_assign_source_36 = MAKE_FUNCTION_tweepy$streaming$$$function_6_on_exception(  );
    assert( outline_0_var_on_exception == NULL );
    outline_0_var_on_exception = tmp_assign_source_36;

    tmp_assign_source_37 = MAKE_FUNCTION_tweepy$streaming$$$function_7_on_delete(  );
    assert( outline_0_var_on_delete == NULL );
    outline_0_var_on_delete = tmp_assign_source_37;

    tmp_assign_source_38 = MAKE_FUNCTION_tweepy$streaming$$$function_8_on_event(  );
    assert( outline_0_var_on_event == NULL );
    outline_0_var_on_event = tmp_assign_source_38;

    tmp_assign_source_39 = MAKE_FUNCTION_tweepy$streaming$$$function_9_on_direct_message(  );
    assert( outline_0_var_on_direct_message == NULL );
    outline_0_var_on_direct_message = tmp_assign_source_39;

    tmp_assign_source_40 = MAKE_FUNCTION_tweepy$streaming$$$function_10_on_friends(  );
    assert( outline_0_var_on_friends == NULL );
    outline_0_var_on_friends = tmp_assign_source_40;

    tmp_assign_source_41 = MAKE_FUNCTION_tweepy$streaming$$$function_11_on_limit(  );
    assert( outline_0_var_on_limit == NULL );
    outline_0_var_on_limit = tmp_assign_source_41;

    tmp_assign_source_42 = MAKE_FUNCTION_tweepy$streaming$$$function_12_on_error(  );
    assert( outline_0_var_on_error == NULL );
    outline_0_var_on_error = tmp_assign_source_42;

    tmp_assign_source_43 = MAKE_FUNCTION_tweepy$streaming$$$function_13_on_timeout(  );
    assert( outline_0_var_on_timeout == NULL );
    outline_0_var_on_timeout = tmp_assign_source_43;

    tmp_assign_source_44 = MAKE_FUNCTION_tweepy$streaming$$$function_14_on_disconnect(  );
    assert( outline_0_var_on_disconnect == NULL );
    outline_0_var_on_disconnect = tmp_assign_source_44;

    tmp_assign_source_45 = MAKE_FUNCTION_tweepy$streaming$$$function_15_on_warning(  );
    assert( outline_0_var_on_warning == NULL );
    outline_0_var_on_warning = tmp_assign_source_45;

    // Tried code:
    tmp_called_name_4 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_2 = const_str_plain_StreamListener;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_dict_1;
    Py_INCREF( tmp_tuple_element_2 );
    if ( outline_0_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___qualname__,
            outline_0_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain___qualname__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___module__,
            outline_0_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain___module__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___init__,
            outline_0_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain___init__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var_on_connect != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_on_connect,
            outline_0_var_on_connect
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_on_connect
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_on_connect
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var_on_data != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_on_data,
            outline_0_var_on_data
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_on_data
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_on_data
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var_keep_alive != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_keep_alive,
            outline_0_var_keep_alive
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_keep_alive
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_keep_alive
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var_on_status != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_on_status,
            outline_0_var_on_status
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_on_status
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_on_status
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var_on_exception != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_on_exception,
            outline_0_var_on_exception
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_on_exception
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_on_exception
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var_on_delete != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_on_delete,
            outline_0_var_on_delete
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_on_delete
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_on_delete
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var_on_event != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_on_event,
            outline_0_var_on_event
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_on_event
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_on_event
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var_on_direct_message != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_on_direct_message,
            outline_0_var_on_direct_message
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_on_direct_message
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_on_direct_message
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var_on_friends != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_on_friends,
            outline_0_var_on_friends
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_on_friends
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_on_friends
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var_on_limit != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_on_limit,
            outline_0_var_on_limit
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_on_limit
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_on_limit
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var_on_error != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_on_error,
            outline_0_var_on_error
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_on_error
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_on_error
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var_on_timeout != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_on_timeout,
            outline_0_var_on_timeout
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_on_timeout
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_on_timeout
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var_on_disconnect != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_on_disconnect,
            outline_0_var_on_disconnect
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_on_disconnect
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_on_disconnect
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    if ( outline_0_var_on_warning != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_on_warning,
            outline_0_var_on_warning
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_on_warning
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_on_warning
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 30;

        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 30;
    tmp_assign_source_46 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_46;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var_on_connect );
    outline_0_var_on_connect = NULL;

    Py_XDECREF( outline_0_var_on_data );
    outline_0_var_on_data = NULL;

    Py_XDECREF( outline_0_var_keep_alive );
    outline_0_var_keep_alive = NULL;

    Py_XDECREF( outline_0_var_on_status );
    outline_0_var_on_status = NULL;

    Py_XDECREF( outline_0_var_on_exception );
    outline_0_var_on_exception = NULL;

    Py_XDECREF( outline_0_var_on_delete );
    outline_0_var_on_delete = NULL;

    Py_XDECREF( outline_0_var_on_event );
    outline_0_var_on_event = NULL;

    Py_XDECREF( outline_0_var_on_direct_message );
    outline_0_var_on_direct_message = NULL;

    Py_XDECREF( outline_0_var_on_friends );
    outline_0_var_on_friends = NULL;

    Py_XDECREF( outline_0_var_on_limit );
    outline_0_var_on_limit = NULL;

    Py_XDECREF( outline_0_var_on_error );
    outline_0_var_on_error = NULL;

    Py_XDECREF( outline_0_var_on_timeout );
    outline_0_var_on_timeout = NULL;

    Py_XDECREF( outline_0_var_on_disconnect );
    outline_0_var_on_disconnect = NULL;

    Py_XDECREF( outline_0_var_on_warning );
    outline_0_var_on_warning = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var_on_connect );
    outline_0_var_on_connect = NULL;

    Py_XDECREF( outline_0_var_on_data );
    outline_0_var_on_data = NULL;

    Py_XDECREF( outline_0_var_keep_alive );
    outline_0_var_keep_alive = NULL;

    Py_XDECREF( outline_0_var_on_status );
    outline_0_var_on_status = NULL;

    Py_XDECREF( outline_0_var_on_exception );
    outline_0_var_on_exception = NULL;

    Py_XDECREF( outline_0_var_on_delete );
    outline_0_var_on_delete = NULL;

    Py_XDECREF( outline_0_var_on_event );
    outline_0_var_on_event = NULL;

    Py_XDECREF( outline_0_var_on_direct_message );
    outline_0_var_on_direct_message = NULL;

    Py_XDECREF( outline_0_var_on_friends );
    outline_0_var_on_friends = NULL;

    Py_XDECREF( outline_0_var_on_limit );
    outline_0_var_on_limit = NULL;

    Py_XDECREF( outline_0_var_on_error );
    outline_0_var_on_error = NULL;

    Py_XDECREF( outline_0_var_on_timeout );
    outline_0_var_on_timeout = NULL;

    Py_XDECREF( outline_0_var_on_disconnect );
    outline_0_var_on_disconnect = NULL;

    Py_XDECREF( outline_0_var_on_warning );
    outline_0_var_on_warning = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 30;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_28 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_StreamListener, tmp_assign_source_28 );
    goto try_end_2;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    tmp_assign_source_47 = const_tuple_type_object_tuple;
    assert( tmp_class_creation_2__bases == NULL );
    Py_INCREF( tmp_assign_source_47 );
    tmp_class_creation_2__bases = tmp_assign_source_47;

    tmp_assign_source_48 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_48;

    // Tried code:
    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_2 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;

        goto try_except_handler_4;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;

        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_subscribed_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;

        goto try_except_handler_4;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;

        goto try_except_handler_4;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_49 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 139;

        goto try_except_handler_4;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_49;

    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;

        goto try_except_handler_4;
    }
    branch_no_2:;
    tmp_hasattr_source_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_2 );
    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;

        goto try_except_handler_4;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_source_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;

        goto try_except_handler_4;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_3 = const_str_plain_ReadBuffer;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 139;
    tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;

        goto try_except_handler_4;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_50 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_50;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_2);
    locals_dict_2 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_52 = const_str_digest_e54518659f8bd83bab5b18e0c951bc41;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_52 );
    outline_1_var___module__ = tmp_assign_source_52;

    tmp_assign_source_53 = const_str_digest_b2813d83300370be515aec6e4cfd9f79;
    assert( outline_1_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_53 );
    outline_1_var___doc__ = tmp_assign_source_53;

    tmp_assign_source_54 = const_str_plain_ReadBuffer;
    assert( outline_1_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_54 );
    outline_1_var___qualname__ = tmp_assign_source_54;

    tmp_defaults_2 = const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_55 = MAKE_FUNCTION_tweepy$streaming$$$function_16___init__( tmp_defaults_2 );
    assert( outline_1_var___init__ == NULL );
    outline_1_var___init__ = tmp_assign_source_55;

    tmp_assign_source_56 = MAKE_FUNCTION_tweepy$streaming$$$function_17_read_len(  );
    assert( outline_1_var_read_len == NULL );
    outline_1_var_read_len = tmp_assign_source_56;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_37306869e419692dbe36828def1b8537_2, codeobj_37306869e419692dbe36828def1b8537, module_tweepy$streaming, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_37306869e419692dbe36828def1b8537_2 = cache_frame_37306869e419692dbe36828def1b8537_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_37306869e419692dbe36828def1b8537_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_37306869e419692dbe36828def1b8537_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_defaults_3 = PyTuple_New( 1 );
    tmp_called_instance_1 = PyDict_GetItem( locals_dict_2, const_str_plain_six );

    if ( tmp_called_instance_1 == NULL )
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_six );

        if (unlikely( tmp_called_instance_1 == NULL ))
        {
            tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            Py_DECREF( tmp_defaults_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 165;
            type_description_2 = "NoooooNN";
            goto frame_exception_exit_2;
        }

    }

    frame_37306869e419692dbe36828def1b8537_2->m_frame.f_lineno = 165;
    tmp_tuple_element_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_b, &PyTuple_GET_ITEM( const_tuple_str_newline_tuple, 0 ) );

    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_3 );

        exception_lineno = 165;
        type_description_2 = "NoooooNN";
        goto frame_exception_exit_2;
    }
    PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_4 );
    tmp_assign_source_57 = MAKE_FUNCTION_tweepy$streaming$$$function_18_read_line( tmp_defaults_3 );
    assert( outline_1_var_read_line == NULL );
    outline_1_var_read_line = tmp_assign_source_57;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_37306869e419692dbe36828def1b8537_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37306869e419692dbe36828def1b8537_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_37306869e419692dbe36828def1b8537_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_37306869e419692dbe36828def1b8537_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_37306869e419692dbe36828def1b8537_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_37306869e419692dbe36828def1b8537_2,
        type_description_2,
        NULL,
        outline_1_var___qualname__,
        outline_1_var___module__,
        outline_1_var___doc__,
        outline_1_var___init__,
        outline_1_var_read_len,
        outline_1_var_read_line,
        NULL
    );


    // Release cached frame.
    if ( frame_37306869e419692dbe36828def1b8537_2 == cache_frame_37306869e419692dbe36828def1b8537_2 )
    {
        Py_DECREF( frame_37306869e419692dbe36828def1b8537_2 );
    }
    cache_frame_37306869e419692dbe36828def1b8537_2 = NULL;

    assertFrameObject( frame_37306869e419692dbe36828def1b8537_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_5;
    skip_nested_handling_1:;
    tmp_assign_source_58 = MAKE_FUNCTION_tweepy$streaming$$$function_19__pop(  );
    assert( outline_1_var__pop == NULL );
    outline_1_var__pop = tmp_assign_source_58;

    tmp_called_name_6 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_args_name_4 = PyTuple_New( 3 );
    tmp_tuple_element_5 = const_str_plain_ReadBuffer;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = locals_dict_2;
    Py_INCREF( tmp_tuple_element_5 );
    if ( outline_1_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain___qualname__,
            outline_1_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain___qualname__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 139;

        goto try_except_handler_5;
    }
    if ( outline_1_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain___module__,
            outline_1_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain___module__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 139;

        goto try_except_handler_5;
    }
    if ( outline_1_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain___doc__,
            outline_1_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain___doc__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 139;

        goto try_except_handler_5;
    }
    if ( outline_1_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain___init__,
            outline_1_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain___init__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 139;

        goto try_except_handler_5;
    }
    if ( outline_1_var_read_len != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain_read_len,
            outline_1_var_read_len
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain_read_len
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain_read_len
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 139;

        goto try_except_handler_5;
    }
    if ( outline_1_var_read_line != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain_read_line,
            outline_1_var_read_line
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain_read_line
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain_read_line
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 139;

        goto try_except_handler_5;
    }
    if ( outline_1_var__pop != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain__pop,
            outline_1_var__pop
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain__pop
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain__pop
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 139;

        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_5 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 139;
    tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;

        goto try_except_handler_5;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_59;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    Py_XDECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    Py_XDECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    Py_XDECREF( outline_1_var_read_len );
    outline_1_var_read_len = NULL;

    Py_XDECREF( outline_1_var_read_line );
    outline_1_var_read_line = NULL;

    Py_XDECREF( outline_1_var__pop );
    outline_1_var__pop = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    Py_XDECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    Py_XDECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    Py_XDECREF( outline_1_var_read_len );
    outline_1_var_read_len = NULL;

    Py_XDECREF( outline_1_var_read_line );
    outline_1_var_read_line = NULL;

    Py_XDECREF( outline_1_var__pop );
    outline_1_var__pop = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 139;
    goto try_except_handler_4;
    outline_result_2:;
    tmp_assign_source_51 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_ReadBuffer, tmp_assign_source_51 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    tmp_assign_source_60 = const_tuple_type_object_tuple;
    assert( tmp_class_creation_3__bases == NULL );
    Py_INCREF( tmp_assign_source_60 );
    tmp_class_creation_3__bases = tmp_assign_source_60;

    tmp_assign_source_61 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_61;

    // Tried code:
    tmp_compare_left_5 = const_str_plain_metaclass;
    tmp_compare_right_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_5 == -1) );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dict_name_3 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto try_except_handler_6;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_cond_value_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto try_except_handler_6;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_subscribed_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto try_except_handler_6;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto try_except_handler_6;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_62 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_3 );

        exception_lineno = 187;

        goto try_except_handler_6;
    }
    Py_DECREF( tmp_metaclass_name_3 );
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_62;

    tmp_compare_left_6 = const_str_plain_metaclass;
    tmp_compare_right_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto try_except_handler_6;
    }
    branch_no_3:;
    tmp_hasattr_source_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_3 );
    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto try_except_handler_6;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_source_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto try_except_handler_6;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_6 = const_str_plain_Stream;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_6 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_6 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 187;
    tmp_assign_source_63 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto try_except_handler_6;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_63 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_63;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_3);
    locals_dict_3 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_65 = const_str_digest_e54518659f8bd83bab5b18e0c951bc41;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_65 );
    outline_2_var___module__ = tmp_assign_source_65;

    tmp_assign_source_66 = const_str_plain_Stream;
    assert( outline_2_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_66 );
    outline_2_var___qualname__ = tmp_assign_source_66;

    tmp_assign_source_67 = const_str_digest_6612e3f1345fb7a94ada90b2d03323d5;
    assert( outline_2_var_host == NULL );
    Py_INCREF( tmp_assign_source_67 );
    outline_2_var_host = tmp_assign_source_67;

    tmp_assign_source_68 = MAKE_FUNCTION_tweepy$streaming$$$function_20___init__(  );
    assert( outline_2_var___init__ == NULL );
    outline_2_var___init__ = tmp_assign_source_68;

    tmp_assign_source_69 = MAKE_FUNCTION_tweepy$streaming$$$function_21_new_session(  );
    assert( outline_2_var_new_session == NULL );
    outline_2_var_new_session = tmp_assign_source_69;

    tmp_assign_source_70 = MAKE_FUNCTION_tweepy$streaming$$$function_22__run(  );
    assert( outline_2_var__run == NULL );
    outline_2_var__run = tmp_assign_source_70;

    tmp_assign_source_71 = MAKE_FUNCTION_tweepy$streaming$$$function_23__data(  );
    assert( outline_2_var__data == NULL );
    outline_2_var__data = tmp_assign_source_71;

    tmp_assign_source_72 = MAKE_FUNCTION_tweepy$streaming$$$function_24__read_loop(  );
    assert( outline_2_var__read_loop == NULL );
    outline_2_var__read_loop = tmp_assign_source_72;

    tmp_assign_source_73 = MAKE_FUNCTION_tweepy$streaming$$$function_25__start(  );
    assert( outline_2_var__start == NULL );
    outline_2_var__start = tmp_assign_source_73;

    tmp_assign_source_74 = MAKE_FUNCTION_tweepy$streaming$$$function_26_on_closed(  );
    assert( outline_2_var_on_closed == NULL );
    outline_2_var_on_closed = tmp_assign_source_74;

    tmp_defaults_4 = const_tuple_false_none_none_none_none_false_str_plain_utf8_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_75 = MAKE_FUNCTION_tweepy$streaming$$$function_27_userstream( tmp_defaults_4 );
    assert( outline_2_var_userstream == NULL );
    outline_2_var_userstream = tmp_assign_source_75;

    tmp_defaults_5 = const_tuple_none_false_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_assign_source_76 = MAKE_FUNCTION_tweepy$streaming$$$function_28_firehose( tmp_defaults_5 );
    assert( outline_2_var_firehose == NULL );
    outline_2_var_firehose = tmp_assign_source_76;

    tmp_defaults_6 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_6 );
    tmp_assign_source_77 = MAKE_FUNCTION_tweepy$streaming$$$function_29_retweet( tmp_defaults_6 );
    assert( outline_2_var_retweet == NULL );
    outline_2_var_retweet = tmp_assign_source_77;

    tmp_defaults_7 = const_tuple_false_none_tuple;
    Py_INCREF( tmp_defaults_7 );
    tmp_assign_source_78 = MAKE_FUNCTION_tweepy$streaming$$$function_30_sample( tmp_defaults_7 );
    assert( outline_2_var_sample == NULL );
    outline_2_var_sample = tmp_assign_source_78;

    tmp_defaults_8 = const_tuple_none_none_false_none_false_none_str_plain_utf8_none_tuple;
    Py_INCREF( tmp_defaults_8 );
    tmp_assign_source_79 = MAKE_FUNCTION_tweepy$streaming$$$function_31_filter( tmp_defaults_8 );
    assert( outline_2_var_filter == NULL );
    outline_2_var_filter = tmp_assign_source_79;

    tmp_defaults_9 = const_tuple_false_str_plain_user_false_false_tuple;
    Py_INCREF( tmp_defaults_9 );
    tmp_assign_source_80 = MAKE_FUNCTION_tweepy$streaming$$$function_32_sitestream( tmp_defaults_9 );
    assert( outline_2_var_sitestream == NULL );
    outline_2_var_sitestream = tmp_assign_source_80;

    tmp_assign_source_81 = MAKE_FUNCTION_tweepy$streaming$$$function_33_disconnect(  );
    assert( outline_2_var_disconnect == NULL );
    outline_2_var_disconnect = tmp_assign_source_81;

    // Tried code:
    tmp_called_name_8 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_args_name_6 = PyTuple_New( 3 );
    tmp_tuple_element_7 = const_str_plain_Stream;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_7 );
    tmp_tuple_element_7 = locals_dict_3;
    Py_INCREF( tmp_tuple_element_7 );
    if ( outline_2_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain___qualname__,
            outline_2_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain___qualname__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain___module__,
            outline_2_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain___module__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var_host != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_host,
            outline_2_var_host
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_host
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_host
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain___init__,
            outline_2_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain___init__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var_new_session != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_new_session,
            outline_2_var_new_session
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_new_session
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_new_session
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var__run != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain__run,
            outline_2_var__run
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain__run
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain__run
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var__data != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain__data,
            outline_2_var__data
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain__data
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain__data
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var__read_loop != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain__read_loop,
            outline_2_var__read_loop
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain__read_loop
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain__read_loop
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var__start != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain__start,
            outline_2_var__start
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain__start
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain__start
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var_on_closed != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_on_closed,
            outline_2_var_on_closed
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_on_closed
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_on_closed
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var_userstream != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_userstream,
            outline_2_var_userstream
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_userstream
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_userstream
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var_firehose != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_firehose,
            outline_2_var_firehose
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_firehose
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_firehose
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var_retweet != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_retweet,
            outline_2_var_retweet
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_retweet
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_retweet
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var_sample != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_sample,
            outline_2_var_sample
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_sample
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_sample
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var_filter != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_filter,
            outline_2_var_filter
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_filter
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_filter
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var_sitestream != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_sitestream,
            outline_2_var_sitestream
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_sitestream
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_sitestream
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    if ( outline_2_var_disconnect != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_disconnect,
            outline_2_var_disconnect
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_disconnect
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_disconnect
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 187;

        goto try_except_handler_7;
    }
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_7 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame.f_lineno = 187;
    tmp_assign_source_82 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto try_except_handler_7;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_82;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$streaming );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    Py_XDECREF( outline_2_var___qualname__ );
    outline_2_var___qualname__ = NULL;

    Py_XDECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    Py_XDECREF( outline_2_var_host );
    outline_2_var_host = NULL;

    Py_XDECREF( outline_2_var___init__ );
    outline_2_var___init__ = NULL;

    Py_XDECREF( outline_2_var_new_session );
    outline_2_var_new_session = NULL;

    Py_XDECREF( outline_2_var__run );
    outline_2_var__run = NULL;

    Py_XDECREF( outline_2_var__data );
    outline_2_var__data = NULL;

    Py_XDECREF( outline_2_var__read_loop );
    outline_2_var__read_loop = NULL;

    Py_XDECREF( outline_2_var__start );
    outline_2_var__start = NULL;

    Py_XDECREF( outline_2_var_on_closed );
    outline_2_var_on_closed = NULL;

    Py_XDECREF( outline_2_var_userstream );
    outline_2_var_userstream = NULL;

    Py_XDECREF( outline_2_var_firehose );
    outline_2_var_firehose = NULL;

    Py_XDECREF( outline_2_var_retweet );
    outline_2_var_retweet = NULL;

    Py_XDECREF( outline_2_var_sample );
    outline_2_var_sample = NULL;

    Py_XDECREF( outline_2_var_filter );
    outline_2_var_filter = NULL;

    Py_XDECREF( outline_2_var_sitestream );
    outline_2_var_sitestream = NULL;

    Py_XDECREF( outline_2_var_disconnect );
    outline_2_var_disconnect = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_2_var___qualname__ );
    outline_2_var___qualname__ = NULL;

    Py_XDECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    Py_XDECREF( outline_2_var_host );
    outline_2_var_host = NULL;

    Py_XDECREF( outline_2_var___init__ );
    outline_2_var___init__ = NULL;

    Py_XDECREF( outline_2_var_new_session );
    outline_2_var_new_session = NULL;

    Py_XDECREF( outline_2_var__run );
    outline_2_var__run = NULL;

    Py_XDECREF( outline_2_var__data );
    outline_2_var__data = NULL;

    Py_XDECREF( outline_2_var__read_loop );
    outline_2_var__read_loop = NULL;

    Py_XDECREF( outline_2_var__start );
    outline_2_var__start = NULL;

    Py_XDECREF( outline_2_var_on_closed );
    outline_2_var_on_closed = NULL;

    Py_XDECREF( outline_2_var_userstream );
    outline_2_var_userstream = NULL;

    Py_XDECREF( outline_2_var_firehose );
    outline_2_var_firehose = NULL;

    Py_XDECREF( outline_2_var_retweet );
    outline_2_var_retweet = NULL;

    Py_XDECREF( outline_2_var_sample );
    outline_2_var_sample = NULL;

    Py_XDECREF( outline_2_var_filter );
    outline_2_var_filter = NULL;

    Py_XDECREF( outline_2_var_sitestream );
    outline_2_var_sitestream = NULL;

    Py_XDECREF( outline_2_var_disconnect );
    outline_2_var_disconnect = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$streaming );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 187;
    goto try_except_handler_6;
    outline_result_3:;
    tmp_assign_source_64 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_tweepy$streaming, (Nuitka_StringObject *)const_str_plain_Stream, tmp_assign_source_64 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8c563be65dca5c2226cb0ecf70916fd );
#endif
    popFrameStack();

    assertFrameObject( frame_a8c563be65dca5c2226cb0ecf70916fd );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8c563be65dca5c2226cb0ecf70916fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a8c563be65dca5c2226cb0ecf70916fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a8c563be65dca5c2226cb0ecf70916fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a8c563be65dca5c2226cb0ecf70916fd, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;


    return MOD_RETURN_VALUE( module_tweepy$streaming );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
