/* Generated code for Python source for module 'django.utils.http'
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

/* The _module_django$utils$http is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$utils$http;
PyDictObject *moduledict_django$utils$http;

/* The module constants used, if any. */
extern PyObject *const_str_plain_force_text;
extern PyObject *const_str_digest_8bc4877a3eddf48ed5f347a2b6e7205e;
extern PyObject *const_str_plain_warn;
extern PyObject *const_int_pos_12;
static PyObject *const_str_plain_RFC1123_DATE;
static PyObject *const_str_plain_is_safe_url;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain_TooManyFieldsSent;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_65f5a8dc9f3faabff91a786e91c464e3;
static PyObject *const_str_digest_0332a649d3d9c6e3805407402628ade9;
static PyObject *const_str_plain_require_https;
static PyObject *const_tuple_str_plain_quoted_url_tuple;
static PyObject *const_tuple_str_plain_s_str_plain_value_tuple;
extern PyObject *const_str_plain_etag;
extern PyObject *const_str_chr_43;
extern PyObject *const_str_digest_de1637a5b7f41dbfb385ee782c95a853;
static PyObject *const_str_plain___D;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_tuple_str_plain_epoch_seconds_str_plain_rfcdate_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_i;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain_pairs;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_13971ae58b983978540cbb4bbf3b1360;
extern PyObject *const_str_plain_group;
extern PyObject *const_str_digest_e3393b2e61653c3df2c7d436c253bbee;
static PyObject *const_str_digest_ca2504722bdcd823135810f7ec7de232;
static PyObject *const_tuple_str_plain_match_str_plain_etag_matches_tuple;
static PyObject *const_str_digest_035b27a1609d0a5305b7aeb8f6a6db6f;
static PyObject *const_str_plain_scheme_chars;
extern PyObject *const_str_angle_listcontraction;
static PyObject *const_tuple_bytes_chr_43_bytes_chr_32_tuple;
static PyObject *const_str_digest_377eb0245c87232e8893d0e12745dc9f;
extern PyObject *const_str_plain_month;
static PyObject *const_tuple_str_plain_sec_tuple;
extern PyObject *const_int_pos_11;
static PyObject *const_str_plain__coerce_result;
extern PyObject *const_str_plain_Error;
static PyObject *const_str_digest_acfc1c20193255804b8fd7d83bd1cd7c;
extern PyObject *const_str_plain_cookie_date;
extern PyObject *const_str_digest_c8adcd1017f54d23c24c1e0507db1cb7;
extern PyObject *const_tuple_str_chr_63_int_pos_1_tuple;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_urlencode;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
extern PyObject *const_tuple_str_plain_s_tuple;
extern PyObject *const_str_plain_force_str;
static PyObject *const_str_plain___Y;
extern PyObject *const_str_plain_utctimetuple;
extern PyObject *const_tuple_str_chr_44_tuple;
static PyObject *const_str_plain_splitresult;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_scheme;
static PyObject *const_tuple_368d71b50fa4a769f879ce3fa36466fb_tuple;
extern PyObject *const_str_plain_fragment;
extern PyObject *const_str_plain_hour;
extern PyObject *const_tuple_f2db63c8cfc7b8bfe8caddfb8d4fb877_tuple;
extern PyObject *const_str_chr_61;
extern PyObject *const_str_plain_quote_etag;
extern PyObject *const_int_pos_25;
extern PyObject *const_str_plain_strip;
static PyObject *const_str_digest_dd3b6e25933e732c49d187ae39c71926;
extern PyObject *const_str_plain_category;
static PyObject *const_str_plain_base36_to_int;
extern PyObject *const_tuple_str_chr_58_tuple;
static PyObject *const_str_plain_rfcdate;
extern PyObject *const_str_plain_lists;
static PyObject *const_str_digest_091d197ef37516bbc801714e1e252b02;
extern PyObject *const_str_digest_d812b958231530decb13359a90689c4d;
static PyObject *const_str_plain_urlunquote_plus;
static PyObject *const_str_plain_usegmt;
static PyObject *const_str_digest_85baaabf3cac666420a2984d5492f8b6;
extern PyObject *const_str_plain_uses_params;
static PyObject *const_str_digest_eb2ea1dfe0b93ea72cf975e75384db80;
extern PyObject *const_str_chr_63;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_PY3;
static PyObject *const_tuple_36ea0bb1d942fbb92505a7f186a9c9f2_tuple;
extern PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_slice_none_int_pos_2_none;
static PyObject *const_tuple_str_plain_mon_tuple;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_dot;
static PyObject *const_tuple_str_plain_k_str_plain_v_str_plain_query_tuple;
static PyObject *const_tuple_6289a5f0b9510b7a96cd4a23f1c4ba19_tuple;
static PyObject *const_tuple_256a42f408884f0acce338519de1e442_tuple;
static PyObject *const_str_digest_0278a3c8354ff413537bb8fa781d209a;
static PyObject *const_tuple_str_plain_query_str_plain_doseq_tuple;
static PyObject *const_str_plain__splitnetloc;
extern PyObject *const_slice_none_int_pos_7_none;
static PyObject *const_int_pos_70;
static PyObject *const_str_digest_1e4616cb2877c002aa48d41e8b575b32;
extern PyObject *const_str_plain_quote;
static PyObject *const_str_plain_int_to_base36;
static PyObject *const_str_plain_sec;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_s;
static PyObject *const_tuple_adad93fb58b26d2bc88e06447decb760_tuple;
extern PyObject *const_str_plain_urlparse;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_digest_384042440d871d1140927410db194e0f;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_str_digest_83180b1371517bcd058515312c918660;
static PyObject *const_str_plain__urlparse;
extern PyObject *const_str_plain_0123456789abcdefghijklmnopqrstuvwxyz;
static PyObject *const_tuple_str_plain_url_str_plain_safe_tuple;
static PyObject *const_str_plain_b36;
extern PyObject *const_str_chr_44;
static PyObject *const_str_plain_urlquote_plus;
extern PyObject *const_str_plain_ljust;
extern PyObject *const_str_plain_host;
static PyObject *const_str_plain_mon;
static PyObject *const_str_digest_e1b8a583808a6e7657307decd83fd8a3;
static PyObject *const_str_digest_c727a8fd1f3fc276c3ce5de997eee608;
extern PyObject *const_str_plain_https;
extern PyObject *const_str_plain_n;
static PyObject *const_str_plain___D2;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_urlquote;
extern PyObject *const_str_plain_RFC3986_GENDELIMS;
static PyObject *const_str_digest_e64ee96c641dbe4638424ab390a3cbb6;
static PyObject *const_tuple_str_chr_43_str_space_tuple;
static PyObject *const_tuple_str_plain_host_str_plain_pattern_tuple;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
static PyObject *const_str_plain_RFC850_DATE;
extern PyObject *const_str_plain_six;
extern PyObject *const_list_str_chr_42_list;
static PyObject *const_str_digest_24bddaa933dffd5125f1d96f36ee3a66;
static PyObject *const_str_digest_e6f6b155c3ec6c17cfb564626561112f;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_digest_a2ee8bfc8734037443b4b8317fc40aa2;
static PyObject *const_tuple_str_plain_s_str_plain_e_tuple;
static PyObject *const_str_plain__coerce_args;
static PyObject *const_str_plain_char_set;
extern PyObject *const_str_chr_35;
extern PyObject *const_str_plain_query;
extern PyObject *const_str_plain_pattern;
extern PyObject *const_str_plain_base64;
extern PyObject *const_str_plain_e;
static PyObject *const_str_digest_6aeadd226a5caea64ebd9098eb5a263c;
extern PyObject *const_str_plain_netloc;
extern PyObject *const_str_chr_91;
extern PyObject *const_str_digest_dfb6e1abbed3113ee07234fdc458a320;
extern PyObject *const_int_pos_8;
static PyObject *const_str_plain_urlsafe_base64_decode;
extern PyObject *const_str_plain_MONTHS;
static PyObject *const_str_digest_fe70a4ac107703284c8732fca1d3d720;
static PyObject *const_str_plain_FIELDS_MATCH;
extern PyObject *const_str_plain_parse_http_date_safe;
extern PyObject *const_str_plain_urlsafe_b64encode;
static PyObject *const_tuple_str_plain_etag_str_tuple;
extern PyObject *const_str_digest_f3705ed203bc8405b0735fb4179b32a8;
extern PyObject *const_tuple_str_chr_35_int_pos_1_tuple;
extern PyObject *const_str_plain_integer_types;
static PyObject *const_str_digest_e8b517682243760d5b5b3cfe5d136758;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_467c9722f19d9d40d148689532cdc0b1;
static PyObject *const_tuple_str_plain_date_tuple;
extern PyObject *const_str_space;
extern PyObject *const_str_plain_calendar;
extern PyObject *const_str_plain_RemovedInDjango21Warning;
static PyObject *const_str_plain___Y2;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_is_same_domain;
static PyObject *const_str_digest_5ccccffcd30a38f9afd04d9c43213ca9;
static PyObject *const_str_digest_4db886a8686cafc8ca1bbe8b0de4410b;
extern PyObject *const_str_plain_errors;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_endswith;
extern PyObject *const_str_chr_92;
static PyObject *const_str_digest_8ca97ed2764965055cc7ea2fad595278;
extern PyObject *const_str_plain_timegm;
static PyObject *const_str_digest_ddbf0db65c7c2837fc4933e3e5f46ce8;
static PyObject *const_str_digest_e7fb6f9eaa9a97c525bba24277d9fbaf;
static PyObject *const_tuple_bytes_digest_da5a556911cc5a9933097ff137a0e1d3_tuple;
extern PyObject *const_str_plain_RFC3986_SUBDELIMS;
extern PyObject *const_str_plain_compile;
static PyObject *const_list_str_plain_https_list;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_str_plain_split;
static PyObject *const_str_digest_b4c7e731c78b609064f0e5d07aff9ce0;
extern PyObject *const_str_plain_match;
static PyObject *const_str_digest_b956edff5198358cf12818d9ea146ea8;
static PyObject *const_tuple_str_plain_Error_tuple;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_regex;
extern PyObject *const_str_plain_ModuleSpec;
static PyObject *const_str_digest_ee6c9622ceb54c046db9e6e52b2917a4;
extern PyObject *const_tuple_str_digest_c8adcd1017f54d23c24c1e0507db1cb7_tuple;
extern PyObject *const_tuple_str_empty_tuple;
extern PyObject *const_str_plain_k;
static PyObject *const_str_digest_eafd353eca7d916601e0fbcc5f52c22f;
static PyObject *const_str_plain__splitparams;
static PyObject *const_str_digest_ea23691749aba42293b4121358e0175f;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
static PyObject *const_tuple_str_digest_83180b1371517bcd058515312c918660_tuple;
extern PyObject *const_str_plain_parse_etags;
static PyObject *const_str_plain___M;
extern PyObject *const_str_plain_encoding;
static PyObject *const_str_digest_10343d2247785c4eda75e37feaeff91c;
static PyObject *const_str_plain_etag_str;
extern PyObject *const_str_plain_unquote_plus;
extern PyObject *const_int_0;
static PyObject *const_str_plain__urlsplit;
static PyObject *const_str_plain_allow_fragments;
static PyObject *const_tuple_e7cd725475ddb402d6dd054778f163e3_tuple;
static PyObject *const_tuple_str_plain_keep_lazy_text_tuple;
extern PyObject *const_int_pos_1900;
extern PyObject *const_str_plain_keep_blank_values;
extern PyObject *const_str_plain_SplitResult;
static PyObject *const_str_digest_6e4baf307f95b180e391bfedf59f9342;
extern PyObject *const_str_plain_urlsafe_b64decode;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_etag_tuple;
extern PyObject *const_str_chr_58;
static PyObject *const_bytes_digest_da5a556911cc5a9933097ff137a0e1d3;
static PyObject *const_str_digest_27671265d3bc4b7b30fab4dcc56ece57;
static PyObject *const_list_str_plain_http_str_plain_https_list;
static PyObject *const_tuple_str_plain_min_tuple;
static PyObject *const_str_plain_urlsafe_base64_encode;
static PyObject *const_tuple_bdf9e3a2f67f141834f0921c427a6cf5_tuple;
extern PyObject *const_str_plain_exc_info;
static PyObject *const_str_plain_C;
static PyObject *const_tuple_str_plain_i_str_plain_v_tuple;
static PyObject *const_bytes_chr_43;
extern PyObject *const_str_plain_c;
extern PyObject *const_tuple_type_list_type_tuple_tuple;
static PyObject *const_tuple_str_plain_formatdate_tuple;
static PyObject *const_str_digest_c96d551f4dfdd60c4e7d2896e25f9bbe;
extern PyObject *const_int_pos_36;
extern PyObject *const_tuple_str_chr_61_int_pos_1_tuple;
extern PyObject *const_int_pos_4;
static PyObject *const_tuple_str_plain_etag_str_str_plain_etag_matches_tuple;
static PyObject *const_str_plain_ASCTIME_DATE;
static PyObject *const_str_digest_75547693838da266bfc7f2d7c19e9c98;
static PyObject *const_str_plain_valid_schemes;
extern PyObject *const_str_plain_doseq;
extern PyObject *const_str_plain_year;
extern PyObject *const_str_plain_safe;
static PyObject *const_tuple_str_digest_eb2ea1dfe0b93ea72cf975e75384db80_tuple;
static PyObject *const_str_digest_64cb1f61857b46f7a2679397291f8cd8;
extern PyObject *const_str_plain_http_date;
extern PyObject *const_str_plain_unquote;
static PyObject *const_str_digest_7af2fbc26471c99f6027509bac99d6c2;
extern PyObject *const_str_plain_limited_parse_qsl;
static PyObject *const_dict_ad22aad091e4a1615cc75ade15d93cea;
extern PyObject *const_str_plain_keep_lazy_text;
extern PyObject *const_int_pos_13;
static PyObject *const_str_plain_parse_http_date;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_chr_93;
extern PyObject *const_str_plain_v;
static PyObject *const_slice_int_pos_12_int_pos_25_none;
static PyObject *const_str_plain_ETAG_MATCH;
static PyObject *const_slice_int_pos_8_int_pos_11_none;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_bytes_chr_32;
extern PyObject *const_str_plain_fields_limit;
extern PyObject *const_str_plain_allowed_hosts;
extern PyObject *const_str_plain_PY2;
static PyObject *const_str_digest_24463121abb84407fee73fe6d9fca438;
static PyObject *const_tuple_str_empty_true_tuple;
extern PyObject *const_str_chr_47;
extern PyObject *const_str_plain_sys;
static PyObject *const_tuple_str_plain_day_tuple;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_binascii;
static PyObject *const_str_digest_b83c6071ddc9b6bb8df00e5cb8442be5;
extern PyObject *const_str_plain_params;
extern PyObject *const_str_plain_MultiValueDict;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
static PyObject *const_str_digest_27690054c45f79644e57879c8c2773d3;
static PyObject *const_str_plain_urlunquote;
extern PyObject *const_str_plain_qs;
static PyObject *const_tuple_str_plain_epoch_seconds_tuple;
extern PyObject *const_str_plain_day;
extern PyObject *const_tuple_str_chr_47_tuple;
extern PyObject *const_tuple_str_plain_MultiValueDict_tuple;
extern PyObject *const_str_plain_X;
extern PyObject *const_str_plain_formatdate;
static PyObject *const_tuple_str_plain_TooManyFieldsSent_tuple;
static PyObject *const_str_digest_d911421cc7b811b9bb394e57c41af426;
static PyObject *const_tuple_str_plain_hour_tuple;
static PyObject *const_tuple_30146710cdd1051d24fdf489ae16cdaa_tuple;
static PyObject *const_str_plain_nv;
static PyObject *const_str_plain_quoted_url;
extern PyObject *const_str_plain_ParseResult;
static PyObject *const_str_plain__is_safe_url;
extern PyObject *const_int_pos_2000;
extern PyObject *const_str_plain_unicodedata;
extern PyObject *const_bytes_chr_61;
static PyObject *const_str_plain_original_urlencode;
extern PyObject *const_tuple_str_chr_92_str_chr_47_tuple;
static PyObject *const_str_plain_etag_matches;
extern PyObject *const_str_plain_url;
static PyObject *const_str_plain_url_info;
static PyObject *const_str_plain___T;
static PyObject *const_tuple_str_plain_year_tuple;
extern PyObject *const_str_plain_rstrip;
static PyObject *const_str_digest_e3ff38ed522c696e2ce8fb0bda118930;
extern PyObject *const_tuple_str_plain_RemovedInDjango21Warning_tuple;
extern PyObject *const_tuple_str_plain_six_tuple;
static PyObject *const_str_digest_29f60848dc68f2b7f80a717931ac4fce;
extern PyObject *const_int_pos_7;
static PyObject *const_str_digest_2a78ac7c550ba70834f860b3af49eafc;
extern PyObject *const_str_chr_59;
static PyObject *const_str_digest_3b4afdff97992cb5fe27f3eb2128a6e5;
extern PyObject *const_tuple_none_none_false_tuple;
static PyObject *const_str_plain_BinasciiError;
static PyObject *const_tuple_str_plain_i_str_plain_char_set_str_plain_b36_str_plain_n_tuple;
extern PyObject *const_str_plain_force_bytes;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_http;
static PyObject *const_tuple_b4054e2e3c2b3080846d8cfee4bf4267_tuple;
extern PyObject *const_str_plain_date;
static PyObject *const_tuple_45d86939aa476df3bf58e2f8ed87651b_tuple;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_maxint;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_find;
extern PyObject *const_str_digest_3d2fb639fc3676a85e9d77bb02d18a21;
static PyObject *const_str_plain_name_value;
static PyObject *const_str_plain_epoch_seconds;
extern PyObject *const_int_pos_100;
extern PyObject *const_str_plain_reraise;
static PyObject *const_str_digest_dd6f78f80e1b319371d2be61f253a165;
extern PyObject *const_str_plain_quote_plus;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_RFC1123_DATE = UNSTREAM_STRING( &constant_bin[ 1181413 ], 12, 1 );
    const_str_plain_is_safe_url = UNSTREAM_STRING( &constant_bin[ 1181425 ], 11, 1 );
    const_str_digest_65f5a8dc9f3faabff91a786e91c464e3 = UNSTREAM_STRING( &constant_bin[ 1181436 ], 47, 0 );
    const_str_digest_0332a649d3d9c6e3805407402628ade9 = UNSTREAM_STRING( &constant_bin[ 1181483 ], 114, 0 );
    const_str_plain_require_https = UNSTREAM_STRING( &constant_bin[ 1181597 ], 13, 1 );
    const_tuple_str_plain_quoted_url_tuple = PyTuple_New( 1 );
    const_str_plain_quoted_url = UNSTREAM_STRING( &constant_bin[ 1181610 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_quoted_url_tuple, 0, const_str_plain_quoted_url ); Py_INCREF( const_str_plain_quoted_url );
    const_tuple_str_plain_s_str_plain_value_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_value_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_value_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_plain___D = UNSTREAM_STRING( &constant_bin[ 63109 ], 3, 1 );
    const_tuple_str_plain_epoch_seconds_str_plain_rfcdate_tuple = PyTuple_New( 2 );
    const_str_plain_epoch_seconds = UNSTREAM_STRING( &constant_bin[ 1181620 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_epoch_seconds_str_plain_rfcdate_tuple, 0, const_str_plain_epoch_seconds ); Py_INCREF( const_str_plain_epoch_seconds );
    const_str_plain_rfcdate = UNSTREAM_STRING( &constant_bin[ 1181633 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_epoch_seconds_str_plain_rfcdate_tuple, 1, const_str_plain_rfcdate ); Py_INCREF( const_str_plain_rfcdate );
    const_str_digest_ca2504722bdcd823135810f7ec7de232 = UNSTREAM_STRING( &constant_bin[ 1181640 ], 24, 0 );
    const_tuple_str_plain_match_str_plain_etag_matches_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_match_str_plain_etag_matches_tuple, 0, const_str_plain_match ); Py_INCREF( const_str_plain_match );
    const_str_plain_etag_matches = UNSTREAM_STRING( &constant_bin[ 1181664 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_match_str_plain_etag_matches_tuple, 1, const_str_plain_etag_matches ); Py_INCREF( const_str_plain_etag_matches );
    const_str_digest_035b27a1609d0a5305b7aeb8f6a6db6f = UNSTREAM_STRING( &constant_bin[ 1181676 ], 11, 0 );
    const_str_plain_scheme_chars = UNSTREAM_STRING( &constant_bin[ 1181687 ], 12, 1 );
    const_tuple_bytes_chr_43_bytes_chr_32_tuple = PyTuple_New( 2 );
    const_bytes_chr_43 = UNSTREAM_BYTES( &constant_bin[ 6360 ], 1 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_43_bytes_chr_32_tuple, 0, const_bytes_chr_43 ); Py_INCREF( const_bytes_chr_43 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_43_bytes_chr_32_tuple, 1, const_bytes_chr_32 ); Py_INCREF( const_bytes_chr_32 );
    const_str_digest_377eb0245c87232e8893d0e12745dc9f = UNSTREAM_STRING( &constant_bin[ 1181699 ], 330, 0 );
    const_tuple_str_plain_sec_tuple = PyTuple_New( 1 );
    const_str_plain_sec = UNSTREAM_STRING( &constant_bin[ 10417 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sec_tuple, 0, const_str_plain_sec ); Py_INCREF( const_str_plain_sec );
    const_str_plain__coerce_result = UNSTREAM_STRING( &constant_bin[ 1182029 ], 14, 1 );
    const_str_digest_acfc1c20193255804b8fd7d83bd1cd7c = UNSTREAM_STRING( &constant_bin[ 1182043 ], 111, 0 );
    const_str_plain___Y = UNSTREAM_STRING( &constant_bin[ 751839 ], 3, 1 );
    const_str_plain_splitresult = UNSTREAM_STRING( &constant_bin[ 1182154 ], 11, 1 );
    const_tuple_368d71b50fa4a769f879ce3fa36466fb_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_368d71b50fa4a769f879ce3fa36466fb_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_368d71b50fa4a769f879ce3fa36466fb_tuple, 1, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_368d71b50fa4a769f879ce3fa36466fb_tuple, 2, const_str_plain_allowed_hosts ); Py_INCREF( const_str_plain_allowed_hosts );
    PyTuple_SET_ITEM( const_tuple_368d71b50fa4a769f879ce3fa36466fb_tuple, 3, const_str_plain_require_https ); Py_INCREF( const_str_plain_require_https );
    const_str_digest_dd3b6e25933e732c49d187ae39c71926 = UNSTREAM_STRING( &constant_bin[ 1182165 ], 182, 0 );
    const_str_plain_base36_to_int = UNSTREAM_STRING( &constant_bin[ 1182347 ], 13, 1 );
    const_str_digest_091d197ef37516bbc801714e1e252b02 = UNSTREAM_STRING( &constant_bin[ 1182360 ], 242, 0 );
    const_str_plain_urlunquote_plus = UNSTREAM_STRING( &constant_bin[ 1182602 ], 15, 1 );
    const_str_plain_usegmt = UNSTREAM_STRING( &constant_bin[ 1182617 ], 6, 1 );
    const_str_digest_85baaabf3cac666420a2984d5492f8b6 = UNSTREAM_STRING( &constant_bin[ 1182623 ], 136, 0 );
    const_str_digest_eb2ea1dfe0b93ea72cf975e75384db80 = UNSTREAM_STRING( &constant_bin[ 1182759 ], 3, 0 );
    const_tuple_36ea0bb1d942fbb92505a7f186a9c9f2_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_36ea0bb1d942fbb92505a7f186a9c9f2_tuple, 0, const_str_plain_ParseResult ); Py_INCREF( const_str_plain_ParseResult );
    PyTuple_SET_ITEM( const_tuple_36ea0bb1d942fbb92505a7f186a9c9f2_tuple, 1, const_str_plain_SplitResult ); Py_INCREF( const_str_plain_SplitResult );
    const_str_plain__splitnetloc = UNSTREAM_STRING( &constant_bin[ 1182762 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_36ea0bb1d942fbb92505a7f186a9c9f2_tuple, 2, const_str_plain__splitnetloc ); Py_INCREF( const_str_plain__splitnetloc );
    const_str_plain__splitparams = UNSTREAM_STRING( &constant_bin[ 1182774 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_36ea0bb1d942fbb92505a7f186a9c9f2_tuple, 3, const_str_plain__splitparams ); Py_INCREF( const_str_plain__splitparams );
    PyTuple_SET_ITEM( const_tuple_36ea0bb1d942fbb92505a7f186a9c9f2_tuple, 4, const_str_plain_scheme_chars ); Py_INCREF( const_str_plain_scheme_chars );
    PyTuple_SET_ITEM( const_tuple_36ea0bb1d942fbb92505a7f186a9c9f2_tuple, 5, const_str_plain_uses_params ); Py_INCREF( const_str_plain_uses_params );
    const_tuple_str_plain_mon_tuple = PyTuple_New( 1 );
    const_str_plain_mon = UNSTREAM_STRING( &constant_bin[ 9102 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_mon_tuple, 0, const_str_plain_mon ); Py_INCREF( const_str_plain_mon );
    const_tuple_str_plain_k_str_plain_v_str_plain_query_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_k_str_plain_v_str_plain_query_tuple, 0, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_str_plain_k_str_plain_v_str_plain_query_tuple, 1, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_str_plain_k_str_plain_v_str_plain_query_tuple, 2, const_str_plain_query ); Py_INCREF( const_str_plain_query );
    const_tuple_6289a5f0b9510b7a96cd4a23f1c4ba19_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_6289a5f0b9510b7a96cd4a23f1c4ba19_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_6289a5f0b9510b7a96cd4a23f1c4ba19_tuple, 1, const_str_plain_allowed_hosts ); Py_INCREF( const_str_plain_allowed_hosts );
    PyTuple_SET_ITEM( const_tuple_6289a5f0b9510b7a96cd4a23f1c4ba19_tuple, 2, const_str_plain_require_https ); Py_INCREF( const_str_plain_require_https );
    const_str_plain_url_info = UNSTREAM_STRING( &constant_bin[ 1182786 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_6289a5f0b9510b7a96cd4a23f1c4ba19_tuple, 3, const_str_plain_url_info ); Py_INCREF( const_str_plain_url_info );
    PyTuple_SET_ITEM( const_tuple_6289a5f0b9510b7a96cd4a23f1c4ba19_tuple, 4, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    const_str_plain_valid_schemes = UNSTREAM_STRING( &constant_bin[ 1182794 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_6289a5f0b9510b7a96cd4a23f1c4ba19_tuple, 5, const_str_plain_valid_schemes ); Py_INCREF( const_str_plain_valid_schemes );
    const_tuple_256a42f408884f0acce338519de1e442_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_256a42f408884f0acce338519de1e442_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_256a42f408884f0acce338519de1e442_tuple, 1, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    const_str_plain_allow_fragments = UNSTREAM_STRING( &constant_bin[ 1182807 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_256a42f408884f0acce338519de1e442_tuple, 2, const_str_plain_allow_fragments ); Py_INCREF( const_str_plain_allow_fragments );
    PyTuple_SET_ITEM( const_tuple_256a42f408884f0acce338519de1e442_tuple, 3, const_str_plain__coerce_result ); Py_INCREF( const_str_plain__coerce_result );
    PyTuple_SET_ITEM( const_tuple_256a42f408884f0acce338519de1e442_tuple, 4, const_str_plain_splitresult ); Py_INCREF( const_str_plain_splitresult );
    PyTuple_SET_ITEM( const_tuple_256a42f408884f0acce338519de1e442_tuple, 5, const_str_plain_netloc ); Py_INCREF( const_str_plain_netloc );
    PyTuple_SET_ITEM( const_tuple_256a42f408884f0acce338519de1e442_tuple, 6, const_str_plain_query ); Py_INCREF( const_str_plain_query );
    PyTuple_SET_ITEM( const_tuple_256a42f408884f0acce338519de1e442_tuple, 7, const_str_plain_fragment ); Py_INCREF( const_str_plain_fragment );
    PyTuple_SET_ITEM( const_tuple_256a42f408884f0acce338519de1e442_tuple, 8, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_256a42f408884f0acce338519de1e442_tuple, 9, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_digest_0278a3c8354ff413537bb8fa781d209a = UNSTREAM_STRING( &constant_bin[ 1182822 ], 48, 0 );
    const_tuple_str_plain_query_str_plain_doseq_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_query_str_plain_doseq_tuple, 0, const_str_plain_query ); Py_INCREF( const_str_plain_query );
    PyTuple_SET_ITEM( const_tuple_str_plain_query_str_plain_doseq_tuple, 1, const_str_plain_doseq ); Py_INCREF( const_str_plain_doseq );
    const_int_pos_70 = PyLong_FromUnsignedLong( 70ul );
    const_str_digest_1e4616cb2877c002aa48d41e8b575b32 = UNSTREAM_STRING( &constant_bin[ 70696 ], 4, 0 );
    const_str_plain_int_to_base36 = UNSTREAM_STRING( &constant_bin[ 1182870 ], 13, 1 );
    const_tuple_adad93fb58b26d2bc88e06447decb760_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_adad93fb58b26d2bc88e06447decb760_tuple, 0, const_str_plain_date ); Py_INCREF( const_str_plain_date );
    PyTuple_SET_ITEM( const_tuple_adad93fb58b26d2bc88e06447decb760_tuple, 1, const_str_plain_regex ); Py_INCREF( const_str_plain_regex );
    PyTuple_SET_ITEM( const_tuple_adad93fb58b26d2bc88e06447decb760_tuple, 2, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_adad93fb58b26d2bc88e06447decb760_tuple, 3, const_str_plain_year ); Py_INCREF( const_str_plain_year );
    PyTuple_SET_ITEM( const_tuple_adad93fb58b26d2bc88e06447decb760_tuple, 4, const_str_plain_month ); Py_INCREF( const_str_plain_month );
    PyTuple_SET_ITEM( const_tuple_adad93fb58b26d2bc88e06447decb760_tuple, 5, const_str_plain_day ); Py_INCREF( const_str_plain_day );
    PyTuple_SET_ITEM( const_tuple_adad93fb58b26d2bc88e06447decb760_tuple, 6, const_str_plain_hour ); Py_INCREF( const_str_plain_hour );
    PyTuple_SET_ITEM( const_tuple_adad93fb58b26d2bc88e06447decb760_tuple, 7, const_str_plain_min ); Py_INCREF( const_str_plain_min );
    PyTuple_SET_ITEM( const_tuple_adad93fb58b26d2bc88e06447decb760_tuple, 8, const_str_plain_sec ); Py_INCREF( const_str_plain_sec );
    PyTuple_SET_ITEM( const_tuple_adad93fb58b26d2bc88e06447decb760_tuple, 9, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_digest_384042440d871d1140927410db194e0f = UNSTREAM_STRING( &constant_bin[ 1182883 ], 33, 0 );
    const_str_digest_83180b1371517bcd058515312c918660 = UNSTREAM_STRING( &constant_bin[ 1182916 ], 4, 0 );
    const_str_plain__urlparse = UNSTREAM_STRING( &constant_bin[ 1182920 ], 9, 1 );
    const_tuple_str_plain_url_str_plain_safe_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_safe_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_safe_tuple, 1, const_str_plain_safe ); Py_INCREF( const_str_plain_safe );
    const_str_plain_b36 = UNSTREAM_STRING( &constant_bin[ 1182929 ], 3, 1 );
    const_str_plain_urlquote_plus = UNSTREAM_STRING( &constant_bin[ 1182932 ], 13, 1 );
    const_str_digest_e1b8a583808a6e7657307decd83fd8a3 = UNSTREAM_STRING( &constant_bin[ 1182945 ], 36, 0 );
    const_str_digest_c727a8fd1f3fc276c3ce5de997eee608 = UNSTREAM_STRING( &constant_bin[ 1182981 ], 30, 0 );
    const_str_plain___D2 = UNSTREAM_STRING( &constant_bin[ 1183011 ], 4, 1 );
    const_str_digest_e64ee96c641dbe4638424ab390a3cbb6 = UNSTREAM_STRING( &constant_bin[ 1183015 ], 76, 0 );
    const_tuple_str_chr_43_str_space_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_chr_43_str_space_tuple, 0, const_str_chr_43 ); Py_INCREF( const_str_chr_43 );
    PyTuple_SET_ITEM( const_tuple_str_chr_43_str_space_tuple, 1, const_str_space ); Py_INCREF( const_str_space );
    const_tuple_str_plain_host_str_plain_pattern_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_host_str_plain_pattern_tuple, 0, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_str_plain_host_str_plain_pattern_tuple, 1, const_str_plain_pattern ); Py_INCREF( const_str_plain_pattern );
    const_str_plain_RFC850_DATE = UNSTREAM_STRING( &constant_bin[ 1183091 ], 11, 1 );
    const_str_digest_24bddaa933dffd5125f1d96f36ee3a66 = UNSTREAM_STRING( &constant_bin[ 1183102 ], 59, 0 );
    const_str_digest_e6f6b155c3ec6c17cfb564626561112f = UNSTREAM_STRING( &constant_bin[ 1183161 ], 45, 0 );
    const_tuple_str_plain_s_str_plain_e_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_e_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_e_tuple, 1, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_plain__coerce_args = UNSTREAM_STRING( &constant_bin[ 1183206 ], 12, 1 );
    const_str_plain_char_set = UNSTREAM_STRING( &constant_bin[ 1183218 ], 8, 1 );
    const_str_digest_6aeadd226a5caea64ebd9098eb5a263c = UNSTREAM_STRING( &constant_bin[ 1183226 ], 7, 0 );
    const_str_plain_urlsafe_base64_decode = UNSTREAM_STRING( &constant_bin[ 1183233 ], 21, 1 );
    const_str_digest_fe70a4ac107703284c8732fca1d3d720 = UNSTREAM_STRING( &constant_bin[ 1183254 ], 19, 0 );
    const_str_plain_FIELDS_MATCH = UNSTREAM_STRING( &constant_bin[ 1183273 ], 12, 1 );
    const_tuple_str_plain_etag_str_tuple = PyTuple_New( 1 );
    const_str_plain_etag_str = UNSTREAM_STRING( &constant_bin[ 1183285 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_etag_str_tuple, 0, const_str_plain_etag_str ); Py_INCREF( const_str_plain_etag_str );
    const_str_digest_e8b517682243760d5b5b3cfe5d136758 = UNSTREAM_STRING( &constant_bin[ 1183293 ], 34, 0 );
    const_tuple_str_plain_date_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_date_tuple, 0, const_str_plain_date ); Py_INCREF( const_str_plain_date );
    const_str_plain___Y2 = UNSTREAM_STRING( &constant_bin[ 1183327 ], 4, 1 );
    const_str_digest_5ccccffcd30a38f9afd04d9c43213ca9 = UNSTREAM_STRING( &constant_bin[ 1183331 ], 26, 0 );
    const_str_digest_4db886a8686cafc8ca1bbe8b0de4410b = UNSTREAM_STRING( &constant_bin[ 1183357 ], 12, 0 );
    const_str_digest_8ca97ed2764965055cc7ea2fad595278 = UNSTREAM_STRING( &constant_bin[ 1183369 ], 894, 0 );
    const_str_digest_ddbf0db65c7c2837fc4933e3e5f46ce8 = UNSTREAM_STRING( &constant_bin[ 1160262 ], 15, 0 );
    const_str_digest_e7fb6f9eaa9a97c525bba24277d9fbaf = UNSTREAM_STRING( &constant_bin[ 1184263 ], 16, 0 );
    const_tuple_bytes_digest_da5a556911cc5a9933097ff137a0e1d3_tuple = PyTuple_New( 1 );
    const_bytes_digest_da5a556911cc5a9933097ff137a0e1d3 = UNSTREAM_BYTES( &constant_bin[ 1184279 ], 2 );
    PyTuple_SET_ITEM( const_tuple_bytes_digest_da5a556911cc5a9933097ff137a0e1d3_tuple, 0, const_bytes_digest_da5a556911cc5a9933097ff137a0e1d3 ); Py_INCREF( const_bytes_digest_da5a556911cc5a9933097ff137a0e1d3 );
    const_list_str_plain_https_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_https_list, 0, const_str_plain_https ); Py_INCREF( const_str_plain_https );
    const_str_digest_b4c7e731c78b609064f0e5d07aff9ce0 = UNSTREAM_STRING( &constant_bin[ 1184281 ], 191, 0 );
    const_str_digest_b956edff5198358cf12818d9ea146ea8 = UNSTREAM_STRING( &constant_bin[ 1184472 ], 291, 0 );
    const_tuple_str_plain_Error_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Error_tuple, 0, const_str_plain_Error ); Py_INCREF( const_str_plain_Error );
    const_str_digest_ee6c9622ceb54c046db9e6e52b2917a4 = UNSTREAM_STRING( &constant_bin[ 1184763 ], 14, 0 );
    const_str_digest_eafd353eca7d916601e0fbcc5f52c22f = UNSTREAM_STRING( &constant_bin[ 1184777 ], 15, 0 );
    const_str_digest_ea23691749aba42293b4121358e0175f = UNSTREAM_STRING( &constant_bin[ 1184792 ], 274, 0 );
    const_tuple_str_digest_83180b1371517bcd058515312c918660_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_83180b1371517bcd058515312c918660_tuple, 0, const_str_digest_83180b1371517bcd058515312c918660 ); Py_INCREF( const_str_digest_83180b1371517bcd058515312c918660 );
    const_str_plain___M = UNSTREAM_STRING( &constant_bin[ 62459 ], 3, 1 );
    const_str_digest_10343d2247785c4eda75e37feaeff91c = UNSTREAM_STRING( &constant_bin[ 1185066 ], 37, 0 );
    const_str_plain__urlsplit = UNSTREAM_STRING( &constant_bin[ 1185103 ], 9, 1 );
    const_tuple_e7cd725475ddb402d6dd054778f163e3_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e7cd725475ddb402d6dd054778f163e3_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_e7cd725475ddb402d6dd054778f163e3_tuple, 1, const_str_digest_c075052d723d6707083e869a0e3659bb ); Py_INCREF( const_str_digest_c075052d723d6707083e869a0e3659bb );
    PyTuple_SET_ITEM( const_tuple_e7cd725475ddb402d6dd054778f163e3_tuple, 2, const_str_plain_replace ); Py_INCREF( const_str_plain_replace );
    PyTuple_SET_ITEM( const_tuple_e7cd725475ddb402d6dd054778f163e3_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_keep_lazy_text_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_keep_lazy_text_tuple, 0, const_str_plain_keep_lazy_text ); Py_INCREF( const_str_plain_keep_lazy_text );
    const_str_digest_6e4baf307f95b180e391bfedf59f9342 = UNSTREAM_STRING( &constant_bin[ 1185112 ], 329, 0 );
    const_str_digest_27671265d3bc4b7b30fab4dcc56ece57 = UNSTREAM_STRING( &constant_bin[ 1185441 ], 355, 0 );
    const_list_str_plain_http_str_plain_https_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_http_str_plain_https_list, 0, const_str_plain_http ); Py_INCREF( const_str_plain_http );
    PyList_SET_ITEM( const_list_str_plain_http_str_plain_https_list, 1, const_str_plain_https ); Py_INCREF( const_str_plain_https );
    const_tuple_str_plain_min_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_min_tuple, 0, const_str_plain_min ); Py_INCREF( const_str_plain_min );
    const_str_plain_urlsafe_base64_encode = UNSTREAM_STRING( &constant_bin[ 1185796 ], 21, 1 );
    const_tuple_bdf9e3a2f67f141834f0921c427a6cf5_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_bdf9e3a2f67f141834f0921c427a6cf5_tuple, 0, const_str_plain_quote ); Py_INCREF( const_str_plain_quote );
    PyTuple_SET_ITEM( const_tuple_bdf9e3a2f67f141834f0921c427a6cf5_tuple, 1, const_str_plain_quote_plus ); Py_INCREF( const_str_plain_quote_plus );
    PyTuple_SET_ITEM( const_tuple_bdf9e3a2f67f141834f0921c427a6cf5_tuple, 2, const_str_plain_unquote ); Py_INCREF( const_str_plain_unquote );
    PyTuple_SET_ITEM( const_tuple_bdf9e3a2f67f141834f0921c427a6cf5_tuple, 3, const_str_plain_unquote_plus ); Py_INCREF( const_str_plain_unquote_plus );
    PyTuple_SET_ITEM( const_tuple_bdf9e3a2f67f141834f0921c427a6cf5_tuple, 4, const_str_plain_urlencode ); Py_INCREF( const_str_plain_urlencode );
    const_str_plain_C = UNSTREAM_STRING( &constant_bin[ 47 ], 1, 1 );
    const_tuple_str_plain_i_str_plain_v_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_v_tuple, 0, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_v_tuple, 1, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_tuple_str_plain_formatdate_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_formatdate_tuple, 0, const_str_plain_formatdate ); Py_INCREF( const_str_plain_formatdate );
    const_str_digest_c96d551f4dfdd60c4e7d2896e25f9bbe = UNSTREAM_STRING( &constant_bin[ 1185817 ], 22, 0 );
    const_tuple_str_plain_etag_str_str_plain_etag_matches_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_etag_str_str_plain_etag_matches_tuple, 0, const_str_plain_etag_str ); Py_INCREF( const_str_plain_etag_str );
    PyTuple_SET_ITEM( const_tuple_str_plain_etag_str_str_plain_etag_matches_tuple, 1, const_str_plain_etag_matches ); Py_INCREF( const_str_plain_etag_matches );
    const_str_plain_ASCTIME_DATE = UNSTREAM_STRING( &constant_bin[ 1185839 ], 12, 1 );
    const_str_digest_75547693838da266bfc7f2d7c19e9c98 = UNSTREAM_STRING( &constant_bin[ 1185851 ], 20, 0 );
    const_tuple_str_digest_eb2ea1dfe0b93ea72cf975e75384db80_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_eb2ea1dfe0b93ea72cf975e75384db80_tuple, 0, const_str_digest_eb2ea1dfe0b93ea72cf975e75384db80 ); Py_INCREF( const_str_digest_eb2ea1dfe0b93ea72cf975e75384db80 );
    const_str_digest_64cb1f61857b46f7a2679397291f8cd8 = UNSTREAM_STRING( &constant_bin[ 1185871 ], 136, 0 );
    const_str_digest_7af2fbc26471c99f6027509bac99d6c2 = UNSTREAM_STRING( &constant_bin[ 1186007 ], 126, 0 );
    const_dict_ad22aad091e4a1615cc75ade15d93cea = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_ad22aad091e4a1615cc75ade15d93cea, const_str_plain_usegmt, Py_True );
    assert( PyDict_Size( const_dict_ad22aad091e4a1615cc75ade15d93cea ) == 1 );
    const_str_plain_parse_http_date = UNSTREAM_STRING( &constant_bin[ 1183028 ], 15, 1 );
    const_slice_int_pos_12_int_pos_25_none = PySlice_New( const_int_pos_12, const_int_pos_25, Py_None );
    const_str_plain_ETAG_MATCH = UNSTREAM_STRING( &constant_bin[ 1186133 ], 10, 1 );
    const_slice_int_pos_8_int_pos_11_none = PySlice_New( const_int_pos_8, const_int_pos_11, Py_None );
    const_str_digest_24463121abb84407fee73fe6d9fca438 = UNSTREAM_STRING( &constant_bin[ 1186143 ], 16, 0 );
    const_tuple_str_empty_true_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_empty_true_tuple, 0, const_str_empty ); Py_INCREF( const_str_empty );
    PyTuple_SET_ITEM( const_tuple_str_empty_true_tuple, 1, Py_True ); Py_INCREF( Py_True );
    const_tuple_str_plain_day_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_day_tuple, 0, const_str_plain_day ); Py_INCREF( const_str_plain_day );
    const_str_digest_b83c6071ddc9b6bb8df00e5cb8442be5 = UNSTREAM_STRING( &constant_bin[ 1186159 ], 26, 0 );
    const_str_digest_27690054c45f79644e57879c8c2773d3 = UNSTREAM_STRING( &constant_bin[ 1186185 ], 14, 0 );
    const_str_plain_urlunquote = UNSTREAM_STRING( &constant_bin[ 1182602 ], 10, 1 );
    const_tuple_str_plain_epoch_seconds_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_epoch_seconds_tuple, 0, const_str_plain_epoch_seconds ); Py_INCREF( const_str_plain_epoch_seconds );
    const_tuple_str_plain_TooManyFieldsSent_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_TooManyFieldsSent_tuple, 0, const_str_plain_TooManyFieldsSent ); Py_INCREF( const_str_plain_TooManyFieldsSent );
    const_str_digest_d911421cc7b811b9bb394e57c41af426 = UNSTREAM_STRING( &constant_bin[ 1186199 ], 261, 0 );
    const_tuple_str_plain_hour_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hour_tuple, 0, const_str_plain_hour ); Py_INCREF( const_str_plain_hour );
    const_tuple_30146710cdd1051d24fdf489ae16cdaa_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_30146710cdd1051d24fdf489ae16cdaa_tuple, 0, const_str_plain_qs ); Py_INCREF( const_str_plain_qs );
    PyTuple_SET_ITEM( const_tuple_30146710cdd1051d24fdf489ae16cdaa_tuple, 1, const_str_plain_keep_blank_values ); Py_INCREF( const_str_plain_keep_blank_values );
    PyTuple_SET_ITEM( const_tuple_30146710cdd1051d24fdf489ae16cdaa_tuple, 2, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_30146710cdd1051d24fdf489ae16cdaa_tuple, 3, const_str_plain_errors ); Py_INCREF( const_str_plain_errors );
    PyTuple_SET_ITEM( const_tuple_30146710cdd1051d24fdf489ae16cdaa_tuple, 4, const_str_plain_fields_limit ); Py_INCREF( const_str_plain_fields_limit );
    PyTuple_SET_ITEM( const_tuple_30146710cdd1051d24fdf489ae16cdaa_tuple, 5, const_str_plain_pairs ); Py_INCREF( const_str_plain_pairs );
    PyTuple_SET_ITEM( const_tuple_30146710cdd1051d24fdf489ae16cdaa_tuple, 6, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_str_plain_name_value = UNSTREAM_STRING( &constant_bin[ 1186460 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_30146710cdd1051d24fdf489ae16cdaa_tuple, 7, const_str_plain_name_value ); Py_INCREF( const_str_plain_name_value );
    const_str_plain_nv = UNSTREAM_STRING( &constant_bin[ 4285 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_30146710cdd1051d24fdf489ae16cdaa_tuple, 8, const_str_plain_nv ); Py_INCREF( const_str_plain_nv );
    PyTuple_SET_ITEM( const_tuple_30146710cdd1051d24fdf489ae16cdaa_tuple, 9, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_30146710cdd1051d24fdf489ae16cdaa_tuple, 10, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_plain__is_safe_url = UNSTREAM_STRING( &constant_bin[ 1186470 ], 12, 1 );
    const_str_plain_original_urlencode = UNSTREAM_STRING( &constant_bin[ 1186482 ], 18, 1 );
    const_str_plain___T = UNSTREAM_STRING( &constant_bin[ 84508 ], 3, 1 );
    const_tuple_str_plain_year_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_year_tuple, 0, const_str_plain_year ); Py_INCREF( const_str_plain_year );
    const_str_digest_e3ff38ed522c696e2ce8fb0bda118930 = UNSTREAM_STRING( &constant_bin[ 1186500 ], 97, 0 );
    const_str_digest_29f60848dc68f2b7f80a717931ac4fce = UNSTREAM_STRING( &constant_bin[ 1186597 ], 22, 0 );
    const_str_digest_2a78ac7c550ba70834f860b3af49eafc = UNSTREAM_STRING( &constant_bin[ 1186619 ], 281, 0 );
    const_str_digest_3b4afdff97992cb5fe27f3eb2128a6e5 = UNSTREAM_STRING( &constant_bin[ 1186900 ], 286, 0 );
    const_str_plain_BinasciiError = UNSTREAM_STRING( &constant_bin[ 1187186 ], 13, 1 );
    const_tuple_str_plain_i_str_plain_char_set_str_plain_b36_str_plain_n_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_char_set_str_plain_b36_str_plain_n_tuple, 0, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_char_set_str_plain_b36_str_plain_n_tuple, 1, const_str_plain_char_set ); Py_INCREF( const_str_plain_char_set );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_char_set_str_plain_b36_str_plain_n_tuple, 2, const_str_plain_b36 ); Py_INCREF( const_str_plain_b36 );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_char_set_str_plain_b36_str_plain_n_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_tuple_b4054e2e3c2b3080846d8cfee4bf4267_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_b4054e2e3c2b3080846d8cfee4bf4267_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_b4054e2e3c2b3080846d8cfee4bf4267_tuple, 1, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    PyTuple_SET_ITEM( const_tuple_b4054e2e3c2b3080846d8cfee4bf4267_tuple, 2, const_str_plain_allow_fragments ); Py_INCREF( const_str_plain_allow_fragments );
    PyTuple_SET_ITEM( const_tuple_b4054e2e3c2b3080846d8cfee4bf4267_tuple, 3, const_str_plain__coerce_result ); Py_INCREF( const_str_plain__coerce_result );
    PyTuple_SET_ITEM( const_tuple_b4054e2e3c2b3080846d8cfee4bf4267_tuple, 4, const_str_plain_netloc ); Py_INCREF( const_str_plain_netloc );
    PyTuple_SET_ITEM( const_tuple_b4054e2e3c2b3080846d8cfee4bf4267_tuple, 5, const_str_plain_query ); Py_INCREF( const_str_plain_query );
    PyTuple_SET_ITEM( const_tuple_b4054e2e3c2b3080846d8cfee4bf4267_tuple, 6, const_str_plain_fragment ); Py_INCREF( const_str_plain_fragment );
    PyTuple_SET_ITEM( const_tuple_b4054e2e3c2b3080846d8cfee4bf4267_tuple, 7, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_b4054e2e3c2b3080846d8cfee4bf4267_tuple, 8, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_b4054e2e3c2b3080846d8cfee4bf4267_tuple, 9, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_tuple_45d86939aa476df3bf58e2f8ed87651b_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_45d86939aa476df3bf58e2f8ed87651b_tuple, 0, const_str_plain_ParseResult ); Py_INCREF( const_str_plain_ParseResult );
    PyTuple_SET_ITEM( const_tuple_45d86939aa476df3bf58e2f8ed87651b_tuple, 1, const_str_plain_SplitResult ); Py_INCREF( const_str_plain_SplitResult );
    PyTuple_SET_ITEM( const_tuple_45d86939aa476df3bf58e2f8ed87651b_tuple, 2, const_str_plain__coerce_args ); Py_INCREF( const_str_plain__coerce_args );
    PyTuple_SET_ITEM( const_tuple_45d86939aa476df3bf58e2f8ed87651b_tuple, 3, const_str_plain__splitnetloc ); Py_INCREF( const_str_plain__splitnetloc );
    PyTuple_SET_ITEM( const_tuple_45d86939aa476df3bf58e2f8ed87651b_tuple, 4, const_str_plain__splitparams ); Py_INCREF( const_str_plain__splitparams );
    PyTuple_SET_ITEM( const_tuple_45d86939aa476df3bf58e2f8ed87651b_tuple, 5, const_str_plain_scheme_chars ); Py_INCREF( const_str_plain_scheme_chars );
    PyTuple_SET_ITEM( const_tuple_45d86939aa476df3bf58e2f8ed87651b_tuple, 6, const_str_plain_uses_params ); Py_INCREF( const_str_plain_uses_params );
    const_str_digest_dd6f78f80e1b319371d2be61f253a165 = UNSTREAM_STRING( &constant_bin[ 1187199 ], 308, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$utils$http( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b239dc9c303a950cd97fc778d59e1b7b;
static PyCodeObject *codeobj_299372a89e871f82a7e45e5a3b502d89;
static PyCodeObject *codeobj_2570132bd3ca9393b54858c8ea287b2d;
static PyCodeObject *codeobj_930de4ae3077d7a207af789654d1f46c;
static PyCodeObject *codeobj_602fd1df8e58b8d5af15ce2bbac6e3a4;
static PyCodeObject *codeobj_43aeec64976129488aab47e619a891c8;
static PyCodeObject *codeobj_f71dcf00df842e1dd859e8a9c3e5cf76;
static PyCodeObject *codeobj_4bb21dd7a576d944819593520817a697;
static PyCodeObject *codeobj_b76b8be11e8e2441ce4490fe05a77db7;
static PyCodeObject *codeobj_68e65f08e9f392be1aa478286e1c2c3c;
static PyCodeObject *codeobj_db66317084e293ceeafea0cfb89bb278;
static PyCodeObject *codeobj_1bfd0d4959b6e8cb1da148052f6b1f04;
static PyCodeObject *codeobj_0e94128b59f27aeeddac24cc3c930c32;
static PyCodeObject *codeobj_065e74a1c571dc71cc37000474dd9afa;
static PyCodeObject *codeobj_ea8647c3b423ff9d461a30472af7a062;
static PyCodeObject *codeobj_591e65182f4da9df27217cbd19684463;
static PyCodeObject *codeobj_61e47f539c4117aaebe775fe9da697d8;
static PyCodeObject *codeobj_93224d0ffab733ff4168d7cfa53597b2;
static PyCodeObject *codeobj_b5c06fb941a1fb8b23367a8a0af1dc5b;
static PyCodeObject *codeobj_eed299a30bd7927ba1425c828159c47a;
static PyCodeObject *codeobj_59985af246a17cf9c63e25c7980ce3b1;
static PyCodeObject *codeobj_6ddbb64b69dd9dcfd06658d46e1f02a5;
static PyCodeObject *codeobj_b6025f357d99fd25df5b1efe7af14a7e;
static PyCodeObject *codeobj_6e0274b3f7442b99d4a38e23064c9c0c;
static PyCodeObject *codeobj_2f6e11ea686b6e080ac887ef55eb4030;
static PyCodeObject *codeobj_835f652553f94d7e9019c3a4a949e33d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_75547693838da266bfc7f2d7c19e9c98 );
    codeobj_b239dc9c303a950cd97fc778d59e1b7b = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 264, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_etag_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_299372a89e871f82a7e45e5a3b502d89 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 113, const_tuple_str_plain_k_str_plain_v_str_plain_query_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_2570132bd3ca9393b54858c8ea287b2d = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 114, const_tuple_str_plain_i_str_plain_v_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_930de4ae3077d7a207af789654d1f46c = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 265, const_tuple_str_plain_match_str_plain_etag_matches_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_602fd1df8e58b8d5af15ce2bbac6e3a4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b83c6071ddc9b6bb8df00e5cb8442be5, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_43aeec64976129488aab47e619a891c8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_safe_url, 385, const_tuple_6289a5f0b9510b7a96cd4a23f1c4ba19_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_f71dcf00df842e1dd859e8a9c3e5cf76 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__urlparse, 334, const_tuple_256a42f408884f0acce338519de1e442_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_4bb21dd7a576d944819593520817a697 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__urlsplit, 354, const_tuple_b4054e2e3c2b3080846d8cfee4bf4267_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_b76b8be11e8e2441ce4490fe05a77db7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_base36_to_int, 195, const_tuple_str_plain_s_str_plain_value_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_68e65f08e9f392be1aa478286e1c2c3c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cookie_date, 119, const_tuple_str_plain_epoch_seconds_str_plain_rfcdate_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_db66317084e293ceeafea0cfb89bb278 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_http_date, 133, const_tuple_str_plain_epoch_seconds_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_1bfd0d4959b6e8cb1da148052f6b1f04 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_int_to_base36, 213, const_tuple_str_plain_i_str_plain_char_set_str_plain_b36_str_plain_n_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_0e94128b59f27aeeddac24cc3c930c32 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_safe_url, 298, const_tuple_368d71b50fa4a769f879ce3fa36466fb_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_065e74a1c571dc71cc37000474dd9afa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_same_domain, 279, const_tuple_str_plain_host_str_plain_pattern_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_ea8647c3b423ff9d461a30472af7a062 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_limited_parse_qsl, 414, const_tuple_30146710cdd1051d24fdf489ae16cdaa_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_591e65182f4da9df27217cbd19684463 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse_etags, 254, const_tuple_str_plain_etag_str_str_plain_etag_matches_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_61e47f539c4117aaebe775fe9da697d8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse_http_date, 147, const_tuple_adad93fb58b26d2bc88e06447decb760_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_93224d0ffab733ff4168d7cfa53597b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse_http_date_safe, 183, const_tuple_str_plain_date_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_b5c06fb941a1fb8b23367a8a0af1dc5b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_quote_etag, 268, const_tuple_str_plain_etag_str_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_eed299a30bd7927ba1425c828159c47a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_urlencode, 102, const_tuple_str_plain_query_str_plain_doseq_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_59985af246a17cf9c63e25c7980ce3b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_urlquote, 62, const_tuple_str_plain_url_str_plain_safe_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_6ddbb64b69dd9dcfd06658d46e1f02a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_urlquote_plus, 73, const_tuple_str_plain_url_str_plain_safe_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_b6025f357d99fd25df5b1efe7af14a7e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_urlsafe_base64_decode, 242, const_tuple_str_plain_s_str_plain_e_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_6e0274b3f7442b99d4a38e23064c9c0c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_urlsafe_base64_encode, 234, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_2f6e11ea686b6e080ac887ef55eb4030 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_urlunquote, 84, const_tuple_str_plain_quoted_url_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_835f652553f94d7e9019c3a4a949e33d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_urlunquote_plus, 93, const_tuple_str_plain_quoted_url_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$utils$http$$$function_14_parse_etags$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void django$utils$http$$$function_14_parse_etags$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_10_base36_to_int(  );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_11_int_to_base36(  );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_12_urlsafe_base64_encode(  );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_13_urlsafe_base64_decode(  );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_14_parse_etags(  );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_15_quote_etag(  );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_16_is_same_domain(  );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_17_is_safe_url( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_18__urlparse( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_19__urlsplit( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_1_urlquote( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_20__is_safe_url( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_21_limited_parse_qsl( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_2_urlquote_plus( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_3_urlunquote(  );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_4_urlunquote_plus(  );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_5_urlencode( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_6_cookie_date( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_7_http_date( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_8_parse_http_date(  );


static PyObject *MAKE_FUNCTION_django$utils$http$$$function_9_parse_http_date_safe(  );


// The module function definitions.
static PyObject *impl_django$utils$http$$$function_1_urlquote( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_safe = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_59985af246a17cf9c63e25c7980ce3b1 = NULL;

    struct Nuitka_FrameObject *frame_59985af246a17cf9c63e25c7980ce3b1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_59985af246a17cf9c63e25c7980ce3b1, codeobj_59985af246a17cf9c63e25c7980ce3b1, module_django$utils$http, sizeof(void *)+sizeof(void *) );
    frame_59985af246a17cf9c63e25c7980ce3b1 = cache_frame_59985af246a17cf9c63e25c7980ce3b1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_59985af246a17cf9c63e25c7980ce3b1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_59985af246a17cf9c63e25c7980ce3b1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_text );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_text );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_text" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_quote );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_quote );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "quote" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_str );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_str );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_url;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_59985af246a17cf9c63e25c7980ce3b1->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_str );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_str );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_safe;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "safe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_59985af246a17cf9c63e25c7980ce3b1->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 70;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_59985af246a17cf9c63e25c7980ce3b1->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_59985af246a17cf9c63e25c7980ce3b1->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59985af246a17cf9c63e25c7980ce3b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_59985af246a17cf9c63e25c7980ce3b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59985af246a17cf9c63e25c7980ce3b1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_59985af246a17cf9c63e25c7980ce3b1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_59985af246a17cf9c63e25c7980ce3b1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_59985af246a17cf9c63e25c7980ce3b1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_59985af246a17cf9c63e25c7980ce3b1,
        type_description_1,
        par_url,
        par_safe
    );


    // Release cached frame.
    if ( frame_59985af246a17cf9c63e25c7980ce3b1 == cache_frame_59985af246a17cf9c63e25c7980ce3b1 )
    {
        Py_DECREF( frame_59985af246a17cf9c63e25c7980ce3b1 );
    }
    cache_frame_59985af246a17cf9c63e25c7980ce3b1 = NULL;

    assertFrameObject( frame_59985af246a17cf9c63e25c7980ce3b1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_1_urlquote );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_safe );
    par_safe = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_safe );
    par_safe = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_1_urlquote );
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


static PyObject *impl_django$utils$http$$$function_2_urlquote_plus( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_safe = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_6ddbb64b69dd9dcfd06658d46e1f02a5 = NULL;

    struct Nuitka_FrameObject *frame_6ddbb64b69dd9dcfd06658d46e1f02a5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6ddbb64b69dd9dcfd06658d46e1f02a5, codeobj_6ddbb64b69dd9dcfd06658d46e1f02a5, module_django$utils$http, sizeof(void *)+sizeof(void *) );
    frame_6ddbb64b69dd9dcfd06658d46e1f02a5 = cache_frame_6ddbb64b69dd9dcfd06658d46e1f02a5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6ddbb64b69dd9dcfd06658d46e1f02a5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6ddbb64b69dd9dcfd06658d46e1f02a5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_text );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_text );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_text" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_quote_plus );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_quote_plus );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "quote_plus" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_str );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_str );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_url;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_6ddbb64b69dd9dcfd06658d46e1f02a5->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_str );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_str );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_safe;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "safe" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_6ddbb64b69dd9dcfd06658d46e1f02a5->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 81;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_6ddbb64b69dd9dcfd06658d46e1f02a5->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_6ddbb64b69dd9dcfd06658d46e1f02a5->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ddbb64b69dd9dcfd06658d46e1f02a5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ddbb64b69dd9dcfd06658d46e1f02a5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ddbb64b69dd9dcfd06658d46e1f02a5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6ddbb64b69dd9dcfd06658d46e1f02a5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6ddbb64b69dd9dcfd06658d46e1f02a5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6ddbb64b69dd9dcfd06658d46e1f02a5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6ddbb64b69dd9dcfd06658d46e1f02a5,
        type_description_1,
        par_url,
        par_safe
    );


    // Release cached frame.
    if ( frame_6ddbb64b69dd9dcfd06658d46e1f02a5 == cache_frame_6ddbb64b69dd9dcfd06658d46e1f02a5 )
    {
        Py_DECREF( frame_6ddbb64b69dd9dcfd06658d46e1f02a5 );
    }
    cache_frame_6ddbb64b69dd9dcfd06658d46e1f02a5 = NULL;

    assertFrameObject( frame_6ddbb64b69dd9dcfd06658d46e1f02a5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_2_urlquote_plus );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_safe );
    par_safe = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_safe );
    par_safe = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_2_urlquote_plus );
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


static PyObject *impl_django$utils$http$$$function_3_urlunquote( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_quoted_url = python_pars[ 0 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_2f6e11ea686b6e080ac887ef55eb4030 = NULL;

    struct Nuitka_FrameObject *frame_2f6e11ea686b6e080ac887ef55eb4030;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2f6e11ea686b6e080ac887ef55eb4030, codeobj_2f6e11ea686b6e080ac887ef55eb4030, module_django$utils$http, sizeof(void *) );
    frame_2f6e11ea686b6e080ac887ef55eb4030 = cache_frame_2f6e11ea686b6e080ac887ef55eb4030;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2f6e11ea686b6e080ac887ef55eb4030 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2f6e11ea686b6e080ac887ef55eb4030 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_text );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_text );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_text" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_unquote );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unquote );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unquote" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_str );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_str );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_quoted_url;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_2f6e11ea686b6e080ac887ef55eb4030->m_frame.f_lineno = 90;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_2f6e11ea686b6e080ac887ef55eb4030->m_frame.f_lineno = 90;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_2f6e11ea686b6e080ac887ef55eb4030->m_frame.f_lineno = 90;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2f6e11ea686b6e080ac887ef55eb4030 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2f6e11ea686b6e080ac887ef55eb4030 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2f6e11ea686b6e080ac887ef55eb4030 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2f6e11ea686b6e080ac887ef55eb4030, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2f6e11ea686b6e080ac887ef55eb4030->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2f6e11ea686b6e080ac887ef55eb4030, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2f6e11ea686b6e080ac887ef55eb4030,
        type_description_1,
        par_quoted_url
    );


    // Release cached frame.
    if ( frame_2f6e11ea686b6e080ac887ef55eb4030 == cache_frame_2f6e11ea686b6e080ac887ef55eb4030 )
    {
        Py_DECREF( frame_2f6e11ea686b6e080ac887ef55eb4030 );
    }
    cache_frame_2f6e11ea686b6e080ac887ef55eb4030 = NULL;

    assertFrameObject( frame_2f6e11ea686b6e080ac887ef55eb4030 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_3_urlunquote );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_quoted_url );
    par_quoted_url = NULL;

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

    Py_XDECREF( par_quoted_url );
    par_quoted_url = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_3_urlunquote );
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


static PyObject *impl_django$utils$http$$$function_4_urlunquote_plus( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_quoted_url = python_pars[ 0 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_835f652553f94d7e9019c3a4a949e33d = NULL;

    struct Nuitka_FrameObject *frame_835f652553f94d7e9019c3a4a949e33d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_835f652553f94d7e9019c3a4a949e33d, codeobj_835f652553f94d7e9019c3a4a949e33d, module_django$utils$http, sizeof(void *) );
    frame_835f652553f94d7e9019c3a4a949e33d = cache_frame_835f652553f94d7e9019c3a4a949e33d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_835f652553f94d7e9019c3a4a949e33d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_835f652553f94d7e9019c3a4a949e33d ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_text );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_text );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_text" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_unquote_plus );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unquote_plus );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unquote_plus" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_str );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_str );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_quoted_url;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_835f652553f94d7e9019c3a4a949e33d->m_frame.f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_835f652553f94d7e9019c3a4a949e33d->m_frame.f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_835f652553f94d7e9019c3a4a949e33d->m_frame.f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_835f652553f94d7e9019c3a4a949e33d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_835f652553f94d7e9019c3a4a949e33d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_835f652553f94d7e9019c3a4a949e33d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_835f652553f94d7e9019c3a4a949e33d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_835f652553f94d7e9019c3a4a949e33d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_835f652553f94d7e9019c3a4a949e33d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_835f652553f94d7e9019c3a4a949e33d,
        type_description_1,
        par_quoted_url
    );


    // Release cached frame.
    if ( frame_835f652553f94d7e9019c3a4a949e33d == cache_frame_835f652553f94d7e9019c3a4a949e33d )
    {
        Py_DECREF( frame_835f652553f94d7e9019c3a4a949e33d );
    }
    cache_frame_835f652553f94d7e9019c3a4a949e33d = NULL;

    assertFrameObject( frame_835f652553f94d7e9019c3a4a949e33d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_4_urlunquote_plus );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_quoted_url );
    par_quoted_url = NULL;

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

    Py_XDECREF( par_quoted_url );
    par_quoted_url = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_4_urlunquote_plus );
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


static PyObject *impl_django$utils$http$$$function_5_urlencode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_query = python_pars[ 0 ];
    PyObject *par_doseq = python_pars[ 1 ];
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *outline_1_var_i = NULL;
    PyObject *tmp_listcontraction$listcontraction_1__$0 = NULL;
    PyObject *tmp_listcontraction$listcontraction_1__contraction = NULL;
    PyObject *tmp_listcontraction$listcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_listcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcontraction$tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_list_2;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_2570132bd3ca9393b54858c8ea287b2d_3 = NULL;

    struct Nuitka_FrameObject *frame_2570132bd3ca9393b54858c8ea287b2d_3;

    static struct Nuitka_FrameObject *cache_frame_299372a89e871f82a7e45e5a3b502d89_2 = NULL;

    struct Nuitka_FrameObject *frame_299372a89e871f82a7e45e5a3b502d89_2;

    static struct Nuitka_FrameObject *cache_frame_eed299a30bd7927ba1425c828159c47a = NULL;

    struct Nuitka_FrameObject *frame_eed299a30bd7927ba1425c828159c47a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eed299a30bd7927ba1425c828159c47a, codeobj_eed299a30bd7927ba1425c828159c47a, module_django$utils$http, sizeof(void *)+sizeof(void *) );
    frame_eed299a30bd7927ba1425c828159c47a = cache_frame_eed299a30bd7927ba1425c828159c47a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eed299a30bd7927ba1425c828159c47a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eed299a30bd7927ba1425c828159c47a ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_query;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_MultiValueDict );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MultiValueDict );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MultiValueDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = par_query;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_eed299a30bd7927ba1425c828159c47a->m_frame.f_lineno = 109;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lists );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_query;
        par_query = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_hasattr_source_1 = par_query;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain_items;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "oo";
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
    tmp_called_instance_2 = par_query;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_eed299a30bd7927ba1425c828159c47a->m_frame.f_lineno = 111;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_items );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_query;
        par_query = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_2:;
    branch_end_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_original_urlencode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_original_urlencode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "original_urlencode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    // Tried code:
    tmp_iter_arg_1 = par_query;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "query" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    assert( tmp_listcontraction_1__$0 == NULL );
    tmp_listcontraction_1__$0 = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( tmp_listcontraction_1__contraction == NULL );
    tmp_listcontraction_1__contraction = tmp_assign_source_4;

    MAKE_OR_REUSE_FRAME( cache_frame_299372a89e871f82a7e45e5a3b502d89_2, codeobj_299372a89e871f82a7e45e5a3b502d89, module_django$utils$http, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_299372a89e871f82a7e45e5a3b502d89_2 = cache_frame_299372a89e871f82a7e45e5a3b502d89_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_299372a89e871f82a7e45e5a3b502d89_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_299372a89e871f82a7e45e5a3b502d89_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_listcontraction_1__$0;

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
            type_description_2 = "ooo";
            exception_lineno = 113;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_listcontraction_1__iter_value_0;
        tmp_listcontraction_1__iter_value_0 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_listcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_2 = "ooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_listcontraction$tuple_unpack_1__source_iter;
        tmp_listcontraction$tuple_unpack_1__source_iter = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_listcontraction$tuple_unpack_1__source_iter;

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


        type_description_2 = "ooo";
        exception_lineno = 113;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_listcontraction$tuple_unpack_1__element_1;
        tmp_listcontraction$tuple_unpack_1__element_1 = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_listcontraction$tuple_unpack_1__source_iter;

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


        type_description_2 = "ooo";
        exception_lineno = 113;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_listcontraction$tuple_unpack_1__element_2;
        tmp_listcontraction$tuple_unpack_1__element_2 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_listcontraction$tuple_unpack_1__source_iter;

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

                type_description_2 = "ooo";
                exception_lineno = 113;
                goto try_except_handler_5;
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

        type_description_2 = "ooo";
        exception_lineno = 113;
        goto try_except_handler_5;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__source_iter );
    tmp_listcontraction$tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_1 );
    tmp_listcontraction$tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_2 );
    tmp_listcontraction$tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__source_iter );
    tmp_listcontraction$tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_9 = tmp_listcontraction$tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = outline_0_var_k;
        outline_0_var_k = tmp_assign_source_9;
        Py_INCREF( outline_0_var_k );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_1 );
    tmp_listcontraction$tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_10 = tmp_listcontraction$tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = outline_0_var_v;
        outline_0_var_v = tmp_assign_source_10;
        Py_INCREF( outline_0_var_v );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_2 );
    tmp_listcontraction$tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_1 );
    tmp_listcontraction$tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_2 );
    tmp_listcontraction$tuple_unpack_1__element_2 = NULL;

    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_append_value_1 = PyTuple_New( 2 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_str );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_str );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_append_value_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_2 = outline_0_var_k;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_append_value_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "k" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }

    frame_299372a89e871f82a7e45e5a3b502d89_2->m_frame.f_lineno = 113;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_append_value_1 );

        exception_lineno = 113;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_1 );
    tmp_isinstance_inst_2 = outline_0_var_v;

    if ( tmp_isinstance_inst_2 == NULL )
    {
        Py_DECREF( tmp_append_value_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "v" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }

    tmp_isinstance_cls_2 = const_tuple_type_list_type_tuple_tuple;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_append_value_1 );

        exception_lineno = 114;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    // Tried code:
    tmp_iter_arg_3 = outline_0_var_v;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "v" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_2 = "ooo";
        goto try_except_handler_6;
    }

    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_2 = "ooo";
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_listcontraction$listcontraction_1__$0;
        tmp_listcontraction$listcontraction_1__$0 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = PyList_New( 0 );
    {
        PyObject *old = tmp_listcontraction$listcontraction_1__contraction;
        tmp_listcontraction$listcontraction_1__contraction = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    MAKE_OR_REUSE_FRAME( cache_frame_2570132bd3ca9393b54858c8ea287b2d_3, codeobj_2570132bd3ca9393b54858c8ea287b2d, module_django$utils$http, sizeof(void *)+sizeof(void *) );
    frame_2570132bd3ca9393b54858c8ea287b2d_3 = cache_frame_2570132bd3ca9393b54858c8ea287b2d_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2570132bd3ca9393b54858c8ea287b2d_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2570132bd3ca9393b54858c8ea287b2d_3 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_listcontraction$listcontraction_1__$0;

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
            type_description_3 = "oo";
            exception_lineno = 114;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_listcontraction$listcontraction_1__iter_value_0;
        tmp_listcontraction$listcontraction_1__iter_value_0 = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_listcontraction$listcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_14 );
    {
        PyObject *old = outline_1_var_i;
        outline_1_var_i = tmp_assign_source_14;
        Py_INCREF( outline_1_var_i );
        Py_XDECREF( old );
    }

    tmp_append_list_2 = tmp_listcontraction$listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_2 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_str );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_str );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_3 = "oo";
        goto try_except_handler_7;
    }

    tmp_args_element_name_3 = outline_1_var_i;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_2570132bd3ca9393b54858c8ea287b2d_3->m_frame.f_lineno = 114;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_3 = "oo";
        goto try_except_handler_7;
    }
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_3 = "oo";
        goto try_except_handler_7;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_3 = "oo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_2 = tmp_listcontraction$listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_5_urlencode );
    return NULL;
    // Return handler code:
    try_return_handler_7:;
    Py_XDECREF( tmp_listcontraction$listcontraction_1__$0 );
    tmp_listcontraction$listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction$listcontraction_1__contraction );
    tmp_listcontraction$listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction$listcontraction_1__iter_value_0 );
    tmp_listcontraction$listcontraction_1__iter_value_0 = NULL;

    goto frame_return_exit_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_listcontraction$listcontraction_1__$0 );
    tmp_listcontraction$listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction$listcontraction_1__contraction );
    tmp_listcontraction$listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction$listcontraction_1__iter_value_0 );
    tmp_listcontraction$listcontraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_3;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2570132bd3ca9393b54858c8ea287b2d_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_3:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2570132bd3ca9393b54858c8ea287b2d_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_6;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2570132bd3ca9393b54858c8ea287b2d_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2570132bd3ca9393b54858c8ea287b2d_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2570132bd3ca9393b54858c8ea287b2d_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2570132bd3ca9393b54858c8ea287b2d_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2570132bd3ca9393b54858c8ea287b2d_3,
        type_description_3,
        outline_1_var_i,
        outline_0_var_v
    );


    // Release cached frame.
    if ( frame_2570132bd3ca9393b54858c8ea287b2d_3 == cache_frame_2570132bd3ca9393b54858c8ea287b2d_3 )
    {
        Py_DECREF( frame_2570132bd3ca9393b54858c8ea287b2d_3 );
    }
    cache_frame_2570132bd3ca9393b54858c8ea287b2d_3 = NULL;

    assertFrameObject( frame_2570132bd3ca9393b54858c8ea287b2d_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_2:;
    type_description_2 = "ooo";
    goto try_except_handler_6;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_5_urlencode );
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    Py_XDECREF( outline_1_var_i );
    outline_1_var_i = NULL;

    goto outline_result_2;
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

    Py_XDECREF( outline_1_var_i );
    outline_1_var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_5_urlencode );
    return NULL;
    outline_exception_2:;
    exception_lineno = 114;
    goto try_except_handler_3;
    outline_result_2:;
    tmp_tuple_element_1 = tmp_outline_return_value_2;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_str );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_str );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_append_value_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_4 = outline_0_var_v;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_append_value_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "v" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }

    frame_299372a89e871f82a7e45e5a3b502d89_2->m_frame.f_lineno = 114;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_append_value_1 );

        exception_lineno = 114;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }
    condexpr_end_1:;
    PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_1 );
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_5_urlencode );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_299372a89e871f82a7e45e5a3b502d89_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_299372a89e871f82a7e45e5a3b502d89_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_299372a89e871f82a7e45e5a3b502d89_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_299372a89e871f82a7e45e5a3b502d89_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_299372a89e871f82a7e45e5a3b502d89_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_299372a89e871f82a7e45e5a3b502d89_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_299372a89e871f82a7e45e5a3b502d89_2,
        type_description_2,
        outline_0_var_k,
        outline_0_var_v,
        par_query
    );


    // Release cached frame.
    if ( frame_299372a89e871f82a7e45e5a3b502d89_2 == cache_frame_299372a89e871f82a7e45e5a3b502d89_2 )
    {
        Py_DECREF( frame_299372a89e871f82a7e45e5a3b502d89_2 );
    }
    cache_frame_299372a89e871f82a7e45e5a3b502d89_2 = NULL;

    assertFrameObject( frame_299372a89e871f82a7e45e5a3b502d89_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_1:;
    type_description_1 = "oo";
    goto try_except_handler_2;
    skip_nested_handling_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_5_urlencode );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_k );
    outline_0_var_k = NULL;

    Py_XDECREF( outline_0_var_v );
    outline_0_var_v = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var_k );
    outline_0_var_k = NULL;

    Py_XDECREF( outline_0_var_v );
    outline_0_var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_5_urlencode );
    return NULL;
    outline_exception_1:;
    exception_lineno = 113;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_args_element_name_1 = tmp_outline_return_value_1;
    tmp_args_element_name_5 = par_doseq;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "doseq" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_eed299a30bd7927ba1425c828159c47a->m_frame.f_lineno = 112;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eed299a30bd7927ba1425c828159c47a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eed299a30bd7927ba1425c828159c47a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eed299a30bd7927ba1425c828159c47a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eed299a30bd7927ba1425c828159c47a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eed299a30bd7927ba1425c828159c47a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eed299a30bd7927ba1425c828159c47a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eed299a30bd7927ba1425c828159c47a,
        type_description_1,
        par_query,
        par_doseq
    );


    // Release cached frame.
    if ( frame_eed299a30bd7927ba1425c828159c47a == cache_frame_eed299a30bd7927ba1425c828159c47a )
    {
        Py_DECREF( frame_eed299a30bd7927ba1425c828159c47a );
    }
    cache_frame_eed299a30bd7927ba1425c828159c47a = NULL;

    assertFrameObject( frame_eed299a30bd7927ba1425c828159c47a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_5_urlencode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_query );
    par_query = NULL;

    Py_XDECREF( par_doseq );
    par_doseq = NULL;

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

    Py_XDECREF( par_query );
    par_query = NULL;

    Py_XDECREF( par_doseq );
    par_doseq = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_5_urlencode );
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


static PyObject *impl_django$utils$http$$$function_6_cookie_date( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_epoch_seconds = python_pars[ 0 ];
    PyObject *var_rfcdate = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_68e65f08e9f392be1aa478286e1c2c3c = NULL;

    struct Nuitka_FrameObject *frame_68e65f08e9f392be1aa478286e1c2c3c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_68e65f08e9f392be1aa478286e1c2c3c, codeobj_68e65f08e9f392be1aa478286e1c2c3c, module_django$utils$http, sizeof(void *)+sizeof(void *) );
    frame_68e65f08e9f392be1aa478286e1c2c3c = cache_frame_68e65f08e9f392be1aa478286e1c2c3c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_68e65f08e9f392be1aa478286e1c2c3c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_68e65f08e9f392be1aa478286e1c2c3c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_formatdate );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_formatdate );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "formatdate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_epoch_seconds;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_68e65f08e9f392be1aa478286e1c2c3c->m_frame.f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_rfcdate == NULL );
    var_rfcdate = tmp_assign_source_1;

    tmp_left_name_1 = const_str_digest_4db886a8686cafc8ca1bbe8b0de4410b;
    tmp_right_name_1 = PyTuple_New( 3 );
    tmp_subscribed_name_1 = var_rfcdate;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_slice_none_int_pos_7_none;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 130;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_subscribed_name_2 = var_rfcdate;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rfcdate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_slice_int_pos_8_int_pos_11_none;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 130;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_subscribed_name_3 = var_rfcdate;

    if ( tmp_subscribed_name_3 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rfcdate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_3 = const_slice_int_pos_12_int_pos_25_none;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 130;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_68e65f08e9f392be1aa478286e1c2c3c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_68e65f08e9f392be1aa478286e1c2c3c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_68e65f08e9f392be1aa478286e1c2c3c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_68e65f08e9f392be1aa478286e1c2c3c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_68e65f08e9f392be1aa478286e1c2c3c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_68e65f08e9f392be1aa478286e1c2c3c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_68e65f08e9f392be1aa478286e1c2c3c,
        type_description_1,
        par_epoch_seconds,
        var_rfcdate
    );


    // Release cached frame.
    if ( frame_68e65f08e9f392be1aa478286e1c2c3c == cache_frame_68e65f08e9f392be1aa478286e1c2c3c )
    {
        Py_DECREF( frame_68e65f08e9f392be1aa478286e1c2c3c );
    }
    cache_frame_68e65f08e9f392be1aa478286e1c2c3c = NULL;

    assertFrameObject( frame_68e65f08e9f392be1aa478286e1c2c3c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_6_cookie_date );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_epoch_seconds );
    par_epoch_seconds = NULL;

    Py_XDECREF( var_rfcdate );
    var_rfcdate = NULL;

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

    Py_XDECREF( par_epoch_seconds );
    par_epoch_seconds = NULL;

    Py_XDECREF( var_rfcdate );
    var_rfcdate = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_6_cookie_date );
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


static PyObject *impl_django$utils$http$$$function_7_http_date( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_epoch_seconds = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_db66317084e293ceeafea0cfb89bb278 = NULL;

    struct Nuitka_FrameObject *frame_db66317084e293ceeafea0cfb89bb278;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_db66317084e293ceeafea0cfb89bb278, codeobj_db66317084e293ceeafea0cfb89bb278, module_django$utils$http, sizeof(void *) );
    frame_db66317084e293ceeafea0cfb89bb278 = cache_frame_db66317084e293ceeafea0cfb89bb278;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_db66317084e293ceeafea0cfb89bb278 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_db66317084e293ceeafea0cfb89bb278 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_formatdate );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_formatdate );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "formatdate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_epoch_seconds;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_ad22aad091e4a1615cc75ade15d93cea );
    frame_db66317084e293ceeafea0cfb89bb278->m_frame.f_lineno = 144;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_db66317084e293ceeafea0cfb89bb278 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_db66317084e293ceeafea0cfb89bb278 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_db66317084e293ceeafea0cfb89bb278 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_db66317084e293ceeafea0cfb89bb278, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_db66317084e293ceeafea0cfb89bb278->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_db66317084e293ceeafea0cfb89bb278, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_db66317084e293ceeafea0cfb89bb278,
        type_description_1,
        par_epoch_seconds
    );


    // Release cached frame.
    if ( frame_db66317084e293ceeafea0cfb89bb278 == cache_frame_db66317084e293ceeafea0cfb89bb278 )
    {
        Py_DECREF( frame_db66317084e293ceeafea0cfb89bb278 );
    }
    cache_frame_db66317084e293ceeafea0cfb89bb278 = NULL;

    assertFrameObject( frame_db66317084e293ceeafea0cfb89bb278 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_7_http_date );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_epoch_seconds );
    par_epoch_seconds = NULL;

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

    Py_XDECREF( par_epoch_seconds );
    par_epoch_seconds = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_7_http_date );
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


static PyObject *impl_django$utils$http$$$function_8_parse_http_date( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_date = python_pars[ 0 ];
    PyObject *var_regex = NULL;
    PyObject *var_m = NULL;
    PyObject *var_year = NULL;
    PyObject *var_month = NULL;
    PyObject *var_day = NULL;
    PyObject *var_hour = NULL;
    PyObject *var_min = NULL;
    PyObject *var_sec = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_for_loop_1__break_indicator = NULL;
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
    PyObject *tmp_called_name_5;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
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
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_int_arg_3;
    PyObject *tmp_int_arg_4;
    PyObject *tmp_int_arg_5;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_61e47f539c4117aaebe775fe9da697d8 = NULL;

    struct Nuitka_FrameObject *frame_61e47f539c4117aaebe775fe9da697d8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_False;
    assert( tmp_for_loop_1__break_indicator == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_for_loop_1__break_indicator = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_61e47f539c4117aaebe775fe9da697d8, codeobj_61e47f539c4117aaebe775fe9da697d8, module_django$utils$http, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_61e47f539c4117aaebe775fe9da697d8 = cache_frame_61e47f539c4117aaebe775fe9da697d8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_61e47f539c4117aaebe775fe9da697d8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_61e47f539c4117aaebe775fe9da697d8 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_iter_arg_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_RFC1123_DATE );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RFC1123_DATE );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RFC1123_DATE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_RFC850_DATE );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RFC850_DATE );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RFC850_DATE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_ASCTIME_DATE );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ASCTIME_DATE );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ASCTIME_DATE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_iter_arg_1, 2, tmp_tuple_element_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_3 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 159;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
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

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 159;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
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
    tmp_assign_source_4 = Py_True;
    {
        PyObject *old = tmp_for_loop_1__break_indicator;
        tmp_for_loop_1__break_indicator = tmp_assign_source_4;
        Py_INCREF( tmp_for_loop_1__break_indicator );
        Py_XDECREF( old );
    }

    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_regex;
        var_regex = tmp_assign_source_5;
        Py_INCREF( var_regex );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = var_regex;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_match );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = par_date;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "date" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }

    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 160;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_m;
        var_m = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_m;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_compare_left_3 = tmp_for_loop_1__break_indicator;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_True;
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_1 = const_str_digest_10343d2247785c4eda75e37feaeff91c;
    tmp_right_name_1 = par_date;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "date" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 164;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 164;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooo";
    goto try_except_handler_2;
    branch_no_3:;
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

    Py_XDECREF( tmp_for_loop_1__break_indicator );
    tmp_for_loop_1__break_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__break_indicator );
    tmp_for_loop_1__break_indicator = NULL;

    // Tried code:
    tmp_called_instance_1 = var_m;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 166;
    tmp_int_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_str_plain_year_tuple, 0 ) );

    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    tmp_assign_source_7 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    assert( var_year == NULL );
    var_year = tmp_assign_source_7;

    tmp_compare_left_4 = var_year;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = const_int_pos_100;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_compare_left_5 = var_year;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "year" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    tmp_compare_right_5 = const_int_pos_70;
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    if ( tmp_cmp_Lt_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_2 = var_year;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "year" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 169;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    tmp_right_name_2 = const_int_pos_2000;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_8 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    var_year = tmp_assign_source_8;

    goto branch_end_5;
    branch_no_5:;
    tmp_left_name_3 = var_year;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "year" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    tmp_right_name_3 = const_int_pos_1900;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_9 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    var_year = tmp_assign_source_9;

    branch_end_5:;
    branch_no_4:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_MONTHS );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MONTHS );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MONTHS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_index );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    tmp_called_instance_3 = var_m;

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 172;
    tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_str_plain_mon_tuple, 0 ) );

    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 172;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 172;
    tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 172;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 172;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    tmp_right_name_4 = const_int_pos_1;
    tmp_assign_source_10 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    assert( var_month == NULL );
    var_month = tmp_assign_source_10;

    tmp_called_instance_4 = var_m;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 173;
    tmp_int_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_str_plain_day_tuple, 0 ) );

    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    tmp_assign_source_11 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    assert( var_day == NULL );
    var_day = tmp_assign_source_11;

    tmp_called_instance_5 = var_m;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 174;
    tmp_int_arg_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_str_plain_hour_tuple, 0 ) );

    if ( tmp_int_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    tmp_assign_source_12 = PyNumber_Int( tmp_int_arg_3 );
    Py_DECREF( tmp_int_arg_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    assert( var_hour == NULL );
    var_hour = tmp_assign_source_12;

    tmp_called_instance_6 = var_m;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 175;
    tmp_int_arg_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_str_plain_min_tuple, 0 ) );

    if ( tmp_int_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    tmp_assign_source_13 = PyNumber_Int( tmp_int_arg_4 );
    Py_DECREF( tmp_int_arg_4 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    assert( var_min == NULL );
    var_min = tmp_assign_source_13;

    tmp_called_instance_7 = var_m;

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 176;
    tmp_int_arg_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_str_plain_sec_tuple, 0 ) );

    if ( tmp_int_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    tmp_assign_source_14 = PyNumber_Int( tmp_int_arg_5 );
    Py_DECREF( tmp_int_arg_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    assert( var_sec == NULL );
    var_sec = tmp_assign_source_14;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_datetime );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    tmp_args_element_name_3 = var_year;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "year" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_4 = var_month;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "month" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_5 = var_day;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "day" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_6 = var_hour;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hour" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_7 = var_min;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "min" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_8 = var_sec;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sec" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_15;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_calendar );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_calendar );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "calendar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_timegm );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    tmp_called_instance_8 = var_result;

    if ( tmp_called_instance_8 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 178;
    tmp_args_element_name_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_utctimetuple );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 178;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 178;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_8_parse_http_date );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_61e47f539c4117aaebe775fe9da697d8, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_61e47f539c4117aaebe775fe9da697d8, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    tmp_compare_left_6 = PyThreadState_GET()->exc_type;
    tmp_compare_right_6 = PyExc_Exception;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_reraise );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }
    tmp_args_element_name_10 = PyExc_ValueError;
    tmp_left_name_5 = const_str_digest_c96d551f4dfdd60c4e7d2896e25f9bbe;
    tmp_right_name_5 = par_date;

    if ( tmp_right_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "date" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }

    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 180;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }
    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 180;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_args_element_name_11 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_2 );
    assert( tmp_args_element_name_11 != NULL );
    tmp_called_instance_9 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_called_instance_9 == NULL ))
    {
        tmp_called_instance_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_called_instance_9 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }

    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 180;
    tmp_subscribed_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_exc_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 180;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }
    tmp_subscript_name_1 = const_int_pos_2;
    tmp_args_element_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 180;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }
    frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = 180;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_11 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 165;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_61e47f539c4117aaebe775fe9da697d8->m_frame) frame_61e47f539c4117aaebe775fe9da697d8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooo";
    goto try_except_handler_6;
    branch_end_6:;
    goto try_end_4;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_8_parse_http_date );
    return NULL;
    // End of try:
    try_end_5:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_61e47f539c4117aaebe775fe9da697d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_61e47f539c4117aaebe775fe9da697d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_61e47f539c4117aaebe775fe9da697d8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_61e47f539c4117aaebe775fe9da697d8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_61e47f539c4117aaebe775fe9da697d8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_61e47f539c4117aaebe775fe9da697d8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_61e47f539c4117aaebe775fe9da697d8,
        type_description_1,
        par_date,
        var_regex,
        var_m,
        var_year,
        var_month,
        var_day,
        var_hour,
        var_min,
        var_sec,
        var_result
    );


    // Release cached frame.
    if ( frame_61e47f539c4117aaebe775fe9da697d8 == cache_frame_61e47f539c4117aaebe775fe9da697d8 )
    {
        Py_DECREF( frame_61e47f539c4117aaebe775fe9da697d8 );
    }
    cache_frame_61e47f539c4117aaebe775fe9da697d8 = NULL;

    assertFrameObject( frame_61e47f539c4117aaebe775fe9da697d8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_8_parse_http_date );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_date );
    par_date = NULL;

    Py_XDECREF( var_regex );
    var_regex = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_year );
    var_year = NULL;

    Py_XDECREF( var_month );
    var_month = NULL;

    Py_XDECREF( var_day );
    var_day = NULL;

    Py_XDECREF( var_hour );
    var_hour = NULL;

    Py_XDECREF( var_min );
    var_min = NULL;

    Py_XDECREF( var_sec );
    var_sec = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    Py_XDECREF( par_date );
    par_date = NULL;

    Py_XDECREF( var_regex );
    var_regex = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_year );
    var_year = NULL;

    Py_XDECREF( var_month );
    var_month = NULL;

    Py_XDECREF( var_day );
    var_day = NULL;

    Py_XDECREF( var_hour );
    var_hour = NULL;

    Py_XDECREF( var_min );
    var_min = NULL;

    Py_XDECREF( var_sec );
    var_sec = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_8_parse_http_date );
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


static PyObject *impl_django$utils$http$$$function_9_parse_http_date_safe( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_date = python_pars[ 0 ];
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_93224d0ffab733ff4168d7cfa53597b2 = NULL;

    struct Nuitka_FrameObject *frame_93224d0ffab733ff4168d7cfa53597b2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_93224d0ffab733ff4168d7cfa53597b2, codeobj_93224d0ffab733ff4168d7cfa53597b2, module_django$utils$http, sizeof(void *) );
    frame_93224d0ffab733ff4168d7cfa53597b2 = cache_frame_93224d0ffab733ff4168d7cfa53597b2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_93224d0ffab733ff4168d7cfa53597b2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_93224d0ffab733ff4168d7cfa53597b2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_parse_http_date );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_http_date );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "parse_http_date" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "o";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_date;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_93224d0ffab733ff4168d7cfa53597b2->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_9_parse_http_date_safe );
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_93224d0ffab733ff4168d7cfa53597b2, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_93224d0ffab733ff4168d7cfa53597b2, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_Exception;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "o";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 187;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_93224d0ffab733ff4168d7cfa53597b2->m_frame) frame_93224d0ffab733ff4168d7cfa53597b2->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_3;
    branch_no_1:;
    goto try_end_1;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_9_parse_http_date_safe );
    return NULL;
    // End of try:
    try_end_2:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_93224d0ffab733ff4168d7cfa53597b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_93224d0ffab733ff4168d7cfa53597b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_93224d0ffab733ff4168d7cfa53597b2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_93224d0ffab733ff4168d7cfa53597b2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_93224d0ffab733ff4168d7cfa53597b2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_93224d0ffab733ff4168d7cfa53597b2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_93224d0ffab733ff4168d7cfa53597b2,
        type_description_1,
        par_date
    );


    // Release cached frame.
    if ( frame_93224d0ffab733ff4168d7cfa53597b2 == cache_frame_93224d0ffab733ff4168d7cfa53597b2 )
    {
        Py_DECREF( frame_93224d0ffab733ff4168d7cfa53597b2 );
    }
    cache_frame_93224d0ffab733ff4168d7cfa53597b2 = NULL;

    assertFrameObject( frame_93224d0ffab733ff4168d7cfa53597b2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_9_parse_http_date_safe );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_date );
    par_date = NULL;

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

    Py_XDECREF( par_date );
    par_date = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_9_parse_http_date_safe );
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


static PyObject *impl_django$utils$http$$$function_10_base36_to_int( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *var_value = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_base_name_1;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_b76b8be11e8e2441ce4490fe05a77db7 = NULL;

    struct Nuitka_FrameObject *frame_b76b8be11e8e2441ce4490fe05a77db7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b76b8be11e8e2441ce4490fe05a77db7, codeobj_b76b8be11e8e2441ce4490fe05a77db7, module_django$utils$http, sizeof(void *)+sizeof(void *) );
    frame_b76b8be11e8e2441ce4490fe05a77db7 = cache_frame_b76b8be11e8e2441ce4490fe05a77db7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b76b8be11e8e2441ce4490fe05a77db7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b76b8be11e8e2441ce4490fe05a77db7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_len_arg_1 = par_s;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_13;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 203;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_29f60848dc68f2b7f80a717931ac4fce;
    frame_b76b8be11e8e2441ce4490fe05a77db7->m_frame.f_lineno = 204;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 204;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_value_name_1 = par_s;

    if ( tmp_value_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_base_name_1 = const_int_pos_36;
    tmp_assign_source_1 = TO_INT2( tmp_value_name_1, tmp_base_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_value == NULL );
    var_value = tmp_assign_source_1;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 208;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PY2 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 208;
        type_description_1 = "oo";
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
    tmp_compexpr_left_1 = var_value;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_maxint );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
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

        exception_lineno = 208;
        type_description_1 = "oo";
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
    tmp_make_exception_arg_2 = const_str_digest_29f60848dc68f2b7f80a717931ac4fce;
    frame_b76b8be11e8e2441ce4490fe05a77db7->m_frame.f_lineno = 209;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 209;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_return_value = var_value;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b76b8be11e8e2441ce4490fe05a77db7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b76b8be11e8e2441ce4490fe05a77db7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b76b8be11e8e2441ce4490fe05a77db7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b76b8be11e8e2441ce4490fe05a77db7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b76b8be11e8e2441ce4490fe05a77db7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b76b8be11e8e2441ce4490fe05a77db7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b76b8be11e8e2441ce4490fe05a77db7,
        type_description_1,
        par_s,
        var_value
    );


    // Release cached frame.
    if ( frame_b76b8be11e8e2441ce4490fe05a77db7 == cache_frame_b76b8be11e8e2441ce4490fe05a77db7 )
    {
        Py_DECREF( frame_b76b8be11e8e2441ce4490fe05a77db7 );
    }
    cache_frame_b76b8be11e8e2441ce4490fe05a77db7 = NULL;

    assertFrameObject( frame_b76b8be11e8e2441ce4490fe05a77db7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_10_base36_to_int );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

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

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_10_base36_to_int );
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


static PyObject *impl_django$utils$http$$$function_11_int_to_base36( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    PyObject *var_char_set = NULL;
    PyObject *var_b36 = NULL;
    PyObject *var_n = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_1bfd0d4959b6e8cb1da148052f6b1f04 = NULL;

    struct Nuitka_FrameObject *frame_1bfd0d4959b6e8cb1da148052f6b1f04;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_plain_0123456789abcdefghijklmnopqrstuvwxyz;
    assert( var_char_set == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_char_set = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1bfd0d4959b6e8cb1da148052f6b1f04, codeobj_1bfd0d4959b6e8cb1da148052f6b1f04, module_django$utils$http, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1bfd0d4959b6e8cb1da148052f6b1f04 = cache_frame_1bfd0d4959b6e8cb1da148052f6b1f04;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1bfd0d4959b6e8cb1da148052f6b1f04 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1bfd0d4959b6e8cb1da148052f6b1f04 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_i;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_384042440d871d1140927410db194e0f;
    frame_1bfd0d4959b6e8cb1da148052f6b1f04->m_frame.f_lineno = 219;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 219;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 220;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PY2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 220;
        type_description_1 = "oooo";
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
    tmp_isinstance_inst_1 = par_i;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_integer_types );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_2 = const_str_digest_e1b8a583808a6e7657307decd83fd8a3;
    frame_1bfd0d4959b6e8cb1da148052f6b1f04->m_frame.f_lineno = 222;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 222;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_compare_left_2 = par_i;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_maxint );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 223;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_3 = const_str_digest_e8b517682243760d5b5b3cfe5d136758;
    frame_1bfd0d4959b6e8cb1da148052f6b1f04->m_frame.f_lineno = 224;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 224;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    branch_no_2:;
    tmp_compare_left_3 = par_i;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_int_pos_36;
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_subscribed_name_1 = var_char_set;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "char_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = par_i;

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_5:;
    tmp_assign_source_2 = const_str_empty;
    assert( var_b36 == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_b36 = tmp_assign_source_2;

    loop_start_1:;
    tmp_compare_left_4 = par_i;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = const_int_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    goto loop_end_1;
    branch_no_6:;
    // Tried code:
    tmp_left_name_1 = par_i;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_right_name_1 = const_int_pos_36;
    tmp_iter_arg_1 = BUILTIN_DIVMOD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_4 == NULL )
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


        type_description_1 = "oooo";
        exception_lineno = 229;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "oooo";
        exception_lineno = 229;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                type_description_1 = "oooo";
                exception_lineno = 229;
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

        type_description_1 = "oooo";
        exception_lineno = 229;
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

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = par_i;
        par_i = tmp_assign_source_6;
        Py_INCREF( par_i );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_n;
        var_n = tmp_assign_source_7;
        Py_INCREF( var_n );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_subscribed_name_2 = var_char_set;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "char_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = var_n;

    if ( tmp_subscript_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = var_b36;

    if ( tmp_right_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b36" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_8 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_b36;
        var_b36 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = var_b36;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b36" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1bfd0d4959b6e8cb1da148052f6b1f04 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1bfd0d4959b6e8cb1da148052f6b1f04 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1bfd0d4959b6e8cb1da148052f6b1f04 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1bfd0d4959b6e8cb1da148052f6b1f04, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1bfd0d4959b6e8cb1da148052f6b1f04->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1bfd0d4959b6e8cb1da148052f6b1f04, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1bfd0d4959b6e8cb1da148052f6b1f04,
        type_description_1,
        par_i,
        var_char_set,
        var_b36,
        var_n
    );


    // Release cached frame.
    if ( frame_1bfd0d4959b6e8cb1da148052f6b1f04 == cache_frame_1bfd0d4959b6e8cb1da148052f6b1f04 )
    {
        Py_DECREF( frame_1bfd0d4959b6e8cb1da148052f6b1f04 );
    }
    cache_frame_1bfd0d4959b6e8cb1da148052f6b1f04 = NULL;

    assertFrameObject( frame_1bfd0d4959b6e8cb1da148052f6b1f04 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_11_int_to_base36 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_i );
    par_i = NULL;

    Py_XDECREF( var_char_set );
    var_char_set = NULL;

    Py_XDECREF( var_b36 );
    var_b36 = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

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

    Py_XDECREF( par_i );
    par_i = NULL;

    Py_XDECREF( var_char_set );
    var_char_set = NULL;

    Py_XDECREF( var_b36 );
    var_b36 = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_11_int_to_base36 );
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


static PyObject *impl_django$utils$http$$$function_12_urlsafe_base64_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_6e0274b3f7442b99d4a38e23064c9c0c = NULL;

    struct Nuitka_FrameObject *frame_6e0274b3f7442b99d4a38e23064c9c0c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6e0274b3f7442b99d4a38e23064c9c0c, codeobj_6e0274b3f7442b99d4a38e23064c9c0c, module_django$utils$http, sizeof(void *) );
    frame_6e0274b3f7442b99d4a38e23064c9c0c = cache_frame_6e0274b3f7442b99d4a38e23064c9c0c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6e0274b3f7442b99d4a38e23064c9c0c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6e0274b3f7442b99d4a38e23064c9c0c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_base64 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_urlsafe_b64encode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_s;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_6e0274b3f7442b99d4a38e23064c9c0c->m_frame.f_lineno = 239;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_6e0274b3f7442b99d4a38e23064c9c0c->m_frame.f_lineno = 239;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_rstrip, &PyTuple_GET_ITEM( const_tuple_bytes_digest_da5a556911cc5a9933097ff137a0e1d3_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e0274b3f7442b99d4a38e23064c9c0c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e0274b3f7442b99d4a38e23064c9c0c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e0274b3f7442b99d4a38e23064c9c0c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6e0274b3f7442b99d4a38e23064c9c0c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6e0274b3f7442b99d4a38e23064c9c0c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6e0274b3f7442b99d4a38e23064c9c0c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6e0274b3f7442b99d4a38e23064c9c0c,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_6e0274b3f7442b99d4a38e23064c9c0c == cache_frame_6e0274b3f7442b99d4a38e23064c9c0c )
    {
        Py_DECREF( frame_6e0274b3f7442b99d4a38e23064c9c0c );
    }
    cache_frame_6e0274b3f7442b99d4a38e23064c9c0c = NULL;

    assertFrameObject( frame_6e0274b3f7442b99d4a38e23064c9c0c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_12_urlsafe_base64_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

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

    Py_XDECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_12_urlsafe_base64_encode );
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


static PyObject *impl_django$utils$http$$$function_13_urlsafe_base64_decode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *var_e = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_b6025f357d99fd25df5b1efe7af14a7e = NULL;

    struct Nuitka_FrameObject *frame_b6025f357d99fd25df5b1efe7af14a7e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b6025f357d99fd25df5b1efe7af14a7e, codeobj_b6025f357d99fd25df5b1efe7af14a7e, module_django$utils$http, sizeof(void *)+sizeof(void *) );
    frame_b6025f357d99fd25df5b1efe7af14a7e = cache_frame_b6025f357d99fd25df5b1efe7af14a7e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b6025f357d99fd25df5b1efe7af14a7e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b6025f357d99fd25df5b1efe7af14a7e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_bytes );

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

        exception_lineno = 247;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_s;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_b6025f357d99fd25df5b1efe7af14a7e->m_frame.f_lineno = 247;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_s;
        par_s = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_base64 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_urlsafe_b64decode );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_source_name_2 = par_s;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ljust );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 249;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_len_arg_1 = par_s;

    if ( tmp_len_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 249;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_len_arg_2 = par_s;

    if ( tmp_len_arg_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 249;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_right_name_2 = const_int_pos_4;
    tmp_right_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 249;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 249;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = const_bytes_chr_61;
    frame_b6025f357d99fd25df5b1efe7af14a7e->m_frame.f_lineno = 249;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 249;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    frame_b6025f357d99fd25df5b1efe7af14a7e->m_frame.f_lineno = 249;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_13_urlsafe_base64_decode );
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_b6025f357d99fd25df5b1efe7af14a7e, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_b6025f357d99fd25df5b1efe7af14a7e, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_LookupError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_BinasciiError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BinasciiError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_compare_right_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BinasciiError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 250;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 250;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_2 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_e = tmp_assign_source_2;

    // Tried code:
    tmp_make_exception_arg_1 = var_e;

    CHECK_OBJECT( tmp_make_exception_arg_1 );
    frame_b6025f357d99fd25df5b1efe7af14a7e->m_frame.f_lineno = 251;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 251;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto try_except_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_13_urlsafe_base64_decode );
    return NULL;
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

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 248;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b6025f357d99fd25df5b1efe7af14a7e->m_frame) frame_b6025f357d99fd25df5b1efe7af14a7e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_13_urlsafe_base64_decode );
    return NULL;
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
    // End of try:
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b6025f357d99fd25df5b1efe7af14a7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_b6025f357d99fd25df5b1efe7af14a7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b6025f357d99fd25df5b1efe7af14a7e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b6025f357d99fd25df5b1efe7af14a7e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b6025f357d99fd25df5b1efe7af14a7e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b6025f357d99fd25df5b1efe7af14a7e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b6025f357d99fd25df5b1efe7af14a7e,
        type_description_1,
        par_s,
        var_e
    );


    // Release cached frame.
    if ( frame_b6025f357d99fd25df5b1efe7af14a7e == cache_frame_b6025f357d99fd25df5b1efe7af14a7e )
    {
        Py_DECREF( frame_b6025f357d99fd25df5b1efe7af14a7e );
    }
    cache_frame_b6025f357d99fd25df5b1efe7af14a7e = NULL;

    assertFrameObject( frame_b6025f357d99fd25df5b1efe7af14a7e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_13_urlsafe_base64_decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

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

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_13_urlsafe_base64_decode );
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


static PyObject *impl_django$utils$http$$$function_14_parse_etags( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_etag_str = python_pars[ 0 ];
    PyObject *var_etag_matches = NULL;
    PyObject *outline_0_var_match = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_930de4ae3077d7a207af789654d1f46c_2 = NULL;

    struct Nuitka_FrameObject *frame_930de4ae3077d7a207af789654d1f46c_2;

    static struct Nuitka_FrameObject *cache_frame_591e65182f4da9df27217cbd19684463 = NULL;

    struct Nuitka_FrameObject *frame_591e65182f4da9df27217cbd19684463;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_591e65182f4da9df27217cbd19684463, codeobj_591e65182f4da9df27217cbd19684463, module_django$utils$http, sizeof(void *)+sizeof(void *) );
    frame_591e65182f4da9df27217cbd19684463 = cache_frame_591e65182f4da9df27217cbd19684463;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_591e65182f4da9df27217cbd19684463 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_591e65182f4da9df27217cbd19684463 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_etag_str;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_591e65182f4da9df27217cbd19684463->m_frame.f_lineno = 260;
    tmp_compare_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_strip );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_chr_42;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 260;
        type_description_1 = "oo";
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
    tmp_return_value = LIST_COPY( const_list_str_chr_42_list );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_2 = par_etag_str;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "etag_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_591e65182f4da9df27217cbd19684463->m_frame.f_lineno = 264;
    tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_2;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        django$utils$http$$$function_14_parse_etags$$$genexpr_1_genexpr_context,
        module_django$utils$http,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_c727a8fd1f3fc276c3ce5de997eee608,
#endif
        codeobj_b239dc9c303a950cd97fc778d59e1b7b,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 1 ); 


    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_14_parse_etags );
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
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_14_parse_etags );
    return NULL;
    outline_result_1:;
    tmp_assign_source_1 = tmp_outline_return_value_1;
    assert( var_etag_matches == NULL );
    var_etag_matches = tmp_assign_source_1;

    // Tried code:
    tmp_iter_arg_2 = var_etag_matches;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    assert( tmp_listcontraction_1__$0 == NULL );
    tmp_listcontraction_1__$0 = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( tmp_listcontraction_1__contraction == NULL );
    tmp_listcontraction_1__contraction = tmp_assign_source_4;

    MAKE_OR_REUSE_FRAME( cache_frame_930de4ae3077d7a207af789654d1f46c_2, codeobj_930de4ae3077d7a207af789654d1f46c, module_django$utils$http, sizeof(void *)+sizeof(void *) );
    frame_930de4ae3077d7a207af789654d1f46c_2 = cache_frame_930de4ae3077d7a207af789654d1f46c_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_930de4ae3077d7a207af789654d1f46c_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_930de4ae3077d7a207af789654d1f46c_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_listcontraction_1__$0;

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
            type_description_2 = "oo";
            exception_lineno = 265;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_listcontraction_1__iter_value_0;
        tmp_listcontraction_1__iter_value_0 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_listcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = outline_0_var_match;
        outline_0_var_match = tmp_assign_source_6;
        Py_INCREF( outline_0_var_match );
        Py_XDECREF( old );
    }

    tmp_cond_value_1 = outline_0_var_match;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        type_description_2 = "oo";
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_called_instance_3 = outline_0_var_match;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_930de4ae3077d7a207af789654d1f46c_2->m_frame.f_lineno = 265;
    tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        type_description_2 = "oo";
        goto try_except_handler_4;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        type_description_2 = "oo";
        goto try_except_handler_4;
    }
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        type_description_2 = "oo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_2 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_14_parse_etags );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
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
    RESTORE_FRAME_EXCEPTION( frame_930de4ae3077d7a207af789654d1f46c_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_930de4ae3077d7a207af789654d1f46c_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_3;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_930de4ae3077d7a207af789654d1f46c_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_930de4ae3077d7a207af789654d1f46c_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_930de4ae3077d7a207af789654d1f46c_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_930de4ae3077d7a207af789654d1f46c_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_930de4ae3077d7a207af789654d1f46c_2,
        type_description_2,
        outline_0_var_match,
        var_etag_matches
    );


    // Release cached frame.
    if ( frame_930de4ae3077d7a207af789654d1f46c_2 == cache_frame_930de4ae3077d7a207af789654d1f46c_2 )
    {
        Py_DECREF( frame_930de4ae3077d7a207af789654d1f46c_2 );
    }
    cache_frame_930de4ae3077d7a207af789654d1f46c_2 = NULL;

    assertFrameObject( frame_930de4ae3077d7a207af789654d1f46c_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oo";
    goto try_except_handler_3;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_14_parse_etags );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF( outline_0_var_match );
    outline_0_var_match = NULL;

    goto outline_result_2;
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

    Py_XDECREF( outline_0_var_match );
    outline_0_var_match = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_14_parse_etags );
    return NULL;
    outline_exception_1:;
    exception_lineno = 265;
    goto frame_exception_exit_1;
    outline_result_2:;
    tmp_return_value = tmp_outline_return_value_2;
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_591e65182f4da9df27217cbd19684463 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_591e65182f4da9df27217cbd19684463 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_591e65182f4da9df27217cbd19684463 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_591e65182f4da9df27217cbd19684463, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_591e65182f4da9df27217cbd19684463->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_591e65182f4da9df27217cbd19684463, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_591e65182f4da9df27217cbd19684463,
        type_description_1,
        par_etag_str,
        var_etag_matches
    );


    // Release cached frame.
    if ( frame_591e65182f4da9df27217cbd19684463 == cache_frame_591e65182f4da9df27217cbd19684463 )
    {
        Py_DECREF( frame_591e65182f4da9df27217cbd19684463 );
    }
    cache_frame_591e65182f4da9df27217cbd19684463 = NULL;

    assertFrameObject( frame_591e65182f4da9df27217cbd19684463 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_14_parse_etags );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_etag_str );
    par_etag_str = NULL;

    Py_XDECREF( var_etag_matches );
    var_etag_matches = NULL;

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

    Py_XDECREF( par_etag_str );
    par_etag_str = NULL;

    Py_XDECREF( var_etag_matches );
    var_etag_matches = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_14_parse_etags );
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
struct django$utils$http$$$function_14_parse_etags$$$genexpr_1_genexpr_locals {
    PyObject *var_etag
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_source_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$utils$http$$$function_14_parse_etags$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void django$utils$http$$$function_14_parse_etags$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_etag = NULL;
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
    PyObject *tmp_called_instance_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_b239dc9c303a950cd97fc778d59e1b7b, module_django$utils$http, sizeof(void *)+sizeof(void *) );
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
            exception_lineno = 264;
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
        PyObject *old = var_etag;
        var_etag = tmp_assign_source_2;
        Py_INCREF( var_etag );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_ETAG_MATCH );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ETAG_MATCH );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ETAG_MATCH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        type_description_1 = "No";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_match );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    tmp_called_instance_1 = var_etag;

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "etag" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        type_description_1 = "No";
        goto try_except_handler_2;
    }

    generator->m_frame->m_frame.f_lineno = 264;
    tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_strip );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 264;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    generator->m_frame->m_frame.f_lineno = 264;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
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
            var_etag
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

    Py_XDECREF( var_etag );
    var_etag = NULL;

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

    Py_XDECREF( var_etag );
    var_etag = NULL;


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


static PyObject *impl_django$utils$http$$$function_15_quote_etag( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_etag_str = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_b5c06fb941a1fb8b23367a8a0af1dc5b = NULL;

    struct Nuitka_FrameObject *frame_b5c06fb941a1fb8b23367a8a0af1dc5b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b5c06fb941a1fb8b23367a8a0af1dc5b, codeobj_b5c06fb941a1fb8b23367a8a0af1dc5b, module_django$utils$http, sizeof(void *) );
    frame_b5c06fb941a1fb8b23367a8a0af1dc5b = cache_frame_b5c06fb941a1fb8b23367a8a0af1dc5b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b5c06fb941a1fb8b23367a8a0af1dc5b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b5c06fb941a1fb8b23367a8a0af1dc5b ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_ETAG_MATCH );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ETAG_MATCH );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ETAG_MATCH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_match );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_etag_str;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "etag_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_b5c06fb941a1fb8b23367a8a0af1dc5b->m_frame.f_lineno = 273;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 273;
        type_description_1 = "o";
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
    tmp_return_value = par_etag_str;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "etag_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_left_name_1 = const_str_digest_1e4616cb2877c002aa48d41e8b575b32;
    tmp_right_name_1 = par_etag_str;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "etag_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5c06fb941a1fb8b23367a8a0af1dc5b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5c06fb941a1fb8b23367a8a0af1dc5b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5c06fb941a1fb8b23367a8a0af1dc5b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b5c06fb941a1fb8b23367a8a0af1dc5b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b5c06fb941a1fb8b23367a8a0af1dc5b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b5c06fb941a1fb8b23367a8a0af1dc5b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b5c06fb941a1fb8b23367a8a0af1dc5b,
        type_description_1,
        par_etag_str
    );


    // Release cached frame.
    if ( frame_b5c06fb941a1fb8b23367a8a0af1dc5b == cache_frame_b5c06fb941a1fb8b23367a8a0af1dc5b )
    {
        Py_DECREF( frame_b5c06fb941a1fb8b23367a8a0af1dc5b );
    }
    cache_frame_b5c06fb941a1fb8b23367a8a0af1dc5b = NULL;

    assertFrameObject( frame_b5c06fb941a1fb8b23367a8a0af1dc5b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_15_quote_etag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_etag_str );
    par_etag_str = NULL;

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

    Py_XDECREF( par_etag_str );
    par_etag_str = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_15_quote_etag );
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


static PyObject *impl_django$utils$http$$$function_16_is_same_domain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_host = python_pars[ 0 ];
    PyObject *par_pattern = python_pars[ 1 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_065e74a1c571dc71cc37000474dd9afa = NULL;

    struct Nuitka_FrameObject *frame_065e74a1c571dc71cc37000474dd9afa;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_065e74a1c571dc71cc37000474dd9afa, codeobj_065e74a1c571dc71cc37000474dd9afa, module_django$utils$http, sizeof(void *)+sizeof(void *) );
    frame_065e74a1c571dc71cc37000474dd9afa = cache_frame_065e74a1c571dc71cc37000474dd9afa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_065e74a1c571dc71cc37000474dd9afa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_065e74a1c571dc71cc37000474dd9afa ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = par_pattern;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "oo";
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_instance_1 = par_pattern;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pattern" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 291;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_065e74a1c571dc71cc37000474dd9afa->m_frame.f_lineno = 291;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_pattern;
        par_pattern = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_1 = par_pattern;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_str_dot;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 293;
        type_description_1 = "oo";
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
    tmp_source_name_1 = par_host;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 293;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_endswith );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_pattern;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pattern" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 293;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_065e74a1c571dc71cc37000474dd9afa->m_frame.f_lineno = 293;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_or_left_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 293;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
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
    tmp_compexpr_left_2 = par_host;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 293;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = par_pattern;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pattern" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 293;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_slice_int_pos_1_none_none;
    tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_and_right_value_1 = tmp_or_left_value_2;
    or_end_2:;
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

        exception_lineno = 294;
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_compexpr_left_3 = par_pattern;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pattern" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_3 = par_host;

    if ( tmp_compexpr_right_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_return_value = tmp_or_left_value_1;
    or_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_065e74a1c571dc71cc37000474dd9afa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_065e74a1c571dc71cc37000474dd9afa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_065e74a1c571dc71cc37000474dd9afa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_065e74a1c571dc71cc37000474dd9afa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_065e74a1c571dc71cc37000474dd9afa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_065e74a1c571dc71cc37000474dd9afa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_065e74a1c571dc71cc37000474dd9afa,
        type_description_1,
        par_host,
        par_pattern
    );


    // Release cached frame.
    if ( frame_065e74a1c571dc71cc37000474dd9afa == cache_frame_065e74a1c571dc71cc37000474dd9afa )
    {
        Py_DECREF( frame_065e74a1c571dc71cc37000474dd9afa );
    }
    cache_frame_065e74a1c571dc71cc37000474dd9afa = NULL;

    assertFrameObject( frame_065e74a1c571dc71cc37000474dd9afa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_16_is_same_domain );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_host );
    par_host = NULL;

    Py_XDECREF( par_pattern );
    par_pattern = NULL;

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

    Py_XDECREF( par_host );
    par_host = NULL;

    Py_XDECREF( par_pattern );
    par_pattern = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_16_is_same_domain );
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


static PyObject *impl_django$utils$http$$$function_17_is_safe_url( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_host = python_pars[ 1 ];
    PyObject *par_allowed_hosts = python_pars[ 2 ];
    PyObject *par_require_https = python_pars[ 3 ];
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_left_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_set_element_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0e94128b59f27aeeddac24cc3c930c32 = NULL;

    struct Nuitka_FrameObject *frame_0e94128b59f27aeeddac24cc3c930c32;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0e94128b59f27aeeddac24cc3c930c32, codeobj_0e94128b59f27aeeddac24cc3c930c32, module_django$utils$http, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0e94128b59f27aeeddac24cc3c930c32 = cache_frame_0e94128b59f27aeeddac24cc3c930c32;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0e94128b59f27aeeddac24cc3c930c32 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0e94128b59f27aeeddac24cc3c930c32 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_url;

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
    tmp_called_instance_1 = par_url;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 309;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_0e94128b59f27aeeddac24cc3c930c32->m_frame.f_lineno = 309;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_strip );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_url;
        par_url = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_cond_value_1 = par_url;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 310;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "oooo";
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 312;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PY2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 312;
        type_description_1 = "oooo";
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
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_text );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_text );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_text" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 314;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_url;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 314;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_0e94128b59f27aeeddac24cc3c930c32->m_frame.f_lineno = 314;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_url;
        par_url = tmp_assign_source_2;
        Py_XDECREF( old );
    }

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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_0e94128b59f27aeeddac24cc3c930c32, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_0e94128b59f27aeeddac24cc3c930c32, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_UnicodeDecodeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
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
    goto try_return_handler_3;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 313;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0e94128b59f27aeeddac24cc3c930c32->m_frame) frame_0e94128b59f27aeeddac24cc3c930c32->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_4:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_17_is_safe_url );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    branch_no_3:;
    tmp_compare_left_3 = par_allowed_hosts;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allowed_hosts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 317;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_3 = PySet_New( NULL );
    {
        PyObject *old = par_allowed_hosts;
        par_allowed_hosts = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    branch_no_5:;
    tmp_cond_value_3 = par_host;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 319;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 320;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_warn );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_digest_24bddaa933dffd5125f1d96f36ee3a66;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_RemovedInDjango21Warning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RemovedInDjango21Warning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RemovedInDjango21Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 322;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
    frame_0e94128b59f27aeeddac24cc3c930c32->m_frame.f_lineno = 320;
    tmp_unused = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_1 = par_allowed_hosts;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allowed_hosts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 326;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = PySet_New( NULL );
    tmp_set_element_1 = par_host;

    if ( tmp_set_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 326;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PySet_Add( tmp_right_name_1, tmp_set_element_1 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 326;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_allowed_hosts;
        par_allowed_hosts = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    branch_no_6:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__is_safe_url );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__is_safe_url );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_is_safe_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 329;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_url;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 329;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_allowed_hosts;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allowed_hosts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 329;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_require_https;
    tmp_dict_value_1 = par_require_https;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "require_https" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 329;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_0e94128b59f27aeeddac24cc3c930c32->m_frame.f_lineno = 329;
    tmp_and_left_value_1 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 330;
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
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__is_safe_url );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__is_safe_url );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_is_safe_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 330;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_called_instance_2 = par_url;

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 330;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_0e94128b59f27aeeddac24cc3c930c32->m_frame.f_lineno = 330;
    tmp_tuple_element_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_92_str_chr_47_tuple, 0 ) );

    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );

        exception_lineno = 330;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_allowed_hosts;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allowed_hosts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 330;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
    tmp_dict_key_2 = const_str_plain_require_https;
    tmp_dict_value_2 = par_require_https;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "require_https" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 330;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_0e94128b59f27aeeddac24cc3c930c32->m_frame.f_lineno = 330;
    tmp_and_right_value_1 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_return_value = tmp_and_left_value_1;
    and_end_1:;
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0e94128b59f27aeeddac24cc3c930c32 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0e94128b59f27aeeddac24cc3c930c32 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0e94128b59f27aeeddac24cc3c930c32 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0e94128b59f27aeeddac24cc3c930c32, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0e94128b59f27aeeddac24cc3c930c32->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0e94128b59f27aeeddac24cc3c930c32, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0e94128b59f27aeeddac24cc3c930c32,
        type_description_1,
        par_url,
        par_host,
        par_allowed_hosts,
        par_require_https
    );


    // Release cached frame.
    if ( frame_0e94128b59f27aeeddac24cc3c930c32 == cache_frame_0e94128b59f27aeeddac24cc3c930c32 )
    {
        Py_DECREF( frame_0e94128b59f27aeeddac24cc3c930c32 );
    }
    cache_frame_0e94128b59f27aeeddac24cc3c930c32 = NULL;

    assertFrameObject( frame_0e94128b59f27aeeddac24cc3c930c32 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_17_is_safe_url );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_host );
    par_host = NULL;

    Py_XDECREF( par_allowed_hosts );
    par_allowed_hosts = NULL;

    Py_XDECREF( par_require_https );
    par_require_https = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_host );
    par_host = NULL;

    Py_XDECREF( par_allowed_hosts );
    par_allowed_hosts = NULL;

    Py_XDECREF( par_require_https );
    par_require_https = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_17_is_safe_url );
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


static PyObject *impl_django$utils$http$$$function_18__urlparse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_scheme = python_pars[ 1 ];
    PyObject *par_allow_fragments = python_pars[ 2 ];
    PyObject *var__coerce_result = NULL;
    PyObject *var_splitresult = NULL;
    PyObject *var_netloc = NULL;
    PyObject *var_query = NULL;
    PyObject *var_fragment = NULL;
    PyObject *var_params = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__element_5 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
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
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    PyObject *tmp_unpack_8;
    PyObject *tmp_unpack_9;
    PyObject *tmp_unpack_10;
    static struct Nuitka_FrameObject *cache_frame_f71dcf00df842e1dd859e8a9c3e5cf76 = NULL;

    struct Nuitka_FrameObject *frame_f71dcf00df842e1dd859e8a9c3e5cf76;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f71dcf00df842e1dd859e8a9c3e5cf76, codeobj_f71dcf00df842e1dd859e8a9c3e5cf76, module_django$utils$http, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f71dcf00df842e1dd859e8a9c3e5cf76 = cache_frame_f71dcf00df842e1dd859e8a9c3e5cf76;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f71dcf00df842e1dd859e8a9c3e5cf76 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f71dcf00df842e1dd859e8a9c3e5cf76 ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__coerce_args );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__coerce_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_coerce_args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 340;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        type_description_1 = "oooooooooo";
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
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__coerce_args );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__coerce_args );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_coerce_args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 341;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_url;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_scheme;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_f71dcf00df842e1dd859e8a9c3e5cf76->m_frame.f_lineno = 341;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
    if ( tmp_assign_source_2 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 341;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
    if ( tmp_assign_source_3 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 341;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
    if ( tmp_assign_source_4 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 341;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;

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

                type_description_1 = "oooooooooo";
                exception_lineno = 341;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooo";
        exception_lineno = 341;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

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

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = par_url;
        par_url = tmp_assign_source_5;
        Py_INCREF( par_url );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = par_scheme;
        par_scheme = tmp_assign_source_6;
        Py_INCREF( par_scheme );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_7 );
    assert( var__coerce_result == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var__coerce_result = tmp_assign_source_7;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__urlsplit );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__urlsplit );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_urlsplit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 342;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_url;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 342;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_scheme;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 342;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_allow_fragments;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_fragments" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 342;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_f71dcf00df842e1dd859e8a9c3e5cf76->m_frame.f_lineno = 342;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_splitresult == NULL );
    var_splitresult = tmp_assign_source_8;

    // Tried code:
    tmp_iter_arg_2 = var_splitresult;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "oooooooooo";
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;

    // Tried code:
    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_4, 0, 5 );
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


        type_description_1 = "oooooooooo";
        exception_lineno = 343;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;

    tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_5, 1, 5 );
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


        type_description_1 = "oooooooooo";
        exception_lineno = 343;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;

    tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_6 );
    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_6, 2, 5 );
    if ( tmp_assign_source_12 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 343;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_3 == NULL );
    tmp_tuple_unpack_2__element_3 = tmp_assign_source_12;

    tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_7 );
    tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_7, 3, 5 );
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


        type_description_1 = "oooooooooo";
        exception_lineno = 343;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_4 == NULL );
    tmp_tuple_unpack_2__element_4 = tmp_assign_source_13;

    tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_8 );
    tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_8, 4, 5 );
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


        type_description_1 = "oooooooooo";
        exception_lineno = 343;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_5 == NULL );
    tmp_tuple_unpack_2__element_5 = tmp_assign_source_14;

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

                type_description_1 = "oooooooooo";
                exception_lineno = 343;
                goto try_except_handler_5;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooo";
        exception_lineno = 343;
        goto try_except_handler_5;
    }
    goto try_end_3;
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

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_15 );
    {
        PyObject *old = par_scheme;
        par_scheme = tmp_assign_source_15;
        Py_INCREF( par_scheme );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_16 );
    assert( var_netloc == NULL );
    Py_INCREF( tmp_assign_source_16 );
    var_netloc = tmp_assign_source_16;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_assign_source_17 = tmp_tuple_unpack_2__element_3;

    CHECK_OBJECT( tmp_assign_source_17 );
    {
        PyObject *old = par_url;
        par_url = tmp_assign_source_17;
        Py_INCREF( par_url );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    tmp_assign_source_18 = tmp_tuple_unpack_2__element_4;

    CHECK_OBJECT( tmp_assign_source_18 );
    assert( var_query == NULL );
    Py_INCREF( tmp_assign_source_18 );
    var_query = tmp_assign_source_18;

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    tmp_assign_source_19 = tmp_tuple_unpack_2__element_5;

    CHECK_OBJECT( tmp_assign_source_19 );
    assert( var_fragment == NULL );
    Py_INCREF( tmp_assign_source_19 );
    var_fragment = tmp_assign_source_19;

    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    tmp_compexpr_left_1 = par_scheme;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_uses_params );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_uses_params );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "uses_params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_compexpr_left_2 = const_str_chr_59;
    tmp_compexpr_right_2 = par_url;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    assert( !(tmp_cond_truth_2 == -1) );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    // Tried code:
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__splitparams );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__splitparams );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_splitparams" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 345;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }

    tmp_args_element_name_6 = par_url;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 345;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }

    frame_f71dcf00df842e1dd859e8a9c3e5cf76->m_frame.f_lineno = 345;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }
    tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_3__source_iter == NULL );
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_20;

    // Tried code:
    tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_9 );
    tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_9, 0, 2 );
    if ( tmp_assign_source_21 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 345;
        goto try_except_handler_7;
    }
    assert( tmp_tuple_unpack_3__element_1 == NULL );
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_21;

    tmp_unpack_10 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_10 );
    tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_10, 1, 2 );
    if ( tmp_assign_source_22 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 345;
        goto try_except_handler_7;
    }
    assert( tmp_tuple_unpack_3__element_2 == NULL );
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_22;

    tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_iterator_name_3 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_3 ); assert( HAS_ITERNEXT( tmp_iterator_name_3 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

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

                type_description_1 = "oooooooooo";
                exception_lineno = 345;
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

        type_description_1 = "oooooooooo";
        exception_lineno = 345;
        goto try_except_handler_7;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    tmp_assign_source_23 = tmp_tuple_unpack_3__element_1;

    CHECK_OBJECT( tmp_assign_source_23 );
    {
        PyObject *old = par_url;
        par_url = tmp_assign_source_23;
        Py_INCREF( par_url );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    tmp_assign_source_24 = tmp_tuple_unpack_3__element_2;

    CHECK_OBJECT( tmp_assign_source_24 );
    assert( var_params == NULL );
    Py_INCREF( tmp_assign_source_24 );
    var_params = tmp_assign_source_24;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_25 = const_str_empty;
    assert( var_params == NULL );
    Py_INCREF( tmp_assign_source_25 );
    var_params = tmp_assign_source_25;

    branch_end_2:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_ParseResult );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ParseResult );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ParseResult" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_scheme;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_netloc;

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "netloc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = par_url;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_params;

    if ( tmp_args_element_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_query;

    if ( tmp_args_element_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "query" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = var_fragment;

    if ( tmp_args_element_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fragment" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_f71dcf00df842e1dd859e8a9c3e5cf76->m_frame.f_lineno = 348;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_26;

    tmp_cond_value_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__coerce_args );

    if (unlikely( tmp_cond_value_3 == NULL ))
    {
        tmp_cond_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__coerce_args );
    }

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_coerce_args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_called_name_5 = var__coerce_result;

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_coerce_result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = var_result;

    CHECK_OBJECT( tmp_args_element_name_13 );
    frame_f71dcf00df842e1dd859e8a9c3e5cf76->m_frame.f_lineno = 349;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = var_result;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f71dcf00df842e1dd859e8a9c3e5cf76 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f71dcf00df842e1dd859e8a9c3e5cf76 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f71dcf00df842e1dd859e8a9c3e5cf76 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f71dcf00df842e1dd859e8a9c3e5cf76, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f71dcf00df842e1dd859e8a9c3e5cf76->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f71dcf00df842e1dd859e8a9c3e5cf76, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f71dcf00df842e1dd859e8a9c3e5cf76,
        type_description_1,
        par_url,
        par_scheme,
        par_allow_fragments,
        var__coerce_result,
        var_splitresult,
        var_netloc,
        var_query,
        var_fragment,
        var_params,
        var_result
    );


    // Release cached frame.
    if ( frame_f71dcf00df842e1dd859e8a9c3e5cf76 == cache_frame_f71dcf00df842e1dd859e8a9c3e5cf76 )
    {
        Py_DECREF( frame_f71dcf00df842e1dd859e8a9c3e5cf76 );
    }
    cache_frame_f71dcf00df842e1dd859e8a9c3e5cf76 = NULL;

    assertFrameObject( frame_f71dcf00df842e1dd859e8a9c3e5cf76 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_18__urlparse );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( par_allow_fragments );
    par_allow_fragments = NULL;

    Py_XDECREF( var__coerce_result );
    var__coerce_result = NULL;

    Py_XDECREF( var_splitresult );
    var_splitresult = NULL;

    Py_XDECREF( var_netloc );
    var_netloc = NULL;

    Py_XDECREF( var_query );
    var_query = NULL;

    Py_XDECREF( var_fragment );
    var_fragment = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( par_allow_fragments );
    par_allow_fragments = NULL;

    Py_XDECREF( var__coerce_result );
    var__coerce_result = NULL;

    Py_XDECREF( var_splitresult );
    var_splitresult = NULL;

    Py_XDECREF( var_netloc );
    var_netloc = NULL;

    Py_XDECREF( var_query );
    var_query = NULL;

    Py_XDECREF( var_fragment );
    var_fragment = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_18__urlparse );
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


static PyObject *impl_django$utils$http$$$function_19__urlsplit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_scheme = python_pars[ 1 ];
    PyObject *par_allow_fragments = python_pars[ 2 ];
    PyObject *var__coerce_result = NULL;
    PyObject *var_netloc = NULL;
    PyObject *var_query = NULL;
    PyObject *var_fragment = NULL;
    PyObject *var_i = NULL;
    PyObject *var_c = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__break_indicator = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
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
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
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
    PyObject *tmp_bool_arg_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_In_1;
    int tmp_cmp_NotIn_1;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_iterator_name_5;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_start_name_1;
    PyObject *tmp_start_name_2;
    PyObject *tmp_start_name_3;
    PyObject *tmp_step_name_1;
    PyObject *tmp_step_name_2;
    PyObject *tmp_step_name_3;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_stop_name_2;
    PyObject *tmp_stop_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    PyObject *tmp_unpack_8;
    PyObject *tmp_unpack_9;
    PyObject *tmp_unpack_10;
    PyObject *tmp_unpack_11;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_4bb21dd7a576d944819593520817a697 = NULL;

    struct Nuitka_FrameObject *frame_4bb21dd7a576d944819593520817a697;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4bb21dd7a576d944819593520817a697, codeobj_4bb21dd7a576d944819593520817a697, module_django$utils$http, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4bb21dd7a576d944819593520817a697 = cache_frame_4bb21dd7a576d944819593520817a697;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4bb21dd7a576d944819593520817a697 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4bb21dd7a576d944819593520817a697 ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__coerce_args );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__coerce_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_coerce_args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 360;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        type_description_1 = "oooooooooo";
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
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__coerce_args );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__coerce_args );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_coerce_args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 361;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_url;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_scheme;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_4bb21dd7a576d944819593520817a697->m_frame.f_lineno = 361;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
    if ( tmp_assign_source_2 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 361;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
    if ( tmp_assign_source_3 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 361;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
    if ( tmp_assign_source_4 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 361;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;

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

                type_description_1 = "oooooooooo";
                exception_lineno = 361;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooo";
        exception_lineno = 361;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

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

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = par_url;
        par_url = tmp_assign_source_5;
        Py_INCREF( par_url );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = par_scheme;
        par_scheme = tmp_assign_source_6;
        Py_INCREF( par_scheme );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_7 );
    assert( var__coerce_result == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var__coerce_result = tmp_assign_source_7;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    branch_no_1:;
    tmp_bool_arg_1 = par_allow_fragments;

    if ( tmp_bool_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_fragments" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 362;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_8 = TO_BOOL( tmp_bool_arg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_allow_fragments;
        par_allow_fragments = tmp_assign_source_8;
        Py_INCREF( par_allow_fragments );
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = const_str_empty;
    assert( var_netloc == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_netloc = tmp_assign_source_9;

    tmp_assign_source_10 = const_str_empty;
    assert( var_query == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_query = tmp_assign_source_10;

    tmp_assign_source_11 = const_str_empty;
    assert( var_fragment == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_fragment = tmp_assign_source_11;

    tmp_called_instance_1 = par_url;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 364;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_4bb21dd7a576d944819593520817a697->m_frame.f_lineno = 364;
    tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_find, &PyTuple_GET_ITEM( const_tuple_str_chr_58_tuple, 0 ) );

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_i == NULL );
    var_i = tmp_assign_source_12;

    tmp_compare_left_1 = var_i;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 365;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_13 = Py_False;
    assert( tmp_for_loop_1__break_indicator == NULL );
    Py_INCREF( tmp_assign_source_13 );
    tmp_for_loop_1__break_indicator = tmp_assign_source_13;

    // Tried code:
    tmp_subscribed_name_1 = par_url;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 366;
        type_description_1 = "oooooooooo";
        goto try_except_handler_4;
    }

    tmp_start_name_1 = Py_None;
    tmp_stop_name_1 = var_i;

    if ( tmp_stop_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 366;
        type_description_1 = "oooooooooo";
        goto try_except_handler_4;
    }

    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    assert( tmp_subscript_name_1 != NULL );
    tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        type_description_1 = "oooooooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        type_description_1 = "oooooooooo";
        goto try_except_handler_4;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_14;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_15 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_15 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 366;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_2 = exception_keeper_type_3;
    tmp_compare_right_2 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );

        exception_lineno = 366;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_16 = Py_True;
    {
        PyObject *old = tmp_for_loop_1__break_indicator;
        tmp_for_loop_1__break_indicator = tmp_assign_source_16;
        Py_INCREF( tmp_for_loop_1__break_indicator );
        Py_XDECREF( old );
    }

    Py_DECREF( exception_keeper_type_3 );
    Py_XDECREF( exception_keeper_value_3 );
    Py_XDECREF( exception_keeper_tb_3 );
    goto loop_end_1;
    goto branch_end_3;
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    branch_end_3:;
    // End of try:
    try_end_3:;
    tmp_assign_source_17 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_17 );
    {
        PyObject *old = var_c;
        var_c = tmp_assign_source_17;
        Py_INCREF( var_c );
        Py_XDECREF( old );
    }

    tmp_compare_left_3 = var_c;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_scheme_chars );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scheme_chars );
    }

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scheme_chars" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 367;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    goto loop_end_1;
    branch_no_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_compare_left_4 = tmp_for_loop_1__break_indicator;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_True;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    // Tried code:
    tmp_iter_arg_3 = PyTuple_New( 2 );
    tmp_subscribed_name_2 = par_url;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_iter_arg_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 370;
        type_description_1 = "oooooooooo";
        goto try_except_handler_7;
    }

    tmp_start_name_2 = Py_None;
    tmp_stop_name_2 = var_i;

    if ( tmp_stop_name_2 == NULL )
    {
        Py_DECREF( tmp_iter_arg_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 370;
        type_description_1 = "oooooooooo";
        goto try_except_handler_7;
    }

    tmp_step_name_2 = Py_None;
    tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
    assert( tmp_subscript_name_2 != NULL );
    tmp_called_instance_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscript_name_2 );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_3 );

        exception_lineno = 370;
        type_description_1 = "oooooooooo";
        goto try_except_handler_7;
    }
    frame_4bb21dd7a576d944819593520817a697->m_frame.f_lineno = 370;
    tmp_tuple_element_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_3 );

        exception_lineno = 370;
        type_description_1 = "oooooooooo";
        goto try_except_handler_7;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_3, 0, tmp_tuple_element_1 );
    tmp_subscribed_name_3 = par_url;

    if ( tmp_subscribed_name_3 == NULL )
    {
        Py_DECREF( tmp_iter_arg_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 370;
        type_description_1 = "oooooooooo";
        goto try_except_handler_7;
    }

    tmp_left_name_1 = var_i;

    if ( tmp_left_name_1 == NULL )
    {
        Py_DECREF( tmp_iter_arg_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 370;
        type_description_1 = "oooooooooo";
        goto try_except_handler_7;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_start_name_3 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_start_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_3 );

        exception_lineno = 370;
        type_description_1 = "oooooooooo";
        goto try_except_handler_7;
    }
    tmp_stop_name_3 = Py_None;
    tmp_step_name_3 = Py_None;
    tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
    Py_DECREF( tmp_start_name_3 );
    assert( tmp_subscript_name_3 != NULL );
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscript_name_3 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_3 );

        exception_lineno = 370;
        type_description_1 = "oooooooooo";
        goto try_except_handler_7;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_3, 1, tmp_tuple_element_1 );
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        type_description_1 = "oooooooooo";
        goto try_except_handler_7;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_18;

    // Tried code:
    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_4, 0, 2 );
    if ( tmp_assign_source_19 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 370;
        goto try_except_handler_8;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_19;

    tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_5, 1, 2 );
    if ( tmp_assign_source_20 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 370;
        goto try_except_handler_8;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_20;

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

                type_description_1 = "oooooooooo";
                exception_lineno = 370;
                goto try_except_handler_8;
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

        type_description_1 = "oooooooooo";
        exception_lineno = 370;
        goto try_except_handler_8;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    goto try_end_6;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_4;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_21 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_21 );
    {
        PyObject *old = par_scheme;
        par_scheme = tmp_assign_source_21;
        Py_INCREF( par_scheme );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_22 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_22 );
    {
        PyObject *old = par_url;
        par_url = tmp_assign_source_22;
        Py_INCREF( par_url );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    branch_no_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__break_indicator );
    tmp_for_loop_1__break_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_1__break_indicator );
    tmp_for_loop_1__break_indicator = NULL;

    branch_no_2:;
    tmp_subscribed_name_4 = par_url;

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 372;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_4 = const_slice_none_int_pos_2_none;
    tmp_compare_left_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = const_str_digest_13971ae58b983978540cbb4bbf3b1360;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 372;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
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
    // Tried code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__splitnetloc );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__splitnetloc );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_splitnetloc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 373;
        type_description_1 = "oooooooooo";
        goto try_except_handler_9;
    }

    tmp_args_element_name_3 = par_url;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 373;
        type_description_1 = "oooooooooo";
        goto try_except_handler_9;
    }

    tmp_args_element_name_4 = const_int_pos_2;
    frame_4bb21dd7a576d944819593520817a697->m_frame.f_lineno = 373;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "oooooooooo";
        goto try_except_handler_9;
    }
    tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "oooooooooo";
        goto try_except_handler_9;
    }
    assert( tmp_tuple_unpack_3__source_iter == NULL );
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_23;

    // Tried code:
    tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_6 );
    tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_6, 0, 2 );
    if ( tmp_assign_source_24 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 373;
        goto try_except_handler_10;
    }
    assert( tmp_tuple_unpack_3__element_1 == NULL );
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_24;

    tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_7 );
    tmp_assign_source_25 = UNPACK_NEXT( tmp_unpack_7, 1, 2 );
    if ( tmp_assign_source_25 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 373;
        goto try_except_handler_10;
    }
    assert( tmp_tuple_unpack_3__element_2 == NULL );
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_25;

    tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_iterator_name_3 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_3 ); assert( HAS_ITERNEXT( tmp_iterator_name_3 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

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

                type_description_1 = "oooooooooo";
                exception_lineno = 373;
                goto try_except_handler_10;
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

        type_description_1 = "oooooooooo";
        exception_lineno = 373;
        goto try_except_handler_10;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    tmp_assign_source_26 = tmp_tuple_unpack_3__element_1;

    CHECK_OBJECT( tmp_assign_source_26 );
    {
        PyObject *old = var_netloc;
        var_netloc = tmp_assign_source_26;
        Py_INCREF( var_netloc );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    tmp_assign_source_27 = tmp_tuple_unpack_3__element_2;

    CHECK_OBJECT( tmp_assign_source_27 );
    {
        PyObject *old = par_url;
        par_url = tmp_assign_source_27;
        Py_INCREF( par_url );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    tmp_compexpr_left_1 = const_str_chr_91;
    tmp_compexpr_right_1 = var_netloc;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "netloc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 374;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_compexpr_left_2 = const_str_chr_93;
    tmp_compexpr_right_2 = var_netloc;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "netloc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 374;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_1 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_or_left_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_compexpr_left_3 = const_str_chr_93;
    tmp_compexpr_right_3 = var_netloc;

    if ( tmp_compexpr_right_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "netloc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 375;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_2 = SEQUENCE_CONTAINS( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    assert( !(tmp_and_left_truth_2 == -1) );
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_compexpr_left_4 = const_str_chr_91;
    tmp_compexpr_right_4 = var_netloc;

    if ( tmp_compexpr_right_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "netloc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 375;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_2 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
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
    assert( !(tmp_cond_truth_2 == -1) );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_make_exception_arg_1 = const_str_digest_24463121abb84407fee73fe6d9fca438;
    frame_4bb21dd7a576d944819593520817a697->m_frame.f_lineno = 376;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 376;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
    branch_no_7:;
    branch_no_6:;
    tmp_and_left_value_3 = par_allow_fragments;

    if ( tmp_and_left_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_fragments" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 377;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    tmp_compexpr_left_5 = const_str_chr_35;
    tmp_compexpr_right_5 = par_url;

    if ( tmp_compexpr_right_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 377;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_3 = SEQUENCE_CONTAINS( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_cond_value_3 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    // Tried code:
    tmp_called_instance_3 = par_url;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 378;
        type_description_1 = "oooooooooo";
        goto try_except_handler_11;
    }

    frame_4bb21dd7a576d944819593520817a697->m_frame.f_lineno = 378;
    tmp_iter_arg_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_35_int_pos_1_tuple, 0 ) );

    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description_1 = "oooooooooo";
        goto try_except_handler_11;
    }
    tmp_assign_source_28 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description_1 = "oooooooooo";
        goto try_except_handler_11;
    }
    assert( tmp_tuple_unpack_4__source_iter == NULL );
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_28;

    // Tried code:
    tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_8 );
    tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_8, 0, 2 );
    if ( tmp_assign_source_29 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 378;
        goto try_except_handler_12;
    }
    assert( tmp_tuple_unpack_4__element_1 == NULL );
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_29;

    tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_9 );
    tmp_assign_source_30 = UNPACK_NEXT( tmp_unpack_9, 1, 2 );
    if ( tmp_assign_source_30 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 378;
        goto try_except_handler_12;
    }
    assert( tmp_tuple_unpack_4__element_2 == NULL );
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_30;

    tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_iterator_name_4 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_4 ); assert( HAS_ITERNEXT( tmp_iterator_name_4 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_4 )->tp_iternext)( tmp_iterator_name_4 );

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

                type_description_1 = "oooooooooo";
                exception_lineno = 378;
                goto try_except_handler_12;
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

        type_description_1 = "oooooooooo";
        exception_lineno = 378;
        goto try_except_handler_12;
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    tmp_assign_source_31 = tmp_tuple_unpack_4__element_1;

    CHECK_OBJECT( tmp_assign_source_31 );
    {
        PyObject *old = par_url;
        par_url = tmp_assign_source_31;
        Py_INCREF( par_url );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    tmp_assign_source_32 = tmp_tuple_unpack_4__element_2;

    CHECK_OBJECT( tmp_assign_source_32 );
    {
        PyObject *old = var_fragment;
        var_fragment = tmp_assign_source_32;
        Py_INCREF( var_fragment );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    branch_no_8:;
    tmp_compare_left_6 = const_str_chr_63;
    tmp_compare_right_6 = par_url;

    if ( tmp_compare_right_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 379;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    // Tried code:
    tmp_called_instance_4 = par_url;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;
        type_description_1 = "oooooooooo";
        goto try_except_handler_13;
    }

    frame_4bb21dd7a576d944819593520817a697->m_frame.f_lineno = 380;
    tmp_iter_arg_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_63_int_pos_1_tuple, 0 ) );

    if ( tmp_iter_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        type_description_1 = "oooooooooo";
        goto try_except_handler_13;
    }
    tmp_assign_source_33 = MAKE_ITERATOR( tmp_iter_arg_6 );
    Py_DECREF( tmp_iter_arg_6 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        type_description_1 = "oooooooooo";
        goto try_except_handler_13;
    }
    assert( tmp_tuple_unpack_5__source_iter == NULL );
    tmp_tuple_unpack_5__source_iter = tmp_assign_source_33;

    // Tried code:
    tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;

    CHECK_OBJECT( tmp_unpack_10 );
    tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_10, 0, 2 );
    if ( tmp_assign_source_34 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 380;
        goto try_except_handler_14;
    }
    assert( tmp_tuple_unpack_5__element_1 == NULL );
    tmp_tuple_unpack_5__element_1 = tmp_assign_source_34;

    tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;

    CHECK_OBJECT( tmp_unpack_11 );
    tmp_assign_source_35 = UNPACK_NEXT( tmp_unpack_11, 1, 2 );
    if ( tmp_assign_source_35 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 380;
        goto try_except_handler_14;
    }
    assert( tmp_tuple_unpack_5__element_2 == NULL );
    tmp_tuple_unpack_5__element_2 = tmp_assign_source_35;

    tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;

    CHECK_OBJECT( tmp_iterator_name_5 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_5 ); assert( HAS_ITERNEXT( tmp_iterator_name_5 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_5 )->tp_iternext)( tmp_iterator_name_5 );

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

                type_description_1 = "oooooooooo";
                exception_lineno = 380;
                goto try_except_handler_14;
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

        type_description_1 = "oooooooooo";
        exception_lineno = 380;
        goto try_except_handler_14;
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_13;
    // End of try:
    try_end_12:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    tmp_assign_source_36 = tmp_tuple_unpack_5__element_1;

    CHECK_OBJECT( tmp_assign_source_36 );
    {
        PyObject *old = par_url;
        par_url = tmp_assign_source_36;
        Py_INCREF( par_url );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    tmp_assign_source_37 = tmp_tuple_unpack_5__element_2;

    CHECK_OBJECT( tmp_assign_source_37 );
    {
        PyObject *old = var_query;
        var_query = tmp_assign_source_37;
        Py_INCREF( var_query );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    branch_no_9:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_SplitResult );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SplitResult );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SplitResult" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 381;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_scheme;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 381;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = var_netloc;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "netloc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 381;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_url;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 381;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_query;

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "query" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 381;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_fragment;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fragment" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 381;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_4bb21dd7a576d944819593520817a697->m_frame.f_lineno = 381;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_v == NULL );
    var_v = tmp_assign_source_38;

    tmp_cond_value_4 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__coerce_args );

    if (unlikely( tmp_cond_value_4 == NULL ))
    {
        tmp_cond_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__coerce_args );
    }

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_coerce_args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 382;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_called_name_4 = var__coerce_result;

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_coerce_result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 382;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_v;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_4bb21dd7a576d944819593520817a697->m_frame.f_lineno = 382;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = var_v;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4bb21dd7a576d944819593520817a697 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4bb21dd7a576d944819593520817a697 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4bb21dd7a576d944819593520817a697 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4bb21dd7a576d944819593520817a697, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4bb21dd7a576d944819593520817a697->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4bb21dd7a576d944819593520817a697, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4bb21dd7a576d944819593520817a697,
        type_description_1,
        par_url,
        par_scheme,
        par_allow_fragments,
        var__coerce_result,
        var_netloc,
        var_query,
        var_fragment,
        var_i,
        var_c,
        var_v
    );


    // Release cached frame.
    if ( frame_4bb21dd7a576d944819593520817a697 == cache_frame_4bb21dd7a576d944819593520817a697 )
    {
        Py_DECREF( frame_4bb21dd7a576d944819593520817a697 );
    }
    cache_frame_4bb21dd7a576d944819593520817a697 = NULL;

    assertFrameObject( frame_4bb21dd7a576d944819593520817a697 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_19__urlsplit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( par_allow_fragments );
    par_allow_fragments = NULL;

    Py_XDECREF( var__coerce_result );
    var__coerce_result = NULL;

    Py_XDECREF( var_netloc );
    var_netloc = NULL;

    Py_XDECREF( var_query );
    var_query = NULL;

    Py_XDECREF( var_fragment );
    var_fragment = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( par_allow_fragments );
    par_allow_fragments = NULL;

    Py_XDECREF( var__coerce_result );
    var__coerce_result = NULL;

    Py_XDECREF( var_netloc );
    var_netloc = NULL;

    Py_XDECREF( var_query );
    var_query = NULL;

    Py_XDECREF( var_fragment );
    var_fragment = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_19__urlsplit );
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


static PyObject *impl_django$utils$http$$$function_20__is_safe_url( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_allowed_hosts = python_pars[ 1 ];
    PyObject *par_require_https = python_pars[ 2 ];
    PyObject *var_url_info = NULL;
    PyObject *var_scheme = NULL;
    PyObject *var_valid_schemes = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_operand_name_4;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_43aeec64976129488aab47e619a891c8 = NULL;

    struct Nuitka_FrameObject *frame_43aeec64976129488aab47e619a891c8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_43aeec64976129488aab47e619a891c8, codeobj_43aeec64976129488aab47e619a891c8, module_django$utils$http, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_43aeec64976129488aab47e619a891c8 = cache_frame_43aeec64976129488aab47e619a891c8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_43aeec64976129488aab47e619a891c8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_43aeec64976129488aab47e619a891c8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_url;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_43aeec64976129488aab47e619a891c8->m_frame.f_lineno = 388;
    tmp_cond_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_digest_eb2ea1dfe0b93ea72cf975e75384db80_tuple, 0 ) );

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 388;
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__urlparse );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__urlparse );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_urlparse" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_url;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    frame_43aeec64976129488aab47e619a891c8->m_frame.f_lineno = 391;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( var_url_info == NULL );
    var_url_info = tmp_assign_source_1;

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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_43aeec64976129488aab47e619a891c8, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_43aeec64976129488aab47e619a891c8, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
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
    goto try_return_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 390;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_43aeec64976129488aab47e619a891c8->m_frame) frame_43aeec64976129488aab47e619a891c8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_3;
    branch_end_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_20__is_safe_url );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    tmp_source_name_1 = var_url_info;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_netloc );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        type_description_1 = "oooooo";
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
    tmp_source_name_2 = var_url_info;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url_info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 398;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_scheme );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 398;
        type_description_1 = "oooooo";
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_unicodedata );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicodedata );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicodedata" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 403;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_category );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_url;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 403;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_0;
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 403;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_43aeec64976129488aab47e619a891c8->m_frame.f_lineno = 403;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_str_plain_C;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 403;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == 1 )
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
    tmp_source_name_4 = var_url_info;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url_info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 405;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_scheme );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_scheme == NULL );
    var_scheme = tmp_assign_source_2;

    tmp_source_name_5 = var_url_info;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url_info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 407;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_scheme );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "oooooo";
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
    tmp_source_name_6 = var_url_info;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url_info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 407;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_netloc );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_cond_value_3 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 407;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_3 = const_str_plain_http;
    {
        PyObject *old = var_scheme;
        var_scheme = tmp_assign_source_3;
        Py_INCREF( var_scheme );
        Py_XDECREF( old );
    }

    branch_no_5:;
    tmp_cond_value_4 = par_require_https;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "require_https" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 409;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_4 = LIST_COPY( const_list_str_plain_https_list );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_4 = LIST_COPY( const_list_str_plain_http_str_plain_https_list );
    condexpr_end_1:;
    assert( var_valid_schemes == NULL );
    var_valid_schemes = tmp_assign_source_4;

    tmp_source_name_7 = var_url_info;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url_info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 410;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_operand_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_netloc );
    if ( tmp_operand_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_3 );
    Py_DECREF( tmp_operand_name_3 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        type_description_1 = "oooooo";
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
    tmp_source_name_8 = var_url_info;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url_info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 410;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_netloc );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = par_allowed_hosts;

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allowed_hosts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 410;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_3 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_and_left_value_3 = tmp_or_left_value_1;
    or_end_1:;
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 411;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    tmp_operand_name_4 = var_scheme;

    if ( tmp_operand_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 411;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_4 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 411;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 411;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
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
    tmp_compexpr_left_2 = var_scheme;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 411;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = var_valid_schemes;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "valid_schemes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 411;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_2 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 411;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_3 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_and_right_value_3 = tmp_or_left_value_2;
    or_end_2:;
    tmp_return_value = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_return_value = tmp_and_left_value_3;
    and_end_3:;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_43aeec64976129488aab47e619a891c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_43aeec64976129488aab47e619a891c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_43aeec64976129488aab47e619a891c8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_43aeec64976129488aab47e619a891c8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_43aeec64976129488aab47e619a891c8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_43aeec64976129488aab47e619a891c8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_43aeec64976129488aab47e619a891c8,
        type_description_1,
        par_url,
        par_allowed_hosts,
        par_require_https,
        var_url_info,
        var_scheme,
        var_valid_schemes
    );


    // Release cached frame.
    if ( frame_43aeec64976129488aab47e619a891c8 == cache_frame_43aeec64976129488aab47e619a891c8 )
    {
        Py_DECREF( frame_43aeec64976129488aab47e619a891c8 );
    }
    cache_frame_43aeec64976129488aab47e619a891c8 = NULL;

    assertFrameObject( frame_43aeec64976129488aab47e619a891c8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_20__is_safe_url );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_allowed_hosts );
    par_allowed_hosts = NULL;

    Py_XDECREF( par_require_https );
    par_require_https = NULL;

    Py_XDECREF( var_url_info );
    var_url_info = NULL;

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_valid_schemes );
    var_valid_schemes = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_allowed_hosts );
    par_allowed_hosts = NULL;

    Py_XDECREF( par_require_https );
    par_require_https = NULL;

    Py_XDECREF( var_url_info );
    var_url_info = NULL;

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_valid_schemes );
    var_valid_schemes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_20__is_safe_url );
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


static PyObject *impl_django$utils$http$$$function_21_limited_parse_qsl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qs = python_pars[ 0 ];
    PyObject *par_keep_blank_values = python_pars[ 1 ];
    PyObject *par_encoding = python_pars[ 2 ];
    PyObject *par_errors = python_pars[ 3 ];
    PyObject *par_fields_limit = python_pars[ 4 ];
    PyObject *var_pairs = NULL;
    PyObject *var_r = NULL;
    PyObject *var_name_value = NULL;
    PyObject *var_nv = NULL;
    PyObject *var_name = NULL;
    PyObject *var_value = NULL;
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
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    int tmp_cmp_Gt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ea8647c3b423ff9d461a30472af7a062 = NULL;

    struct Nuitka_FrameObject *frame_ea8647c3b423ff9d461a30472af7a062;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ea8647c3b423ff9d461a30472af7a062, codeobj_ea8647c3b423ff9d461a30472af7a062, module_django$utils$http, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ea8647c3b423ff9d461a30472af7a062 = cache_frame_ea8647c3b423ff9d461a30472af7a062;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ea8647c3b423ff9d461a30472af7a062 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ea8647c3b423ff9d461a30472af7a062 ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = par_fields_limit;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 438;
        type_description_1 = "ooooooooooo";
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_FIELDS_MATCH );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELDS_MATCH );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FIELDS_MATCH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 439;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_split );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 439;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_qs;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "qs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 439;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_fields_limit;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fields_limit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 439;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_ea8647c3b423ff9d461a30472af7a062->m_frame.f_lineno = 439;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 439;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_pairs == NULL );
    var_pairs = tmp_assign_source_1;

    tmp_len_arg_1 = var_pairs;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 440;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = par_fields_limit;

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fields_limit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 440;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 440;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_TooManyFieldsSent );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TooManyFieldsSent );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TooManyFieldsSent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 441;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_ea8647c3b423ff9d461a30472af7a062->m_frame.f_lineno = 441;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_c8adcd1017f54d23c24c1e0507db1cb7_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 441;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 441;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_FIELDS_MATCH );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIELDS_MATCH );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FIELDS_MATCH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 446;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_split );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 446;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_qs;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "qs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 446;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_ea8647c3b423ff9d461a30472af7a062->m_frame.f_lineno = 446;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 446;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_pairs == NULL );
    var_pairs = tmp_assign_source_2;

    branch_end_1:;
    tmp_assign_source_3 = PyList_New( 0 );
    assert( var_r == NULL );
    var_r = tmp_assign_source_3;

    tmp_iter_arg_1 = var_pairs;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pairs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 448;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        type_description_1 = "ooooooooooo";
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
            type_description_1 = "ooooooooooo";
            exception_lineno = 448;
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
        PyObject *old = var_name_value;
        var_name_value = tmp_assign_source_6;
        Py_INCREF( var_name_value );
        Py_XDECREF( old );
    }

    tmp_cond_value_2 = var_name_value;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
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
    goto loop_start_1;
    branch_no_3:;
    tmp_called_instance_1 = var_name_value;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name_value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 451;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    frame_ea8647c3b423ff9d461a30472af7a062->m_frame.f_lineno = 451;
    tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_61_int_pos_1_tuple, 0 ) );

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 451;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_nv;
        var_nv = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_len_arg_2 = var_nv;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    tmp_compare_right_2 = const_int_pos_2;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 452;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_cond_value_3 = par_keep_blank_values;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "keep_blank_values" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 454;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 454;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_instance_2 = var_nv;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nv" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 455;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    frame_ea8647c3b423ff9d461a30472af7a062->m_frame.f_lineno = 455;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_5;
    branch_no_5:;
    goto loop_start_1;
    branch_end_5:;
    branch_no_4:;
    tmp_subscribed_name_1 = var_nv;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nv" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 458;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = const_int_pos_1;
    tmp_len_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_len_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    tmp_or_left_value_1 = BUILTIN_LEN( tmp_len_arg_3 );
    Py_DECREF( tmp_len_arg_3 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 458;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
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
    tmp_or_right_value_1 = par_keep_blank_values;

    if ( tmp_or_right_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "keep_blank_values" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 458;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_or_right_value_1 );
    tmp_cond_value_4 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_4 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 458;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 459;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_cond_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_PY3 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 459;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 459;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_subscribed_name_2 = var_nv;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nv" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 460;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_2 = const_int_0;
    tmp_called_instance_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    frame_ea8647c3b423ff9d461a30472af7a062->m_frame.f_lineno = 460;
    tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_43_str_space_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_unquote );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unquote );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unquote" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 461;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_name;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_encoding;
    tmp_dict_value_1 = par_encoding;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 461;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_errors;
    tmp_dict_value_2 = par_errors;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "errors" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 461;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_ea8647c3b423ff9d461a30472af7a062->m_frame.f_lineno = 461;
    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_3 = var_nv;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nv" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 462;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_3 = const_int_pos_1;
    tmp_called_instance_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 462;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    frame_ea8647c3b423ff9d461a30472af7a062->m_frame.f_lineno = 462;
    tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_43_str_space_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 462;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_unquote );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unquote );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unquote" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 463;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_value;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_dict_key_3 = const_str_plain_encoding;
    tmp_dict_value_3 = par_encoding;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 463;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_errors;
    tmp_dict_value_4 = par_errors;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "errors" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 463;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_ea8647c3b423ff9d461a30472af7a062->m_frame.f_lineno = 463;
    tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 463;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    goto branch_end_7;
    branch_no_7:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_unquote );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unquote );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unquote" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 465;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_4 = var_nv;

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nv" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 465;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_4 = const_int_0;
    tmp_called_instance_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 465;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    frame_ea8647c3b423ff9d461a30472af7a062->m_frame.f_lineno = 465;
    tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_bytes_chr_43_bytes_chr_32_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 465;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    frame_ea8647c3b423ff9d461a30472af7a062->m_frame.f_lineno = 465;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 465;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_unquote );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unquote );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unquote" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 466;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_5 = var_nv;

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nv" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 466;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_5 = const_int_pos_1;
    tmp_called_instance_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_called_instance_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 466;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    frame_ea8647c3b423ff9d461a30472af7a062->m_frame.f_lineno = 466;
    tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_bytes_chr_43_bytes_chr_32_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_6 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 466;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    frame_ea8647c3b423ff9d461a30472af7a062->m_frame.f_lineno = 466;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 466;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    branch_end_7:;
    tmp_source_name_4 = var_r;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 467;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 467;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_6 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_name;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 467;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_value;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 467;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_6, 1, tmp_tuple_element_3 );
    frame_ea8647c3b423ff9d461a30472af7a062->m_frame.f_lineno = 467;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 467;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        type_description_1 = "ooooooooooo";
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

    tmp_return_value = var_r;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 468;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ea8647c3b423ff9d461a30472af7a062 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ea8647c3b423ff9d461a30472af7a062 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ea8647c3b423ff9d461a30472af7a062 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ea8647c3b423ff9d461a30472af7a062, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ea8647c3b423ff9d461a30472af7a062->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ea8647c3b423ff9d461a30472af7a062, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ea8647c3b423ff9d461a30472af7a062,
        type_description_1,
        par_qs,
        par_keep_blank_values,
        par_encoding,
        par_errors,
        par_fields_limit,
        var_pairs,
        var_r,
        var_name_value,
        var_nv,
        var_name,
        var_value
    );


    // Release cached frame.
    if ( frame_ea8647c3b423ff9d461a30472af7a062 == cache_frame_ea8647c3b423ff9d461a30472af7a062 )
    {
        Py_DECREF( frame_ea8647c3b423ff9d461a30472af7a062 );
    }
    cache_frame_ea8647c3b423ff9d461a30472af7a062 = NULL;

    assertFrameObject( frame_ea8647c3b423ff9d461a30472af7a062 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_21_limited_parse_qsl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_qs );
    par_qs = NULL;

    Py_XDECREF( par_keep_blank_values );
    par_keep_blank_values = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_errors );
    par_errors = NULL;

    Py_XDECREF( par_fields_limit );
    par_fields_limit = NULL;

    Py_XDECREF( var_pairs );
    var_pairs = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_name_value );
    var_name_value = NULL;

    Py_XDECREF( var_nv );
    var_nv = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

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

    Py_XDECREF( par_qs );
    par_qs = NULL;

    Py_XDECREF( par_keep_blank_values );
    par_keep_blank_values = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_errors );
    par_errors = NULL;

    Py_XDECREF( par_fields_limit );
    par_fields_limit = NULL;

    Py_XDECREF( var_pairs );
    var_pairs = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_name_value );
    var_name_value = NULL;

    Py_XDECREF( var_nv );
    var_nv = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$http$$$function_21_limited_parse_qsl );
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



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_10_base36_to_int(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_10_base36_to_int,
        const_str_plain_base36_to_int,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b76b8be11e8e2441ce4490fe05a77db7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_acfc1c20193255804b8fd7d83bd1cd7c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_11_int_to_base36(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_11_int_to_base36,
        const_str_plain_int_to_base36,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1bfd0d4959b6e8cb1da148052f6b1f04,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_0278a3c8354ff413537bb8fa781d209a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_12_urlsafe_base64_encode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_12_urlsafe_base64_encode,
        const_str_plain_urlsafe_base64_encode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6e0274b3f7442b99d4a38e23064c9c0c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_e3ff38ed522c696e2ce8fb0bda118930,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_13_urlsafe_base64_decode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_13_urlsafe_base64_decode,
        const_str_plain_urlsafe_base64_decode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b6025f357d99fd25df5b1efe7af14a7e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_0332a649d3d9c6e3805407402628ade9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_14_parse_etags(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_14_parse_etags,
        const_str_plain_parse_etags,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_591e65182f4da9df27217cbd19684463,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_dd3b6e25933e732c49d187ae39c71926,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_15_quote_etag(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_15_quote_etag,
        const_str_plain_quote_etag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b5c06fb941a1fb8b23367a8a0af1dc5b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_85baaabf3cac666420a2984d5492f8b6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_16_is_same_domain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_16_is_same_domain,
        const_str_plain_is_same_domain,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_065e74a1c571dc71cc37000474dd9afa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_dd6f78f80e1b319371d2be61f253a165,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_17_is_safe_url( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_17_is_safe_url,
        const_str_plain_is_safe_url,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0e94128b59f27aeeddac24cc3c930c32,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_377eb0245c87232e8893d0e12745dc9f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_18__urlparse( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_18__urlparse,
        const_str_plain__urlparse,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f71dcf00df842e1dd859e8a9c3e5cf76,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_b956edff5198358cf12818d9ea146ea8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_19__urlsplit( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_19__urlsplit,
        const_str_plain__urlsplit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4bb21dd7a576d944819593520817a697,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_ea23691749aba42293b4121358e0175f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_1_urlquote( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_1_urlquote,
        const_str_plain_urlquote,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_59985af246a17cf9c63e25c7980ce3b1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_2a78ac7c550ba70834f860b3af49eafc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_20__is_safe_url( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_20__is_safe_url,
        const_str_plain__is_safe_url,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_43aeec64976129488aab47e619a891c8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_21_limited_parse_qsl( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_21_limited_parse_qsl,
        const_str_plain_limited_parse_qsl,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ea8647c3b423ff9d461a30472af7a062,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_8ca97ed2764965055cc7ea2fad595278,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_2_urlquote_plus( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_2_urlquote_plus,
        const_str_plain_urlquote_plus,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6ddbb64b69dd9dcfd06658d46e1f02a5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_3b4afdff97992cb5fe27f3eb2128a6e5,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_3_urlunquote(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_3_urlunquote,
        const_str_plain_urlunquote,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2f6e11ea686b6e080ac887ef55eb4030,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_7af2fbc26471c99f6027509bac99d6c2,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_4_urlunquote_plus(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_4_urlunquote_plus,
        const_str_plain_urlunquote_plus,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_835f652553f94d7e9019c3a4a949e33d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_64cb1f61857b46f7a2679397291f8cd8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_5_urlencode( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_5_urlencode,
        const_str_plain_urlencode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_eed299a30bd7927ba1425c828159c47a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_b4c7e731c78b609064f0e5d07aff9ce0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_6_cookie_date( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_6_cookie_date,
        const_str_plain_cookie_date,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_68e65f08e9f392be1aa478286e1c2c3c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_6e4baf307f95b180e391bfedf59f9342,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_7_http_date( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_7_http_date,
        const_str_plain_http_date,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_db66317084e293ceeafea0cfb89bb278,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_27671265d3bc4b7b30fab4dcc56ece57,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_8_parse_http_date(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_8_parse_http_date,
        const_str_plain_parse_http_date,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_61e47f539c4117aaebe775fe9da697d8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_d911421cc7b811b9bb394e57c41af426,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$http$$$function_9_parse_http_date_safe(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$http$$$function_9_parse_http_date_safe,
        const_str_plain_parse_http_date_safe,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_93224d0ffab733ff4168d7cfa53597b2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$http,
        const_str_digest_e64ee96c641dbe4638424ab390a3cbb6,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$utils$http =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.http",   /* m_name */
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

MOD_INIT_DECL( django$utils$http )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$utils$http );
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
    puts("django.utils.http: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.utils.http: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$utils$http" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$utils$http = Py_InitModule4(
        "django.utils.http",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$utils$http = PyModule_Create( &mdef_django$utils$http );
#endif

    moduledict_django$utils$http = MODULE_DICT( module_django$utils$http );

    CHECK_OBJECT( module_django$utils$http );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_de1637a5b7f41dbfb385ee782c95a853, module_django$utils$http );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
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
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_defaults_8;
    PyObject *tmp_defaults_9;
    PyObject *tmp_defaults_10;
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
    PyObject *tmp_fromlist_name_13;
    PyObject *tmp_fromlist_name_14;
    PyObject *tmp_fromlist_name_15;
    PyObject *tmp_fromlist_name_16;
    PyObject *tmp_fromlist_name_17;
    PyObject *tmp_fromlist_name_18;
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
    PyObject *tmp_globals_name_13;
    PyObject *tmp_globals_name_14;
    PyObject *tmp_globals_name_15;
    PyObject *tmp_globals_name_16;
    PyObject *tmp_globals_name_17;
    PyObject *tmp_globals_name_18;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_import_name_from_23;
    PyObject *tmp_import_name_from_24;
    PyObject *tmp_import_name_from_25;
    PyObject *tmp_import_name_from_26;
    PyObject *tmp_import_name_from_27;
    PyObject *tmp_import_name_from_28;
    PyObject *tmp_import_name_from_29;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
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
    PyObject *tmp_level_name_13;
    PyObject *tmp_level_name_14;
    PyObject *tmp_level_name_15;
    PyObject *tmp_level_name_16;
    PyObject *tmp_level_name_17;
    PyObject *tmp_level_name_18;
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
    PyObject *tmp_locals_name_13;
    PyObject *tmp_locals_name_14;
    PyObject *tmp_locals_name_15;
    PyObject *tmp_locals_name_16;
    PyObject *tmp_locals_name_17;
    PyObject *tmp_locals_name_18;
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
    PyObject *tmp_name_name_13;
    PyObject *tmp_name_name_14;
    PyObject *tmp_name_name_15;
    PyObject *tmp_name_name_16;
    PyObject *tmp_name_name_17;
    PyObject *tmp_name_name_18;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    struct Nuitka_FrameObject *frame_602fd1df8e58b8d5af15ce2bbac6e3a4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4 = MAKE_MODULE_FRAME( codeobj_602fd1df8e58b8d5af15ce2bbac6e3a4, module_django$utils$http );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_602fd1df8e58b8d5af15ce2bbac6e3a4 );
    assert( Py_REFCNT( frame_602fd1df8e58b8d5af15ce2bbac6e3a4 ) == 2 );

    // Framed code:
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_de1637a5b7f41dbfb385ee782c95a853;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_467c9722f19d9d40d148689532cdc0b1;
    UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_unicode_literals );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_plain_base64;
    tmp_globals_name_1 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 3;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_base64, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_calendar;
    tmp_globals_name_2 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 4;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_calendar, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_plain_datetime;
    tmp_globals_name_3 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 5;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_10 );
    tmp_name_name_4 = const_str_plain_re;
    tmp_globals_name_4 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 6;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_11 );
    tmp_name_name_5 = const_str_plain_sys;
    tmp_globals_name_5 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    tmp_level_name_5 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 7;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    assert( tmp_assign_source_12 != NULL );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_12 );
    tmp_name_name_6 = const_str_plain_unicodedata;
    tmp_globals_name_6 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = Py_None;
    tmp_level_name_6 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 8;
    tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_unicodedata, tmp_assign_source_13 );
    tmp_name_name_7 = const_str_plain_warnings;
    tmp_globals_name_7 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = Py_None;
    tmp_level_name_7 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 9;
    tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_14 );
    tmp_name_name_8 = const_str_plain_binascii;
    tmp_globals_name_8 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_Error_tuple;
    tmp_level_name_8 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 10;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    assert( tmp_import_name_from_2 != NULL );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Error );
    Py_DECREF( tmp_import_name_from_2 );
    assert( tmp_assign_source_15 != NULL );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_BinasciiError, tmp_assign_source_15 );
    tmp_name_name_9 = const_str_digest_d812b958231530decb13359a90689c4d;
    tmp_globals_name_9 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_formatdate_tuple;
    tmp_level_name_9 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 11;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_formatdate );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_formatdate, tmp_assign_source_16 );
    tmp_name_name_10 = const_str_digest_dfb6e1abbed3113ee07234fdc458a320;
    tmp_globals_name_10 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_TooManyFieldsSent_tuple;
    tmp_level_name_10 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 13;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_TooManyFieldsSent );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_TooManyFieldsSent, tmp_assign_source_17 );
    tmp_name_name_11 = const_str_digest_467c9722f19d9d40d148689532cdc0b1;
    tmp_globals_name_11 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_six_tuple;
    tmp_level_name_11 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 14;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_six );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_18 );
    tmp_name_name_12 = const_str_digest_a2ee8bfc8734037443b4b8317fc40aa2;
    tmp_globals_name_12 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_str_plain_MultiValueDict_tuple;
    tmp_level_name_12 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 15;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_MultiValueDict );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_MultiValueDict, tmp_assign_source_19 );
    tmp_name_name_13 = const_str_digest_f3705ed203bc8405b0735fb4179b32a8;
    tmp_globals_name_13 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_13 = Py_None;
    tmp_fromlist_name_13 = const_tuple_str_plain_RemovedInDjango21Warning_tuple;
    tmp_level_name_13 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 16;
    tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_RemovedInDjango21Warning );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_RemovedInDjango21Warning, tmp_assign_source_20 );
    tmp_name_name_14 = const_str_digest_e3393b2e61653c3df2c7d436c253bbee;
    tmp_globals_name_14 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_14 = Py_None;
    tmp_fromlist_name_14 = const_tuple_f2db63c8cfc7b8bfe8caddfb8d4fb877_tuple;
    tmp_level_name_14 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 17;
    tmp_assign_source_21 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_21;

    // Tried code:
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_force_bytes );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_bytes, tmp_assign_source_22 );
    tmp_import_name_from_9 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_force_str );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_str, tmp_assign_source_23 );
    tmp_import_name_from_10 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_force_text );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_force_text, tmp_assign_source_24 );
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

    tmp_name_name_15 = const_str_digest_3d2fb639fc3676a85e9d77bb02d18a21;
    tmp_globals_name_15 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_15 = Py_None;
    tmp_fromlist_name_15 = const_tuple_str_plain_keep_lazy_text_tuple;
    tmp_level_name_15 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 18;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_keep_lazy_text );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_keep_lazy_text, tmp_assign_source_25 );
    tmp_name_name_16 = const_str_digest_8bc4877a3eddf48ed5f347a2b6e7205e;
    tmp_globals_name_16 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_16 = Py_None;
    tmp_fromlist_name_16 = const_tuple_bdf9e3a2f67f141834f0921c427a6cf5_tuple;
    tmp_level_name_16 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 19;
    tmp_assign_source_26 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_26;

    // Tried code:
    tmp_import_name_from_12 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_quote );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_quote, tmp_assign_source_27 );
    tmp_import_name_from_13 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_quote_plus );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_quote_plus, tmp_assign_source_28 );
    tmp_import_name_from_14 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_unquote );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_unquote, tmp_assign_source_29 );
    tmp_import_name_from_15 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_unquote_plus );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_unquote_plus, tmp_assign_source_30 );
    tmp_import_name_from_16 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_urlencode );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_original_urlencode, tmp_assign_source_31 );
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

    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 23;

        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PY2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 23;

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
    tmp_name_name_17 = const_str_plain_urlparse;
    tmp_globals_name_17 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_17 = Py_None;
    tmp_fromlist_name_17 = const_tuple_36ea0bb1d942fbb92505a7f186a9c9f2_tuple;
    tmp_level_name_17 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 24;
    tmp_assign_source_32 = IMPORT_MODULE5( tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_32;

    // Tried code:
    tmp_import_name_from_17 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_ParseResult );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_ParseResult, tmp_assign_source_33 );
    tmp_import_name_from_18 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_SplitResult );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_SplitResult, tmp_assign_source_34 );
    tmp_import_name_from_19 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain__splitnetloc );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__splitnetloc, tmp_assign_source_35 );
    tmp_import_name_from_20 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain__splitparams );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__splitparams, tmp_assign_source_36 );
    tmp_import_name_from_21 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_scheme_chars );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_scheme_chars, tmp_assign_source_37 );
    tmp_import_name_from_22 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_22 );
    tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_uses_params );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_uses_params, tmp_assign_source_38 );
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

    Py_XDECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_assign_source_39 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__coerce_args, tmp_assign_source_39 );
    goto branch_end_1;
    branch_no_1:;
    tmp_name_name_18 = const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
    tmp_globals_name_18 = (PyObject *)moduledict_django$utils$http;
    tmp_locals_name_18 = Py_None;
    tmp_fromlist_name_18 = const_tuple_45d86939aa476df3bf58e2f8ed87651b_tuple;
    tmp_level_name_18 = const_int_0;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 30;
    tmp_assign_source_40 = IMPORT_MODULE5( tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18, tmp_level_name_18 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_40;

    // Tried code:
    tmp_import_name_from_23 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_23 );
    tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_ParseResult );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_ParseResult, tmp_assign_source_41 );
    tmp_import_name_from_24 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_24 );
    tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_SplitResult );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_SplitResult, tmp_assign_source_42 );
    tmp_import_name_from_25 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_25 );
    tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain__coerce_args );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__coerce_args, tmp_assign_source_43 );
    tmp_import_name_from_26 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_26 );
    tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain__splitnetloc );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__splitnetloc, tmp_assign_source_44 );
    tmp_import_name_from_27 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_27 );
    tmp_assign_source_45 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain__splitparams );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__splitparams, tmp_assign_source_45 );
    tmp_import_name_from_28 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_28 );
    tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_scheme_chars );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_scheme_chars, tmp_assign_source_46 );
    tmp_import_name_from_29 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_29 );
    tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_uses_params );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_uses_params, tmp_assign_source_47 );
    goto try_end_4;
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

    Py_XDECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    branch_end_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;

        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_compile );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_digest_091d197ef37516bbc801714e1e252b02;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_X );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_ETAG_MATCH, tmp_assign_source_48 );
    tmp_called_instance_1 = const_str_digest_65f5a8dc9f3faabff91a786e91c464e3;
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 45;
    tmp_assign_source_49 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_split );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_MONTHS, tmp_assign_source_49 );
    tmp_assign_source_50 = const_str_digest_ee6c9622ceb54c046db9e6e52b2917a4;
    UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___D, tmp_assign_source_50 );
    tmp_assign_source_51 = const_str_digest_e7fb6f9eaa9a97c525bba24277d9fbaf;
    UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___D2, tmp_assign_source_51 );
    tmp_assign_source_52 = const_str_digest_27690054c45f79644e57879c8c2773d3;
    UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___M, tmp_assign_source_52 );
    tmp_assign_source_53 = const_str_digest_ddbf0db65c7c2837fc4933e3e5f46ce8;
    UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___Y, tmp_assign_source_53 );
    tmp_assign_source_54 = const_str_digest_eafd353eca7d916601e0fbcc5f52c22f;
    UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___Y2, tmp_assign_source_54 );
    tmp_assign_source_55 = const_str_digest_e6f6b155c3ec6c17cfb564626561112f;
    UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___T, tmp_assign_source_55 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_compile );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_ca2504722bdcd823135810f7ec7de232;
    tmp_right_name_1 = PyTuple_New( 4 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___D );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___D );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__D" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___M );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___M );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__M" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___Y );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___Y );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__Y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___T );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___T );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__T" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 3, tmp_tuple_element_1 );
    tmp_args_element_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_RFC1123_DATE, tmp_assign_source_56 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_compile );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = const_str_digest_5ccccffcd30a38f9afd04d9c43213ca9;
    tmp_right_name_2 = PyTuple_New( 4 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___D );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___D );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__D" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___M );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___M );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__M" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___Y2 );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___Y2 );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__Y2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 2, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___T );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___T );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__T" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 3, tmp_tuple_element_2 );
    tmp_args_element_name_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_RFC850_DATE, tmp_assign_source_57 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_compile );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = const_str_digest_fe70a4ac107703284c8732fca1d3d720;
    tmp_right_name_3 = PyTuple_New( 4 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___M );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___M );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__M" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___D2 );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___D2 );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__D2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___T );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___T );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__T" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_3, 2, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain___Y );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___Y );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__Y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_3, 3, tmp_tuple_element_3 );
    tmp_args_element_name_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_ASCTIME_DATE, tmp_assign_source_58 );
    tmp_assign_source_59 = const_str_digest_6aeadd226a5caea64ebd9098eb5a263c;
    UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_RFC3986_GENDELIMS, tmp_assign_source_59 );
    tmp_assign_source_60 = const_str_digest_035b27a1609d0a5305b7aeb8f6a6db6f;
    UPDATE_STRING_DICT0( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_RFC3986_SUBDELIMS, tmp_assign_source_60 );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;

        goto frame_exception_exit_1;
    }

    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 59;
    tmp_assign_source_61 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_83180b1371517bcd058515312c918660_tuple, 0 ) );

    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_FIELDS_MATCH, tmp_assign_source_61 );
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_keep_lazy_text );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_keep_lazy_text );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "keep_lazy_text" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;

        goto frame_exception_exit_1;
    }

    tmp_defaults_1 = const_tuple_str_chr_47_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_args_element_name_8 = MAKE_FUNCTION_django$utils$http$$$function_1_urlquote( tmp_defaults_1 );
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_62 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_urlquote, tmp_assign_source_62 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_keep_lazy_text );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_keep_lazy_text );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "keep_lazy_text" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;

        goto frame_exception_exit_1;
    }

    tmp_defaults_2 = const_tuple_str_empty_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_args_element_name_9 = MAKE_FUNCTION_django$utils$http$$$function_2_urlquote_plus( tmp_defaults_2 );
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_urlquote_plus, tmp_assign_source_63 );
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_keep_lazy_text );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_keep_lazy_text );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "keep_lazy_text" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = MAKE_FUNCTION_django$utils$http$$$function_3_urlunquote(  );
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_64 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_urlunquote, tmp_assign_source_64 );
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_keep_lazy_text );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_keep_lazy_text );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "keep_lazy_text" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = MAKE_FUNCTION_django$utils$http$$$function_4_urlunquote_plus(  );
    frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame.f_lineno = 93;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_65 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_urlunquote_plus, tmp_assign_source_65 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_602fd1df8e58b8d5af15ce2bbac6e3a4 );
#endif
    popFrameStack();

    assertFrameObject( frame_602fd1df8e58b8d5af15ce2bbac6e3a4 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_602fd1df8e58b8d5af15ce2bbac6e3a4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_602fd1df8e58b8d5af15ce2bbac6e3a4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_602fd1df8e58b8d5af15ce2bbac6e3a4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_602fd1df8e58b8d5af15ce2bbac6e3a4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_defaults_3 = const_tuple_int_0_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_66 = MAKE_FUNCTION_django$utils$http$$$function_5_urlencode( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_urlencode, tmp_assign_source_66 );
    tmp_defaults_4 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_67 = MAKE_FUNCTION_django$utils$http$$$function_6_cookie_date( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_cookie_date, tmp_assign_source_67 );
    tmp_defaults_5 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_assign_source_68 = MAKE_FUNCTION_django$utils$http$$$function_7_http_date( tmp_defaults_5 );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_http_date, tmp_assign_source_68 );
    tmp_assign_source_69 = MAKE_FUNCTION_django$utils$http$$$function_8_parse_http_date(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_parse_http_date, tmp_assign_source_69 );
    tmp_assign_source_70 = MAKE_FUNCTION_django$utils$http$$$function_9_parse_http_date_safe(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_parse_http_date_safe, tmp_assign_source_70 );
    tmp_assign_source_71 = MAKE_FUNCTION_django$utils$http$$$function_10_base36_to_int(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_base36_to_int, tmp_assign_source_71 );
    tmp_assign_source_72 = MAKE_FUNCTION_django$utils$http$$$function_11_int_to_base36(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_int_to_base36, tmp_assign_source_72 );
    tmp_assign_source_73 = MAKE_FUNCTION_django$utils$http$$$function_12_urlsafe_base64_encode(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_urlsafe_base64_encode, tmp_assign_source_73 );
    tmp_assign_source_74 = MAKE_FUNCTION_django$utils$http$$$function_13_urlsafe_base64_decode(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_urlsafe_base64_decode, tmp_assign_source_74 );
    tmp_assign_source_75 = MAKE_FUNCTION_django$utils$http$$$function_14_parse_etags(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_parse_etags, tmp_assign_source_75 );
    tmp_assign_source_76 = MAKE_FUNCTION_django$utils$http$$$function_15_quote_etag(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_quote_etag, tmp_assign_source_76 );
    tmp_assign_source_77 = MAKE_FUNCTION_django$utils$http$$$function_16_is_same_domain(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_is_same_domain, tmp_assign_source_77 );
    tmp_defaults_6 = const_tuple_none_none_false_tuple;
    Py_INCREF( tmp_defaults_6 );
    tmp_assign_source_78 = MAKE_FUNCTION_django$utils$http$$$function_17_is_safe_url( tmp_defaults_6 );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_is_safe_url, tmp_assign_source_78 );
    tmp_defaults_7 = const_tuple_str_empty_true_tuple;
    Py_INCREF( tmp_defaults_7 );
    tmp_assign_source_79 = MAKE_FUNCTION_django$utils$http$$$function_18__urlparse( tmp_defaults_7 );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__urlparse, tmp_assign_source_79 );
    tmp_defaults_8 = const_tuple_str_empty_true_tuple;
    Py_INCREF( tmp_defaults_8 );
    tmp_assign_source_80 = MAKE_FUNCTION_django$utils$http$$$function_19__urlsplit( tmp_defaults_8 );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__urlsplit, tmp_assign_source_80 );
    tmp_defaults_9 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_9 );
    tmp_assign_source_81 = MAKE_FUNCTION_django$utils$http$$$function_20__is_safe_url( tmp_defaults_9 );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain__is_safe_url, tmp_assign_source_81 );
    tmp_defaults_10 = const_tuple_e7cd725475ddb402d6dd054778f163e3_tuple;
    Py_INCREF( tmp_defaults_10 );
    tmp_assign_source_82 = MAKE_FUNCTION_django$utils$http$$$function_21_limited_parse_qsl( tmp_defaults_10 );
    UPDATE_STRING_DICT1( moduledict_django$utils$http, (Nuitka_StringObject *)const_str_plain_limited_parse_qsl, tmp_assign_source_82 );

    return MOD_RETURN_VALUE( module_django$utils$http );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
