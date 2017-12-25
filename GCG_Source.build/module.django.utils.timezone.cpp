/* Generated code for Python source for module 'django.utils.timezone'
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

/* The _module_django$utils$timezone is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$utils$timezone;
PyDictObject *moduledict_django$utils$timezone;

/* The module constants used, if any. */
extern PyObject *const_str_plain_threading;
static PyObject *const_str_digest_67da3f35e1f5b64e9f77f717ba60de4d;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_make_naive;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_old_timezone;
extern PyObject *const_str_plain_USE_TZ;
extern PyObject *const_str_chr_43;
extern PyObject *const_str_plain_timedelta;
extern PyObject *const_str_plain_override;
extern PyObject *const_str_plain_get_fixed_timezone;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_traceback;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_lru_cache;
static PyObject *const_tuple_str_plain_value_str_plain_timezone_str_plain_is_dst_tuple;
extern PyObject *const_str_plain_offset;
extern PyObject *const_tuple_str_plain_value_tuple;
extern PyObject *const_str_plain___exit__;
static PyObject *const_str_digest_97abed93173417d8386708bc46cd86df;
static PyObject *const_str_digest_46f6695f2433185d5eb7f0d4facfe255;
extern PyObject *const_str_plain_localtime;
static PyObject *const_str_plain_get_default_timezone_name;
extern PyObject *const_str_plain_now;
extern PyObject *const_str_digest_f8a372320638d79a3b0396f617f18dbd;
extern PyObject *const_str_plain_TIME_ZONE;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_digest_bcbdee2e5f15fb45362c7f71c6d77e13;
static PyObject *const_str_digest_ccb40a911d75c0e879ae51a6d99d7a0a;
static PyObject *const_str_digest_689fd68cee27617c8d9f78deaad607e2;
extern PyObject *const_str_plain_minutes;
static PyObject *const_str_plain_should_convert;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain__FixedOffset__name;
static PyObject *const_str_digest_2c3f202709f2d0221a6de3c892f50257;
static PyObject *const_str_digest_bc715b64ce7b47a419c1482c84be6e25;
extern PyObject *const_str_plain_utcoffset;
extern PyObject *const_str_plain_get_default_timezone;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_digest_994b2434123d23e18b6ca5d4161c70ce;
static PyObject *const_str_digest_156d9e72fbc7cfa30f17f82563eca60c;
static PyObject *const_str_digest_1de728318388b7ba723a89f50a9bf66f;
extern PyObject *const_str_digest_f7c850c4a7dac342c89d16463303e0c9;
extern PyObject *const_str_plain_use_tz;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_is_naive;
extern PyObject *const_str_plain_tzinfo;
extern PyObject *const_str_chr_45;
extern PyObject *const_str_plain_string_types;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_value;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
static PyObject *const_str_digest_22402af56c61dabc6de5c63acc2fc035;
static PyObject *const_str_digest_5a5cff3235928a02f3d316668a459f40;
extern PyObject *const_str_plain_seconds;
static PyObject *const_str_digest_47db89051c32be3801b564bfe671e52e;
static PyObject *const_tuple_str_plain_value_str_plain_timezone_tuple;
static PyObject *const_str_digest_92f29e70bbe7d0cca4d2e6fc536a928b;
extern PyObject *const_tuple_str_plain_datetime_str_plain_timedelta_str_plain_tzinfo_tuple;
extern PyObject *const_str_plain_exc_type;
extern PyObject *const_str_digest_8168daa3eb03e71d00bf66ae63aff961;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_467c9722f19d9d40d148689532cdc0b1;
extern PyObject *const_str_plain_activate;
extern PyObject *const_tuple_str_plain_self_str_plain_offset_str_plain_name_tuple;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_tuple_str_plain_local_tuple;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_name;
static PyObject *const_str_digest_8947245cbfe4d2a893f47b6408231592;
extern PyObject *const_str_digest_d64c8d310ca849fd7005f3776988b50a;
static PyObject *const_str_plain_hhmm;
static PyObject *const_str_digest_1d2a8c504f9ba9935fcd6b7c4fb4af37;
extern PyObject *const_str_digest_2a6edf0079b7095560cfe651388c2111;
extern PyObject *const_str_plain_FixedOffset;
extern PyObject *const_str_plain__active;
extern PyObject *const_dict_19923244156fa96a7d6f1da74d173385;
extern PyObject *const_int_pos_60;
extern PyObject *const_str_plain_localize;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_tuple_str_plain_self_str_plain_dt_tuple;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_f3088a48c60a1ea1e374a7c645808515;
static PyObject *const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list;
static PyObject *const_str_digest_fd03fd550fa65114e3d60b7a55e0339b;
extern PyObject *const_str_plain_is_aware;
extern PyObject *const_int_0;
static PyObject *const_str_digest_6ec04fdf9e668c58998c26788efdb13e;
extern PyObject *const_str_plain_timezone;
extern PyObject *const_str_plain_is_dst;
static PyObject *const_str_digest_bc9bd8215ebbf0ae449490b5a5389e87;
extern PyObject *const_tuple_str_plain_settings_tuple;
extern PyObject *const_str_plain_get_current_timezone_name;
static PyObject *const_tuple_73e768058e1ba390a4c028fc087270d8_tuple;
extern PyObject *const_str_plain_ZERO;
extern PyObject *const_tuple_str_plain_ContextDecorator_tuple;
extern PyObject *const_tuple_str_plain_lru_cache_str_plain_six_tuple;
extern PyObject *const_str_plain_utcnow;
extern PyObject *const_str_plain_get_current_timezone;
extern PyObject *const_str_plain_settings;
extern PyObject *const_str_plain_normalize;
extern PyObject *const_str_digest_ec2449552f186c6acec032746f70104f;
extern PyObject *const_str_plain_ContextDecorator;
extern PyObject *const_str_plain_zone;
extern PyObject *const_str_plain_dst;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain__get_timezone_name;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_make_aware;
extern PyObject *const_str_plain_tzname;
extern PyObject *const_str_plain_pytz;
extern PyObject *const_str_plain_localdate;
static PyObject *const_str_digest_7f44896dba92a441a119fdb7ab599e47;
extern PyObject *const_str_plain__FixedOffset__offset;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_local;
extern PyObject *const_str_plain_exc_value;
static PyObject *const_str_plain_convert_to_local_time;
static PyObject *const_str_digest_824b542b78b1d7cd88bc1257354ecd00;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_451385fa2ef1b4f825fc336a808e6e05;
static PyObject *const_str_digest_3dd1b6d94c2e290846dc48c55deb5f1f;
extern PyObject *const_str_digest_c689152bf2ce7810a5b42b5280673543;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_str_plain_self_str_plain_timezone_tuple;
extern PyObject *const_str_plain_deactivate;
extern PyObject *const_tuple_str_plain_timezone_tuple;
extern PyObject *const_str_plain_utc;
extern PyObject *const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple;
static PyObject *const_str_digest_22185b81f8b9f6c3518320d74884a212;
static PyObject *const_str_digest_538f18ef120991edba2e9f5790be5bc5;
extern PyObject *const_str_plain_date;
static PyObject *const_tuple_str_plain_value_str_plain_use_tz_str_plain_should_convert_tuple;
extern PyObject *const_str_plain_dt;
extern PyObject *const_str_plain_template_localtime;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_astimezone;
static PyObject *const_str_digest_59360098132520585159861a872818a3;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_67da3f35e1f5b64e9f77f717ba60de4d = UNSTREAM_STRING( &constant_bin[ 1156691 ], 8, 0 );
    const_str_plain_old_timezone = UNSTREAM_STRING( &constant_bin[ 1210842 ], 12, 1 );
    const_tuple_str_plain_value_str_plain_timezone_str_plain_is_dst_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_timezone_str_plain_is_dst_tuple, 0, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_timezone_str_plain_is_dst_tuple, 1, const_str_plain_timezone ); Py_INCREF( const_str_plain_timezone );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_timezone_str_plain_is_dst_tuple, 2, const_str_plain_is_dst ); Py_INCREF( const_str_plain_is_dst );
    const_str_digest_97abed93173417d8386708bc46cd86df = UNSTREAM_STRING( &constant_bin[ 1210854 ], 244, 0 );
    const_str_digest_46f6695f2433185d5eb7f0d4facfe255 = UNSTREAM_STRING( &constant_bin[ 1211098 ], 288, 0 );
    const_str_plain_get_default_timezone_name = UNSTREAM_STRING( &constant_bin[ 1211386 ], 25, 1 );
    const_str_digest_ccb40a911d75c0e879ae51a6d99d7a0a = UNSTREAM_STRING( &constant_bin[ 1211411 ], 287, 0 );
    const_str_digest_689fd68cee27617c8d9f78deaad607e2 = UNSTREAM_STRING( &constant_bin[ 1211698 ], 50, 0 );
    const_str_plain_should_convert = UNSTREAM_STRING( &constant_bin[ 1211748 ], 14, 1 );
    const_str_digest_2c3f202709f2d0221a6de3c892f50257 = UNSTREAM_STRING( &constant_bin[ 1211762 ], 41, 0 );
    const_str_digest_bc715b64ce7b47a419c1482c84be6e25 = UNSTREAM_STRING( &constant_bin[ 1211803 ], 43, 0 );
    const_str_digest_156d9e72fbc7cfa30f17f82563eca60c = UNSTREAM_STRING( &constant_bin[ 1211846 ], 84, 0 );
    const_str_digest_1de728318388b7ba723a89f50a9bf66f = UNSTREAM_STRING( &constant_bin[ 1211930 ], 119, 0 );
    const_str_digest_22402af56c61dabc6de5c63acc2fc035 = UNSTREAM_STRING( &constant_bin[ 1212049 ], 297, 0 );
    const_str_digest_5a5cff3235928a02f3d316668a459f40 = UNSTREAM_STRING( &constant_bin[ 1212346 ], 297, 0 );
    const_str_digest_47db89051c32be3801b564bfe671e52e = UNSTREAM_STRING( &constant_bin[ 1212643 ], 49, 0 );
    const_tuple_str_plain_value_str_plain_timezone_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_timezone_tuple, 0, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_timezone_tuple, 1, const_str_plain_timezone ); Py_INCREF( const_str_plain_timezone );
    const_str_digest_92f29e70bbe7d0cca4d2e6fc536a928b = UNSTREAM_STRING( &constant_bin[ 1212692 ], 70, 0 );
    const_str_digest_8947245cbfe4d2a893f47b6408231592 = UNSTREAM_STRING( &constant_bin[ 1212762 ], 20, 0 );
    const_str_plain_hhmm = UNSTREAM_STRING( &constant_bin[ 1212782 ], 4, 1 );
    const_str_digest_1d2a8c504f9ba9935fcd6b7c4fb4af37 = UNSTREAM_STRING( &constant_bin[ 1212786 ], 43, 0 );
    const_str_digest_f3088a48c60a1ea1e374a7c645808515 = UNSTREAM_STRING( &constant_bin[ 1212829 ], 61, 0 );
    const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list = PyList_New( 15 );
    PyList_SET_ITEM( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list, 0, const_str_plain_utc ); Py_INCREF( const_str_plain_utc );
    PyList_SET_ITEM( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list, 1, const_str_plain_get_fixed_timezone ); Py_INCREF( const_str_plain_get_fixed_timezone );
    PyList_SET_ITEM( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list, 2, const_str_plain_get_default_timezone ); Py_INCREF( const_str_plain_get_default_timezone );
    PyList_SET_ITEM( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list, 3, const_str_plain_get_default_timezone_name ); Py_INCREF( const_str_plain_get_default_timezone_name );
    PyList_SET_ITEM( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list, 4, const_str_plain_get_current_timezone ); Py_INCREF( const_str_plain_get_current_timezone );
    PyList_SET_ITEM( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list, 5, const_str_plain_get_current_timezone_name ); Py_INCREF( const_str_plain_get_current_timezone_name );
    PyList_SET_ITEM( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list, 6, const_str_plain_activate ); Py_INCREF( const_str_plain_activate );
    PyList_SET_ITEM( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list, 7, const_str_plain_deactivate ); Py_INCREF( const_str_plain_deactivate );
    PyList_SET_ITEM( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list, 8, const_str_plain_override ); Py_INCREF( const_str_plain_override );
    PyList_SET_ITEM( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list, 9, const_str_plain_localtime ); Py_INCREF( const_str_plain_localtime );
    PyList_SET_ITEM( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list, 10, const_str_plain_now ); Py_INCREF( const_str_plain_now );
    PyList_SET_ITEM( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list, 11, const_str_plain_is_aware ); Py_INCREF( const_str_plain_is_aware );
    PyList_SET_ITEM( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list, 12, const_str_plain_is_naive ); Py_INCREF( const_str_plain_is_naive );
    PyList_SET_ITEM( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list, 13, const_str_plain_make_aware ); Py_INCREF( const_str_plain_make_aware );
    PyList_SET_ITEM( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list, 14, const_str_plain_make_naive ); Py_INCREF( const_str_plain_make_naive );
    const_str_digest_fd03fd550fa65114e3d60b7a55e0339b = UNSTREAM_STRING( &constant_bin[ 1212890 ], 52, 0 );
    const_str_digest_6ec04fdf9e668c58998c26788efdb13e = UNSTREAM_STRING( &constant_bin[ 1212942 ], 406, 0 );
    const_str_digest_bc9bd8215ebbf0ae449490b5a5389e87 = UNSTREAM_STRING( &constant_bin[ 1213348 ], 30, 0 );
    const_tuple_73e768058e1ba390a4c028fc087270d8_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_73e768058e1ba390a4c028fc087270d8_tuple, 0, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );
    PyTuple_SET_ITEM( const_tuple_73e768058e1ba390a4c028fc087270d8_tuple, 1, const_str_plain_sign ); Py_INCREF( const_str_plain_sign );
    PyTuple_SET_ITEM( const_tuple_73e768058e1ba390a4c028fc087270d8_tuple, 2, const_str_plain_hhmm ); Py_INCREF( const_str_plain_hhmm );
    PyTuple_SET_ITEM( const_tuple_73e768058e1ba390a4c028fc087270d8_tuple, 3, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_digest_7f44896dba92a441a119fdb7ab599e47 = UNSTREAM_STRING( &constant_bin[ 1213378 ], 24, 0 );
    const_str_plain_convert_to_local_time = UNSTREAM_STRING( &constant_bin[ 1213402 ], 21, 1 );
    const_str_digest_824b542b78b1d7cd88bc1257354ecd00 = UNSTREAM_STRING( &constant_bin[ 1213423 ], 149, 0 );
    const_str_digest_451385fa2ef1b4f825fc336a808e6e05 = UNSTREAM_STRING( &constant_bin[ 1213572 ], 69, 0 );
    const_str_digest_3dd1b6d94c2e290846dc48c55deb5f1f = UNSTREAM_STRING( &constant_bin[ 1213641 ], 70, 0 );
    const_tuple_str_plain_self_str_plain_timezone_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timezone_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timezone_tuple, 1, const_str_plain_timezone ); Py_INCREF( const_str_plain_timezone );
    const_str_digest_22185b81f8b9f6c3518320d74884a212 = UNSTREAM_STRING( &constant_bin[ 1213711 ], 125, 0 );
    const_str_digest_538f18ef120991edba2e9f5790be5bc5 = UNSTREAM_STRING( &constant_bin[ 1213836 ], 262, 0 );
    const_tuple_str_plain_value_str_plain_use_tz_str_plain_should_convert_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_use_tz_str_plain_should_convert_tuple, 0, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_use_tz_str_plain_should_convert_tuple, 1, const_str_plain_use_tz ); Py_INCREF( const_str_plain_use_tz );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_use_tz_str_plain_should_convert_tuple, 2, const_str_plain_should_convert ); Py_INCREF( const_str_plain_should_convert );
    const_str_digest_59360098132520585159861a872818a3 = UNSTREAM_STRING( &constant_bin[ 1214098 ], 65, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$utils$timezone( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_3c218f9b4924db49161c09fb35ef5d6e;
static PyCodeObject *codeobj_4ebdb71a0ae0934337d4be5568393c82;
static PyCodeObject *codeobj_0f1677b167352c93f3abd916dacb9735;
static PyCodeObject *codeobj_bb83fd44a0e0d6c914df073c53029349;
static PyCodeObject *codeobj_6e9264f58a93ee8aaaaeb68229411dd0;
static PyCodeObject *codeobj_8d048fc137fcb514d21b0866370f9efd;
static PyCodeObject *codeobj_cdd13d725d143b4e9c5eb17276eeec13;
static PyCodeObject *codeobj_23671d8a6e93416f056643390bdbc472;
static PyCodeObject *codeobj_7e5fe1d75510b1b0e1b4c4c49fb3c168;
static PyCodeObject *codeobj_d0477ba7efbea40cda758a67435ad5b7;
static PyCodeObject *codeobj_a995ff9ff9ca9afbb8461ff5fc11bd59;
static PyCodeObject *codeobj_f30723695ceb70c89566fc68d9363f5c;
static PyCodeObject *codeobj_09fadb34e4533f751a645bee0ba63d49;
static PyCodeObject *codeobj_8d35c1c133b373bcf607b8435671595f;
static PyCodeObject *codeobj_bae87ccd9fcb0bb6554ac3f44e926b09;
static PyCodeObject *codeobj_adc88cd43f34fd0beb6998a4e3b05396;
static PyCodeObject *codeobj_8c4e36847dc602cd6545a52ac366ad03;
static PyCodeObject *codeobj_2e69837210922a611328c426f8c7586e;
static PyCodeObject *codeobj_e5d1b18f8dbd6a9e9d0574482efdd433;
static PyCodeObject *codeobj_c9031b2f6d038cc2fbbec2de68611af1;
static PyCodeObject *codeobj_86b3d08cd7417000013783df7961561c;
static PyCodeObject *codeobj_25c90affc67c5e303d7cc55689c6cf1a;
static PyCodeObject *codeobj_1ad860f65be91663288ddbdbfbb4b1a6;
static PyCodeObject *codeobj_002ddfcf3bd41759368739befa0cd9a6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_7f44896dba92a441a119fdb7ab599e47 );
    codeobj_3c218f9b4924db49161c09fb35ef5d6e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_bc9bd8215ebbf0ae449490b5a5389e87, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_4ebdb71a0ae0934337d4be5568393c82 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___enter__, 164, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0f1677b167352c93f3abd916dacb9735 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___exit__, 171, const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bb83fd44a0e0d6c914df073c53029349 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 38, const_tuple_str_plain_self_str_plain_offset_str_plain_name_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6e9264f58a93ee8aaaaeb68229411dd0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 161, const_tuple_str_plain_self_str_plain_timezone_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8d048fc137fcb514d21b0866370f9efd = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_timezone_name, 107, const_tuple_str_plain_timezone_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cdd13d725d143b4e9c5eb17276eeec13 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_activate, 124, const_tuple_str_plain_timezone_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_23671d8a6e93416f056643390bdbc472 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deactivate, 139, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7e5fe1d75510b1b0e1b4c4c49fb3c168 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dst, 50, const_tuple_str_plain_self_str_plain_dt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0477ba7efbea40cda758a67435ad5b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_current_timezone, 93, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a995ff9ff9ca9afbb8461ff5fc11bd59 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_current_timezone_name, 100, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f30723695ceb70c89566fc68d9363f5c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_default_timezone, 72, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_09fadb34e4533f751a645bee0ba63d49 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_default_timezone_name, 83, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8d35c1c133b373bcf607b8435671595f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_fixed_timezone, 58, const_tuple_73e768058e1ba390a4c028fc087270d8_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bae87ccd9fcb0bb6554ac3f44e926b09 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_aware, 251, const_tuple_str_plain_value_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_adc88cd43f34fd0beb6998a4e3b05396 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_naive, 264, const_tuple_str_plain_value_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8c4e36847dc602cd6545a52ac366ad03 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_localdate, 224, const_tuple_str_plain_value_str_plain_timezone_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2e69837210922a611328c426f8c7586e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_localtime, 200, const_tuple_str_plain_value_str_plain_timezone_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e5d1b18f8dbd6a9e9d0574482efdd433 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_make_aware, 277, const_tuple_str_plain_value_str_plain_timezone_str_plain_is_dst_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c9031b2f6d038cc2fbbec2de68611af1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_make_naive, 295, const_tuple_str_plain_value_str_plain_timezone_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_86b3d08cd7417000013783df7961561c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_now, 237, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_25c90affc67c5e303d7cc55689c6cf1a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_template_localtime, 180, const_tuple_str_plain_value_str_plain_use_tz_str_plain_should_convert_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1ad860f65be91663288ddbdbfbb4b1a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tzname, 47, const_tuple_str_plain_self_str_plain_dt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_002ddfcf3bd41759368739befa0cd9a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_utcoffset, 44, const_tuple_str_plain_self_str_plain_dt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_10__get_timezone_name(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_11_activate(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_12_deactivate(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_13___init__(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_14___enter__(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_15___exit__(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_16_template_localtime( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_17_localtime( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_18_localdate( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_19_now(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_20_is_aware(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_21_is_naive(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_22_make_aware( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_23_make_naive( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_2_utcoffset(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_3_tzname(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_4_dst(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_5_get_fixed_timezone(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_6_get_default_timezone(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_7_get_default_timezone_name(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_8_get_current_timezone(  );


static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_9_get_current_timezone_name(  );


// The module function definitions.
static PyObject *impl_django$utils$timezone$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_offset = python_pars[ 1 ];
    PyObject *par_name = python_pars[ 2 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_bb83fd44a0e0d6c914df073c53029349 = NULL;

    struct Nuitka_FrameObject *frame_bb83fd44a0e0d6c914df073c53029349;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bb83fd44a0e0d6c914df073c53029349, codeobj_bb83fd44a0e0d6c914df073c53029349, module_django$utils$timezone, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bb83fd44a0e0d6c914df073c53029349 = cache_frame_bb83fd44a0e0d6c914df073c53029349;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bb83fd44a0e0d6c914df073c53029349 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bb83fd44a0e0d6c914df073c53029349 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_offset;

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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_timedelta );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_minutes;
    tmp_dict_value_1 = par_offset;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_bb83fd44a0e0d6c914df073c53029349->m_frame.f_lineno = 40;
    tmp_assattr_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
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

        exception_lineno = 40;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__FixedOffset__offset, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 40;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_no_1:;
    tmp_compare_left_2 = par_name;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_2 = par_name;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "ooo";
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

        exception_lineno = 42;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__FixedOffset__name, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb83fd44a0e0d6c914df073c53029349 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb83fd44a0e0d6c914df073c53029349 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bb83fd44a0e0d6c914df073c53029349, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bb83fd44a0e0d6c914df073c53029349->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bb83fd44a0e0d6c914df073c53029349, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bb83fd44a0e0d6c914df073c53029349,
        type_description_1,
        par_self,
        par_offset,
        par_name
    );


    // Release cached frame.
    if ( frame_bb83fd44a0e0d6c914df073c53029349 == cache_frame_bb83fd44a0e0d6c914df073c53029349 )
    {
        Py_DECREF( frame_bb83fd44a0e0d6c914df073c53029349 );
    }
    cache_frame_bb83fd44a0e0d6c914df073c53029349 = NULL;

    assertFrameObject( frame_bb83fd44a0e0d6c914df073c53029349 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_offset );
    par_offset = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

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

    Py_XDECREF( par_offset );
    par_offset = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_1___init__ );
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


static PyObject *impl_django$utils$timezone$$$function_2_utcoffset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_002ddfcf3bd41759368739befa0cd9a6 = NULL;

    struct Nuitka_FrameObject *frame_002ddfcf3bd41759368739befa0cd9a6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_002ddfcf3bd41759368739befa0cd9a6, codeobj_002ddfcf3bd41759368739befa0cd9a6, module_django$utils$timezone, sizeof(void *)+sizeof(void *) );
    frame_002ddfcf3bd41759368739befa0cd9a6 = cache_frame_002ddfcf3bd41759368739befa0cd9a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_002ddfcf3bd41759368739befa0cd9a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_002ddfcf3bd41759368739befa0cd9a6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__FixedOffset__offset );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_002ddfcf3bd41759368739befa0cd9a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_002ddfcf3bd41759368739befa0cd9a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_002ddfcf3bd41759368739befa0cd9a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_002ddfcf3bd41759368739befa0cd9a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_002ddfcf3bd41759368739befa0cd9a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_002ddfcf3bd41759368739befa0cd9a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_002ddfcf3bd41759368739befa0cd9a6,
        type_description_1,
        par_self,
        par_dt
    );


    // Release cached frame.
    if ( frame_002ddfcf3bd41759368739befa0cd9a6 == cache_frame_002ddfcf3bd41759368739befa0cd9a6 )
    {
        Py_DECREF( frame_002ddfcf3bd41759368739befa0cd9a6 );
    }
    cache_frame_002ddfcf3bd41759368739befa0cd9a6 = NULL;

    assertFrameObject( frame_002ddfcf3bd41759368739befa0cd9a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_2_utcoffset );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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

    Py_XDECREF( par_dt );
    par_dt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_2_utcoffset );
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


static PyObject *impl_django$utils$timezone$$$function_3_tzname( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_1ad860f65be91663288ddbdbfbb4b1a6 = NULL;

    struct Nuitka_FrameObject *frame_1ad860f65be91663288ddbdbfbb4b1a6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1ad860f65be91663288ddbdbfbb4b1a6, codeobj_1ad860f65be91663288ddbdbfbb4b1a6, module_django$utils$timezone, sizeof(void *)+sizeof(void *) );
    frame_1ad860f65be91663288ddbdbfbb4b1a6 = cache_frame_1ad860f65be91663288ddbdbfbb4b1a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1ad860f65be91663288ddbdbfbb4b1a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1ad860f65be91663288ddbdbfbb4b1a6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__FixedOffset__name );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ad860f65be91663288ddbdbfbb4b1a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ad860f65be91663288ddbdbfbb4b1a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ad860f65be91663288ddbdbfbb4b1a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1ad860f65be91663288ddbdbfbb4b1a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1ad860f65be91663288ddbdbfbb4b1a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1ad860f65be91663288ddbdbfbb4b1a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1ad860f65be91663288ddbdbfbb4b1a6,
        type_description_1,
        par_self,
        par_dt
    );


    // Release cached frame.
    if ( frame_1ad860f65be91663288ddbdbfbb4b1a6 == cache_frame_1ad860f65be91663288ddbdbfbb4b1a6 )
    {
        Py_DECREF( frame_1ad860f65be91663288ddbdbfbb4b1a6 );
    }
    cache_frame_1ad860f65be91663288ddbdbfbb4b1a6 = NULL;

    assertFrameObject( frame_1ad860f65be91663288ddbdbfbb4b1a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_3_tzname );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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

    Py_XDECREF( par_dt );
    par_dt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_3_tzname );
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


static PyObject *impl_django$utils$timezone$$$function_4_dst( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_7e5fe1d75510b1b0e1b4c4c49fb3c168 = NULL;

    struct Nuitka_FrameObject *frame_7e5fe1d75510b1b0e1b4c4c49fb3c168;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7e5fe1d75510b1b0e1b4c4c49fb3c168, codeobj_7e5fe1d75510b1b0e1b4c4c49fb3c168, module_django$utils$timezone, sizeof(void *)+sizeof(void *) );
    frame_7e5fe1d75510b1b0e1b4c4c49fb3c168 = cache_frame_7e5fe1d75510b1b0e1b4c4c49fb3c168;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7e5fe1d75510b1b0e1b4c4c49fb3c168 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7e5fe1d75510b1b0e1b4c4c49fb3c168 ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_ZERO );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ZERO );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ZERO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e5fe1d75510b1b0e1b4c4c49fb3c168 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e5fe1d75510b1b0e1b4c4c49fb3c168 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e5fe1d75510b1b0e1b4c4c49fb3c168 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7e5fe1d75510b1b0e1b4c4c49fb3c168, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7e5fe1d75510b1b0e1b4c4c49fb3c168->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7e5fe1d75510b1b0e1b4c4c49fb3c168, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7e5fe1d75510b1b0e1b4c4c49fb3c168,
        type_description_1,
        par_self,
        par_dt
    );


    // Release cached frame.
    if ( frame_7e5fe1d75510b1b0e1b4c4c49fb3c168 == cache_frame_7e5fe1d75510b1b0e1b4c4c49fb3c168 )
    {
        Py_DECREF( frame_7e5fe1d75510b1b0e1b4c4c49fb3c168 );
    }
    cache_frame_7e5fe1d75510b1b0e1b4c4c49fb3c168 = NULL;

    assertFrameObject( frame_7e5fe1d75510b1b0e1b4c4c49fb3c168 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_4_dst );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_4_dst );
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


static PyObject *impl_django$utils$timezone$$$function_5_get_fixed_timezone( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_offset = python_pars[ 0 ];
    PyObject *var_sign = NULL;
    PyObject *var_hhmm = NULL;
    PyObject *var_name = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_8d35c1c133b373bcf607b8435671595f = NULL;

    struct Nuitka_FrameObject *frame_8d35c1c133b373bcf607b8435671595f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8d35c1c133b373bcf607b8435671595f, codeobj_8d35c1c133b373bcf607b8435671595f, module_django$utils$timezone, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8d35c1c133b373bcf607b8435671595f = cache_frame_8d35c1c133b373bcf607b8435671595f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8d35c1c133b373bcf607b8435671595f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8d35c1c133b373bcf607b8435671595f ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_offset;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_timedelta );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "oooo";
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
    tmp_source_name_1 = par_offset;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_seconds );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_60;
    tmp_assign_source_1 = BINARY_OPERATION_FLOORDIV( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_offset;
        par_offset = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_1 = par_offset;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_2 = const_str_chr_45;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_2 = const_str_chr_43;
    condexpr_end_1:;
    assert( var_sign == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_sign = tmp_assign_source_2;

    tmp_left_name_2 = const_str_digest_67da3f35e1f5b64e9f77f717ba60de4d;
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = par_offset;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_8d35c1c133b373bcf607b8435671595f->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_int_pos_60;
    tmp_right_name_2 = BUILTIN_DIVMOD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_hhmm == NULL );
    var_hhmm = tmp_assign_source_3;

    tmp_left_name_4 = var_sign;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sign" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = var_hhmm;

    CHECK_OBJECT( tmp_right_name_4 );
    tmp_assign_source_4 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_4;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_FixedOffset );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FixedOffset );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FixedOffset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_offset;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_name;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_8d35c1c133b373bcf607b8435671595f->m_frame.f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8d35c1c133b373bcf607b8435671595f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8d35c1c133b373bcf607b8435671595f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8d35c1c133b373bcf607b8435671595f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8d35c1c133b373bcf607b8435671595f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8d35c1c133b373bcf607b8435671595f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8d35c1c133b373bcf607b8435671595f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8d35c1c133b373bcf607b8435671595f,
        type_description_1,
        par_offset,
        var_sign,
        var_hhmm,
        var_name
    );


    // Release cached frame.
    if ( frame_8d35c1c133b373bcf607b8435671595f == cache_frame_8d35c1c133b373bcf607b8435671595f )
    {
        Py_DECREF( frame_8d35c1c133b373bcf607b8435671595f );
    }
    cache_frame_8d35c1c133b373bcf607b8435671595f = NULL;

    assertFrameObject( frame_8d35c1c133b373bcf607b8435671595f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_5_get_fixed_timezone );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_offset );
    par_offset = NULL;

    Py_XDECREF( var_sign );
    var_sign = NULL;

    Py_XDECREF( var_hhmm );
    var_hhmm = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

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

    Py_XDECREF( par_offset );
    par_offset = NULL;

    Py_XDECREF( var_sign );
    var_sign = NULL;

    Py_XDECREF( var_hhmm );
    var_hhmm = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_5_get_fixed_timezone );
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


static PyObject *impl_django$utils$timezone$$$function_6_get_default_timezone( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_f30723695ceb70c89566fc68d9363f5c = NULL;

    struct Nuitka_FrameObject *frame_f30723695ceb70c89566fc68d9363f5c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_f30723695ceb70c89566fc68d9363f5c, codeobj_f30723695ceb70c89566fc68d9363f5c, module_django$utils$timezone, 0 );
    frame_f30723695ceb70c89566fc68d9363f5c = cache_frame_f30723695ceb70c89566fc68d9363f5c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f30723695ceb70c89566fc68d9363f5c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f30723695ceb70c89566fc68d9363f5c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_pytz );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pytz );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pytz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;

        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_timezone );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;

        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_TIME_ZONE );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 79;

        goto frame_exception_exit_1;
    }
    frame_f30723695ceb70c89566fc68d9363f5c->m_frame.f_lineno = 79;
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


        exception_lineno = 79;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f30723695ceb70c89566fc68d9363f5c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f30723695ceb70c89566fc68d9363f5c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f30723695ceb70c89566fc68d9363f5c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f30723695ceb70c89566fc68d9363f5c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f30723695ceb70c89566fc68d9363f5c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f30723695ceb70c89566fc68d9363f5c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f30723695ceb70c89566fc68d9363f5c,
        type_description_1
    );


    // Release cached frame.
    if ( frame_f30723695ceb70c89566fc68d9363f5c == cache_frame_f30723695ceb70c89566fc68d9363f5c )
    {
        Py_DECREF( frame_f30723695ceb70c89566fc68d9363f5c );
    }
    cache_frame_f30723695ceb70c89566fc68d9363f5c = NULL;

    assertFrameObject( frame_f30723695ceb70c89566fc68d9363f5c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_6_get_default_timezone );
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


static PyObject *impl_django$utils$timezone$$$function_7_get_default_timezone_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_09fadb34e4533f751a645bee0ba63d49 = NULL;

    struct Nuitka_FrameObject *frame_09fadb34e4533f751a645bee0ba63d49;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_09fadb34e4533f751a645bee0ba63d49, codeobj_09fadb34e4533f751a645bee0ba63d49, module_django$utils$timezone, 0 );
    frame_09fadb34e4533f751a645bee0ba63d49 = cache_frame_09fadb34e4533f751a645bee0ba63d49;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_09fadb34e4533f751a645bee0ba63d49 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_09fadb34e4533f751a645bee0ba63d49 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain__get_timezone_name );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_timezone_name );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_timezone_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;

        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_get_default_timezone );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_default_timezone );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_default_timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;

        goto frame_exception_exit_1;
    }

    frame_09fadb34e4533f751a645bee0ba63d49->m_frame.f_lineno = 87;
    tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto frame_exception_exit_1;
    }
    frame_09fadb34e4533f751a645bee0ba63d49->m_frame.f_lineno = 87;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_09fadb34e4533f751a645bee0ba63d49 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_09fadb34e4533f751a645bee0ba63d49 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_09fadb34e4533f751a645bee0ba63d49 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_09fadb34e4533f751a645bee0ba63d49, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_09fadb34e4533f751a645bee0ba63d49->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_09fadb34e4533f751a645bee0ba63d49, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_09fadb34e4533f751a645bee0ba63d49,
        type_description_1
    );


    // Release cached frame.
    if ( frame_09fadb34e4533f751a645bee0ba63d49 == cache_frame_09fadb34e4533f751a645bee0ba63d49 )
    {
        Py_DECREF( frame_09fadb34e4533f751a645bee0ba63d49 );
    }
    cache_frame_09fadb34e4533f751a645bee0ba63d49 = NULL;

    assertFrameObject( frame_09fadb34e4533f751a645bee0ba63d49 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_7_get_default_timezone_name );
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


static PyObject *impl_django$utils$timezone$$$function_8_get_current_timezone( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_called_name_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_d0477ba7efbea40cda758a67435ad5b7 = NULL;

    struct Nuitka_FrameObject *frame_d0477ba7efbea40cda758a67435ad5b7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_d0477ba7efbea40cda758a67435ad5b7, codeobj_d0477ba7efbea40cda758a67435ad5b7, module_django$utils$timezone, 0 );
    frame_d0477ba7efbea40cda758a67435ad5b7 = cache_frame_d0477ba7efbea40cda758a67435ad5b7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d0477ba7efbea40cda758a67435ad5b7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d0477ba7efbea40cda758a67435ad5b7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_getattr_target_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain__active );

    if (unlikely( tmp_getattr_target_1 == NULL ))
    {
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__active );
    }

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_active" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;

        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain_value;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_get_default_timezone );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_default_timezone );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_default_timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;

        goto frame_exception_exit_1;
    }

    frame_d0477ba7efbea40cda758a67435ad5b7->m_frame.f_lineno = 97;
    tmp_getattr_default_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_getattr_default_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto frame_exception_exit_1;
    }
    tmp_return_value = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    Py_DECREF( tmp_getattr_default_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0477ba7efbea40cda758a67435ad5b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0477ba7efbea40cda758a67435ad5b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0477ba7efbea40cda758a67435ad5b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d0477ba7efbea40cda758a67435ad5b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d0477ba7efbea40cda758a67435ad5b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d0477ba7efbea40cda758a67435ad5b7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d0477ba7efbea40cda758a67435ad5b7,
        type_description_1
    );


    // Release cached frame.
    if ( frame_d0477ba7efbea40cda758a67435ad5b7 == cache_frame_d0477ba7efbea40cda758a67435ad5b7 )
    {
        Py_DECREF( frame_d0477ba7efbea40cda758a67435ad5b7 );
    }
    cache_frame_d0477ba7efbea40cda758a67435ad5b7 = NULL;

    assertFrameObject( frame_d0477ba7efbea40cda758a67435ad5b7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_8_get_current_timezone );
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


static PyObject *impl_django$utils$timezone$$$function_9_get_current_timezone_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_a995ff9ff9ca9afbb8461ff5fc11bd59 = NULL;

    struct Nuitka_FrameObject *frame_a995ff9ff9ca9afbb8461ff5fc11bd59;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_a995ff9ff9ca9afbb8461ff5fc11bd59, codeobj_a995ff9ff9ca9afbb8461ff5fc11bd59, module_django$utils$timezone, 0 );
    frame_a995ff9ff9ca9afbb8461ff5fc11bd59 = cache_frame_a995ff9ff9ca9afbb8461ff5fc11bd59;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a995ff9ff9ca9afbb8461ff5fc11bd59 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a995ff9ff9ca9afbb8461ff5fc11bd59 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain__get_timezone_name );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_timezone_name );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_timezone_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;

        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_get_current_timezone );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_current_timezone );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_current_timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;

        goto frame_exception_exit_1;
    }

    frame_a995ff9ff9ca9afbb8461ff5fc11bd59->m_frame.f_lineno = 104;
    tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto frame_exception_exit_1;
    }
    frame_a995ff9ff9ca9afbb8461ff5fc11bd59->m_frame.f_lineno = 104;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a995ff9ff9ca9afbb8461ff5fc11bd59 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a995ff9ff9ca9afbb8461ff5fc11bd59 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a995ff9ff9ca9afbb8461ff5fc11bd59 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a995ff9ff9ca9afbb8461ff5fc11bd59, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a995ff9ff9ca9afbb8461ff5fc11bd59->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a995ff9ff9ca9afbb8461ff5fc11bd59, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a995ff9ff9ca9afbb8461ff5fc11bd59,
        type_description_1
    );


    // Release cached frame.
    if ( frame_a995ff9ff9ca9afbb8461ff5fc11bd59 == cache_frame_a995ff9ff9ca9afbb8461ff5fc11bd59 )
    {
        Py_DECREF( frame_a995ff9ff9ca9afbb8461ff5fc11bd59 );
    }
    cache_frame_a995ff9ff9ca9afbb8461ff5fc11bd59 = NULL;

    assertFrameObject( frame_a995ff9ff9ca9afbb8461ff5fc11bd59 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_9_get_current_timezone_name );
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


static PyObject *impl_django$utils$timezone$$$function_10__get_timezone_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_timezone = python_pars[ 0 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_8d048fc137fcb514d21b0866370f9efd = NULL;

    struct Nuitka_FrameObject *frame_8d048fc137fcb514d21b0866370f9efd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8d048fc137fcb514d21b0866370f9efd, codeobj_8d048fc137fcb514d21b0866370f9efd, module_django$utils$timezone, sizeof(void *) );
    frame_8d048fc137fcb514d21b0866370f9efd = cache_frame_8d048fc137fcb514d21b0866370f9efd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8d048fc137fcb514d21b0866370f9efd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8d048fc137fcb514d21b0866370f9efd ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_timezone;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zone );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_10__get_timezone_name );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_8d048fc137fcb514d21b0866370f9efd, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_8d048fc137fcb514d21b0866370f9efd, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "o";
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
    tmp_called_instance_1 = par_timezone;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        type_description_1 = "o";
        goto try_except_handler_3;
    }

    frame_8d048fc137fcb514d21b0866370f9efd->m_frame.f_lineno = 116;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_tzname, &PyTuple_GET_ITEM( const_tuple_none_tuple, 0 ) );

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "o";
        goto try_except_handler_3;
    }
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 111;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8d048fc137fcb514d21b0866370f9efd->m_frame) frame_8d048fc137fcb514d21b0866370f9efd->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_3;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_10__get_timezone_name );
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

#if 1
    RESTORE_FRAME_EXCEPTION( frame_8d048fc137fcb514d21b0866370f9efd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_8d048fc137fcb514d21b0866370f9efd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_8d048fc137fcb514d21b0866370f9efd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8d048fc137fcb514d21b0866370f9efd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8d048fc137fcb514d21b0866370f9efd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8d048fc137fcb514d21b0866370f9efd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8d048fc137fcb514d21b0866370f9efd,
        type_description_1,
        par_timezone
    );


    // Release cached frame.
    if ( frame_8d048fc137fcb514d21b0866370f9efd == cache_frame_8d048fc137fcb514d21b0866370f9efd )
    {
        Py_DECREF( frame_8d048fc137fcb514d21b0866370f9efd );
    }
    cache_frame_8d048fc137fcb514d21b0866370f9efd = NULL;

    assertFrameObject( frame_8d048fc137fcb514d21b0866370f9efd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_10__get_timezone_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_timezone );
    par_timezone = NULL;

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

    Py_XDECREF( par_timezone );
    par_timezone = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_10__get_timezone_name );
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


static PyObject *impl_django$utils$timezone$$$function_11_activate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_timezone = python_pars[ 0 ];
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
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_cdd13d725d143b4e9c5eb17276eeec13 = NULL;

    struct Nuitka_FrameObject *frame_cdd13d725d143b4e9c5eb17276eeec13;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cdd13d725d143b4e9c5eb17276eeec13, codeobj_cdd13d725d143b4e9c5eb17276eeec13, module_django$utils$timezone, sizeof(void *) );
    frame_cdd13d725d143b4e9c5eb17276eeec13 = cache_frame_cdd13d725d143b4e9c5eb17276eeec13;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cdd13d725d143b4e9c5eb17276eeec13 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cdd13d725d143b4e9c5eb17276eeec13 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_timezone;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_tzinfo );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tzinfo );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tzinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "o";
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
    tmp_assattr_name_1 = par_timezone;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain__active );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__active );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_active" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_value, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_timezone;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_six );

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

        exception_lineno = 133;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_string_types );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "o";
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_pytz );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pytz );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pytz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_timezone );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_timezone;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_cdd13d725d143b4e9c5eb17276eeec13->m_frame.f_lineno = 134;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain__active );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__active );
    }

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_active" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_value, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 134;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    goto branch_end_2;
    branch_no_2:;
    tmp_left_name_1 = const_str_digest_8947245cbfe4d2a893f47b6408231592;
    tmp_right_name_1 = par_timezone;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_cdd13d725d143b4e9c5eb17276eeec13->m_frame.f_lineno = 136;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 136;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdd13d725d143b4e9c5eb17276eeec13 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdd13d725d143b4e9c5eb17276eeec13 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cdd13d725d143b4e9c5eb17276eeec13, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cdd13d725d143b4e9c5eb17276eeec13->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cdd13d725d143b4e9c5eb17276eeec13, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cdd13d725d143b4e9c5eb17276eeec13,
        type_description_1,
        par_timezone
    );


    // Release cached frame.
    if ( frame_cdd13d725d143b4e9c5eb17276eeec13 == cache_frame_cdd13d725d143b4e9c5eb17276eeec13 )
    {
        Py_DECREF( frame_cdd13d725d143b4e9c5eb17276eeec13 );
    }
    cache_frame_cdd13d725d143b4e9c5eb17276eeec13 = NULL;

    assertFrameObject( frame_cdd13d725d143b4e9c5eb17276eeec13 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_11_activate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_timezone );
    par_timezone = NULL;

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

    Py_XDECREF( par_timezone );
    par_timezone = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_11_activate );
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


static PyObject *impl_django$utils$timezone$$$function_12_deactivate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_attrdel_target_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_23671d8a6e93416f056643390bdbc472 = NULL;

    struct Nuitka_FrameObject *frame_23671d8a6e93416f056643390bdbc472;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_23671d8a6e93416f056643390bdbc472, codeobj_23671d8a6e93416f056643390bdbc472, module_django$utils$timezone, 0 );
    frame_23671d8a6e93416f056643390bdbc472 = cache_frame_23671d8a6e93416f056643390bdbc472;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_23671d8a6e93416f056643390bdbc472 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_23671d8a6e93416f056643390bdbc472 ) == 2 ); // Frame stack

    // Framed code:
    tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain__active );

    if (unlikely( tmp_hasattr_source_1 == NULL ))
    {
        tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__active );
    }

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_active" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;

        goto frame_exception_exit_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_value;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;

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
    tmp_attrdel_target_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain__active );

    if (unlikely( tmp_attrdel_target_1 == NULL ))
    {
        tmp_attrdel_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__active );
    }

    if ( tmp_attrdel_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_active" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;

        goto frame_exception_exit_1;
    }

    tmp_res = PyObject_DelAttr( tmp_attrdel_target_1, const_str_plain_value );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;

        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23671d8a6e93416f056643390bdbc472 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23671d8a6e93416f056643390bdbc472 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_23671d8a6e93416f056643390bdbc472, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_23671d8a6e93416f056643390bdbc472->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_23671d8a6e93416f056643390bdbc472, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_23671d8a6e93416f056643390bdbc472,
        type_description_1
    );


    // Release cached frame.
    if ( frame_23671d8a6e93416f056643390bdbc472 == cache_frame_23671d8a6e93416f056643390bdbc472 )
    {
        Py_DECREF( frame_23671d8a6e93416f056643390bdbc472 );
    }
    cache_frame_23671d8a6e93416f056643390bdbc472 = NULL;

    assertFrameObject( frame_23671d8a6e93416f056643390bdbc472 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_12_deactivate );
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


static PyObject *impl_django$utils$timezone$$$function_13___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_timezone = python_pars[ 1 ];
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
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_6e9264f58a93ee8aaaaeb68229411dd0 = NULL;

    struct Nuitka_FrameObject *frame_6e9264f58a93ee8aaaaeb68229411dd0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6e9264f58a93ee8aaaaeb68229411dd0, codeobj_6e9264f58a93ee8aaaaeb68229411dd0, module_django$utils$timezone, sizeof(void *)+sizeof(void *) );
    frame_6e9264f58a93ee8aaaaeb68229411dd0 = cache_frame_6e9264f58a93ee8aaaaeb68229411dd0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6e9264f58a93ee8aaaaeb68229411dd0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6e9264f58a93ee8aaaaeb68229411dd0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_timezone;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_timezone, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e9264f58a93ee8aaaaeb68229411dd0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e9264f58a93ee8aaaaeb68229411dd0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6e9264f58a93ee8aaaaeb68229411dd0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6e9264f58a93ee8aaaaeb68229411dd0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6e9264f58a93ee8aaaaeb68229411dd0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6e9264f58a93ee8aaaaeb68229411dd0,
        type_description_1,
        par_self,
        par_timezone
    );


    // Release cached frame.
    if ( frame_6e9264f58a93ee8aaaaeb68229411dd0 == cache_frame_6e9264f58a93ee8aaaaeb68229411dd0 )
    {
        Py_DECREF( frame_6e9264f58a93ee8aaaaeb68229411dd0 );
    }
    cache_frame_6e9264f58a93ee8aaaaeb68229411dd0 = NULL;

    assertFrameObject( frame_6e9264f58a93ee8aaaaeb68229411dd0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_13___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_timezone );
    par_timezone = NULL;

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

    Py_XDECREF( par_timezone );
    par_timezone = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_13___init__ );
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


static PyObject *impl_django$utils$timezone$$$function_14___enter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4ebdb71a0ae0934337d4be5568393c82 = NULL;

    struct Nuitka_FrameObject *frame_4ebdb71a0ae0934337d4be5568393c82;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4ebdb71a0ae0934337d4be5568393c82, codeobj_4ebdb71a0ae0934337d4be5568393c82, module_django$utils$timezone, sizeof(void *) );
    frame_4ebdb71a0ae0934337d4be5568393c82 = cache_frame_4ebdb71a0ae0934337d4be5568393c82;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4ebdb71a0ae0934337d4be5568393c82 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4ebdb71a0ae0934337d4be5568393c82 ) == 2 ); // Frame stack

    // Framed code:
    tmp_getattr_target_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain__active );

    if (unlikely( tmp_getattr_target_1 == NULL ))
    {
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__active );
    }

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_active" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain_value;
    tmp_getattr_default_1 = Py_None;
    tmp_assattr_name_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_old_timezone, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 165;
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

        exception_lineno = 166;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_timezone );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_deactivate );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_deactivate );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "deactivate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_4ebdb71a0ae0934337d4be5568393c82->m_frame.f_lineno = 167;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_activate );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_activate );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "activate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 169;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 169;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_timezone );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_4ebdb71a0ae0934337d4be5568393c82->m_frame.f_lineno = 169;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ebdb71a0ae0934337d4be5568393c82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ebdb71a0ae0934337d4be5568393c82 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4ebdb71a0ae0934337d4be5568393c82, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4ebdb71a0ae0934337d4be5568393c82->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4ebdb71a0ae0934337d4be5568393c82, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4ebdb71a0ae0934337d4be5568393c82,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4ebdb71a0ae0934337d4be5568393c82 == cache_frame_4ebdb71a0ae0934337d4be5568393c82 )
    {
        Py_DECREF( frame_4ebdb71a0ae0934337d4be5568393c82 );
    }
    cache_frame_4ebdb71a0ae0934337d4be5568393c82 = NULL;

    assertFrameObject( frame_4ebdb71a0ae0934337d4be5568393c82 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_14___enter__ );
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
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_14___enter__ );
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


static PyObject *impl_django$utils$timezone$$$function_15___exit__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_exc_type = python_pars[ 1 ];
    PyObject *par_exc_value = python_pars[ 2 ];
    PyObject *par_traceback = python_pars[ 3 ];
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0f1677b167352c93f3abd916dacb9735 = NULL;

    struct Nuitka_FrameObject *frame_0f1677b167352c93f3abd916dacb9735;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0f1677b167352c93f3abd916dacb9735, codeobj_0f1677b167352c93f3abd916dacb9735, module_django$utils$timezone, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0f1677b167352c93f3abd916dacb9735 = cache_frame_0f1677b167352c93f3abd916dacb9735;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0f1677b167352c93f3abd916dacb9735 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0f1677b167352c93f3abd916dacb9735 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_old_timezone );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_deactivate );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_deactivate );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "deactivate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_0f1677b167352c93f3abd916dacb9735->m_frame.f_lineno = 173;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_old_timezone );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain__active );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__active );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_active" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_value, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 175;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f1677b167352c93f3abd916dacb9735 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f1677b167352c93f3abd916dacb9735 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0f1677b167352c93f3abd916dacb9735, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0f1677b167352c93f3abd916dacb9735->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0f1677b167352c93f3abd916dacb9735, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0f1677b167352c93f3abd916dacb9735,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_value,
        par_traceback
    );


    // Release cached frame.
    if ( frame_0f1677b167352c93f3abd916dacb9735 == cache_frame_0f1677b167352c93f3abd916dacb9735 )
    {
        Py_DECREF( frame_0f1677b167352c93f3abd916dacb9735 );
    }
    cache_frame_0f1677b167352c93f3abd916dacb9735 = NULL;

    assertFrameObject( frame_0f1677b167352c93f3abd916dacb9735 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_15___exit__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_exc_type );
    par_exc_type = NULL;

    Py_XDECREF( par_exc_value );
    par_exc_value = NULL;

    Py_XDECREF( par_traceback );
    par_traceback = NULL;

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

    Py_XDECREF( par_exc_type );
    par_exc_type = NULL;

    Py_XDECREF( par_exc_value );
    par_exc_value = NULL;

    Py_XDECREF( par_traceback );
    par_traceback = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_15___exit__ );
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


static PyObject *impl_django$utils$timezone$$$function_16_template_localtime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *par_use_tz = python_pars[ 1 ];
    PyObject *var_should_convert = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_25c90affc67c5e303d7cc55689c6cf1a = NULL;

    struct Nuitka_FrameObject *frame_25c90affc67c5e303d7cc55689c6cf1a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_25c90affc67c5e303d7cc55689c6cf1a, codeobj_25c90affc67c5e303d7cc55689c6cf1a, module_django$utils$timezone, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_25c90affc67c5e303d7cc55689c6cf1a = cache_frame_25c90affc67c5e303d7cc55689c6cf1a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_25c90affc67c5e303d7cc55689c6cf1a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_25c90affc67c5e303d7cc55689c6cf1a ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_value;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "ooo";
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
    tmp_compare_left_1 = par_use_tz;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 191;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_USE_TZ );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_and_left_value_2 = par_use_tz;

    if ( tmp_and_left_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "use_tz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_and_left_value_2 );
    condexpr_end_1:;
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 193;
        type_description_1 = "ooo";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_is_naive );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_naive );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_naive" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_value;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_25c90affc67c5e303d7cc55689c6cf1a->m_frame.f_lineno = 192;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_3 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "ooo";
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
    tmp_getattr_target_1 = par_value;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain_convert_to_local_time;
    tmp_getattr_default_1 = Py_True;
    tmp_and_right_value_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    Py_INCREF( tmp_and_left_value_3 );
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_assign_source_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_assign_source_1 = tmp_and_left_value_1;
    and_end_1:;
    assert( var_should_convert == NULL );
    var_should_convert = tmp_assign_source_1;

    tmp_cond_value_1 = var_should_convert;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_localtime );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_localtime );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "localtime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_value;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_25c90affc67c5e303d7cc55689c6cf1a->m_frame.f_lineno = 195;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_return_value = par_value;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    condexpr_end_2:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25c90affc67c5e303d7cc55689c6cf1a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_25c90affc67c5e303d7cc55689c6cf1a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25c90affc67c5e303d7cc55689c6cf1a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_25c90affc67c5e303d7cc55689c6cf1a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_25c90affc67c5e303d7cc55689c6cf1a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_25c90affc67c5e303d7cc55689c6cf1a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_25c90affc67c5e303d7cc55689c6cf1a,
        type_description_1,
        par_value,
        par_use_tz,
        var_should_convert
    );


    // Release cached frame.
    if ( frame_25c90affc67c5e303d7cc55689c6cf1a == cache_frame_25c90affc67c5e303d7cc55689c6cf1a )
    {
        Py_DECREF( frame_25c90affc67c5e303d7cc55689c6cf1a );
    }
    cache_frame_25c90affc67c5e303d7cc55689c6cf1a = NULL;

    assertFrameObject( frame_25c90affc67c5e303d7cc55689c6cf1a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_16_template_localtime );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_use_tz );
    par_use_tz = NULL;

    Py_XDECREF( var_should_convert );
    var_should_convert = NULL;

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

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_use_tz );
    par_use_tz = NULL;

    Py_XDECREF( var_should_convert );
    var_should_convert = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_16_template_localtime );
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


static PyObject *impl_django$utils$timezone$$$function_17_localtime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *par_timezone = python_pars[ 1 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_2e69837210922a611328c426f8c7586e = NULL;

    struct Nuitka_FrameObject *frame_2e69837210922a611328c426f8c7586e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2e69837210922a611328c426f8c7586e, codeobj_2e69837210922a611328c426f8c7586e, module_django$utils$timezone, sizeof(void *)+sizeof(void *) );
    frame_2e69837210922a611328c426f8c7586e = cache_frame_2e69837210922a611328c426f8c7586e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2e69837210922a611328c426f8c7586e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2e69837210922a611328c426f8c7586e ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_value;

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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_now );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_now );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "now" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_2e69837210922a611328c426f8c7586e->m_frame.f_lineno = 211;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_value;
        par_value = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = par_timezone;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 212;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_get_current_timezone );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_current_timezone );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_current_timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 213;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_2e69837210922a611328c426f8c7586e->m_frame.f_lineno = 213;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_timezone;
        par_timezone = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_is_naive );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_naive );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_naive" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_value;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_2e69837210922a611328c426f8c7586e->m_frame.f_lineno = 215;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 215;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_1 = const_str_digest_47db89051c32be3801b564bfe671e52e;
    frame_2e69837210922a611328c426f8c7586e->m_frame.f_lineno = 216;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 216;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_1 = par_value;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_astimezone );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_timezone;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_2e69837210922a611328c426f8c7586e->m_frame.f_lineno = 217;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_value;
        par_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_hasattr_source_1 = par_timezone;

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_normalize;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_2 = par_timezone;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_normalize );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_value;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_2e69837210922a611328c426f8c7586e->m_frame.f_lineno = 220;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_value;
        par_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    branch_no_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e69837210922a611328c426f8c7586e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e69837210922a611328c426f8c7586e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2e69837210922a611328c426f8c7586e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2e69837210922a611328c426f8c7586e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2e69837210922a611328c426f8c7586e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2e69837210922a611328c426f8c7586e,
        type_description_1,
        par_value,
        par_timezone
    );


    // Release cached frame.
    if ( frame_2e69837210922a611328c426f8c7586e == cache_frame_2e69837210922a611328c426f8c7586e )
    {
        Py_DECREF( frame_2e69837210922a611328c426f8c7586e );
    }
    cache_frame_2e69837210922a611328c426f8c7586e = NULL;

    assertFrameObject( frame_2e69837210922a611328c426f8c7586e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = par_value;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_17_localtime );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_timezone );
    par_timezone = NULL;

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

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_timezone );
    par_timezone = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_17_localtime );
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


static PyObject *impl_django$utils$timezone$$$function_18_localdate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *par_timezone = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_8c4e36847dc602cd6545a52ac366ad03 = NULL;

    struct Nuitka_FrameObject *frame_8c4e36847dc602cd6545a52ac366ad03;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8c4e36847dc602cd6545a52ac366ad03, codeobj_8c4e36847dc602cd6545a52ac366ad03, module_django$utils$timezone, sizeof(void *)+sizeof(void *) );
    frame_8c4e36847dc602cd6545a52ac366ad03 = cache_frame_8c4e36847dc602cd6545a52ac366ad03;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8c4e36847dc602cd6545a52ac366ad03 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8c4e36847dc602cd6545a52ac366ad03 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_localtime );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_localtime );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "localtime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_value;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_timezone;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_8c4e36847dc602cd6545a52ac366ad03->m_frame.f_lineno = 234;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_8c4e36847dc602cd6545a52ac366ad03->m_frame.f_lineno = 234;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_date );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c4e36847dc602cd6545a52ac366ad03 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c4e36847dc602cd6545a52ac366ad03 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c4e36847dc602cd6545a52ac366ad03 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8c4e36847dc602cd6545a52ac366ad03, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8c4e36847dc602cd6545a52ac366ad03->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8c4e36847dc602cd6545a52ac366ad03, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8c4e36847dc602cd6545a52ac366ad03,
        type_description_1,
        par_value,
        par_timezone
    );


    // Release cached frame.
    if ( frame_8c4e36847dc602cd6545a52ac366ad03 == cache_frame_8c4e36847dc602cd6545a52ac366ad03 )
    {
        Py_DECREF( frame_8c4e36847dc602cd6545a52ac366ad03 );
    }
    cache_frame_8c4e36847dc602cd6545a52ac366ad03 = NULL;

    assertFrameObject( frame_8c4e36847dc602cd6545a52ac366ad03 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_18_localdate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_timezone );
    par_timezone = NULL;

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

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_timezone );
    par_timezone = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_18_localdate );
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


static PyObject *impl_django$utils$timezone$$$function_19_now( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_86b3d08cd7417000013783df7961561c = NULL;

    struct Nuitka_FrameObject *frame_86b3d08cd7417000013783df7961561c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_86b3d08cd7417000013783df7961561c, codeobj_86b3d08cd7417000013783df7961561c, module_django$utils$timezone, 0 );
    frame_86b3d08cd7417000013783df7961561c = cache_frame_86b3d08cd7417000013783df7961561c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_86b3d08cd7417000013783df7961561c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_86b3d08cd7417000013783df7961561c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 241;

        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_USE_TZ );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;

        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 241;

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
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;

        goto frame_exception_exit_1;
    }

    frame_86b3d08cd7417000013783df7961561c->m_frame.f_lineno = 243;
    tmp_source_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_utcnow );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;

        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_replace );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;

        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_tzinfo;
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_utc );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utc );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "utc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_86b3d08cd7417000013783df7961561c->m_frame.f_lineno = 243;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;

        goto frame_exception_exit_1;
    }

    frame_86b3d08cd7417000013783df7961561c->m_frame.f_lineno = 245;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_now );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86b3d08cd7417000013783df7961561c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_86b3d08cd7417000013783df7961561c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86b3d08cd7417000013783df7961561c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_86b3d08cd7417000013783df7961561c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_86b3d08cd7417000013783df7961561c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_86b3d08cd7417000013783df7961561c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_86b3d08cd7417000013783df7961561c,
        type_description_1
    );


    // Release cached frame.
    if ( frame_86b3d08cd7417000013783df7961561c == cache_frame_86b3d08cd7417000013783df7961561c )
    {
        Py_DECREF( frame_86b3d08cd7417000013783df7961561c );
    }
    cache_frame_86b3d08cd7417000013783df7961561c = NULL;

    assertFrameObject( frame_86b3d08cd7417000013783df7961561c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_19_now );
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


static PyObject *impl_django$utils$timezone$$$function_20_is_aware( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_bae87ccd9fcb0bb6554ac3f44e926b09 = NULL;

    struct Nuitka_FrameObject *frame_bae87ccd9fcb0bb6554ac3f44e926b09;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bae87ccd9fcb0bb6554ac3f44e926b09, codeobj_bae87ccd9fcb0bb6554ac3f44e926b09, module_django$utils$timezone, sizeof(void *) );
    frame_bae87ccd9fcb0bb6554ac3f44e926b09 = cache_frame_bae87ccd9fcb0bb6554ac3f44e926b09;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bae87ccd9fcb0bb6554ac3f44e926b09 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bae87ccd9fcb0bb6554ac3f44e926b09 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_value;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_bae87ccd9fcb0bb6554ac3f44e926b09->m_frame.f_lineno = 261;
    tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_utcoffset );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_return_value = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bae87ccd9fcb0bb6554ac3f44e926b09 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bae87ccd9fcb0bb6554ac3f44e926b09 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bae87ccd9fcb0bb6554ac3f44e926b09 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bae87ccd9fcb0bb6554ac3f44e926b09, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bae87ccd9fcb0bb6554ac3f44e926b09->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bae87ccd9fcb0bb6554ac3f44e926b09, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bae87ccd9fcb0bb6554ac3f44e926b09,
        type_description_1,
        par_value
    );


    // Release cached frame.
    if ( frame_bae87ccd9fcb0bb6554ac3f44e926b09 == cache_frame_bae87ccd9fcb0bb6554ac3f44e926b09 )
    {
        Py_DECREF( frame_bae87ccd9fcb0bb6554ac3f44e926b09 );
    }
    cache_frame_bae87ccd9fcb0bb6554ac3f44e926b09 = NULL;

    assertFrameObject( frame_bae87ccd9fcb0bb6554ac3f44e926b09 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_20_is_aware );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_value );
    par_value = NULL;

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

    Py_XDECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_20_is_aware );
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


static PyObject *impl_django$utils$timezone$$$function_21_is_naive( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_adc88cd43f34fd0beb6998a4e3b05396 = NULL;

    struct Nuitka_FrameObject *frame_adc88cd43f34fd0beb6998a4e3b05396;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_adc88cd43f34fd0beb6998a4e3b05396, codeobj_adc88cd43f34fd0beb6998a4e3b05396, module_django$utils$timezone, sizeof(void *) );
    frame_adc88cd43f34fd0beb6998a4e3b05396 = cache_frame_adc88cd43f34fd0beb6998a4e3b05396;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_adc88cd43f34fd0beb6998a4e3b05396 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_adc88cd43f34fd0beb6998a4e3b05396 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_value;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_adc88cd43f34fd0beb6998a4e3b05396->m_frame.f_lineno = 274;
    tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_utcoffset );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_return_value = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_adc88cd43f34fd0beb6998a4e3b05396 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_adc88cd43f34fd0beb6998a4e3b05396 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_adc88cd43f34fd0beb6998a4e3b05396 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_adc88cd43f34fd0beb6998a4e3b05396, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_adc88cd43f34fd0beb6998a4e3b05396->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_adc88cd43f34fd0beb6998a4e3b05396, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_adc88cd43f34fd0beb6998a4e3b05396,
        type_description_1,
        par_value
    );


    // Release cached frame.
    if ( frame_adc88cd43f34fd0beb6998a4e3b05396 == cache_frame_adc88cd43f34fd0beb6998a4e3b05396 )
    {
        Py_DECREF( frame_adc88cd43f34fd0beb6998a4e3b05396 );
    }
    cache_frame_adc88cd43f34fd0beb6998a4e3b05396 = NULL;

    assertFrameObject( frame_adc88cd43f34fd0beb6998a4e3b05396 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_21_is_naive );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_value );
    par_value = NULL;

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

    Py_XDECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_21_is_naive );
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


static PyObject *impl_django$utils$timezone$$$function_22_make_aware( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *par_timezone = python_pars[ 1 ];
    PyObject *par_is_dst = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_e5d1b18f8dbd6a9e9d0574482efdd433 = NULL;

    struct Nuitka_FrameObject *frame_e5d1b18f8dbd6a9e9d0574482efdd433;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e5d1b18f8dbd6a9e9d0574482efdd433, codeobj_e5d1b18f8dbd6a9e9d0574482efdd433, module_django$utils$timezone, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e5d1b18f8dbd6a9e9d0574482efdd433 = cache_frame_e5d1b18f8dbd6a9e9d0574482efdd433;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e5d1b18f8dbd6a9e9d0574482efdd433 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e5d1b18f8dbd6a9e9d0574482efdd433 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_timezone;

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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_get_current_timezone );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_current_timezone );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_current_timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_e5d1b18f8dbd6a9e9d0574482efdd433->m_frame.f_lineno = 282;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_timezone;
        par_timezone = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_hasattr_source_1 = par_timezone;

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_localize;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "ooo";
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
    tmp_source_name_1 = par_timezone;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 285;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_localize );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_value;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 285;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_is_dst;
    tmp_dict_value_1 = par_is_dst;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "is_dst" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 285;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_e5d1b18f8dbd6a9e9d0574482efdd433->m_frame.f_lineno = 285;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_is_aware );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_aware );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_aware" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 288;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_value;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 288;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_e5d1b18f8dbd6a9e9d0574482efdd433->m_frame.f_lineno = 288;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 288;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_1 = const_str_digest_1d2a8c504f9ba9935fcd6b7c4fb4af37;
    tmp_right_name_1 = par_value;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 290;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_e5d1b18f8dbd6a9e9d0574482efdd433->m_frame.f_lineno = 289;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 289;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_2 = par_value;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 292;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_replace );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_2 = const_str_plain_tzinfo;
    tmp_dict_value_2 = par_timezone;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 292;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_e5d1b18f8dbd6a9e9d0574482efdd433->m_frame.f_lineno = 292;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5d1b18f8dbd6a9e9d0574482efdd433 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5d1b18f8dbd6a9e9d0574482efdd433 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5d1b18f8dbd6a9e9d0574482efdd433 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e5d1b18f8dbd6a9e9d0574482efdd433, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e5d1b18f8dbd6a9e9d0574482efdd433->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e5d1b18f8dbd6a9e9d0574482efdd433, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e5d1b18f8dbd6a9e9d0574482efdd433,
        type_description_1,
        par_value,
        par_timezone,
        par_is_dst
    );


    // Release cached frame.
    if ( frame_e5d1b18f8dbd6a9e9d0574482efdd433 == cache_frame_e5d1b18f8dbd6a9e9d0574482efdd433 )
    {
        Py_DECREF( frame_e5d1b18f8dbd6a9e9d0574482efdd433 );
    }
    cache_frame_e5d1b18f8dbd6a9e9d0574482efdd433 = NULL;

    assertFrameObject( frame_e5d1b18f8dbd6a9e9d0574482efdd433 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_22_make_aware );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_timezone );
    par_timezone = NULL;

    Py_XDECREF( par_is_dst );
    par_is_dst = NULL;

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

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_timezone );
    par_timezone = NULL;

    Py_XDECREF( par_is_dst );
    par_is_dst = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_22_make_aware );
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


static PyObject *impl_django$utils$timezone$$$function_23_make_naive( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *par_timezone = python_pars[ 1 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_c9031b2f6d038cc2fbbec2de68611af1 = NULL;

    struct Nuitka_FrameObject *frame_c9031b2f6d038cc2fbbec2de68611af1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c9031b2f6d038cc2fbbec2de68611af1, codeobj_c9031b2f6d038cc2fbbec2de68611af1, module_django$utils$timezone, sizeof(void *)+sizeof(void *) );
    frame_c9031b2f6d038cc2fbbec2de68611af1 = cache_frame_c9031b2f6d038cc2fbbec2de68611af1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c9031b2f6d038cc2fbbec2de68611af1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c9031b2f6d038cc2fbbec2de68611af1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_timezone;

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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_get_current_timezone );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_current_timezone );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_current_timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 300;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_c9031b2f6d038cc2fbbec2de68611af1->m_frame.f_lineno = 300;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_timezone;
        par_timezone = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_is_naive );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_naive );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_naive" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 302;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_value;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 302;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_c9031b2f6d038cc2fbbec2de68611af1->m_frame.f_lineno = 302;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 302;
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
    tmp_make_exception_arg_1 = const_str_digest_689fd68cee27617c8d9f78deaad607e2;
    frame_c9031b2f6d038cc2fbbec2de68611af1->m_frame.f_lineno = 303;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 303;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_1 = par_value;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 304;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_astimezone );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_timezone;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 304;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_c9031b2f6d038cc2fbbec2de68611af1->m_frame.f_lineno = 304;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_value;
        par_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_hasattr_source_1 = par_timezone;

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 305;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_normalize;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_1 = "oo";
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
    tmp_source_name_2 = par_timezone;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 307;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_normalize );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_value;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 307;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_c9031b2f6d038cc2fbbec2de68611af1->m_frame.f_lineno = 307;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_value;
        par_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_source_name_3 = par_value;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_replace );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_19923244156fa96a7d6f1da74d173385 );
    frame_c9031b2f6d038cc2fbbec2de68611af1->m_frame.f_lineno = 308;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9031b2f6d038cc2fbbec2de68611af1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9031b2f6d038cc2fbbec2de68611af1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9031b2f6d038cc2fbbec2de68611af1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c9031b2f6d038cc2fbbec2de68611af1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c9031b2f6d038cc2fbbec2de68611af1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c9031b2f6d038cc2fbbec2de68611af1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c9031b2f6d038cc2fbbec2de68611af1,
        type_description_1,
        par_value,
        par_timezone
    );


    // Release cached frame.
    if ( frame_c9031b2f6d038cc2fbbec2de68611af1 == cache_frame_c9031b2f6d038cc2fbbec2de68611af1 )
    {
        Py_DECREF( frame_c9031b2f6d038cc2fbbec2de68611af1 );
    }
    cache_frame_c9031b2f6d038cc2fbbec2de68611af1 = NULL;

    assertFrameObject( frame_c9031b2f6d038cc2fbbec2de68611af1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_23_make_naive );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_timezone );
    par_timezone = NULL;

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

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_timezone );
    par_timezone = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone$$$function_23_make_naive );
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



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_10__get_timezone_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_10__get_timezone_name,
        const_str_plain__get_timezone_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8d048fc137fcb514d21b0866370f9efd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_bc715b64ce7b47a419c1482c84be6e25,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_11_activate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_11_activate,
        const_str_plain_activate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cdd13d725d143b4e9c5eb17276eeec13,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_824b542b78b1d7cd88bc1257354ecd00,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_12_deactivate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_12_deactivate,
        const_str_plain_deactivate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_23671d8a6e93416f056643390bdbc472,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_22185b81f8b9f6c3518320d74884a212,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_13___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_8168daa3eb03e71d00bf66ae63aff961,
#endif
        codeobj_6e9264f58a93ee8aaaaeb68229411dd0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_14___enter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_14___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 330
        const_str_digest_2a6edf0079b7095560cfe651388c2111,
#endif
        codeobj_4ebdb71a0ae0934337d4be5568393c82,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_15___exit__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_15___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 330
        const_str_digest_c689152bf2ce7810a5b42b5280673543,
#endif
        codeobj_0f1677b167352c93f3abd916dacb9735,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_16_template_localtime( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_16_template_localtime,
        const_str_plain_template_localtime,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_25c90affc67c5e303d7cc55689c6cf1a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_ccb40a911d75c0e879ae51a6d99d7a0a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_17_localtime( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_17_localtime,
        const_str_plain_localtime,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2e69837210922a611328c426f8c7586e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_97abed93173417d8386708bc46cd86df,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_18_localdate( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_18_localdate,
        const_str_plain_localdate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8c4e36847dc602cd6545a52ac366ad03,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_538f18ef120991edba2e9f5790be5bc5,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_19_now(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_19_now,
        const_str_plain_now,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_86b3d08cd7417000013783df7961561c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_156d9e72fbc7cfa30f17f82563eca60c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_bcbdee2e5f15fb45362c7f71c6d77e13,
#endif
        codeobj_bb83fd44a0e0d6c914df073c53029349,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_20_is_aware(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_20_is_aware,
        const_str_plain_is_aware,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bae87ccd9fcb0bb6554ac3f44e926b09,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_5a5cff3235928a02f3d316668a459f40,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_21_is_naive(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_21_is_naive,
        const_str_plain_is_naive,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_adc88cd43f34fd0beb6998a4e3b05396,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_22402af56c61dabc6de5c63acc2fc035,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_22_make_aware( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_22_make_aware,
        const_str_plain_make_aware,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e5d1b18f8dbd6a9e9d0574482efdd433,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_451385fa2ef1b4f825fc336a808e6e05,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_23_make_naive( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_23_make_naive,
        const_str_plain_make_naive,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c9031b2f6d038cc2fbbec2de68611af1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_3dd1b6d94c2e290846dc48c55deb5f1f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_2_utcoffset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_2_utcoffset,
        const_str_plain_utcoffset,
#if PYTHON_VERSION >= 330
        const_str_digest_994b2434123d23e18b6ca5d4161c70ce,
#endif
        codeobj_002ddfcf3bd41759368739befa0cd9a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_3_tzname(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_3_tzname,
        const_str_plain_tzname,
#if PYTHON_VERSION >= 330
        const_str_digest_d64c8d310ca849fd7005f3776988b50a,
#endif
        codeobj_1ad860f65be91663288ddbdbfbb4b1a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_4_dst(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_4_dst,
        const_str_plain_dst,
#if PYTHON_VERSION >= 330
        const_str_digest_f8a372320638d79a3b0396f617f18dbd,
#endif
        codeobj_7e5fe1d75510b1b0e1b4c4c49fb3c168,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_5_get_fixed_timezone(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_5_get_fixed_timezone,
        const_str_plain_get_fixed_timezone,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8d35c1c133b373bcf607b8435671595f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_59360098132520585159861a872818a3,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_6_get_default_timezone(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_6_get_default_timezone,
        const_str_plain_get_default_timezone,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f30723695ceb70c89566fc68d9363f5c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_1de728318388b7ba723a89f50a9bf66f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_7_get_default_timezone_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_7_get_default_timezone_name,
        const_str_plain_get_default_timezone_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_09fadb34e4533f751a645bee0ba63d49,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_fd03fd550fa65114e3d60b7a55e0339b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_8_get_current_timezone(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_8_get_current_timezone,
        const_str_plain_get_current_timezone,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d0477ba7efbea40cda758a67435ad5b7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_92f29e70bbe7d0cca4d2e6fc536a928b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$timezone$$$function_9_get_current_timezone_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$timezone$$$function_9_get_current_timezone_name,
        const_str_plain_get_current_timezone_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a995ff9ff9ca9afbb8461ff5fc11bd59,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$timezone,
        const_str_digest_f3088a48c60a1ea1e374a7c645808515,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$utils$timezone =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.timezone",   /* m_name */
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

MOD_INIT_DECL( django$utils$timezone )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$utils$timezone );
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
    puts("django.utils.timezone: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.utils.timezone: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$utils$timezone" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$utils$timezone = Py_InitModule4(
        "django.utils.timezone",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$utils$timezone = PyModule_Create( &mdef_django$utils$timezone );
#endif

    moduledict_django$utils$timezone = MODULE_DICT( module_django$utils$timezone );

    CHECK_OBJECT( module_django$utils$timezone );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f7c850c4a7dac342c89d16463303e0c9, module_django$utils$timezone );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_utcoffset = NULL;
    PyObject *outline_0_var_tzname = NULL;
    PyObject *outline_0_var_dst = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_1_var___qualname__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var___doc__ = NULL;
    PyObject *outline_1_var___init__ = NULL;
    PyObject *outline_1_var___enter__ = NULL;
    PyObject *outline_1_var___exit__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    struct Nuitka_FrameObject *frame_3c218f9b4924db49161c09fb35ef5d6e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_2 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = const_str_digest_2c3f202709f2d0221a6de3c892f50257;
    UPDATE_STRING_DICT0( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_3c218f9b4924db49161c09fb35ef5d6e = MAKE_MODULE_FRAME( codeobj_3c218f9b4924db49161c09fb35ef5d6e, module_django$utils$timezone );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_3c218f9b4924db49161c09fb35ef5d6e );
    assert( Py_REFCNT( frame_3c218f9b4924db49161c09fb35ef5d6e ) == 2 );

    // Framed code:
    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_f7c850c4a7dac342c89d16463303e0c9;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_467c9722f19d9d40d148689532cdc0b1;
    UPDATE_STRING_DICT0( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_datetime;
    tmp_globals_name_1 = (PyObject *)moduledict_django$utils$timezone;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_datetime_str_plain_timedelta_str_plain_tzinfo_tuple;
    tmp_level_name_1 = const_int_0;
    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 5;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_7;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_datetime );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_8 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_timedelta );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_timedelta, tmp_assign_source_9 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_tzinfo );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_tzinfo, tmp_assign_source_10 );
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

    tmp_name_name_2 = const_str_plain_threading;
    tmp_globals_name_2 = (PyObject *)moduledict_django$utils$timezone;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_local_tuple;
    tmp_level_name_2 = const_int_0;
    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 6;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_local );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_local, tmp_assign_source_11 );
    tmp_name_name_3 = const_str_plain_pytz;
    tmp_globals_name_3 = (PyObject *)moduledict_django$utils$timezone;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 8;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_pytz, tmp_assign_source_12 );
    tmp_name_name_4 = const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
    tmp_globals_name_4 = (PyObject *)moduledict_django$utils$timezone;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_settings_tuple;
    tmp_level_name_4 = const_int_0;
    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 10;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_settings );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_settings, tmp_assign_source_13 );
    tmp_name_name_5 = const_str_digest_467c9722f19d9d40d148689532cdc0b1;
    tmp_globals_name_5 = (PyObject *)moduledict_django$utils$timezone;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_lru_cache_str_plain_six_tuple;
    tmp_level_name_5 = const_int_0;
    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 11;
    tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_14;

    // Tried code:
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_lru_cache );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_lru_cache, tmp_assign_source_15 );
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_six );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_16 );
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

    tmp_name_name_6 = const_str_digest_ec2449552f186c6acec032746f70104f;
    tmp_globals_name_6 = (PyObject *)moduledict_django$utils$timezone;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_ContextDecorator_tuple;
    tmp_level_name_6 = const_int_0;
    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 12;
    tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ContextDecorator );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_ContextDecorator, tmp_assign_source_17 );
    tmp_assign_source_18 = LIST_COPY( const_list_cc1b2864e6c613f40fd8c2f9b83bcf0d_list );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_18 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_timedelta );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;

        goto frame_exception_exit_1;
    }

    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 26;
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_ZERO, tmp_assign_source_19 );
    // Tried code:
    tmp_assign_source_20 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_tzinfo );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tzinfo );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tzinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;

        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_20, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_20;

    tmp_assign_source_21 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_21;

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


        exception_lineno = 29;

        goto try_except_handler_3;
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


        exception_lineno = 29;

        goto try_except_handler_3;
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


        exception_lineno = 29;

        goto try_except_handler_3;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_3;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_22 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 29;

        goto try_except_handler_3;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_22;

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


        exception_lineno = 29;

        goto try_except_handler_3;
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


        exception_lineno = 29;

        goto try_except_handler_3;
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


        exception_lineno = 29;

        goto try_except_handler_3;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_FixedOffset;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 29;
    tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_23 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_23;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_25 = const_str_digest_f7c850c4a7dac342c89d16463303e0c9;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_25 );
    outline_0_var___module__ = tmp_assign_source_25;

    tmp_assign_source_26 = const_str_digest_46f6695f2433185d5eb7f0d4facfe255;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_26 );
    outline_0_var___doc__ = tmp_assign_source_26;

    tmp_assign_source_27 = const_str_plain_FixedOffset;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_27 );
    outline_0_var___qualname__ = tmp_assign_source_27;

    tmp_defaults_1 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_28 = MAKE_FUNCTION_django$utils$timezone$$$function_1___init__( tmp_defaults_1 );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_28;

    tmp_assign_source_29 = MAKE_FUNCTION_django$utils$timezone$$$function_2_utcoffset(  );
    assert( outline_0_var_utcoffset == NULL );
    outline_0_var_utcoffset = tmp_assign_source_29;

    tmp_assign_source_30 = MAKE_FUNCTION_django$utils$timezone$$$function_3_tzname(  );
    assert( outline_0_var_tzname == NULL );
    outline_0_var_tzname = tmp_assign_source_30;

    tmp_assign_source_31 = MAKE_FUNCTION_django$utils$timezone$$$function_4_dst(  );
    assert( outline_0_var_dst == NULL );
    outline_0_var_dst = tmp_assign_source_31;

    // Tried code:
    tmp_called_name_4 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_3 = const_str_plain_FixedOffset;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_dict_1;
    Py_INCREF( tmp_tuple_element_3 );
    if ( outline_0_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___qualname__,
            outline_0_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
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
        Py_DECREF( tmp_tuple_element_3 );

        exception_lineno = 29;

        goto try_except_handler_4;
    }
    if ( outline_0_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___module__,
            outline_0_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
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
        Py_DECREF( tmp_tuple_element_3 );

        exception_lineno = 29;

        goto try_except_handler_4;
    }
    if ( outline_0_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___doc__,
            outline_0_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
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
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_3 );

        exception_lineno = 29;

        goto try_except_handler_4;
    }
    if ( outline_0_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___init__,
            outline_0_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
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
        Py_DECREF( tmp_tuple_element_3 );

        exception_lineno = 29;

        goto try_except_handler_4;
    }
    if ( outline_0_var_utcoffset != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_utcoffset,
            outline_0_var_utcoffset
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_utcoffset
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_utcoffset
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
        Py_DECREF( tmp_tuple_element_3 );

        exception_lineno = 29;

        goto try_except_handler_4;
    }
    if ( outline_0_var_tzname != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_tzname,
            outline_0_var_tzname
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_tzname
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_tzname
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
        Py_DECREF( tmp_tuple_element_3 );

        exception_lineno = 29;

        goto try_except_handler_4;
    }
    if ( outline_0_var_dst != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_dst,
            outline_0_var_dst
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_dst
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_dst
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
        Py_DECREF( tmp_tuple_element_3 );

        exception_lineno = 29;

        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 29;
    tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_4;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_32;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var_utcoffset );
    outline_0_var_utcoffset = NULL;

    Py_XDECREF( outline_0_var_tzname );
    outline_0_var_tzname = NULL;

    Py_XDECREF( outline_0_var_dst );
    outline_0_var_dst = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var_utcoffset );
    outline_0_var_utcoffset = NULL;

    Py_XDECREF( outline_0_var_tzname );
    outline_0_var_tzname = NULL;

    Py_XDECREF( outline_0_var_dst );
    outline_0_var_dst = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 29;
    goto try_except_handler_3;
    outline_result_1:;
    tmp_assign_source_24 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_FixedOffset, tmp_assign_source_24 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_pytz );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pytz );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pytz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_33 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_utc );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_utc, tmp_assign_source_33 );
    tmp_assign_source_34 = MAKE_FUNCTION_django$utils$timezone$$$function_5_get_fixed_timezone(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_get_fixed_timezone, tmp_assign_source_34 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_lru_cache );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lru_cache );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lru_cache" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;

        goto frame_exception_exit_1;
    }

    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 72;
    tmp_called_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lru_cache );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = MAKE_FUNCTION_django$utils$timezone$$$function_6_get_default_timezone(  );
    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_get_default_timezone, tmp_assign_source_35 );
    tmp_assign_source_36 = MAKE_FUNCTION_django$utils$timezone$$$function_7_get_default_timezone_name(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_get_default_timezone_name, tmp_assign_source_36 );
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_local );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_local );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "local" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;

        goto frame_exception_exit_1;
    }

    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 90;
    tmp_assign_source_37 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain__active, tmp_assign_source_37 );
    tmp_assign_source_38 = MAKE_FUNCTION_django$utils$timezone$$$function_8_get_current_timezone(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_get_current_timezone, tmp_assign_source_38 );
    tmp_assign_source_39 = MAKE_FUNCTION_django$utils$timezone$$$function_9_get_current_timezone_name(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_get_current_timezone_name, tmp_assign_source_39 );
    tmp_assign_source_40 = MAKE_FUNCTION_django$utils$timezone$$$function_10__get_timezone_name(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain__get_timezone_name, tmp_assign_source_40 );
    tmp_assign_source_41 = MAKE_FUNCTION_django$utils$timezone$$$function_11_activate(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_activate, tmp_assign_source_41 );
    tmp_assign_source_42 = MAKE_FUNCTION_django$utils$timezone$$$function_12_deactivate(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_deactivate, tmp_assign_source_42 );
    // Tried code:
    tmp_assign_source_43 = PyTuple_New( 1 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_ContextDecorator );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ContextDecorator );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ContextDecorator" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;

        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_43, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_43;

    tmp_assign_source_44 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_44;

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


        exception_lineno = 149;

        goto try_except_handler_5;
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


        exception_lineno = 149;

        goto try_except_handler_5;
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


        exception_lineno = 149;

        goto try_except_handler_5;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_5;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_45 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 149;

        goto try_except_handler_5;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_45;

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


        exception_lineno = 149;

        goto try_except_handler_5;
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


        exception_lineno = 149;

        goto try_except_handler_5;
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
    tmp_source_name_3 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_5;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_5 = const_str_plain_override;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 149;
    tmp_assign_source_46 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_5;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_46 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_46;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_2);
    locals_dict_2 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_48 = const_str_digest_f7c850c4a7dac342c89d16463303e0c9;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_48 );
    outline_1_var___module__ = tmp_assign_source_48;

    tmp_assign_source_49 = const_str_digest_6ec04fdf9e668c58998c26788efdb13e;
    assert( outline_1_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_49 );
    outline_1_var___doc__ = tmp_assign_source_49;

    tmp_assign_source_50 = const_str_plain_override;
    assert( outline_1_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_50 );
    outline_1_var___qualname__ = tmp_assign_source_50;

    tmp_assign_source_51 = MAKE_FUNCTION_django$utils$timezone$$$function_13___init__(  );
    assert( outline_1_var___init__ == NULL );
    outline_1_var___init__ = tmp_assign_source_51;

    tmp_assign_source_52 = MAKE_FUNCTION_django$utils$timezone$$$function_14___enter__(  );
    assert( outline_1_var___enter__ == NULL );
    outline_1_var___enter__ = tmp_assign_source_52;

    tmp_assign_source_53 = MAKE_FUNCTION_django$utils$timezone$$$function_15___exit__(  );
    assert( outline_1_var___exit__ == NULL );
    outline_1_var___exit__ = tmp_assign_source_53;

    // Tried code:
    tmp_called_name_8 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_args_name_4 = PyTuple_New( 3 );
    tmp_tuple_element_6 = const_str_plain_override;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_6 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
    tmp_tuple_element_6 = locals_dict_2;
    Py_INCREF( tmp_tuple_element_6 );
    if ( outline_1_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain___qualname__,
            outline_1_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
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
        Py_DECREF( tmp_tuple_element_6 );

        exception_lineno = 149;

        goto try_except_handler_6;
    }
    if ( outline_1_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain___module__,
            outline_1_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
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
        Py_DECREF( tmp_tuple_element_6 );

        exception_lineno = 149;

        goto try_except_handler_6;
    }
    if ( outline_1_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain___doc__,
            outline_1_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
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
        Py_DECREF( tmp_tuple_element_6 );

        exception_lineno = 149;

        goto try_except_handler_6;
    }
    if ( outline_1_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain___init__,
            outline_1_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
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
        Py_DECREF( tmp_tuple_element_6 );

        exception_lineno = 149;

        goto try_except_handler_6;
    }
    if ( outline_1_var___enter__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain___enter__,
            outline_1_var___enter__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain___enter__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
                const_str_plain___enter__
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
        Py_DECREF( tmp_tuple_element_6 );

        exception_lineno = 149;

        goto try_except_handler_6;
    }
    if ( outline_1_var___exit__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain___exit__,
            outline_1_var___exit__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain___exit__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
                const_str_plain___exit__
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
        Py_DECREF( tmp_tuple_element_6 );

        exception_lineno = 149;

        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame.f_lineno = 149;
    tmp_assign_source_54 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_6;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_54;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$timezone );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
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

    Py_XDECREF( outline_1_var___enter__ );
    outline_1_var___enter__ = NULL;

    Py_XDECREF( outline_1_var___exit__ );
    outline_1_var___exit__ = NULL;

    goto outline_result_2;
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

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    Py_XDECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    Py_XDECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    Py_XDECREF( outline_1_var___enter__ );
    outline_1_var___enter__ = NULL;

    Py_XDECREF( outline_1_var___exit__ );
    outline_1_var___exit__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$timezone );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 149;
    goto try_except_handler_5;
    outline_result_2:;
    tmp_assign_source_47 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_override, tmp_assign_source_47 );
    goto try_end_4;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c218f9b4924db49161c09fb35ef5d6e );
#endif
    popFrameStack();

    assertFrameObject( frame_3c218f9b4924db49161c09fb35ef5d6e );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c218f9b4924db49161c09fb35ef5d6e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3c218f9b4924db49161c09fb35ef5d6e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3c218f9b4924db49161c09fb35ef5d6e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3c218f9b4924db49161c09fb35ef5d6e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    tmp_defaults_2 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_55 = MAKE_FUNCTION_django$utils$timezone$$$function_16_template_localtime( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_template_localtime, tmp_assign_source_55 );
    tmp_defaults_3 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_56 = MAKE_FUNCTION_django$utils$timezone$$$function_17_localtime( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_localtime, tmp_assign_source_56 );
    tmp_defaults_4 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_57 = MAKE_FUNCTION_django$utils$timezone$$$function_18_localdate( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_localdate, tmp_assign_source_57 );
    tmp_assign_source_58 = MAKE_FUNCTION_django$utils$timezone$$$function_19_now(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_now, tmp_assign_source_58 );
    tmp_assign_source_59 = MAKE_FUNCTION_django$utils$timezone$$$function_20_is_aware(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_is_aware, tmp_assign_source_59 );
    tmp_assign_source_60 = MAKE_FUNCTION_django$utils$timezone$$$function_21_is_naive(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_is_naive, tmp_assign_source_60 );
    tmp_defaults_5 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_assign_source_61 = MAKE_FUNCTION_django$utils$timezone$$$function_22_make_aware( tmp_defaults_5 );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_make_aware, tmp_assign_source_61 );
    tmp_defaults_6 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_6 );
    tmp_assign_source_62 = MAKE_FUNCTION_django$utils$timezone$$$function_23_make_naive( tmp_defaults_6 );
    UPDATE_STRING_DICT1( moduledict_django$utils$timezone, (Nuitka_StringObject *)const_str_plain_make_naive, tmp_assign_source_62 );

    return MOD_RETURN_VALUE( module_django$utils$timezone );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
