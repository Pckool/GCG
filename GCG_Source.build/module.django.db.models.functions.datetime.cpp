/* Generated code for Python source for module 'django.db.models.functions.datetime'
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

/* The _module_django$db$models$functions$datetime is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$db$models$functions$datetime;
PyDictObject *moduledict_django$db$models$functions$datetime;

/* The module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_USE_TZ;
static PyObject *const_str_digest_a732f039cc8d6dda06497c69ab447a52;
extern PyObject *const_str_plain_ExtractYear;
static PyObject *const_str_digest_cc9f82fd7bef05fbbb2cdd1b5aea8164;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_26eed891fc9ca7fd292f5baa398e2b29;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_ExtractSecond;
static PyObject *const_str_digest_9027a52d73711fb7ab62d75f9b392ba3;
static PyObject *const_str_plain_lhs_output_field;
static PyObject *const_str_digest_65dce6a88226e6472be90324e345fb07;
static PyObject *const_str_plain_datetime_trunc_sql;
extern PyObject *const_str_plain_month;
extern PyObject *const_str_plain_Extract;
extern PyObject *const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf;
static PyObject *const_str_plain_time_trunc_sql;
static PyObject *const_str_plain_TruncBase;
extern PyObject *const_str_plain_IntegerField;
static PyObject *const_tuple_80f3d95e95312d6f4bf3850bdbf48878_tuple;
extern PyObject *const_str_plain_hour;
extern PyObject *const_str_plain_for_save;
static PyObject *const_tuple_a3709201a17d8fcf858ff809bbc60bcc_tuple;
extern PyObject *const_str_plain_summarize;
extern PyObject *const_str_plain_lhs_params;
static PyObject *const_str_digest_518407ba9c7955df2a3347a698e97b00;
extern PyObject *const_str_plain_second;
static PyObject *const_str_plain_inner_params;
extern PyObject *const_str_plain_TruncTime;
static PyObject *const_str_digest_8ee25a194f448be847d798f26f52556a;
extern PyObject *const_str_digest_4e7e693e251a89f57ec4f0dd4f537b0c;
static PyObject *const_str_digest_d8ec081ce141ec638bcbde52b17c7baf;
static PyObject *const_str_digest_acbd5b22bb1e16c6b8e749fed4bddd79;
extern PyObject *const_str_plain_DateTimeField;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_3a95f6b970b715d198c89a9e64da2f6f;
static PyObject *const_tuple_05fe7d4238cf3cfa47faf8cfa093aa70_tuple;
static PyObject *const_str_plain_tz_params;
extern PyObject *const_str_plain_extend;
static PyObject *const_str_digest_c9125e2c3bfdae5002ba7427e64ce181;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_register_lookup;
extern PyObject *const_str_plain_Transform;
extern PyObject *const_str_plain_YearExact;
static PyObject *const_tuple_d7700197091e7a2a2abc5ec77129f10d_tuple;
static PyObject *const_str_digest_af5f7dfd55d00f70143aba1cf4e04aa7;
extern PyObject *const_tuple_str_plain_cached_property_tuple;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_6a82bec15f2ad69d5474e3d54d4e1b56;
static PyObject *const_str_digest_e1c1a4e8b645dee9132a79454bb1a833;
static PyObject *const_str_digest_d7034ea608d9ef4b33d38144d6303c6f;
static PyObject *const_tuple_e0855d015d4222c85ccade7e3ed82f04_tuple;
static PyObject *const_str_plain_date_trunc_sql;
extern PyObject *const_str_plain_tzinfo;
static PyObject *const_str_digest_280af3656dbc5a217bfde8a76c7353c3;
static PyObject *const_str_plain_datetime_extract_sql;
extern PyObject *const_str_plain_value;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
extern PyObject *const_str_plain_TruncDay;
extern PyObject *const_str_plain_query;
extern PyObject *const_str_digest_76151557ac4cfbca827b761e50d5fea2;
extern PyObject *const_str_plain_context;
extern PyObject *const_str_plain_ExtractHour;
static PyObject *const_str_plain_datetime_cast_time_sql;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_467c9722f19d9d40d148689532cdc0b1;
extern PyObject *const_str_plain_datetime;
static PyObject *const_tuple_56a306fdc951f956cb2ab37fbc9a3745_tuple;
extern PyObject *const_str_plain_allow_joins;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_name;
static PyObject *const_tuple_str_plain_self_str_plain_tzname_tuple;
extern PyObject *const_str_plain_ExtractMonth;
static PyObject *const_str_plain_inner_sql;
static PyObject *const_str_plain_datetime_cast_date_sql;
extern PyObject *const_dict_19923244156fa96a7d6f1da74d173385;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_ExtractMinute;
static PyObject *const_str_plain_date_extract_sql;
static PyObject *const_tuple_7a63c5d0d52bbbdf0cca2174cfba7d98_tuple;
extern PyObject *const_str_plain_TruncDate;
static PyObject *const_str_plain_week_day;
static PyObject *const_str_digest_ca99a55f005d88bb8efe6215bd30a466;
extern PyObject *const_str_plain_ModuleSpec;
static PyObject *const_str_digest_77ae4f11fb4cb7d017231d4e2f6b66f1;
extern PyObject *const_str_plain_TruncMinute;
static PyObject *const_str_digest_396cd331b099e141f910485b2e00fc01;
extern PyObject *const_str_plain_sql;
extern PyObject *const_str_plain_YearGte;
extern PyObject *const_str_plain_connection;
extern PyObject *const_str_plain_ops;
static PyObject *const_str_digest_3f51bf300708b583a8744edcca288172;
static PyObject *const_str_digest_37c8a7f69612eac494b1edd4a3e0d0a3;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_as_sql;
static PyObject *const_tuple_str_digest_6a82bec15f2ad69d5474e3d54d4e1b56_tuple;
extern PyObject *const_str_plain_ExtractDay;
extern PyObject *const_str_plain_timezone;
extern PyObject *const_str_plain_cached_property;
extern PyObject *const_tuple_str_plain_settings_tuple;
extern PyObject *const_tuple_29f83c5f5a382e035d91034d70ae6e4a_tuple;
extern PyObject *const_str_plain_get_current_timezone_name;
extern PyObject *const_str_plain_extra;
static PyObject *const_tuple_69ee4a02682e194be91cf96b69220a7e_tuple;
extern PyObject *const_str_plain_output_field;
static PyObject *const_tuple_c145130f652aa174f94901bd354c44ed_tuple;
extern PyObject *const_str_plain_TruncSecond;
static PyObject *const_tuple_93757862e4a1dfea7b9fb188b4ee9c37_tuple;
extern PyObject *const_str_plain_TruncMonth;
extern PyObject *const_str_plain_YearLte;
extern PyObject *const_str_plain_compiler;
static PyObject *const_str_digest_2c40b21c66b4ba53c2f6b498d10b08e0;
static PyObject *const_tuple_efac42e934e7fadf2eb945773132bf1f_tuple;
extern PyObject *const_str_plain_year;
extern PyObject *const_str_plain_settings;
static PyObject *const_str_plain_TimezoneMixin;
static PyObject *const_str_digest_53ecc774abacc5d442a814e9b8d5c719;
extern PyObject *const_str_plain_lookup_name;
static PyObject *const_str_plain_time_extract_sql;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain__get_timezone_name;
static PyObject *const_tuple_str_plain_hour_str_plain_minute_str_plain_second_tuple;
static PyObject *const_tuple_7515ccca5a14140b6e9bba28f857752e_tuple;
extern PyObject *const_str_plain_DateField;
extern PyObject *const_str_plain_Trunc;
extern PyObject *const_str_plain_TimeField;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_minute;
extern PyObject *const_str_plain_expression;
extern PyObject *const_str_plain_make_aware;
extern PyObject *const_str_plain_tzname;
extern PyObject *const_str_plain_kind;
extern PyObject *const_str_plain_params;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_digest_2a54ded6839f2304ad431ccaba052533;
static PyObject *const_str_digest_347e27384286471ae1dfd2c146575f2f;
static PyObject *const_tuple_b77e62d72ca3acd883e97b026660ffd9_tuple;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_day;
extern PyObject *const_str_plain_field;
extern PyObject *const_str_plain_lhs;
static PyObject *const_str_digest_3f258b70368a83a768bfbddcb8cce048;
static PyObject *const_tuple_93cf577afc05aa71aee4739e48757d97_tuple;
static PyObject *const_str_digest_62603b97f3a7075720bcd75df8f17cbd;
static PyObject *const_str_digest_999a4b1a6bcd0eacf0e9feb40b5fdda7;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_TruncYear;
extern PyObject *const_str_plain_arity;
extern PyObject *const_str_plain_TruncHour;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_convert_value;
static PyObject *const_str_digest_15ac777f3734d3543b6a2e0b4c554053;
static PyObject *const_tuple_str_plain_year_str_plain_month_str_plain_day_str_plain_date_tuple;
extern PyObject *const_str_plain_week;
static PyObject *const_str_plain_explicit_output_field;
extern PyObject *const_tuple_none_true_none_false_false_tuple;
extern PyObject *const_str_plain_ExtractWeek;
static PyObject *const_str_digest_c48f5959c80b83740cb218ed2c610f8c;
extern PyObject *const_tuple_str_plain_timezone_tuple;
extern PyObject *const_str_plain_YearGt;
extern PyObject *const_str_plain_reuse;
extern PyObject *const_str_plain_ExtractWeekDay;
extern PyObject *const_str_plain_date;
extern PyObject *const_tuple_str_plain_datetime_tuple;
extern PyObject *const_str_plain_YearLt;
extern PyObject *const_str_digest_3d2fb639fc3676a85e9d77bb02d18a21;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_digest_be602269537522173639ef95349a0d6a;
extern PyObject *const_str_plain_resolve_expression;
static PyObject *const_str_plain_get_tzname;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_a732f039cc8d6dda06497c69ab447a52 = UNSTREAM_STRING( &constant_bin[ 952984 ], 35, 0 );
    const_str_digest_cc9f82fd7bef05fbbb2cdd1b5aea8164 = UNSTREAM_STRING( &constant_bin[ 953019 ], 66, 0 );
    const_str_digest_26eed891fc9ca7fd292f5baa398e2b29 = UNSTREAM_STRING( &constant_bin[ 953085 ], 16, 0 );
    const_str_digest_9027a52d73711fb7ab62d75f9b392ba3 = UNSTREAM_STRING( &constant_bin[ 953101 ], 24, 0 );
    const_str_plain_lhs_output_field = UNSTREAM_STRING( &constant_bin[ 953125 ], 16, 1 );
    const_str_digest_65dce6a88226e6472be90324e345fb07 = UNSTREAM_STRING( &constant_bin[ 953141 ], 18, 0 );
    const_str_plain_datetime_trunc_sql = UNSTREAM_STRING( &constant_bin[ 953159 ], 18, 1 );
    const_str_plain_time_trunc_sql = UNSTREAM_STRING( &constant_bin[ 953163 ], 14, 1 );
    const_str_plain_TruncBase = UNSTREAM_STRING( &constant_bin[ 953085 ], 9, 1 );
    const_tuple_80f3d95e95312d6f4bf3850bdbf48878_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_80f3d95e95312d6f4bf3850bdbf48878_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_80f3d95e95312d6f4bf3850bdbf48878_tuple, 1, const_str_plain_expression ); Py_INCREF( const_str_plain_expression );
    PyTuple_SET_ITEM( const_tuple_80f3d95e95312d6f4bf3850bdbf48878_tuple, 2, const_str_plain_kind ); Py_INCREF( const_str_plain_kind );
    PyTuple_SET_ITEM( const_tuple_80f3d95e95312d6f4bf3850bdbf48878_tuple, 3, const_str_plain_output_field ); Py_INCREF( const_str_plain_output_field );
    PyTuple_SET_ITEM( const_tuple_80f3d95e95312d6f4bf3850bdbf48878_tuple, 4, const_str_plain_tzinfo ); Py_INCREF( const_str_plain_tzinfo );
    PyTuple_SET_ITEM( const_tuple_80f3d95e95312d6f4bf3850bdbf48878_tuple, 5, const_str_plain_extra ); Py_INCREF( const_str_plain_extra );
    PyTuple_SET_ITEM( const_tuple_80f3d95e95312d6f4bf3850bdbf48878_tuple, 6, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_tuple_a3709201a17d8fcf858ff809bbc60bcc_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_a3709201a17d8fcf858ff809bbc60bcc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a3709201a17d8fcf858ff809bbc60bcc_tuple, 1, const_str_plain_compiler ); Py_INCREF( const_str_plain_compiler );
    PyTuple_SET_ITEM( const_tuple_a3709201a17d8fcf858ff809bbc60bcc_tuple, 2, const_str_plain_connection ); Py_INCREF( const_str_plain_connection );
    const_str_plain_inner_sql = UNSTREAM_STRING( &constant_bin[ 953177 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_a3709201a17d8fcf858ff809bbc60bcc_tuple, 3, const_str_plain_inner_sql ); Py_INCREF( const_str_plain_inner_sql );
    const_str_plain_inner_params = UNSTREAM_STRING( &constant_bin[ 953186 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_a3709201a17d8fcf858ff809bbc60bcc_tuple, 4, const_str_plain_inner_params ); Py_INCREF( const_str_plain_inner_params );
    PyTuple_SET_ITEM( const_tuple_a3709201a17d8fcf858ff809bbc60bcc_tuple, 5, const_str_plain_tzname ); Py_INCREF( const_str_plain_tzname );
    PyTuple_SET_ITEM( const_tuple_a3709201a17d8fcf858ff809bbc60bcc_tuple, 6, const_str_plain_sql ); Py_INCREF( const_str_plain_sql );
    PyTuple_SET_ITEM( const_tuple_a3709201a17d8fcf858ff809bbc60bcc_tuple, 7, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    const_str_digest_518407ba9c7955df2a3347a698e97b00 = UNSTREAM_STRING( &constant_bin[ 953198 ], 56, 0 );
    const_str_digest_8ee25a194f448be847d798f26f52556a = UNSTREAM_STRING( &constant_bin[ 953254 ], 38, 0 );
    const_str_digest_d8ec081ce141ec638bcbde52b17c7baf = UNSTREAM_STRING( &constant_bin[ 953292 ], 90, 0 );
    const_str_digest_acbd5b22bb1e16c6b8e749fed4bddd79 = UNSTREAM_STRING( &constant_bin[ 953382 ], 23, 0 );
    const_str_digest_3a95f6b970b715d198c89a9e64da2f6f = UNSTREAM_STRING( &constant_bin[ 953405 ], 99, 0 );
    const_tuple_05fe7d4238cf3cfa47faf8cfa093aa70_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_05fe7d4238cf3cfa47faf8cfa093aa70_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_05fe7d4238cf3cfa47faf8cfa093aa70_tuple, 1, const_str_plain_compiler ); Py_INCREF( const_str_plain_compiler );
    PyTuple_SET_ITEM( const_tuple_05fe7d4238cf3cfa47faf8cfa093aa70_tuple, 2, const_str_plain_connection ); Py_INCREF( const_str_plain_connection );
    PyTuple_SET_ITEM( const_tuple_05fe7d4238cf3cfa47faf8cfa093aa70_tuple, 3, const_str_plain_sql ); Py_INCREF( const_str_plain_sql );
    PyTuple_SET_ITEM( const_tuple_05fe7d4238cf3cfa47faf8cfa093aa70_tuple, 4, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_05fe7d4238cf3cfa47faf8cfa093aa70_tuple, 5, const_str_plain_lhs_output_field ); Py_INCREF( const_str_plain_lhs_output_field );
    PyTuple_SET_ITEM( const_tuple_05fe7d4238cf3cfa47faf8cfa093aa70_tuple, 6, const_str_plain_tzname ); Py_INCREF( const_str_plain_tzname );
    const_str_plain_tz_params = UNSTREAM_STRING( &constant_bin[ 953504 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_05fe7d4238cf3cfa47faf8cfa093aa70_tuple, 7, const_str_plain_tz_params ); Py_INCREF( const_str_plain_tz_params );
    const_str_digest_c9125e2c3bfdae5002ba7427e64ce181 = UNSTREAM_STRING( &constant_bin[ 953513 ], 16, 0 );
    const_tuple_d7700197091e7a2a2abc5ec77129f10d_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_d7700197091e7a2a2abc5ec77129f10d_tuple, 0, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    PyTuple_SET_ITEM( const_tuple_d7700197091e7a2a2abc5ec77129f10d_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_d7700197091e7a2a2abc5ec77129f10d_tuple, 2, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_d7700197091e7a2a2abc5ec77129f10d_tuple, 3, const_str_plain_lookup_name ); Py_INCREF( const_str_plain_lookup_name );
    PyTuple_SET_ITEM( const_tuple_d7700197091e7a2a2abc5ec77129f10d_tuple, 4, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    PyTuple_SET_ITEM( const_tuple_d7700197091e7a2a2abc5ec77129f10d_tuple, 5, const_str_plain_as_sql ); Py_INCREF( const_str_plain_as_sql );
    PyTuple_SET_ITEM( const_tuple_d7700197091e7a2a2abc5ec77129f10d_tuple, 6, const_str_plain_resolve_expression ); Py_INCREF( const_str_plain_resolve_expression );
    PyTuple_SET_ITEM( const_tuple_d7700197091e7a2a2abc5ec77129f10d_tuple, 7, const_str_plain_output_field ); Py_INCREF( const_str_plain_output_field );
    const_str_digest_af5f7dfd55d00f70143aba1cf4e04aa7 = UNSTREAM_STRING( &constant_bin[ 953529 ], 16, 0 );
    const_str_digest_6a82bec15f2ad69d5474e3d54d4e1b56 = UNSTREAM_STRING( &constant_bin[ 953545 ], 38, 0 );
    const_str_digest_e1c1a4e8b645dee9132a79454bb1a833 = UNSTREAM_STRING( &constant_bin[ 953583 ], 38, 0 );
    const_str_digest_d7034ea608d9ef4b33d38144d6303c6f = UNSTREAM_STRING( &constant_bin[ 953621 ], 38, 0 );
    const_tuple_e0855d015d4222c85ccade7e3ed82f04_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_e0855d015d4222c85ccade7e3ed82f04_tuple, 0, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    PyTuple_SET_ITEM( const_tuple_e0855d015d4222c85ccade7e3ed82f04_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_e0855d015d4222c85ccade7e3ed82f04_tuple, 2, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_e0855d015d4222c85ccade7e3ed82f04_tuple, 3, const_str_plain_kind ); Py_INCREF( const_str_plain_kind );
    PyTuple_SET_ITEM( const_tuple_e0855d015d4222c85ccade7e3ed82f04_tuple, 4, const_str_plain_lookup_name ); Py_INCREF( const_str_plain_lookup_name );
    PyTuple_SET_ITEM( const_tuple_e0855d015d4222c85ccade7e3ed82f04_tuple, 5, const_str_plain_output_field ); Py_INCREF( const_str_plain_output_field );
    PyTuple_SET_ITEM( const_tuple_e0855d015d4222c85ccade7e3ed82f04_tuple, 6, const_str_plain_as_sql ); Py_INCREF( const_str_plain_as_sql );
    const_str_plain_date_trunc_sql = UNSTREAM_STRING( &constant_bin[ 953659 ], 14, 1 );
    const_str_digest_280af3656dbc5a217bfde8a76c7353c3 = UNSTREAM_STRING( &constant_bin[ 953673 ], 28, 0 );
    const_str_plain_datetime_extract_sql = UNSTREAM_STRING( &constant_bin[ 953701 ], 20, 1 );
    const_str_plain_datetime_cast_time_sql = UNSTREAM_STRING( &constant_bin[ 953721 ], 22, 1 );
    const_tuple_56a306fdc951f956cb2ab37fbc9a3745_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_56a306fdc951f956cb2ab37fbc9a3745_tuple, 0, const_str_plain_YearExact ); Py_INCREF( const_str_plain_YearExact );
    PyTuple_SET_ITEM( const_tuple_56a306fdc951f956cb2ab37fbc9a3745_tuple, 1, const_str_plain_YearGt ); Py_INCREF( const_str_plain_YearGt );
    PyTuple_SET_ITEM( const_tuple_56a306fdc951f956cb2ab37fbc9a3745_tuple, 2, const_str_plain_YearGte ); Py_INCREF( const_str_plain_YearGte );
    PyTuple_SET_ITEM( const_tuple_56a306fdc951f956cb2ab37fbc9a3745_tuple, 3, const_str_plain_YearLt ); Py_INCREF( const_str_plain_YearLt );
    PyTuple_SET_ITEM( const_tuple_56a306fdc951f956cb2ab37fbc9a3745_tuple, 4, const_str_plain_YearLte ); Py_INCREF( const_str_plain_YearLte );
    const_tuple_str_plain_self_str_plain_tzname_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tzname_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tzname_tuple, 1, const_str_plain_tzname ); Py_INCREF( const_str_plain_tzname );
    const_str_plain_datetime_cast_date_sql = UNSTREAM_STRING( &constant_bin[ 953743 ], 22, 1 );
    const_str_plain_date_extract_sql = UNSTREAM_STRING( &constant_bin[ 953765 ], 16, 1 );
    const_tuple_7a63c5d0d52bbbdf0cca2174cfba7d98_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_7a63c5d0d52bbbdf0cca2174cfba7d98_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7a63c5d0d52bbbdf0cca2174cfba7d98_tuple, 1, const_str_plain_query ); Py_INCREF( const_str_plain_query );
    PyTuple_SET_ITEM( const_tuple_7a63c5d0d52bbbdf0cca2174cfba7d98_tuple, 2, const_str_plain_allow_joins ); Py_INCREF( const_str_plain_allow_joins );
    PyTuple_SET_ITEM( const_tuple_7a63c5d0d52bbbdf0cca2174cfba7d98_tuple, 3, const_str_plain_reuse ); Py_INCREF( const_str_plain_reuse );
    PyTuple_SET_ITEM( const_tuple_7a63c5d0d52bbbdf0cca2174cfba7d98_tuple, 4, const_str_plain_summarize ); Py_INCREF( const_str_plain_summarize );
    PyTuple_SET_ITEM( const_tuple_7a63c5d0d52bbbdf0cca2174cfba7d98_tuple, 5, const_str_plain_for_save ); Py_INCREF( const_str_plain_for_save );
    PyTuple_SET_ITEM( const_tuple_7a63c5d0d52bbbdf0cca2174cfba7d98_tuple, 6, const_str_plain_copy ); Py_INCREF( const_str_plain_copy );
    PyTuple_SET_ITEM( const_tuple_7a63c5d0d52bbbdf0cca2174cfba7d98_tuple, 7, const_str_plain_field ); Py_INCREF( const_str_plain_field );
    PyTuple_SET_ITEM( const_tuple_7a63c5d0d52bbbdf0cca2174cfba7d98_tuple, 8, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_plain_week_day = UNSTREAM_STRING( &constant_bin[ 953781 ], 8, 1 );
    const_str_digest_ca99a55f005d88bb8efe6215bd30a466 = UNSTREAM_STRING( &constant_bin[ 953789 ], 20, 0 );
    const_str_digest_77ae4f11fb4cb7d017231d4e2f6b66f1 = UNSTREAM_STRING( &constant_bin[ 953809 ], 22, 0 );
    const_str_digest_396cd331b099e141f910485b2e00fc01 = UNSTREAM_STRING( &constant_bin[ 953831 ], 113, 0 );
    const_str_digest_3f51bf300708b583a8744edcca288172 = UNSTREAM_STRING( &constant_bin[ 953944 ], 28, 0 );
    const_str_digest_37c8a7f69612eac494b1edd4a3e0d0a3 = UNSTREAM_STRING( &constant_bin[ 953972 ], 14, 0 );
    const_tuple_str_digest_6a82bec15f2ad69d5474e3d54d4e1b56_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6a82bec15f2ad69d5474e3d54d4e1b56_tuple, 0, const_str_digest_6a82bec15f2ad69d5474e3d54d4e1b56 ); Py_INCREF( const_str_digest_6a82bec15f2ad69d5474e3d54d4e1b56 );
    const_tuple_69ee4a02682e194be91cf96b69220a7e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_69ee4a02682e194be91cf96b69220a7e_tuple, 0, const_str_plain_DateField ); Py_INCREF( const_str_plain_DateField );
    PyTuple_SET_ITEM( const_tuple_69ee4a02682e194be91cf96b69220a7e_tuple, 1, const_str_plain_DateTimeField ); Py_INCREF( const_str_plain_DateTimeField );
    PyTuple_SET_ITEM( const_tuple_69ee4a02682e194be91cf96b69220a7e_tuple, 2, const_str_plain_IntegerField ); Py_INCREF( const_str_plain_IntegerField );
    PyTuple_SET_ITEM( const_tuple_69ee4a02682e194be91cf96b69220a7e_tuple, 3, const_str_plain_TimeField ); Py_INCREF( const_str_plain_TimeField );
    PyTuple_SET_ITEM( const_tuple_69ee4a02682e194be91cf96b69220a7e_tuple, 4, const_str_plain_Transform ); Py_INCREF( const_str_plain_Transform );
    const_tuple_c145130f652aa174f94901bd354c44ed_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_c145130f652aa174f94901bd354c44ed_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c145130f652aa174f94901bd354c44ed_tuple, 1, const_str_plain_expression ); Py_INCREF( const_str_plain_expression );
    PyTuple_SET_ITEM( const_tuple_c145130f652aa174f94901bd354c44ed_tuple, 2, const_str_plain_output_field ); Py_INCREF( const_str_plain_output_field );
    PyTuple_SET_ITEM( const_tuple_c145130f652aa174f94901bd354c44ed_tuple, 3, const_str_plain_tzinfo ); Py_INCREF( const_str_plain_tzinfo );
    PyTuple_SET_ITEM( const_tuple_c145130f652aa174f94901bd354c44ed_tuple, 4, const_str_plain_extra ); Py_INCREF( const_str_plain_extra );
    PyTuple_SET_ITEM( const_tuple_c145130f652aa174f94901bd354c44ed_tuple, 5, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_tuple_93757862e4a1dfea7b9fb188b4ee9c37_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_93757862e4a1dfea7b9fb188b4ee9c37_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_93757862e4a1dfea7b9fb188b4ee9c37_tuple, 1, const_str_plain_query ); Py_INCREF( const_str_plain_query );
    PyTuple_SET_ITEM( const_tuple_93757862e4a1dfea7b9fb188b4ee9c37_tuple, 2, const_str_plain_allow_joins ); Py_INCREF( const_str_plain_allow_joins );
    PyTuple_SET_ITEM( const_tuple_93757862e4a1dfea7b9fb188b4ee9c37_tuple, 3, const_str_plain_reuse ); Py_INCREF( const_str_plain_reuse );
    PyTuple_SET_ITEM( const_tuple_93757862e4a1dfea7b9fb188b4ee9c37_tuple, 4, const_str_plain_summarize ); Py_INCREF( const_str_plain_summarize );
    PyTuple_SET_ITEM( const_tuple_93757862e4a1dfea7b9fb188b4ee9c37_tuple, 5, const_str_plain_for_save ); Py_INCREF( const_str_plain_for_save );
    PyTuple_SET_ITEM( const_tuple_93757862e4a1dfea7b9fb188b4ee9c37_tuple, 6, const_str_plain_copy ); Py_INCREF( const_str_plain_copy );
    PyTuple_SET_ITEM( const_tuple_93757862e4a1dfea7b9fb188b4ee9c37_tuple, 7, const_str_plain_field ); Py_INCREF( const_str_plain_field );
    PyTuple_SET_ITEM( const_tuple_93757862e4a1dfea7b9fb188b4ee9c37_tuple, 8, const_str_plain_output_field ); Py_INCREF( const_str_plain_output_field );
    const_str_plain_explicit_output_field = UNSTREAM_STRING( &constant_bin[ 953986 ], 21, 1 );
    PyTuple_SET_ITEM( const_tuple_93757862e4a1dfea7b9fb188b4ee9c37_tuple, 9, const_str_plain_explicit_output_field ); Py_INCREF( const_str_plain_explicit_output_field );
    PyTuple_SET_ITEM( const_tuple_93757862e4a1dfea7b9fb188b4ee9c37_tuple, 10, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_2c40b21c66b4ba53c2f6b498d10b08e0 = UNSTREAM_STRING( &constant_bin[ 954007 ], 50, 0 );
    const_tuple_efac42e934e7fadf2eb945773132bf1f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_efac42e934e7fadf2eb945773132bf1f_tuple, 0, const_str_plain_hour ); Py_INCREF( const_str_plain_hour );
    PyTuple_SET_ITEM( const_tuple_efac42e934e7fadf2eb945773132bf1f_tuple, 1, const_str_plain_minute ); Py_INCREF( const_str_plain_minute );
    PyTuple_SET_ITEM( const_tuple_efac42e934e7fadf2eb945773132bf1f_tuple, 2, const_str_plain_second ); Py_INCREF( const_str_plain_second );
    PyTuple_SET_ITEM( const_tuple_efac42e934e7fadf2eb945773132bf1f_tuple, 3, const_str_plain_time ); Py_INCREF( const_str_plain_time );
    const_str_plain_TimezoneMixin = UNSTREAM_STRING( &constant_bin[ 953101 ], 13, 1 );
    const_str_digest_53ecc774abacc5d442a814e9b8d5c719 = UNSTREAM_STRING( &constant_bin[ 954057 ], 44, 0 );
    const_str_plain_time_extract_sql = UNSTREAM_STRING( &constant_bin[ 953705 ], 16, 1 );
    const_tuple_str_plain_hour_str_plain_minute_str_plain_second_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hour_str_plain_minute_str_plain_second_tuple, 0, const_str_plain_hour ); Py_INCREF( const_str_plain_hour );
    PyTuple_SET_ITEM( const_tuple_str_plain_hour_str_plain_minute_str_plain_second_tuple, 1, const_str_plain_minute ); Py_INCREF( const_str_plain_minute );
    PyTuple_SET_ITEM( const_tuple_str_plain_hour_str_plain_minute_str_plain_second_tuple, 2, const_str_plain_second ); Py_INCREF( const_str_plain_second );
    const_tuple_7515ccca5a14140b6e9bba28f857752e_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_7515ccca5a14140b6e9bba28f857752e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7515ccca5a14140b6e9bba28f857752e_tuple, 1, const_str_plain_compiler ); Py_INCREF( const_str_plain_compiler );
    PyTuple_SET_ITEM( const_tuple_7515ccca5a14140b6e9bba28f857752e_tuple, 2, const_str_plain_connection ); Py_INCREF( const_str_plain_connection );
    PyTuple_SET_ITEM( const_tuple_7515ccca5a14140b6e9bba28f857752e_tuple, 3, const_str_plain_lhs ); Py_INCREF( const_str_plain_lhs );
    PyTuple_SET_ITEM( const_tuple_7515ccca5a14140b6e9bba28f857752e_tuple, 4, const_str_plain_lhs_params ); Py_INCREF( const_str_plain_lhs_params );
    PyTuple_SET_ITEM( const_tuple_7515ccca5a14140b6e9bba28f857752e_tuple, 5, const_str_plain_tzname ); Py_INCREF( const_str_plain_tzname );
    PyTuple_SET_ITEM( const_tuple_7515ccca5a14140b6e9bba28f857752e_tuple, 6, const_str_plain_sql ); Py_INCREF( const_str_plain_sql );
    PyTuple_SET_ITEM( const_tuple_7515ccca5a14140b6e9bba28f857752e_tuple, 7, const_str_plain_tz_params ); Py_INCREF( const_str_plain_tz_params );
    const_str_digest_347e27384286471ae1dfd2c146575f2f = UNSTREAM_STRING( &constant_bin[ 954101 ], 22, 0 );
    const_tuple_b77e62d72ca3acd883e97b026660ffd9_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_b77e62d72ca3acd883e97b026660ffd9_tuple, 0, const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf ); Py_INCREF( const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf );
    const_str_digest_c48f5959c80b83740cb218ed2c610f8c = UNSTREAM_STRING( &constant_bin[ 954123 ], 3, 0 );
    PyTuple_SET_ITEM( const_tuple_b77e62d72ca3acd883e97b026660ffd9_tuple, 1, const_str_digest_c48f5959c80b83740cb218ed2c610f8c ); Py_INCREF( const_str_digest_c48f5959c80b83740cb218ed2c610f8c );
    const_str_digest_3f258b70368a83a768bfbddcb8cce048 = UNSTREAM_STRING( &constant_bin[ 954126 ], 72, 0 );
    const_tuple_93cf577afc05aa71aee4739e48757d97_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_93cf577afc05aa71aee4739e48757d97_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_93cf577afc05aa71aee4739e48757d97_tuple, 1, const_str_plain_expression ); Py_INCREF( const_str_plain_expression );
    PyTuple_SET_ITEM( const_tuple_93cf577afc05aa71aee4739e48757d97_tuple, 2, const_str_plain_lookup_name ); Py_INCREF( const_str_plain_lookup_name );
    PyTuple_SET_ITEM( const_tuple_93cf577afc05aa71aee4739e48757d97_tuple, 3, const_str_plain_tzinfo ); Py_INCREF( const_str_plain_tzinfo );
    PyTuple_SET_ITEM( const_tuple_93cf577afc05aa71aee4739e48757d97_tuple, 4, const_str_plain_extra ); Py_INCREF( const_str_plain_extra );
    PyTuple_SET_ITEM( const_tuple_93cf577afc05aa71aee4739e48757d97_tuple, 5, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_62603b97f3a7075720bcd75df8f17cbd = UNSTREAM_STRING( &constant_bin[ 954198 ], 14, 0 );
    const_str_digest_999a4b1a6bcd0eacf0e9feb40b5fdda7 = UNSTREAM_STRING( &constant_bin[ 954212 ], 16, 0 );
    const_str_digest_15ac777f3734d3543b6a2e0b4c554053 = UNSTREAM_STRING( &constant_bin[ 954228 ], 26, 0 );
    const_tuple_str_plain_year_str_plain_month_str_plain_day_str_plain_date_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_year_str_plain_month_str_plain_day_str_plain_date_tuple, 0, const_str_plain_year ); Py_INCREF( const_str_plain_year );
    PyTuple_SET_ITEM( const_tuple_str_plain_year_str_plain_month_str_plain_day_str_plain_date_tuple, 1, const_str_plain_month ); Py_INCREF( const_str_plain_month );
    PyTuple_SET_ITEM( const_tuple_str_plain_year_str_plain_month_str_plain_day_str_plain_date_tuple, 2, const_str_plain_day ); Py_INCREF( const_str_plain_day );
    PyTuple_SET_ITEM( const_tuple_str_plain_year_str_plain_month_str_plain_day_str_plain_date_tuple, 3, const_str_plain_date ); Py_INCREF( const_str_plain_date );
    const_str_digest_be602269537522173639ef95349a0d6a = UNSTREAM_STRING( &constant_bin[ 954254 ], 59, 0 );
    const_str_plain_get_tzname = UNSTREAM_STRING( &constant_bin[ 953115 ], 10, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$db$models$functions$datetime( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_7d057895e572573cb3149c484cc0e440;
static PyCodeObject *codeobj_a8fa1e589dd95ced2f6b89e2e806c613;
static PyCodeObject *codeobj_ca07a69e2faf5f5c153562b9b485dceb;
static PyCodeObject *codeobj_b41c75f9af44638ba4d912fbd6d6a3d9;
static PyCodeObject *codeobj_d47d3937294a0f26bd72a97460119d0b;
static PyCodeObject *codeobj_fad7aa21087cf6b53f553f1f1edbc03c;
static PyCodeObject *codeobj_a22f64ef4f1a99a8824f51204cce6981;
static PyCodeObject *codeobj_e6041c8a7ecc28c3031b87bf6a7bcebe;
static PyCodeObject *codeobj_9c1a9b316a15765ee4ada7c2e9cd3216;
static PyCodeObject *codeobj_df9b2a5fe14af2ac9b65bc06281898c4;
static PyCodeObject *codeobj_5bf398a1847ec733fdf3e8f325d3446d;
static PyCodeObject *codeobj_b6f049e12a86338200f220723962b91a;
static PyCodeObject *codeobj_af918c3873172a7fa44822f19a918569;
static PyCodeObject *codeobj_f3dc2e0fcbbc878bdc7d4081f99a6dca;
static PyCodeObject *codeobj_60b80c641d789fd770783ec9d5f56fcc;
static PyCodeObject *codeobj_50cbe8bca834bea42b46b814c605881d;
static PyCodeObject *codeobj_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f;
static PyCodeObject *codeobj_7b3902fec2134e0e8ed95fe36ef26627;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_e1c1a4e8b645dee9132a79454bb1a833 );
    codeobj_7d057895e572573cb3149c484cc0e440 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_53ecc774abacc5d442a814e9b8d5c719, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_a8fa1e589dd95ced2f6b89e2e806c613 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Extract, 33, const_tuple_d7700197091e7a2a2abc5ec77129f10d_tuple, 0, 0, CO_NOFREE );
    codeobj_ca07a69e2faf5f5c153562b9b485dceb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_TruncDate, 230, const_tuple_e0855d015d4222c85ccade7e3ed82f04_tuple, 0, 0, CO_NOFREE );
    codeobj_b41c75f9af44638ba4d912fbd6d6a3d9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_TruncTime, 247, const_tuple_e0855d015d4222c85ccade7e3ed82f04_tuple, 0, 0, CO_NOFREE );
    codeobj_d47d3937294a0f26bd72a97460119d0b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 36, const_tuple_93cf577afc05aa71aee4739e48757d97_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS );
    codeobj_fad7aa21087cf6b53f553f1f1edbc03c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 145, const_tuple_c145130f652aa174f94901bd354c44ed_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS );
    codeobj_a22f64ef4f1a99a8824f51204cce6981 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 213, const_tuple_80f3d95e95312d6f4bf3850bdbf48878_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS );
    codeobj_e6041c8a7ecc28c3031b87bf6a7bcebe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_as_sql, 44, const_tuple_05fe7d4238cf3cfa47faf8cfa093aa70_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9c1a9b316a15765ee4ada7c2e9cd3216 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_as_sql, 149, const_tuple_a3709201a17d8fcf858ff809bbc60bcc_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_df9b2a5fe14af2ac9b65bc06281898c4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_as_sql, 238, const_tuple_7515ccca5a14140b6e9bba28f857752e_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5bf398a1847ec733fdf3e8f325d3446d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_as_sql, 255, const_tuple_7515ccca5a14140b6e9bba28f857752e_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b6f049e12a86338200f220723962b91a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_convert_value, 193, const_tuple_29f83c5f5a382e035d91034d70ae6e4a_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_af918c3873172a7fa44822f19a918569 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_tzname, 19, const_tuple_str_plain_self_str_plain_tzname_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f3dc2e0fcbbc878bdc7d4081f99a6dca = MAKE_CODEOBJ( module_filename_obj, const_str_plain_output_field, 73, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_60b80c641d789fd770783ec9d5f56fcc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_output_field, 234, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_50cbe8bca834bea42b46b814c605881d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_output_field, 251, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_expression, 61, const_tuple_7a63c5d0d52bbbdf0cca2174cfba7d98_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_7b3902fec2134e0e8ed95fe36ef26627 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_expression, 166, const_tuple_93757862e4a1dfea7b9fb188b4ee9c37_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_11_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_10___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_11_output_field(  );


static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_12_as_sql(  );


static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_13_output_field(  );


static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_14_as_sql(  );


static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_1_get_tzname(  );


static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_2___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_3_as_sql(  );


static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_4_resolve_expression( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_5_output_field(  );


static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_6___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_7_as_sql(  );


static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_8_resolve_expression( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_9_convert_value(  );


// The module function definitions.
static PyObject *impl_django$db$models$functions$datetime$$$function_1_get_tzname( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_tzname = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_af918c3873172a7fa44822f19a918569 = NULL;

    struct Nuitka_FrameObject *frame_af918c3873172a7fa44822f19a918569;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_None;
    assert( var_tzname == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_tzname = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_af918c3873172a7fa44822f19a918569, codeobj_af918c3873172a7fa44822f19a918569, module_django$db$models$functions$datetime, sizeof(void *)+sizeof(void *) );
    frame_af918c3873172a7fa44822f19a918569 = cache_frame_af918c3873172a7fa44822f19a918569;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_af918c3873172a7fa44822f19a918569 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_af918c3873172a7fa44822f19a918569 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 25;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_USE_TZ );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 25;
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
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tzinfo );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_timezone );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timezone );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_af918c3873172a7fa44822f19a918569->m_frame.f_lineno = 27;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_current_timezone_name );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_tzname;
        var_tzname = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_timezone );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timezone );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__get_timezone_name );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "oo";
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

        exception_lineno = 29;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_tzinfo );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 29;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_af918c3873172a7fa44822f19a918569->m_frame.f_lineno = 29;
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


        exception_lineno = 29;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_tzname;
        var_tzname = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    branch_end_2:;
    branch_no_1:;
    tmp_return_value = var_tzname;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_af918c3873172a7fa44822f19a918569 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_af918c3873172a7fa44822f19a918569 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_af918c3873172a7fa44822f19a918569 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_af918c3873172a7fa44822f19a918569, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_af918c3873172a7fa44822f19a918569->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_af918c3873172a7fa44822f19a918569, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_af918c3873172a7fa44822f19a918569,
        type_description_1,
        par_self,
        var_tzname
    );


    // Release cached frame.
    if ( frame_af918c3873172a7fa44822f19a918569 == cache_frame_af918c3873172a7fa44822f19a918569 )
    {
        Py_DECREF( frame_af918c3873172a7fa44822f19a918569 );
    }
    cache_frame_af918c3873172a7fa44822f19a918569 = NULL;

    assertFrameObject( frame_af918c3873172a7fa44822f19a918569 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_1_get_tzname );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_tzname );
    var_tzname = NULL;

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

    Py_XDECREF( var_tzname );
    var_tzname = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_1_get_tzname );
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


static PyObject *impl_django$db$models$functions$datetime$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_expression = python_pars[ 1 ];
    PyObject *par_lookup_name = python_pars[ 2 ];
    PyObject *par_tzinfo = python_pars[ 3 ];
    PyObject *par_extra = python_pars[ 4 ];
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_object_name_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d47d3937294a0f26bd72a97460119d0b = NULL;

    struct Nuitka_FrameObject *frame_d47d3937294a0f26bd72a97460119d0b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d47d3937294a0f26bd72a97460119d0b, codeobj_d47d3937294a0f26bd72a97460119d0b, module_django$db$models$functions$datetime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d47d3937294a0f26bd72a97460119d0b = cache_frame_d47d3937294a0f26bd72a97460119d0b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d47d3937294a0f26bd72a97460119d0b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d47d3937294a0f26bd72a97460119d0b ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lookup_name );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oooooN";
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
    tmp_assattr_name_1 = par_lookup_name;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lookup_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_lookup_name, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
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

        exception_lineno = 39;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_lookup_name );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_280af3656dbc5a217bfde8a76c7353c3;
    frame_d47d3937294a0f26bd72a97460119d0b->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 40;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooN";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_assattr_name_2 = par_tzinfo;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "oooooN";
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

        exception_lineno = 41;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_tzinfo, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Extract );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Extract );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Extract" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    if ( tmp_object_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_expression;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expression" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_extra;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d47d3937294a0f26bd72a97460119d0b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d47d3937294a0f26bd72a97460119d0b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d47d3937294a0f26bd72a97460119d0b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d47d3937294a0f26bd72a97460119d0b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d47d3937294a0f26bd72a97460119d0b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d47d3937294a0f26bd72a97460119d0b,
        type_description_1,
        par_self,
        par_expression,
        par_lookup_name,
        par_tzinfo,
        par_extra,
        NULL
    );


    // Release cached frame.
    if ( frame_d47d3937294a0f26bd72a97460119d0b == cache_frame_d47d3937294a0f26bd72a97460119d0b )
    {
        Py_DECREF( frame_d47d3937294a0f26bd72a97460119d0b );
    }
    cache_frame_d47d3937294a0f26bd72a97460119d0b = NULL;

    assertFrameObject( frame_d47d3937294a0f26bd72a97460119d0b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_lookup_name );
    par_lookup_name = NULL;

    Py_XDECREF( par_tzinfo );
    par_tzinfo = NULL;

    Py_XDECREF( par_extra );
    par_extra = NULL;

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

    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_lookup_name );
    par_lookup_name = NULL;

    Py_XDECREF( par_tzinfo );
    par_tzinfo = NULL;

    Py_XDECREF( par_extra );
    par_extra = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_2___init__ );
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


static PyObject *impl_django$db$models$functions$datetime$$$function_3_as_sql( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_compiler = python_pars[ 1 ];
    PyObject *par_connection = python_pars[ 2 ];
    PyObject *var_sql = NULL;
    PyObject *var_params = NULL;
    PyObject *var_lhs_output_field = NULL;
    PyObject *var_tzname = NULL;
    PyObject *var_tz_params = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_value_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e6041c8a7ecc28c3031b87bf6a7bcebe = NULL;

    struct Nuitka_FrameObject *frame_e6041c8a7ecc28c3031b87bf6a7bcebe;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e6041c8a7ecc28c3031b87bf6a7bcebe, codeobj_e6041c8a7ecc28c3031b87bf6a7bcebe, module_django$db$models$functions$datetime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e6041c8a7ecc28c3031b87bf6a7bcebe = cache_frame_e6041c8a7ecc28c3031b87bf6a7bcebe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e6041c8a7ecc28c3031b87bf6a7bcebe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e6041c8a7ecc28c3031b87bf6a7bcebe ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_compiler;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compile );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_lhs );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 45;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    frame_e6041c8a7ecc28c3031b87bf6a7bcebe->m_frame.f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


        type_description_1 = "oooooooo";
        exception_lineno = 45;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "oooooooo";
        exception_lineno = 45;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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

                type_description_1 = "oooooooo";
                exception_lineno = 45;
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

        type_description_1 = "oooooooo";
        exception_lineno = 45;
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

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_sql == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_sql = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_params == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_params = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_lhs );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_output_field );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_lhs_output_field == NULL );
    var_lhs_output_field = tmp_assign_source_6;

    tmp_isinstance_inst_1 = var_lhs_output_field;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateTimeField );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateTimeField );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateTimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooooooo";
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
    tmp_called_instance_1 = par_self;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_e6041c8a7ecc28c3031b87bf6a7bcebe->m_frame.f_lineno = 48;
    tmp_assign_source_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_tzname );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tzname == NULL );
    var_tzname = tmp_assign_source_7;

    // Tried code:
    tmp_source_name_6 = par_connection;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ops );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_datetime_extract_sql );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_lookup_name );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_3 = var_sql;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sql" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_4 = var_tzname;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    frame_e6041c8a7ecc28c3031b87bf6a7bcebe->m_frame.f_lineno = 49;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
    if ( tmp_assign_source_9 == NULL )
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


        type_description_1 = "oooooooo";
        exception_lineno = 49;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


        type_description_1 = "oooooooo";
        exception_lineno = 49;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;

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

                type_description_1 = "oooooooo";
                exception_lineno = 49;
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

        type_description_1 = "oooooooo";
        exception_lineno = 49;
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

    tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_sql;
        var_sql = tmp_assign_source_11;
        Py_INCREF( var_sql );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_12 );
    assert( var_tz_params == NULL );
    Py_INCREF( tmp_assign_source_12 );
    var_tz_params = tmp_assign_source_12;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_source_name_8 = var_params;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_extend );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_tz_params;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tz_params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_e6041c8a7ecc28c3031b87bf6a7bcebe->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = var_lhs_output_field;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateField );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateField );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooooooo";
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
    tmp_source_name_10 = par_connection;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ops );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_date_extract_sql );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_lookup_name );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 52;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = var_sql;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sql" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_e6041c8a7ecc28c3031b87bf6a7bcebe->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_sql;
        var_sql = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_isinstance_inst_3 = var_lhs_output_field;

    CHECK_OBJECT( tmp_isinstance_inst_3 );
    tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TimeField );

    if (unlikely( tmp_isinstance_cls_3 == NULL ))
    {
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeField );
    }

    if ( tmp_isinstance_cls_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oooooooo";
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
    tmp_source_name_13 = par_connection;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_ops );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_time_extract_sql );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_lookup_name );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 54;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = var_sql;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sql" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_e6041c8a7ecc28c3031b87bf6a7bcebe->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_sql;
        var_sql = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_raise_type_1 = PyExc_AssertionError;
    tmp_raise_value_1 = const_tuple_str_digest_6a82bec15f2ad69d5474e3d54d4e1b56_tuple;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_value = tmp_raise_value_1;
    Py_INCREF( tmp_raise_value_1 );
    exception_lineno = 58;
    RAISE_EXCEPTION_WITH_VALUE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_sql;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sql" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_params;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6041c8a7ecc28c3031b87bf6a7bcebe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6041c8a7ecc28c3031b87bf6a7bcebe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6041c8a7ecc28c3031b87bf6a7bcebe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e6041c8a7ecc28c3031b87bf6a7bcebe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e6041c8a7ecc28c3031b87bf6a7bcebe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e6041c8a7ecc28c3031b87bf6a7bcebe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e6041c8a7ecc28c3031b87bf6a7bcebe,
        type_description_1,
        par_self,
        par_compiler,
        par_connection,
        var_sql,
        var_params,
        var_lhs_output_field,
        var_tzname,
        var_tz_params
    );


    // Release cached frame.
    if ( frame_e6041c8a7ecc28c3031b87bf6a7bcebe == cache_frame_e6041c8a7ecc28c3031b87bf6a7bcebe )
    {
        Py_DECREF( frame_e6041c8a7ecc28c3031b87bf6a7bcebe );
    }
    cache_frame_e6041c8a7ecc28c3031b87bf6a7bcebe = NULL;

    assertFrameObject( frame_e6041c8a7ecc28c3031b87bf6a7bcebe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_3_as_sql );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_compiler );
    par_compiler = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( var_sql );
    var_sql = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

    Py_XDECREF( var_lhs_output_field );
    var_lhs_output_field = NULL;

    Py_XDECREF( var_tzname );
    var_tzname = NULL;

    Py_XDECREF( var_tz_params );
    var_tz_params = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_compiler );
    par_compiler = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( var_sql );
    var_sql = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

    Py_XDECREF( var_lhs_output_field );
    var_lhs_output_field = NULL;

    Py_XDECREF( var_tzname );
    var_tzname = NULL;

    Py_XDECREF( var_tz_params );
    var_tz_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_3_as_sql );
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


static PyObject *impl_django$db$models$functions$datetime$$$function_4_resolve_expression( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_query = python_pars[ 1 ];
    PyObject *par_allow_joins = python_pars[ 2 ];
    PyObject *par_reuse = python_pars[ 3 ];
    PyObject *par_summarize = python_pars[ 4 ];
    PyObject *par_for_save = python_pars[ 5 ];
    PyObject *var_copy = NULL;
    PyObject *var_field = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_object_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_name_1;
    static struct Nuitka_FrameObject *cache_frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f = NULL;

    struct Nuitka_FrameObject *frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f, codeobj_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f, module_django$db$models$functions$datetime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f = cache_frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Extract );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Extract );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Extract" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_resolve_expression );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_query;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "query" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_allow_joins;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_joins" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_reuse;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reuse" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_summarize;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "summarize" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_for_save;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "for_save" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_copy == NULL );
    var_copy = tmp_assign_source_1;

    tmp_source_name_3 = var_copy;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_lhs );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_output_field );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_field == NULL );
    var_field = tmp_assign_source_2;

    tmp_isinstance_inst_1 = var_field;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateField );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateField );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateTimeField );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateTimeField );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateTimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TimeField );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeField );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 2, tmp_tuple_element_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_3f258b70368a83a768bfbddcb8cce048;
    frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 65;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_type_arg_1 = var_field;

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateField );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateField );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 67;
        type_description_1 = "ooooooooN";
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
    tmp_source_name_4 = var_copy;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "copy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_lookup_name );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_tuple_str_plain_hour_str_plain_minute_str_plain_second_tuple;
    tmp_and_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooooooooN";
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

        exception_lineno = 67;
        type_description_1 = "ooooooooN";
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
    tmp_left_name_1 = const_str_digest_518407ba9c7955df2a3347a698e97b00;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_source_name_5 = var_copy;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "copy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_lookup_name );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 69;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
    tmp_source_name_6 = var_field;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_name );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 69;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_2 );
    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 68;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_return_value = var_copy;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "copy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f,
        type_description_1,
        par_self,
        par_query,
        par_allow_joins,
        par_reuse,
        par_summarize,
        par_for_save,
        var_copy,
        var_field,
        NULL
    );


    // Release cached frame.
    if ( frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f == cache_frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f )
    {
        Py_DECREF( frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f );
    }
    cache_frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f = NULL;

    assertFrameObject( frame_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_4_resolve_expression );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_query );
    par_query = NULL;

    Py_XDECREF( par_allow_joins );
    par_allow_joins = NULL;

    Py_XDECREF( par_reuse );
    par_reuse = NULL;

    Py_XDECREF( par_summarize );
    par_summarize = NULL;

    Py_XDECREF( par_for_save );
    par_for_save = NULL;

    Py_XDECREF( var_copy );
    var_copy = NULL;

    Py_XDECREF( var_field );
    var_field = NULL;

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

    Py_XDECREF( par_query );
    par_query = NULL;

    Py_XDECREF( par_allow_joins );
    par_allow_joins = NULL;

    Py_XDECREF( par_reuse );
    par_reuse = NULL;

    Py_XDECREF( par_summarize );
    par_summarize = NULL;

    Py_XDECREF( par_for_save );
    par_for_save = NULL;

    Py_XDECREF( var_copy );
    var_copy = NULL;

    Py_XDECREF( var_field );
    var_field = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_4_resolve_expression );
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


static PyObject *impl_django$db$models$functions$datetime$$$function_5_output_field( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_f3dc2e0fcbbc878bdc7d4081f99a6dca = NULL;

    struct Nuitka_FrameObject *frame_f3dc2e0fcbbc878bdc7d4081f99a6dca;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f3dc2e0fcbbc878bdc7d4081f99a6dca, codeobj_f3dc2e0fcbbc878bdc7d4081f99a6dca, module_django$db$models$functions$datetime, sizeof(void *) );
    frame_f3dc2e0fcbbc878bdc7d4081f99a6dca = cache_frame_f3dc2e0fcbbc878bdc7d4081f99a6dca;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f3dc2e0fcbbc878bdc7d4081f99a6dca );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f3dc2e0fcbbc878bdc7d4081f99a6dca ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_IntegerField );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IntegerField );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IntegerField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_f3dc2e0fcbbc878bdc7d4081f99a6dca->m_frame.f_lineno = 75;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f3dc2e0fcbbc878bdc7d4081f99a6dca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f3dc2e0fcbbc878bdc7d4081f99a6dca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f3dc2e0fcbbc878bdc7d4081f99a6dca );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f3dc2e0fcbbc878bdc7d4081f99a6dca, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f3dc2e0fcbbc878bdc7d4081f99a6dca->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f3dc2e0fcbbc878bdc7d4081f99a6dca, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f3dc2e0fcbbc878bdc7d4081f99a6dca,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_f3dc2e0fcbbc878bdc7d4081f99a6dca == cache_frame_f3dc2e0fcbbc878bdc7d4081f99a6dca )
    {
        Py_DECREF( frame_f3dc2e0fcbbc878bdc7d4081f99a6dca );
    }
    cache_frame_f3dc2e0fcbbc878bdc7d4081f99a6dca = NULL;

    assertFrameObject( frame_f3dc2e0fcbbc878bdc7d4081f99a6dca );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_5_output_field );
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
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_5_output_field );
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


static PyObject *impl_django$db$models$functions$datetime$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_expression = python_pars[ 1 ];
    PyObject *par_output_field = python_pars[ 2 ];
    PyObject *par_tzinfo = python_pars[ 3 ];
    PyObject *par_extra = python_pars[ 4 ];
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_object_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_fad7aa21087cf6b53f553f1f1edbc03c = NULL;

    struct Nuitka_FrameObject *frame_fad7aa21087cf6b53f553f1f1edbc03c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fad7aa21087cf6b53f553f1f1edbc03c, codeobj_fad7aa21087cf6b53f553f1f1edbc03c, module_django$db$models$functions$datetime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fad7aa21087cf6b53f553f1f1edbc03c = cache_frame_fad7aa21087cf6b53f553f1f1edbc03c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fad7aa21087cf6b53f553f1f1edbc03c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fad7aa21087cf6b53f553f1f1edbc03c ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_tzinfo;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_tzinfo, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncBase );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TruncBase );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TruncBase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    if ( tmp_object_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_expression;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expression" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_output_field;
    tmp_dict_value_1 = par_output_field;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "output_field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_extra;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_unused = impl___internal__$$$function_11_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fad7aa21087cf6b53f553f1f1edbc03c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fad7aa21087cf6b53f553f1f1edbc03c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fad7aa21087cf6b53f553f1f1edbc03c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fad7aa21087cf6b53f553f1f1edbc03c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fad7aa21087cf6b53f553f1f1edbc03c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fad7aa21087cf6b53f553f1f1edbc03c,
        type_description_1,
        par_self,
        par_expression,
        par_output_field,
        par_tzinfo,
        par_extra,
        NULL
    );


    // Release cached frame.
    if ( frame_fad7aa21087cf6b53f553f1f1edbc03c == cache_frame_fad7aa21087cf6b53f553f1f1edbc03c )
    {
        Py_DECREF( frame_fad7aa21087cf6b53f553f1f1edbc03c );
    }
    cache_frame_fad7aa21087cf6b53f553f1f1edbc03c = NULL;

    assertFrameObject( frame_fad7aa21087cf6b53f553f1f1edbc03c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_output_field );
    par_output_field = NULL;

    Py_XDECREF( par_tzinfo );
    par_tzinfo = NULL;

    Py_XDECREF( par_extra );
    par_extra = NULL;

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

    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_output_field );
    par_output_field = NULL;

    Py_XDECREF( par_tzinfo );
    par_tzinfo = NULL;

    Py_XDECREF( par_extra );
    par_extra = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_6___init__ );
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


static PyObject *impl_django$db$models$functions$datetime$$$function_7_as_sql( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_compiler = python_pars[ 1 ];
    PyObject *par_connection = python_pars[ 2 ];
    PyObject *var_inner_sql = NULL;
    PyObject *var_inner_params = NULL;
    PyObject *var_tzname = NULL;
    PyObject *var_sql = NULL;
    PyObject *var_params = NULL;
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
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    static struct Nuitka_FrameObject *cache_frame_9c1a9b316a15765ee4ada7c2e9cd3216 = NULL;

    struct Nuitka_FrameObject *frame_9c1a9b316a15765ee4ada7c2e9cd3216;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9c1a9b316a15765ee4ada7c2e9cd3216, codeobj_9c1a9b316a15765ee4ada7c2e9cd3216, module_django$db$models$functions$datetime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9c1a9b316a15765ee4ada7c2e9cd3216 = cache_frame_9c1a9b316a15765ee4ada7c2e9cd3216;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9c1a9b316a15765ee4ada7c2e9cd3216 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9c1a9b316a15765ee4ada7c2e9cd3216 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_compiler;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compile );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_lhs );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 150;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    frame_9c1a9b316a15765ee4ada7c2e9cd3216->m_frame.f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


        type_description_1 = "oooooooo";
        exception_lineno = 150;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "oooooooo";
        exception_lineno = 150;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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

                type_description_1 = "oooooooo";
                exception_lineno = 150;
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

        type_description_1 = "oooooooo";
        exception_lineno = 150;
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

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_inner_sql == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_inner_sql = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_inner_params == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_inner_params = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_instance_1 = var_inner_sql;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "inner_sql" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_9c1a9b316a15765ee4ada7c2e9cd3216->m_frame.f_lineno = 152;
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_b77e62d72ca3acd883e97b026660ffd9_tuple, 0 ) );

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_inner_sql;
        var_inner_sql = tmp_assign_source_6;
        Py_XDECREF( old );
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

        exception_lineno = 153;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_output_field );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateTimeField );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateTimeField );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateTimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooooooo";
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
    tmp_called_instance_2 = par_self;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_9c1a9b316a15765ee4ada7c2e9cd3216->m_frame.f_lineno = 154;
    tmp_assign_source_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_tzname );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tzname == NULL );
    var_tzname = tmp_assign_source_7;

    // Tried code:
    tmp_source_name_5 = par_connection;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ops );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_datetime_trunc_sql );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_kind );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_3 = var_inner_sql;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "inner_sql" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_4 = var_tzname;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    frame_9c1a9b316a15765ee4ada7c2e9cd3216->m_frame.f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
    if ( tmp_assign_source_9 == NULL )
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


        type_description_1 = "oooooooo";
        exception_lineno = 155;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


        type_description_1 = "oooooooo";
        exception_lineno = 155;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;

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

                type_description_1 = "oooooooo";
                exception_lineno = 155;
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

        type_description_1 = "oooooooo";
        exception_lineno = 155;
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

    tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_11 );
    assert( var_sql == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_sql = tmp_assign_source_11;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_12 );
    assert( var_params == NULL );
    Py_INCREF( tmp_assign_source_12 );
    var_params = tmp_assign_source_12;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_output_field );
    if ( tmp_isinstance_inst_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateField );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateField );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_inst_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooooooo";
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
    tmp_source_name_9 = par_connection;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ops );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_date_trunc_sql );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
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

        exception_lineno = 157;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_kind );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 157;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_inner_sql;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "inner_sql" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_9c1a9b316a15765ee4ada7c2e9cd3216->m_frame.f_lineno = 157;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_sql == NULL );
    var_sql = tmp_assign_source_13;

    tmp_assign_source_14 = PyList_New( 0 );
    assert( var_params == NULL );
    var_params = tmp_assign_source_14;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_inst_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_output_field );
    if ( tmp_isinstance_inst_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TimeField );

    if (unlikely( tmp_isinstance_cls_3 == NULL ))
    {
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeField );
    }

    if ( tmp_isinstance_cls_3 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    Py_DECREF( tmp_isinstance_inst_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oooooooo";
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
    tmp_source_name_13 = par_connection;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_ops );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_time_trunc_sql );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_kind );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 160;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = var_inner_sql;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "inner_sql" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_9c1a9b316a15765ee4ada7c2e9cd3216->m_frame.f_lineno = 160;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_sql == NULL );
    var_sql = tmp_assign_source_15;

    tmp_assign_source_16 = PyList_New( 0 );
    assert( var_params == NULL );
    var_params = tmp_assign_source_16;

    goto branch_end_3;
    branch_no_3:;
    tmp_make_exception_arg_1 = const_str_digest_be602269537522173639ef95349a0d6a;
    frame_9c1a9b316a15765ee4ada7c2e9cd3216->m_frame.f_lineno = 163;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 163;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_sql;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sql" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_left_name_1 = var_inner_params;

    if ( tmp_left_name_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "inner_params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = var_params;

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 164;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c1a9b316a15765ee4ada7c2e9cd3216 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c1a9b316a15765ee4ada7c2e9cd3216 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c1a9b316a15765ee4ada7c2e9cd3216 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9c1a9b316a15765ee4ada7c2e9cd3216, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9c1a9b316a15765ee4ada7c2e9cd3216->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9c1a9b316a15765ee4ada7c2e9cd3216, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9c1a9b316a15765ee4ada7c2e9cd3216,
        type_description_1,
        par_self,
        par_compiler,
        par_connection,
        var_inner_sql,
        var_inner_params,
        var_tzname,
        var_sql,
        var_params
    );


    // Release cached frame.
    if ( frame_9c1a9b316a15765ee4ada7c2e9cd3216 == cache_frame_9c1a9b316a15765ee4ada7c2e9cd3216 )
    {
        Py_DECREF( frame_9c1a9b316a15765ee4ada7c2e9cd3216 );
    }
    cache_frame_9c1a9b316a15765ee4ada7c2e9cd3216 = NULL;

    assertFrameObject( frame_9c1a9b316a15765ee4ada7c2e9cd3216 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_7_as_sql );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_compiler );
    par_compiler = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( var_inner_sql );
    var_inner_sql = NULL;

    Py_XDECREF( var_inner_params );
    var_inner_params = NULL;

    Py_XDECREF( var_tzname );
    var_tzname = NULL;

    Py_XDECREF( var_sql );
    var_sql = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_compiler );
    par_compiler = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( var_inner_sql );
    var_inner_sql = NULL;

    Py_XDECREF( var_inner_params );
    var_inner_params = NULL;

    Py_XDECREF( var_tzname );
    var_tzname = NULL;

    Py_XDECREF( var_sql );
    var_sql = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_7_as_sql );
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


static PyObject *impl_django$db$models$functions$datetime$$$function_8_resolve_expression( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_query = python_pars[ 1 ];
    PyObject *par_allow_joins = python_pars[ 2 ];
    PyObject *par_reuse = python_pars[ 3 ];
    PyObject *par_summarize = python_pars[ 4 ];
    PyObject *par_for_save = python_pars[ 5 ];
    PyObject *var_copy = NULL;
    PyObject *var_field = NULL;
    PyObject *var_output_field = NULL;
    PyObject *var_explicit_output_field = NULL;
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
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
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
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_cls_4;
    PyObject *tmp_isinstance_cls_5;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_isinstance_inst_4;
    PyObject *tmp_isinstance_inst_5;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_object_name_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_value_1;
    int tmp_res;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_name_1;
    static struct Nuitka_FrameObject *cache_frame_7b3902fec2134e0e8ed95fe36ef26627 = NULL;

    struct Nuitka_FrameObject *frame_7b3902fec2134e0e8ed95fe36ef26627;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7b3902fec2134e0e8ed95fe36ef26627, codeobj_7b3902fec2134e0e8ed95fe36ef26627, module_django$db$models$functions$datetime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7b3902fec2134e0e8ed95fe36ef26627 = cache_frame_7b3902fec2134e0e8ed95fe36ef26627;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7b3902fec2134e0e8ed95fe36ef26627 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7b3902fec2134e0e8ed95fe36ef26627 ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncBase );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TruncBase );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TruncBase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_resolve_expression );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_query;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "query" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_allow_joins;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_joins" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_reuse;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reuse" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_summarize;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "summarize" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_for_save;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "for_save" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    frame_7b3902fec2134e0e8ed95fe36ef26627->m_frame.f_lineno = 167;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_copy == NULL );
    var_copy = tmp_assign_source_1;

    tmp_source_name_3 = var_copy;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_lhs );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_output_field );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_field == NULL );
    var_field = tmp_assign_source_2;

    tmp_isinstance_inst_1 = var_field;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateField );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateField );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TimeField );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeField );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = PyExc_AssertionError;
    tmp_raise_value_1 = PyTuple_New( 1 );
    tmp_left_name_1 = const_str_digest_2c40b21c66b4ba53c2f6b498d10b08e0;
    tmp_source_name_4 = var_field;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_raise_value_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_name );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_raise_value_1 );

        exception_lineno = 171;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_raise_value_1 );

        exception_lineno = 171;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_raise_value_1, 0, tmp_tuple_element_2 );
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_value = tmp_raise_value_1;
    exception_lineno = 170;
    RAISE_EXCEPTION_WITH_VALUE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_5 = var_copy;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "copy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_output_field );
    if ( tmp_isinstance_inst_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_2 = PyTuple_New( 3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateField );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateField );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_2 );
        Py_DECREF( tmp_isinstance_cls_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateTimeField );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateTimeField );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_2 );
        Py_DECREF( tmp_isinstance_cls_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateTimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_2, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TimeField );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeField );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_2 );
        Py_DECREF( tmp_isinstance_cls_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_2, 2, tmp_tuple_element_3 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_inst_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_cc9f82fd7bef05fbbb2cdd1b5aea8164;
    frame_7b3902fec2134e0e8ed95fe36ef26627->m_frame.f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 176;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_6 = var_copy;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "copy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_output_field );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_output_field == NULL );
    var_output_field = tmp_assign_source_3;

    tmp_source_name_7 = var_field;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_7 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = var_copy;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "copy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_output_field );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 180;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_8 );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 180;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_explicit_output_field == NULL );
    var_explicit_output_field = tmp_assign_source_4;

    tmp_type_arg_1 = var_field;

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateField );

    if (unlikely( tmp_compexpr_right_2 == NULL ))
    {
        tmp_compexpr_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateField );
    }

    if ( tmp_compexpr_right_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 182;
        type_description_1 = "ooooooooooN";
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
    tmp_isinstance_inst_3 = var_output_field;

    if ( tmp_isinstance_inst_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "output_field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateTimeField );

    if (unlikely( tmp_isinstance_cls_3 == NULL ))
    {
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateTimeField );
    }

    if ( tmp_isinstance_cls_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateTimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ooooooooooN";
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
    tmp_source_name_10 = var_copy;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "copy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_kind );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = const_tuple_efac42e934e7fadf2eb945773132bf1f_tuple;
    tmp_or_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_and_right_value_1 = tmp_or_left_value_1;
    or_end_1:;
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

        exception_lineno = 182;
        type_description_1 = "ooooooooooN";
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
    tmp_left_name_2 = const_str_digest_8ee25a194f448be847d798f26f52556a;
    tmp_right_name_2 = PyTuple_New( 2 );
    tmp_source_name_11 = var_field;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_name );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 184;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_4 );
    tmp_cond_value_2 = var_explicit_output_field;

    if ( tmp_cond_value_2 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "explicit_output_field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 184;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_source_name_13 = var_output_field;

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "output_field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_13 );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 184;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 184;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_tuple_element_4 = const_str_plain_DateTimeField;
    Py_INCREF( tmp_tuple_element_4 );
    condexpr_end_1:;
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_4 );
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    frame_7b3902fec2134e0e8ed95fe36ef26627->m_frame.f_lineno = 183;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_2 );
    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 183;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_isinstance_inst_4 = var_field;

    if ( tmp_isinstance_inst_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TimeField );

    if (unlikely( tmp_isinstance_cls_4 == NULL ))
    {
        tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeField );
    }

    if ( tmp_isinstance_cls_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooooooooooN";
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
    tmp_isinstance_inst_5 = var_output_field;

    if ( tmp_isinstance_inst_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "output_field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_5 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateTimeField );

    if (unlikely( tmp_isinstance_cls_5 == NULL ))
    {
        tmp_isinstance_cls_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateTimeField );
    }

    if ( tmp_isinstance_cls_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateTimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooooooooooN";
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
    tmp_source_name_14 = var_copy;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "copy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_kind );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = const_tuple_str_plain_year_str_plain_month_str_plain_day_str_plain_date_tuple;
    tmp_or_right_value_2 = SEQUENCE_CONTAINS( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_and_right_value_2 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_value_3 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_3 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_3 = const_str_digest_d7034ea608d9ef4b33d38144d6303c6f;
    tmp_right_name_3 = PyTuple_New( 2 );
    tmp_source_name_15 = var_field;

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_name );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 189;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_5 );
    tmp_cond_value_4 = var_explicit_output_field;

    if ( tmp_cond_value_4 == NULL )
    {
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "explicit_output_field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 189;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_source_name_17 = var_output_field;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "output_field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_16 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_17 );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 189;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 189;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_tuple_element_5 = const_str_plain_DateTimeField;
    Py_INCREF( tmp_tuple_element_5 );
    condexpr_end_2:;
    PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_5 );
    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }
    frame_7b3902fec2134e0e8ed95fe36ef26627->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_3 );
    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 188;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
    branch_no_4:;
    branch_end_3:;
    tmp_return_value = var_copy;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "copy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "ooooooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b3902fec2134e0e8ed95fe36ef26627 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b3902fec2134e0e8ed95fe36ef26627 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b3902fec2134e0e8ed95fe36ef26627 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7b3902fec2134e0e8ed95fe36ef26627, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7b3902fec2134e0e8ed95fe36ef26627->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7b3902fec2134e0e8ed95fe36ef26627, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7b3902fec2134e0e8ed95fe36ef26627,
        type_description_1,
        par_self,
        par_query,
        par_allow_joins,
        par_reuse,
        par_summarize,
        par_for_save,
        var_copy,
        var_field,
        var_output_field,
        var_explicit_output_field,
        NULL
    );


    // Release cached frame.
    if ( frame_7b3902fec2134e0e8ed95fe36ef26627 == cache_frame_7b3902fec2134e0e8ed95fe36ef26627 )
    {
        Py_DECREF( frame_7b3902fec2134e0e8ed95fe36ef26627 );
    }
    cache_frame_7b3902fec2134e0e8ed95fe36ef26627 = NULL;

    assertFrameObject( frame_7b3902fec2134e0e8ed95fe36ef26627 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_8_resolve_expression );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_query );
    par_query = NULL;

    Py_XDECREF( par_allow_joins );
    par_allow_joins = NULL;

    Py_XDECREF( par_reuse );
    par_reuse = NULL;

    Py_XDECREF( par_summarize );
    par_summarize = NULL;

    Py_XDECREF( par_for_save );
    par_for_save = NULL;

    Py_XDECREF( var_copy );
    var_copy = NULL;

    Py_XDECREF( var_field );
    var_field = NULL;

    Py_XDECREF( var_output_field );
    var_output_field = NULL;

    Py_XDECREF( var_explicit_output_field );
    var_explicit_output_field = NULL;

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

    Py_XDECREF( par_query );
    par_query = NULL;

    Py_XDECREF( par_allow_joins );
    par_allow_joins = NULL;

    Py_XDECREF( par_reuse );
    par_reuse = NULL;

    Py_XDECREF( par_summarize );
    par_summarize = NULL;

    Py_XDECREF( par_for_save );
    par_for_save = NULL;

    Py_XDECREF( var_copy );
    var_copy = NULL;

    Py_XDECREF( var_field );
    var_field = NULL;

    Py_XDECREF( var_output_field );
    var_output_field = NULL;

    Py_XDECREF( var_explicit_output_field );
    var_explicit_output_field = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_8_resolve_expression );
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


static PyObject *impl_django$db$models$functions$datetime$$$function_9_convert_value( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *par_expression = python_pars[ 2 ];
    PyObject *par_connection = python_pars[ 3 ];
    PyObject *par_context = python_pars[ 4 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_cls_4;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_isinstance_inst_4;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_make_exception_arg_1;
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
    static struct Nuitka_FrameObject *cache_frame_b6f049e12a86338200f220723962b91a = NULL;

    struct Nuitka_FrameObject *frame_b6f049e12a86338200f220723962b91a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b6f049e12a86338200f220723962b91a, codeobj_b6f049e12a86338200f220723962b91a, module_django$db$models$functions$datetime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b6f049e12a86338200f220723962b91a = cache_frame_b6f049e12a86338200f220723962b91a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b6f049e12a86338200f220723962b91a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b6f049e12a86338200f220723962b91a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_output_field );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateTimeField );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateTimeField );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateTimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_1 = "ooooo";
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_USE_TZ );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 195;
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
    tmp_compare_left_1 = par_value;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_1 = const_str_digest_3a95f6b970b715d198c89a9e64da2f6f;
    frame_b6f049e12a86338200f220723962b91a->m_frame.f_lineno = 197;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 197;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_3 = par_value;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_replace );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_19923244156fa96a7d6f1da74d173385 );
    frame_b6f049e12a86338200f220723962b91a->m_frame.f_lineno = 201;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_value;
        par_value = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_timezone );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timezone );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_make_aware );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_value;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tzinfo );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 202;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_b6f049e12a86338200f220723962b91a->m_frame.f_lineno = 202;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_value;
        par_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_value;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description_1 = "ooooo";
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
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_inst_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_output_field );
    if ( tmp_isinstance_inst_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateField );

    if (unlikely( tmp_isinstance_cls_3 == NULL ))
    {
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateField );
    }

    if ( tmp_isinstance_cls_3 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    Py_DECREF( tmp_isinstance_inst_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_instance_1 = par_value;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_b6f049e12a86338200f220723962b91a->m_frame.f_lineno = 205;
    tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_date );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_value;
        par_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_inst_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_output_field );
    if ( tmp_isinstance_inst_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TimeField );

    if (unlikely( tmp_isinstance_cls_4 == NULL ))
    {
        tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeField );
    }

    if ( tmp_isinstance_cls_4 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    Py_DECREF( tmp_isinstance_inst_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_instance_2 = par_value;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 207;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_b6f049e12a86338200f220723962b91a->m_frame.f_lineno = 207;
    tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_time );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_value;
        par_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    branch_no_6:;
    branch_end_5:;
    branch_no_4:;
    branch_end_1:;
    tmp_return_value = par_value;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6f049e12a86338200f220723962b91a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6f049e12a86338200f220723962b91a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6f049e12a86338200f220723962b91a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b6f049e12a86338200f220723962b91a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b6f049e12a86338200f220723962b91a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b6f049e12a86338200f220723962b91a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b6f049e12a86338200f220723962b91a,
        type_description_1,
        par_self,
        par_value,
        par_expression,
        par_connection,
        par_context
    );


    // Release cached frame.
    if ( frame_b6f049e12a86338200f220723962b91a == cache_frame_b6f049e12a86338200f220723962b91a )
    {
        Py_DECREF( frame_b6f049e12a86338200f220723962b91a );
    }
    cache_frame_b6f049e12a86338200f220723962b91a = NULL;

    assertFrameObject( frame_b6f049e12a86338200f220723962b91a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_9_convert_value );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( par_context );
    par_context = NULL;

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

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( par_context );
    par_context = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_9_convert_value );
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


static PyObject *impl_django$db$models$functions$datetime$$$function_10___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_expression = python_pars[ 1 ];
    PyObject *par_kind = python_pars[ 2 ];
    PyObject *par_output_field = python_pars[ 3 ];
    PyObject *par_tzinfo = python_pars[ 4 ];
    PyObject *par_extra = python_pars[ 5 ];
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_object_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a22f64ef4f1a99a8824f51204cce6981 = NULL;

    struct Nuitka_FrameObject *frame_a22f64ef4f1a99a8824f51204cce6981;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a22f64ef4f1a99a8824f51204cce6981, codeobj_a22f64ef4f1a99a8824f51204cce6981, module_django$db$models$functions$datetime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a22f64ef4f1a99a8824f51204cce6981 = cache_frame_a22f64ef4f1a99a8824f51204cce6981;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a22f64ef4f1a99a8824f51204cce6981 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a22f64ef4f1a99a8824f51204cce6981 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_kind;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_kind, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Trunc );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Trunc );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Trunc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    if ( tmp_object_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_expression;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expression" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_output_field;
    tmp_dict_value_1 = par_output_field;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "output_field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_tzinfo;
    tmp_dict_value_2 = par_tzinfo;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_extra;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_unused = impl___internal__$$$function_11_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a22f64ef4f1a99a8824f51204cce6981 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a22f64ef4f1a99a8824f51204cce6981 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a22f64ef4f1a99a8824f51204cce6981, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a22f64ef4f1a99a8824f51204cce6981->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a22f64ef4f1a99a8824f51204cce6981, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a22f64ef4f1a99a8824f51204cce6981,
        type_description_1,
        par_self,
        par_expression,
        par_kind,
        par_output_field,
        par_tzinfo,
        par_extra,
        NULL
    );


    // Release cached frame.
    if ( frame_a22f64ef4f1a99a8824f51204cce6981 == cache_frame_a22f64ef4f1a99a8824f51204cce6981 )
    {
        Py_DECREF( frame_a22f64ef4f1a99a8824f51204cce6981 );
    }
    cache_frame_a22f64ef4f1a99a8824f51204cce6981 = NULL;

    assertFrameObject( frame_a22f64ef4f1a99a8824f51204cce6981 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_10___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_kind );
    par_kind = NULL;

    Py_XDECREF( par_output_field );
    par_output_field = NULL;

    Py_XDECREF( par_tzinfo );
    par_tzinfo = NULL;

    Py_XDECREF( par_extra );
    par_extra = NULL;

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

    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_kind );
    par_kind = NULL;

    Py_XDECREF( par_output_field );
    par_output_field = NULL;

    Py_XDECREF( par_tzinfo );
    par_tzinfo = NULL;

    Py_XDECREF( par_extra );
    par_extra = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_10___init__ );
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


static PyObject *impl_django$db$models$functions$datetime$$$function_11_output_field( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_60b80c641d789fd770783ec9d5f56fcc = NULL;

    struct Nuitka_FrameObject *frame_60b80c641d789fd770783ec9d5f56fcc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_60b80c641d789fd770783ec9d5f56fcc, codeobj_60b80c641d789fd770783ec9d5f56fcc, module_django$db$models$functions$datetime, sizeof(void *) );
    frame_60b80c641d789fd770783ec9d5f56fcc = cache_frame_60b80c641d789fd770783ec9d5f56fcc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_60b80c641d789fd770783ec9d5f56fcc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_60b80c641d789fd770783ec9d5f56fcc ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateField );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateField );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_60b80c641d789fd770783ec9d5f56fcc->m_frame.f_lineno = 236;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60b80c641d789fd770783ec9d5f56fcc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_60b80c641d789fd770783ec9d5f56fcc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60b80c641d789fd770783ec9d5f56fcc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_60b80c641d789fd770783ec9d5f56fcc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_60b80c641d789fd770783ec9d5f56fcc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_60b80c641d789fd770783ec9d5f56fcc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_60b80c641d789fd770783ec9d5f56fcc,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_60b80c641d789fd770783ec9d5f56fcc == cache_frame_60b80c641d789fd770783ec9d5f56fcc )
    {
        Py_DECREF( frame_60b80c641d789fd770783ec9d5f56fcc );
    }
    cache_frame_60b80c641d789fd770783ec9d5f56fcc = NULL;

    assertFrameObject( frame_60b80c641d789fd770783ec9d5f56fcc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_11_output_field );
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
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_11_output_field );
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


static PyObject *impl_django$db$models$functions$datetime$$$function_12_as_sql( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_compiler = python_pars[ 1 ];
    PyObject *par_connection = python_pars[ 2 ];
    PyObject *var_lhs = NULL;
    PyObject *var_lhs_params = NULL;
    PyObject *var_tzname = NULL;
    PyObject *var_sql = NULL;
    PyObject *var_tz_params = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_df9b2a5fe14af2ac9b65bc06281898c4 = NULL;

    struct Nuitka_FrameObject *frame_df9b2a5fe14af2ac9b65bc06281898c4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_df9b2a5fe14af2ac9b65bc06281898c4, codeobj_df9b2a5fe14af2ac9b65bc06281898c4, module_django$db$models$functions$datetime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_df9b2a5fe14af2ac9b65bc06281898c4 = cache_frame_df9b2a5fe14af2ac9b65bc06281898c4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_df9b2a5fe14af2ac9b65bc06281898c4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_df9b2a5fe14af2ac9b65bc06281898c4 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_compiler;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compile );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 240;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_lhs );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 240;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    frame_df9b2a5fe14af2ac9b65bc06281898c4->m_frame.f_lineno = 240;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


        type_description_1 = "oooooooo";
        exception_lineno = 240;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "oooooooo";
        exception_lineno = 240;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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

                type_description_1 = "oooooooo";
                exception_lineno = 240;
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

        type_description_1 = "oooooooo";
        exception_lineno = 240;
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

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_lhs == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_lhs = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_lhs_params == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_lhs_params = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_USE_TZ );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 241;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_timezone );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timezone );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_df9b2a5fe14af2ac9b65bc06281898c4->m_frame.f_lineno = 241;
    tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_current_timezone_name );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_6 = Py_None;
    Py_INCREF( tmp_assign_source_6 );
    condexpr_end_1:;
    assert( var_tzname == NULL );
    var_tzname = tmp_assign_source_6;

    // Tried code:
    tmp_source_name_5 = par_connection;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ops );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_datetime_cast_date_sql );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_2 = var_lhs;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lhs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_3 = var_tzname;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    frame_df9b2a5fe14af2ac9b65bc06281898c4->m_frame.f_lineno = 242;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


        type_description_1 = "oooooooo";
        exception_lineno = 242;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
    if ( tmp_assign_source_9 == NULL )
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


        type_description_1 = "oooooooo";
        exception_lineno = 242;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;

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

                type_description_1 = "oooooooo";
                exception_lineno = 242;
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

        type_description_1 = "oooooooo";
        exception_lineno = 242;
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

    tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_10 );
    assert( var_sql == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_sql = tmp_assign_source_10;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_11 );
    assert( var_tz_params == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_tz_params = tmp_assign_source_11;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_source_name_6 = var_lhs_params;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lhs_params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_extend );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_tz_params;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tz_params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_df9b2a5fe14af2ac9b65bc06281898c4->m_frame.f_lineno = 243;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_sql;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sql" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 244;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_lhs_params;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lhs_params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 244;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df9b2a5fe14af2ac9b65bc06281898c4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_df9b2a5fe14af2ac9b65bc06281898c4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df9b2a5fe14af2ac9b65bc06281898c4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_df9b2a5fe14af2ac9b65bc06281898c4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_df9b2a5fe14af2ac9b65bc06281898c4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_df9b2a5fe14af2ac9b65bc06281898c4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_df9b2a5fe14af2ac9b65bc06281898c4,
        type_description_1,
        par_self,
        par_compiler,
        par_connection,
        var_lhs,
        var_lhs_params,
        var_tzname,
        var_sql,
        var_tz_params
    );


    // Release cached frame.
    if ( frame_df9b2a5fe14af2ac9b65bc06281898c4 == cache_frame_df9b2a5fe14af2ac9b65bc06281898c4 )
    {
        Py_DECREF( frame_df9b2a5fe14af2ac9b65bc06281898c4 );
    }
    cache_frame_df9b2a5fe14af2ac9b65bc06281898c4 = NULL;

    assertFrameObject( frame_df9b2a5fe14af2ac9b65bc06281898c4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_12_as_sql );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_compiler );
    par_compiler = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( var_lhs );
    var_lhs = NULL;

    Py_XDECREF( var_lhs_params );
    var_lhs_params = NULL;

    Py_XDECREF( var_tzname );
    var_tzname = NULL;

    Py_XDECREF( var_sql );
    var_sql = NULL;

    Py_XDECREF( var_tz_params );
    var_tz_params = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_compiler );
    par_compiler = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( var_lhs );
    var_lhs = NULL;

    Py_XDECREF( var_lhs_params );
    var_lhs_params = NULL;

    Py_XDECREF( var_tzname );
    var_tzname = NULL;

    Py_XDECREF( var_sql );
    var_sql = NULL;

    Py_XDECREF( var_tz_params );
    var_tz_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_12_as_sql );
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


static PyObject *impl_django$db$models$functions$datetime$$$function_13_output_field( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_50cbe8bca834bea42b46b814c605881d = NULL;

    struct Nuitka_FrameObject *frame_50cbe8bca834bea42b46b814c605881d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_50cbe8bca834bea42b46b814c605881d, codeobj_50cbe8bca834bea42b46b814c605881d, module_django$db$models$functions$datetime, sizeof(void *) );
    frame_50cbe8bca834bea42b46b814c605881d = cache_frame_50cbe8bca834bea42b46b814c605881d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_50cbe8bca834bea42b46b814c605881d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_50cbe8bca834bea42b46b814c605881d ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TimeField );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeField );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_50cbe8bca834bea42b46b814c605881d->m_frame.f_lineno = 253;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_50cbe8bca834bea42b46b814c605881d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_50cbe8bca834bea42b46b814c605881d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_50cbe8bca834bea42b46b814c605881d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_50cbe8bca834bea42b46b814c605881d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_50cbe8bca834bea42b46b814c605881d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_50cbe8bca834bea42b46b814c605881d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_50cbe8bca834bea42b46b814c605881d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_50cbe8bca834bea42b46b814c605881d == cache_frame_50cbe8bca834bea42b46b814c605881d )
    {
        Py_DECREF( frame_50cbe8bca834bea42b46b814c605881d );
    }
    cache_frame_50cbe8bca834bea42b46b814c605881d = NULL;

    assertFrameObject( frame_50cbe8bca834bea42b46b814c605881d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_13_output_field );
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
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_13_output_field );
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


static PyObject *impl_django$db$models$functions$datetime$$$function_14_as_sql( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_compiler = python_pars[ 1 ];
    PyObject *par_connection = python_pars[ 2 ];
    PyObject *var_lhs = NULL;
    PyObject *var_lhs_params = NULL;
    PyObject *var_tzname = NULL;
    PyObject *var_sql = NULL;
    PyObject *var_tz_params = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5bf398a1847ec733fdf3e8f325d3446d = NULL;

    struct Nuitka_FrameObject *frame_5bf398a1847ec733fdf3e8f325d3446d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5bf398a1847ec733fdf3e8f325d3446d, codeobj_5bf398a1847ec733fdf3e8f325d3446d, module_django$db$models$functions$datetime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5bf398a1847ec733fdf3e8f325d3446d = cache_frame_5bf398a1847ec733fdf3e8f325d3446d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5bf398a1847ec733fdf3e8f325d3446d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5bf398a1847ec733fdf3e8f325d3446d ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_compiler;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compile );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_lhs );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 257;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    frame_5bf398a1847ec733fdf3e8f325d3446d->m_frame.f_lineno = 257;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


        type_description_1 = "oooooooo";
        exception_lineno = 257;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "oooooooo";
        exception_lineno = 257;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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

                type_description_1 = "oooooooo";
                exception_lineno = 257;
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

        type_description_1 = "oooooooo";
        exception_lineno = 257;
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

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_lhs == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_lhs = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_lhs_params == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_lhs_params = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 258;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_USE_TZ );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 258;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_timezone );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timezone );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 258;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_5bf398a1847ec733fdf3e8f325d3446d->m_frame.f_lineno = 258;
    tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_current_timezone_name );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_6 = Py_None;
    Py_INCREF( tmp_assign_source_6 );
    condexpr_end_1:;
    assert( var_tzname == NULL );
    var_tzname = tmp_assign_source_6;

    // Tried code:
    tmp_source_name_5 = par_connection;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ops );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_datetime_cast_time_sql );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_2 = var_lhs;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lhs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_3 = var_tzname;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    frame_5bf398a1847ec733fdf3e8f325d3446d->m_frame.f_lineno = 259;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


        type_description_1 = "oooooooo";
        exception_lineno = 259;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
    if ( tmp_assign_source_9 == NULL )
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


        type_description_1 = "oooooooo";
        exception_lineno = 259;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;

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

                type_description_1 = "oooooooo";
                exception_lineno = 259;
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

        type_description_1 = "oooooooo";
        exception_lineno = 259;
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

    tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_10 );
    assert( var_sql == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_sql = tmp_assign_source_10;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_11 );
    assert( var_tz_params == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_tz_params = tmp_assign_source_11;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_source_name_6 = var_lhs_params;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lhs_params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_extend );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_tz_params;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tz_params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_5bf398a1847ec733fdf3e8f325d3446d->m_frame.f_lineno = 260;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_sql;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sql" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_lhs_params;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lhs_params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5bf398a1847ec733fdf3e8f325d3446d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5bf398a1847ec733fdf3e8f325d3446d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5bf398a1847ec733fdf3e8f325d3446d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5bf398a1847ec733fdf3e8f325d3446d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5bf398a1847ec733fdf3e8f325d3446d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5bf398a1847ec733fdf3e8f325d3446d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5bf398a1847ec733fdf3e8f325d3446d,
        type_description_1,
        par_self,
        par_compiler,
        par_connection,
        var_lhs,
        var_lhs_params,
        var_tzname,
        var_sql,
        var_tz_params
    );


    // Release cached frame.
    if ( frame_5bf398a1847ec733fdf3e8f325d3446d == cache_frame_5bf398a1847ec733fdf3e8f325d3446d )
    {
        Py_DECREF( frame_5bf398a1847ec733fdf3e8f325d3446d );
    }
    cache_frame_5bf398a1847ec733fdf3e8f325d3446d = NULL;

    assertFrameObject( frame_5bf398a1847ec733fdf3e8f325d3446d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_14_as_sql );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_compiler );
    par_compiler = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( var_lhs );
    var_lhs = NULL;

    Py_XDECREF( var_lhs_params );
    var_lhs_params = NULL;

    Py_XDECREF( var_tzname );
    var_tzname = NULL;

    Py_XDECREF( var_sql );
    var_sql = NULL;

    Py_XDECREF( var_tz_params );
    var_tz_params = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_compiler );
    par_compiler = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( var_lhs );
    var_lhs = NULL;

    Py_XDECREF( var_lhs_params );
    var_lhs_params = NULL;

    Py_XDECREF( var_tzname );
    var_tzname = NULL;

    Py_XDECREF( var_sql );
    var_sql = NULL;

    Py_XDECREF( var_tz_params );
    var_tz_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime$$$function_14_as_sql );
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



static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_10___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$functions$datetime$$$function_10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_37c8a7f69612eac494b1edd4a3e0d0a3,
#endif
        codeobj_a22f64ef4f1a99a8824f51204cce6981,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$functions$datetime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_11_output_field(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$functions$datetime$$$function_11_output_field,
        const_str_plain_output_field,
#if PYTHON_VERSION >= 330
        const_str_digest_77ae4f11fb4cb7d017231d4e2f6b66f1,
#endif
        codeobj_60b80c641d789fd770783ec9d5f56fcc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$functions$datetime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_12_as_sql(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$functions$datetime$$$function_12_as_sql,
        const_str_plain_as_sql,
#if PYTHON_VERSION >= 330
        const_str_digest_999a4b1a6bcd0eacf0e9feb40b5fdda7,
#endif
        codeobj_df9b2a5fe14af2ac9b65bc06281898c4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$functions$datetime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_13_output_field(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$functions$datetime$$$function_13_output_field,
        const_str_plain_output_field,
#if PYTHON_VERSION >= 330
        const_str_digest_347e27384286471ae1dfd2c146575f2f,
#endif
        codeobj_50cbe8bca834bea42b46b814c605881d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$functions$datetime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_14_as_sql(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$functions$datetime$$$function_14_as_sql,
        const_str_plain_as_sql,
#if PYTHON_VERSION >= 330
        const_str_digest_af5f7dfd55d00f70143aba1cf4e04aa7,
#endif
        codeobj_5bf398a1847ec733fdf3e8f325d3446d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$functions$datetime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_1_get_tzname(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$functions$datetime$$$function_1_get_tzname,
        const_str_plain_get_tzname,
#if PYTHON_VERSION >= 330
        const_str_digest_9027a52d73711fb7ab62d75f9b392ba3,
#endif
        codeobj_af918c3873172a7fa44822f19a918569,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$functions$datetime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_2___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$functions$datetime$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_c9125e2c3bfdae5002ba7427e64ce181,
#endif
        codeobj_d47d3937294a0f26bd72a97460119d0b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$functions$datetime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_3_as_sql(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$functions$datetime$$$function_3_as_sql,
        const_str_plain_as_sql,
#if PYTHON_VERSION >= 330
        const_str_digest_62603b97f3a7075720bcd75df8f17cbd,
#endif
        codeobj_e6041c8a7ecc28c3031b87bf6a7bcebe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$functions$datetime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_4_resolve_expression( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$functions$datetime$$$function_4_resolve_expression,
        const_str_plain_resolve_expression,
#if PYTHON_VERSION >= 330
        const_str_digest_15ac777f3734d3543b6a2e0b4c554053,
#endif
        codeobj_0d8ae7b83754a7f4d0dc7ec0e2fd7d8f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$functions$datetime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_5_output_field(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$functions$datetime$$$function_5_output_field,
        const_str_plain_output_field,
#if PYTHON_VERSION >= 330
        const_str_digest_ca99a55f005d88bb8efe6215bd30a466,
#endif
        codeobj_f3dc2e0fcbbc878bdc7d4081f99a6dca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$functions$datetime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_6___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$functions$datetime$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_65dce6a88226e6472be90324e345fb07,
#endif
        codeobj_fad7aa21087cf6b53f553f1f1edbc03c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$functions$datetime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_7_as_sql(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$functions$datetime$$$function_7_as_sql,
        const_str_plain_as_sql,
#if PYTHON_VERSION >= 330
        const_str_digest_26eed891fc9ca7fd292f5baa398e2b29,
#endif
        codeobj_9c1a9b316a15765ee4ada7c2e9cd3216,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$functions$datetime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_8_resolve_expression( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$functions$datetime$$$function_8_resolve_expression,
        const_str_plain_resolve_expression,
#if PYTHON_VERSION >= 330
        const_str_digest_3f51bf300708b583a8744edcca288172,
#endif
        codeobj_7b3902fec2134e0e8ed95fe36ef26627,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$functions$datetime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$models$functions$datetime$$$function_9_convert_value(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$functions$datetime$$$function_9_convert_value,
        const_str_plain_convert_value,
#if PYTHON_VERSION >= 330
        const_str_digest_acbd5b22bb1e16c6b8e749fed4bddd79,
#endif
        codeobj_b6f049e12a86338200f220723962b91a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$functions$datetime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$db$models$functions$datetime =
{
    PyModuleDef_HEAD_INIT,
    "django.db.models.functions.datetime",   /* m_name */
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

MOD_INIT_DECL( django$db$models$functions$datetime )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$db$models$functions$datetime );
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
    puts("django.db.models.functions.datetime: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.db.models.functions.datetime: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$db$models$functions$datetime" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$db$models$functions$datetime = Py_InitModule4(
        "django.db.models.functions.datetime",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$db$models$functions$datetime = PyModule_Create( &mdef_django$db$models$functions$datetime );
#endif

    moduledict_django$db$models$functions$datetime = MODULE_DICT( module_django$db$models$functions$datetime );

    CHECK_OBJECT( module_django$db$models$functions$datetime );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_a732f039cc8d6dda06497c69ab447a52, module_django$db$models$functions$datetime );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var_tzinfo = NULL;
    PyObject *outline_0_var_get_tzname = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_1_var___qualname__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var_lookup_name = NULL;
    PyObject *outline_1_var___init__ = NULL;
    PyObject *outline_1_var_as_sql = NULL;
    PyObject *outline_1_var_resolve_expression = NULL;
    PyObject *outline_1_var_output_field = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_2_var___qualname__ = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var_lookup_name = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_3_var___qualname__ = NULL;
    PyObject *outline_3_var___module__ = NULL;
    PyObject *outline_3_var_lookup_name = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_4_var___qualname__ = NULL;
    PyObject *outline_4_var___module__ = NULL;
    PyObject *outline_4_var_lookup_name = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_5_var___qualname__ = NULL;
    PyObject *outline_5_var___module__ = NULL;
    PyObject *outline_5_var___doc__ = NULL;
    PyObject *outline_5_var_lookup_name = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_6_var___qualname__ = NULL;
    PyObject *outline_6_var___module__ = NULL;
    PyObject *outline_6_var___doc__ = NULL;
    PyObject *outline_6_var_lookup_name = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_7_var___qualname__ = NULL;
    PyObject *outline_7_var___module__ = NULL;
    PyObject *outline_7_var_lookup_name = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_8_var___qualname__ = NULL;
    PyObject *outline_8_var___module__ = NULL;
    PyObject *outline_8_var_lookup_name = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_9_var___qualname__ = NULL;
    PyObject *outline_9_var___module__ = NULL;
    PyObject *outline_9_var_lookup_name = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_10_var___qualname__ = NULL;
    PyObject *outline_10_var___module__ = NULL;
    PyObject *outline_10_var_arity = NULL;
    PyObject *outline_10_var_kind = NULL;
    PyObject *outline_10_var_tzinfo = NULL;
    PyObject *outline_10_var___init__ = NULL;
    PyObject *outline_10_var_as_sql = NULL;
    PyObject *outline_10_var_resolve_expression = NULL;
    PyObject *outline_10_var_convert_value = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_11_var___qualname__ = NULL;
    PyObject *outline_11_var___module__ = NULL;
    PyObject *outline_11_var___init__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_12_var___qualname__ = NULL;
    PyObject *outline_12_var___module__ = NULL;
    PyObject *outline_12_var_kind = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_13_var___qualname__ = NULL;
    PyObject *outline_13_var___module__ = NULL;
    PyObject *outline_13_var_kind = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_14_var___qualname__ = NULL;
    PyObject *outline_14_var___module__ = NULL;
    PyObject *outline_14_var_kind = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_15_var___qualname__ = NULL;
    PyObject *outline_15_var___module__ = NULL;
    PyObject *outline_15_var_kind = NULL;
    PyObject *outline_15_var_lookup_name = NULL;
    PyObject *outline_15_var_output_field = NULL;
    PyObject *outline_15_var_as_sql = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_16_var___qualname__ = NULL;
    PyObject *outline_16_var___module__ = NULL;
    PyObject *outline_16_var_kind = NULL;
    PyObject *outline_16_var_lookup_name = NULL;
    PyObject *outline_16_var_output_field = NULL;
    PyObject *outline_16_var_as_sql = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_17_var___qualname__ = NULL;
    PyObject *outline_17_var___module__ = NULL;
    PyObject *outline_17_var_kind = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_18_var___qualname__ = NULL;
    PyObject *outline_18_var___module__ = NULL;
    PyObject *outline_18_var_kind = NULL;
    PyObject *outline_19_var___class__ = NULL;
    PyObject *outline_19_var___qualname__ = NULL;
    PyObject *outline_19_var___module__ = NULL;
    PyObject *outline_19_var_kind = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_18__prepared = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_19__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_20__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
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
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
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
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
    PyObject *tmp_args_name_9;
    PyObject *tmp_args_name_10;
    PyObject *tmp_args_name_11;
    PyObject *tmp_args_name_12;
    PyObject *tmp_args_name_13;
    PyObject *tmp_args_name_14;
    PyObject *tmp_args_name_15;
    PyObject *tmp_args_name_16;
    PyObject *tmp_args_name_17;
    PyObject *tmp_args_name_18;
    PyObject *tmp_args_name_19;
    PyObject *tmp_args_name_20;
    PyObject *tmp_args_name_21;
    PyObject *tmp_args_name_22;
    PyObject *tmp_args_name_23;
    PyObject *tmp_args_name_24;
    PyObject *tmp_args_name_25;
    PyObject *tmp_args_name_26;
    PyObject *tmp_args_name_27;
    PyObject *tmp_args_name_28;
    PyObject *tmp_args_name_29;
    PyObject *tmp_args_name_30;
    PyObject *tmp_args_name_31;
    PyObject *tmp_args_name_32;
    PyObject *tmp_args_name_33;
    PyObject *tmp_args_name_34;
    PyObject *tmp_args_name_35;
    PyObject *tmp_args_name_36;
    PyObject *tmp_args_name_37;
    PyObject *tmp_args_name_38;
    PyObject *tmp_args_name_39;
    PyObject *tmp_args_name_40;
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
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
    PyObject *tmp_assign_source_107;
    PyObject *tmp_assign_source_108;
    PyObject *tmp_assign_source_109;
    PyObject *tmp_assign_source_110;
    PyObject *tmp_assign_source_111;
    PyObject *tmp_assign_source_112;
    PyObject *tmp_assign_source_113;
    PyObject *tmp_assign_source_114;
    PyObject *tmp_assign_source_115;
    PyObject *tmp_assign_source_116;
    PyObject *tmp_assign_source_117;
    PyObject *tmp_assign_source_118;
    PyObject *tmp_assign_source_119;
    PyObject *tmp_assign_source_120;
    PyObject *tmp_assign_source_121;
    PyObject *tmp_assign_source_122;
    PyObject *tmp_assign_source_123;
    PyObject *tmp_assign_source_124;
    PyObject *tmp_assign_source_125;
    PyObject *tmp_assign_source_126;
    PyObject *tmp_assign_source_127;
    PyObject *tmp_assign_source_128;
    PyObject *tmp_assign_source_129;
    PyObject *tmp_assign_source_130;
    PyObject *tmp_assign_source_131;
    PyObject *tmp_assign_source_132;
    PyObject *tmp_assign_source_133;
    PyObject *tmp_assign_source_134;
    PyObject *tmp_assign_source_135;
    PyObject *tmp_assign_source_136;
    PyObject *tmp_assign_source_137;
    PyObject *tmp_assign_source_138;
    PyObject *tmp_assign_source_139;
    PyObject *tmp_assign_source_140;
    PyObject *tmp_assign_source_141;
    PyObject *tmp_assign_source_142;
    PyObject *tmp_assign_source_143;
    PyObject *tmp_assign_source_144;
    PyObject *tmp_assign_source_145;
    PyObject *tmp_assign_source_146;
    PyObject *tmp_assign_source_147;
    PyObject *tmp_assign_source_148;
    PyObject *tmp_assign_source_149;
    PyObject *tmp_assign_source_150;
    PyObject *tmp_assign_source_151;
    PyObject *tmp_assign_source_152;
    PyObject *tmp_assign_source_153;
    PyObject *tmp_assign_source_154;
    PyObject *tmp_assign_source_155;
    PyObject *tmp_assign_source_156;
    PyObject *tmp_assign_source_157;
    PyObject *tmp_assign_source_158;
    PyObject *tmp_assign_source_159;
    PyObject *tmp_assign_source_160;
    PyObject *tmp_assign_source_161;
    PyObject *tmp_assign_source_162;
    PyObject *tmp_assign_source_163;
    PyObject *tmp_assign_source_164;
    PyObject *tmp_assign_source_165;
    PyObject *tmp_assign_source_166;
    PyObject *tmp_assign_source_167;
    PyObject *tmp_assign_source_168;
    PyObject *tmp_assign_source_169;
    PyObject *tmp_assign_source_170;
    PyObject *tmp_assign_source_171;
    PyObject *tmp_assign_source_172;
    PyObject *tmp_assign_source_173;
    PyObject *tmp_assign_source_174;
    PyObject *tmp_assign_source_175;
    PyObject *tmp_assign_source_176;
    PyObject *tmp_assign_source_177;
    PyObject *tmp_assign_source_178;
    PyObject *tmp_assign_source_179;
    PyObject *tmp_assign_source_180;
    PyObject *tmp_assign_source_181;
    PyObject *tmp_assign_source_182;
    PyObject *tmp_assign_source_183;
    PyObject *tmp_assign_source_184;
    PyObject *tmp_assign_source_185;
    PyObject *tmp_assign_source_186;
    PyObject *tmp_assign_source_187;
    PyObject *tmp_assign_source_188;
    PyObject *tmp_assign_source_189;
    PyObject *tmp_assign_source_190;
    PyObject *tmp_assign_source_191;
    PyObject *tmp_assign_source_192;
    PyObject *tmp_assign_source_193;
    PyObject *tmp_assign_source_194;
    PyObject *tmp_assign_source_195;
    PyObject *tmp_assign_source_196;
    PyObject *tmp_assign_source_197;
    PyObject *tmp_assign_source_198;
    PyObject *tmp_assign_source_199;
    PyObject *tmp_assign_source_200;
    PyObject *tmp_assign_source_201;
    PyObject *tmp_assign_source_202;
    PyObject *tmp_assign_source_203;
    PyObject *tmp_assign_source_204;
    PyObject *tmp_assign_source_205;
    PyObject *tmp_assign_source_206;
    PyObject *tmp_assign_source_207;
    PyObject *tmp_assign_source_208;
    PyObject *tmp_assign_source_209;
    PyObject *tmp_assign_source_210;
    PyObject *tmp_assign_source_211;
    PyObject *tmp_assign_source_212;
    PyObject *tmp_assign_source_213;
    PyObject *tmp_assign_source_214;
    PyObject *tmp_assign_source_215;
    PyObject *tmp_assign_source_216;
    PyObject *tmp_assign_source_217;
    PyObject *tmp_assign_source_218;
    PyObject *tmp_assign_source_219;
    PyObject *tmp_assign_source_220;
    PyObject *tmp_assign_source_221;
    PyObject *tmp_assign_source_222;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_bases_name_6;
    PyObject *tmp_bases_name_7;
    PyObject *tmp_bases_name_8;
    PyObject *tmp_bases_name_9;
    PyObject *tmp_bases_name_10;
    PyObject *tmp_bases_name_11;
    PyObject *tmp_bases_name_12;
    PyObject *tmp_bases_name_13;
    PyObject *tmp_bases_name_14;
    PyObject *tmp_bases_name_15;
    PyObject *tmp_bases_name_16;
    PyObject *tmp_bases_name_17;
    PyObject *tmp_bases_name_18;
    PyObject *tmp_bases_name_19;
    PyObject *tmp_bases_name_20;
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
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    PyObject *tmp_called_name_35;
    PyObject *tmp_called_name_36;
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    PyObject *tmp_called_name_43;
    PyObject *tmp_called_name_44;
    PyObject *tmp_called_name_45;
    PyObject *tmp_called_name_46;
    PyObject *tmp_called_name_47;
    PyObject *tmp_called_name_48;
    PyObject *tmp_called_name_49;
    PyObject *tmp_called_name_50;
    PyObject *tmp_called_name_51;
    PyObject *tmp_called_name_52;
    PyObject *tmp_called_name_53;
    PyObject *tmp_called_name_54;
    PyObject *tmp_called_name_55;
    PyObject *tmp_called_name_56;
    PyObject *tmp_called_name_57;
    PyObject *tmp_called_name_58;
    PyObject *tmp_called_name_59;
    PyObject *tmp_called_name_60;
    PyObject *tmp_called_name_61;
    PyObject *tmp_called_name_62;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    int tmp_cmp_In_9;
    int tmp_cmp_In_10;
    int tmp_cmp_In_11;
    int tmp_cmp_In_12;
    int tmp_cmp_In_13;
    int tmp_cmp_In_14;
    int tmp_cmp_In_15;
    int tmp_cmp_In_16;
    int tmp_cmp_In_17;
    int tmp_cmp_In_18;
    int tmp_cmp_In_19;
    int tmp_cmp_In_20;
    int tmp_cmp_In_21;
    int tmp_cmp_In_22;
    int tmp_cmp_In_23;
    int tmp_cmp_In_24;
    int tmp_cmp_In_25;
    int tmp_cmp_In_26;
    int tmp_cmp_In_27;
    int tmp_cmp_In_28;
    int tmp_cmp_In_29;
    int tmp_cmp_In_30;
    int tmp_cmp_In_31;
    int tmp_cmp_In_32;
    int tmp_cmp_In_33;
    int tmp_cmp_In_34;
    int tmp_cmp_In_35;
    int tmp_cmp_In_36;
    int tmp_cmp_In_37;
    int tmp_cmp_In_38;
    int tmp_cmp_In_39;
    int tmp_cmp_In_40;
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
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_left_19;
    PyObject *tmp_compare_left_20;
    PyObject *tmp_compare_left_21;
    PyObject *tmp_compare_left_22;
    PyObject *tmp_compare_left_23;
    PyObject *tmp_compare_left_24;
    PyObject *tmp_compare_left_25;
    PyObject *tmp_compare_left_26;
    PyObject *tmp_compare_left_27;
    PyObject *tmp_compare_left_28;
    PyObject *tmp_compare_left_29;
    PyObject *tmp_compare_left_30;
    PyObject *tmp_compare_left_31;
    PyObject *tmp_compare_left_32;
    PyObject *tmp_compare_left_33;
    PyObject *tmp_compare_left_34;
    PyObject *tmp_compare_left_35;
    PyObject *tmp_compare_left_36;
    PyObject *tmp_compare_left_37;
    PyObject *tmp_compare_left_38;
    PyObject *tmp_compare_left_39;
    PyObject *tmp_compare_left_40;
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
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    PyObject *tmp_compare_right_19;
    PyObject *tmp_compare_right_20;
    PyObject *tmp_compare_right_21;
    PyObject *tmp_compare_right_22;
    PyObject *tmp_compare_right_23;
    PyObject *tmp_compare_right_24;
    PyObject *tmp_compare_right_25;
    PyObject *tmp_compare_right_26;
    PyObject *tmp_compare_right_27;
    PyObject *tmp_compare_right_28;
    PyObject *tmp_compare_right_29;
    PyObject *tmp_compare_right_30;
    PyObject *tmp_compare_right_31;
    PyObject *tmp_compare_right_32;
    PyObject *tmp_compare_right_33;
    PyObject *tmp_compare_right_34;
    PyObject *tmp_compare_right_35;
    PyObject *tmp_compare_right_36;
    PyObject *tmp_compare_right_37;
    PyObject *tmp_compare_right_38;
    PyObject *tmp_compare_right_39;
    PyObject *tmp_compare_right_40;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    int tmp_cond_truth_18;
    int tmp_cond_truth_19;
    int tmp_cond_truth_20;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_cond_value_18;
    PyObject *tmp_cond_value_19;
    PyObject *tmp_cond_value_20;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_name_8;
    PyObject *tmp_dict_name_9;
    PyObject *tmp_dict_name_10;
    PyObject *tmp_dict_name_11;
    PyObject *tmp_dict_name_12;
    PyObject *tmp_dict_name_13;
    PyObject *tmp_dict_name_14;
    PyObject *tmp_dict_name_15;
    PyObject *tmp_dict_name_16;
    PyObject *tmp_dict_name_17;
    PyObject *tmp_dict_name_18;
    PyObject *tmp_dict_name_19;
    PyObject *tmp_dict_name_20;
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
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_attr_6;
    PyObject *tmp_hasattr_attr_7;
    PyObject *tmp_hasattr_attr_8;
    PyObject *tmp_hasattr_attr_9;
    PyObject *tmp_hasattr_attr_10;
    PyObject *tmp_hasattr_attr_11;
    PyObject *tmp_hasattr_attr_12;
    PyObject *tmp_hasattr_attr_13;
    PyObject *tmp_hasattr_attr_14;
    PyObject *tmp_hasattr_attr_15;
    PyObject *tmp_hasattr_attr_16;
    PyObject *tmp_hasattr_attr_17;
    PyObject *tmp_hasattr_attr_18;
    PyObject *tmp_hasattr_attr_19;
    PyObject *tmp_hasattr_attr_20;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_hasattr_source_6;
    PyObject *tmp_hasattr_source_7;
    PyObject *tmp_hasattr_source_8;
    PyObject *tmp_hasattr_source_9;
    PyObject *tmp_hasattr_source_10;
    PyObject *tmp_hasattr_source_11;
    PyObject *tmp_hasattr_source_12;
    PyObject *tmp_hasattr_source_13;
    PyObject *tmp_hasattr_source_14;
    PyObject *tmp_hasattr_source_15;
    PyObject *tmp_hasattr_source_16;
    PyObject *tmp_hasattr_source_17;
    PyObject *tmp_hasattr_source_18;
    PyObject *tmp_hasattr_source_19;
    PyObject *tmp_hasattr_source_20;
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
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_key_name_8;
    PyObject *tmp_key_name_9;
    PyObject *tmp_key_name_10;
    PyObject *tmp_key_name_11;
    PyObject *tmp_key_name_12;
    PyObject *tmp_key_name_13;
    PyObject *tmp_key_name_14;
    PyObject *tmp_key_name_15;
    PyObject *tmp_key_name_16;
    PyObject *tmp_key_name_17;
    PyObject *tmp_key_name_18;
    PyObject *tmp_key_name_19;
    PyObject *tmp_key_name_20;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_kw_name_9;
    PyObject *tmp_kw_name_10;
    PyObject *tmp_kw_name_11;
    PyObject *tmp_kw_name_12;
    PyObject *tmp_kw_name_13;
    PyObject *tmp_kw_name_14;
    PyObject *tmp_kw_name_15;
    PyObject *tmp_kw_name_16;
    PyObject *tmp_kw_name_17;
    PyObject *tmp_kw_name_18;
    PyObject *tmp_kw_name_19;
    PyObject *tmp_kw_name_20;
    PyObject *tmp_kw_name_21;
    PyObject *tmp_kw_name_22;
    PyObject *tmp_kw_name_23;
    PyObject *tmp_kw_name_24;
    PyObject *tmp_kw_name_25;
    PyObject *tmp_kw_name_26;
    PyObject *tmp_kw_name_27;
    PyObject *tmp_kw_name_28;
    PyObject *tmp_kw_name_29;
    PyObject *tmp_kw_name_30;
    PyObject *tmp_kw_name_31;
    PyObject *tmp_kw_name_32;
    PyObject *tmp_kw_name_33;
    PyObject *tmp_kw_name_34;
    PyObject *tmp_kw_name_35;
    PyObject *tmp_kw_name_36;
    PyObject *tmp_kw_name_37;
    PyObject *tmp_kw_name_38;
    PyObject *tmp_kw_name_39;
    PyObject *tmp_kw_name_40;
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
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_metaclass_name_5;
    PyObject *tmp_metaclass_name_6;
    PyObject *tmp_metaclass_name_7;
    PyObject *tmp_metaclass_name_8;
    PyObject *tmp_metaclass_name_9;
    PyObject *tmp_metaclass_name_10;
    PyObject *tmp_metaclass_name_11;
    PyObject *tmp_metaclass_name_12;
    PyObject *tmp_metaclass_name_13;
    PyObject *tmp_metaclass_name_14;
    PyObject *tmp_metaclass_name_15;
    PyObject *tmp_metaclass_name_16;
    PyObject *tmp_metaclass_name_17;
    PyObject *tmp_metaclass_name_18;
    PyObject *tmp_metaclass_name_19;
    PyObject *tmp_metaclass_name_20;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    PyObject *tmp_outline_return_value_7;
    PyObject *tmp_outline_return_value_8;
    PyObject *tmp_outline_return_value_9;
    PyObject *tmp_outline_return_value_10;
    PyObject *tmp_outline_return_value_11;
    PyObject *tmp_outline_return_value_12;
    PyObject *tmp_outline_return_value_13;
    PyObject *tmp_outline_return_value_14;
    PyObject *tmp_outline_return_value_15;
    PyObject *tmp_outline_return_value_16;
    PyObject *tmp_outline_return_value_17;
    PyObject *tmp_outline_return_value_18;
    PyObject *tmp_outline_return_value_19;
    PyObject *tmp_outline_return_value_20;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
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
    PyObject *tmp_source_name_38;
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
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscribed_name_13;
    PyObject *tmp_subscribed_name_14;
    PyObject *tmp_subscribed_name_15;
    PyObject *tmp_subscribed_name_16;
    PyObject *tmp_subscribed_name_17;
    PyObject *tmp_subscribed_name_18;
    PyObject *tmp_subscribed_name_19;
    PyObject *tmp_subscribed_name_20;
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
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_subscript_name_13;
    PyObject *tmp_subscript_name_14;
    PyObject *tmp_subscript_name_15;
    PyObject *tmp_subscript_name_16;
    PyObject *tmp_subscript_name_17;
    PyObject *tmp_subscript_name_18;
    PyObject *tmp_subscript_name_19;
    PyObject *tmp_subscript_name_20;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_tuple_element_21;
    PyObject *tmp_tuple_element_22;
    PyObject *tmp_tuple_element_23;
    PyObject *tmp_tuple_element_24;
    PyObject *tmp_tuple_element_25;
    PyObject *tmp_tuple_element_26;
    PyObject *tmp_tuple_element_27;
    PyObject *tmp_tuple_element_28;
    PyObject *tmp_tuple_element_29;
    PyObject *tmp_tuple_element_30;
    PyObject *tmp_tuple_element_31;
    PyObject *tmp_tuple_element_32;
    PyObject *tmp_tuple_element_33;
    PyObject *tmp_tuple_element_34;
    PyObject *tmp_tuple_element_35;
    PyObject *tmp_tuple_element_36;
    PyObject *tmp_tuple_element_37;
    PyObject *tmp_tuple_element_38;
    PyObject *tmp_tuple_element_39;
    PyObject *tmp_tuple_element_40;
    PyObject *tmp_tuple_element_41;
    PyObject *tmp_tuple_element_42;
    PyObject *tmp_tuple_element_43;
    PyObject *tmp_tuple_element_44;
    PyObject *tmp_tuple_element_45;
    PyObject *tmp_tuple_element_46;
    PyObject *tmp_tuple_element_47;
    PyObject *tmp_tuple_element_48;
    PyObject *tmp_tuple_element_49;
    PyObject *tmp_tuple_element_50;
    PyObject *tmp_tuple_element_51;
    PyObject *tmp_tuple_element_52;
    PyObject *tmp_tuple_element_53;
    PyObject *tmp_tuple_element_54;
    PyObject *tmp_tuple_element_55;
    PyObject *tmp_tuple_element_56;
    PyObject *tmp_tuple_element_57;
    PyObject *tmp_tuple_element_58;
    PyObject *tmp_tuple_element_59;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_type_arg_6;
    PyObject *tmp_type_arg_7;
    PyObject *tmp_type_arg_8;
    PyObject *tmp_type_arg_9;
    PyObject *tmp_type_arg_10;
    PyObject *tmp_type_arg_11;
    PyObject *tmp_type_arg_12;
    PyObject *tmp_type_arg_13;
    PyObject *tmp_type_arg_14;
    PyObject *tmp_type_arg_15;
    PyObject *tmp_type_arg_16;
    PyObject *tmp_type_arg_17;
    PyObject *tmp_type_arg_18;
    PyObject *tmp_type_arg_19;
    PyObject *tmp_type_arg_20;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a8fa1e589dd95ced2f6b89e2e806c613_2 = NULL;

    struct Nuitka_FrameObject *frame_a8fa1e589dd95ced2f6b89e2e806c613_2;

    static struct Nuitka_FrameObject *cache_frame_ca07a69e2faf5f5c153562b9b485dceb_3 = NULL;

    struct Nuitka_FrameObject *frame_ca07a69e2faf5f5c153562b9b485dceb_3;

    static struct Nuitka_FrameObject *cache_frame_b41c75f9af44638ba4d912fbd6d6a3d9_4 = NULL;

    struct Nuitka_FrameObject *frame_b41c75f9af44638ba4d912fbd6d6a3d9_4;

    struct Nuitka_FrameObject *frame_7d057895e572573cb3149c484cc0e440;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    tmp_outline_return_value_7 = NULL;
    tmp_outline_return_value_8 = NULL;
    tmp_outline_return_value_9 = NULL;
    tmp_outline_return_value_10 = NULL;
    tmp_outline_return_value_11 = NULL;
    tmp_outline_return_value_12 = NULL;
    tmp_outline_return_value_13 = NULL;
    tmp_outline_return_value_14 = NULL;
    tmp_outline_return_value_15 = NULL;
    tmp_outline_return_value_16 = NULL;
    tmp_outline_return_value_17 = NULL;
    tmp_outline_return_value_18 = NULL;
    tmp_outline_return_value_19 = NULL;
    tmp_outline_return_value_20 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_2 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_3 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_4 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_5 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_6 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_7 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_8 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_9 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_10 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_11 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_12 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_13 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_14 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_15 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_16 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_17 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_18 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_19 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_20 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_7d057895e572573cb3149c484cc0e440 = MAKE_MODULE_FRAME( codeobj_7d057895e572573cb3149c484cc0e440, module_django$db$models$functions$datetime );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_7d057895e572573cb3149c484cc0e440 );
    assert( Py_REFCNT( frame_7d057895e572573cb3149c484cc0e440 ) == 2 );

    // Framed code:
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_4e7e693e251a89f57ec4f0dd4f537b0c;
    UPDATE_STRING_DICT0( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_plain_datetime;
    tmp_globals_name_1 = (PyObject *)moduledict_django$db$models$functions$datetime;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_datetime_tuple;
    tmp_level_name_1 = const_int_0;
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 3;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_datetime );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
    tmp_globals_name_2 = (PyObject *)moduledict_django$db$models$functions$datetime;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_settings_tuple;
    tmp_level_name_2 = const_int_0;
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 5;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_settings );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_settings, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_digest_76151557ac4cfbca827b761e50d5fea2;
    tmp_globals_name_3 = (PyObject *)moduledict_django$db$models$functions$datetime;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_69ee4a02682e194be91cf96b69220a7e_tuple;
    tmp_level_name_3 = const_int_0;
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 6;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_10;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_DateField );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateField, tmp_assign_source_11 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_DateTimeField );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateTimeField, tmp_assign_source_12 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_IntegerField );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_IntegerField, tmp_assign_source_13 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_TimeField );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TimeField, tmp_assign_source_14 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Transform );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Transform, tmp_assign_source_15 );
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

    tmp_name_name_4 = const_str_digest_2a54ded6839f2304ad431ccaba052533;
    tmp_globals_name_4 = (PyObject *)moduledict_django$db$models$functions$datetime;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_56a306fdc951f956cb2ab37fbc9a3745_tuple;
    tmp_level_name_4 = const_int_0;
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 9;
    tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_16;

    // Tried code:
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_YearExact );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_YearExact, tmp_assign_source_17 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_YearGt );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_YearGt, tmp_assign_source_18 );
    tmp_import_name_from_11 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_YearGte );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_YearGte, tmp_assign_source_19 );
    tmp_import_name_from_12 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_YearLt );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_YearLt, tmp_assign_source_20 );
    tmp_import_name_from_13 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_YearLte );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_YearLte, tmp_assign_source_21 );
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

    tmp_name_name_5 = const_str_digest_467c9722f19d9d40d148689532cdc0b1;
    tmp_globals_name_5 = (PyObject *)moduledict_django$db$models$functions$datetime;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_timezone_tuple;
    tmp_level_name_5 = const_int_0;
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 12;
    tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_timezone );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_timezone, tmp_assign_source_22 );
    tmp_name_name_6 = const_str_digest_3d2fb639fc3676a85e9d77bb02d18a21;
    tmp_globals_name_6 = (PyObject *)moduledict_django$db$models$functions$datetime;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_cached_property_tuple;
    tmp_level_name_6 = const_int_0;
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 13;
    tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_cached_property );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_cached_property, tmp_assign_source_23 );
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


        exception_lineno = 16;

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


        exception_lineno = 16;

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


        exception_lineno = 16;

        goto try_except_handler_3;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

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
    tmp_assign_source_26 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 16;

        goto try_except_handler_3;
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


        exception_lineno = 16;

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


        exception_lineno = 16;

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
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_3;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_TimezoneMixin;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 16;
    tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_3;
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
    tmp_assign_source_29 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_29 );
    outline_0_var___module__ = tmp_assign_source_29;

    tmp_assign_source_30 = const_str_plain_TimezoneMixin;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_30 );
    outline_0_var___qualname__ = tmp_assign_source_30;

    tmp_assign_source_31 = Py_None;
    assert( outline_0_var_tzinfo == NULL );
    Py_INCREF( tmp_assign_source_31 );
    outline_0_var_tzinfo = tmp_assign_source_31;

    tmp_assign_source_32 = MAKE_FUNCTION_django$db$models$functions$datetime$$$function_1_get_tzname(  );
    assert( outline_0_var_get_tzname == NULL );
    outline_0_var_get_tzname = tmp_assign_source_32;

    // Tried code:
    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_2 = const_str_plain_TimezoneMixin;
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

        exception_lineno = 16;

        goto try_except_handler_4;
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

        exception_lineno = 16;

        goto try_except_handler_4;
    }
    if ( outline_0_var_tzinfo != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_tzinfo,
            outline_0_var_tzinfo
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_tzinfo
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_tzinfo
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

        exception_lineno = 16;

        goto try_except_handler_4;
    }
    if ( outline_0_var_get_tzname != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_get_tzname,
            outline_0_var_get_tzname
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_get_tzname
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_get_tzname
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

        exception_lineno = 16;

        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 16;
    tmp_assign_source_33 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_4;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_33;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
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

    Py_XDECREF( outline_0_var_tzinfo );
    outline_0_var_tzinfo = NULL;

    Py_XDECREF( outline_0_var_get_tzname );
    outline_0_var_get_tzname = NULL;

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

    Py_XDECREF( outline_0_var_tzinfo );
    outline_0_var_tzinfo = NULL;

    Py_XDECREF( outline_0_var_get_tzname );
    outline_0_var_get_tzname = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 16;
    goto try_except_handler_3;
    outline_result_1:;
    tmp_assign_source_28 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TimezoneMixin, tmp_assign_source_28 );
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

    // Tried code:
    tmp_assign_source_34 = PyTuple_New( 2 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TimezoneMixin );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimezoneMixin );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimezoneMixin" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;

        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_34, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Transform );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Transform );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Transform" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;

        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_34, 1, tmp_tuple_element_3 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_34;

    tmp_assign_source_35 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_35;

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


        exception_lineno = 33;

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


        exception_lineno = 33;

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


        exception_lineno = 33;

        goto try_except_handler_5;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

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
    tmp_assign_source_36 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 33;

        goto try_except_handler_5;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_36;

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


        exception_lineno = 33;

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


        exception_lineno = 33;

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
    tmp_source_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_5;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_Extract;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 33;
    tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_5;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_37 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_37;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_2);
    locals_dict_2 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_39 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_39 );
    outline_1_var___module__ = tmp_assign_source_39;

    tmp_assign_source_40 = const_str_plain_Extract;
    assert( outline_1_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_40 );
    outline_1_var___qualname__ = tmp_assign_source_40;

    tmp_assign_source_41 = Py_None;
    assert( outline_1_var_lookup_name == NULL );
    Py_INCREF( tmp_assign_source_41 );
    outline_1_var_lookup_name = tmp_assign_source_41;

    tmp_defaults_1 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_42 = MAKE_FUNCTION_django$db$models$functions$datetime$$$function_2___init__( tmp_defaults_1 );
    assert( outline_1_var___init__ == NULL );
    outline_1_var___init__ = tmp_assign_source_42;

    tmp_assign_source_43 = MAKE_FUNCTION_django$db$models$functions$datetime$$$function_3_as_sql(  );
    assert( outline_1_var_as_sql == NULL );
    outline_1_var_as_sql = tmp_assign_source_43;

    tmp_defaults_2 = const_tuple_none_true_none_false_false_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_44 = MAKE_FUNCTION_django$db$models$functions$datetime$$$function_4_resolve_expression( tmp_defaults_2 );
    assert( outline_1_var_resolve_expression == NULL );
    outline_1_var_resolve_expression = tmp_assign_source_44;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a8fa1e589dd95ced2f6b89e2e806c613_2, codeobj_a8fa1e589dd95ced2f6b89e2e806c613, module_django$db$models$functions$datetime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a8fa1e589dd95ced2f6b89e2e806c613_2 = cache_frame_a8fa1e589dd95ced2f6b89e2e806c613_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a8fa1e589dd95ced2f6b89e2e806c613_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a8fa1e589dd95ced2f6b89e2e806c613_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_5 = PyDict_GetItem( locals_dict_2, const_str_plain_cached_property );

    if ( tmp_called_name_5 == NULL )
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_cached_property );

        if (unlikely( tmp_called_name_5 == NULL ))
        {
            tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cached_property );
        }

        if ( tmp_called_name_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cached_property" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 73;
            type_description_2 = "NooooooN";
            goto frame_exception_exit_2;
        }

    }

    tmp_args_element_name_3 = MAKE_FUNCTION_django$db$models$functions$datetime$$$function_5_output_field(  );
    frame_a8fa1e589dd95ced2f6b89e2e806c613_2->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_2 = "NooooooN";
        goto frame_exception_exit_2;
    }
    assert( outline_1_var_output_field == NULL );
    outline_1_var_output_field = tmp_assign_source_45;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8fa1e589dd95ced2f6b89e2e806c613_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8fa1e589dd95ced2f6b89e2e806c613_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a8fa1e589dd95ced2f6b89e2e806c613_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a8fa1e589dd95ced2f6b89e2e806c613_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a8fa1e589dd95ced2f6b89e2e806c613_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a8fa1e589dd95ced2f6b89e2e806c613_2,
        type_description_2,
        NULL,
        outline_1_var___qualname__,
        outline_1_var___module__,
        outline_1_var_lookup_name,
        outline_1_var___init__,
        outline_1_var_as_sql,
        outline_1_var_resolve_expression,
        outline_1_var_output_field
    );


    // Release cached frame.
    if ( frame_a8fa1e589dd95ced2f6b89e2e806c613_2 == cache_frame_a8fa1e589dd95ced2f6b89e2e806c613_2 )
    {
        Py_DECREF( frame_a8fa1e589dd95ced2f6b89e2e806c613_2 );
    }
    cache_frame_a8fa1e589dd95ced2f6b89e2e806c613_2 = NULL;

    assertFrameObject( frame_a8fa1e589dd95ced2f6b89e2e806c613_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_6;
    skip_nested_handling_1:;
    tmp_called_name_6 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_args_name_4 = PyTuple_New( 3 );
    tmp_tuple_element_5 = const_str_plain_Extract;
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

        exception_lineno = 33;

        goto try_except_handler_6;
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

        exception_lineno = 33;

        goto try_except_handler_6;
    }
    if ( outline_1_var_lookup_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain_lookup_name,
            outline_1_var_lookup_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain_lookup_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain_lookup_name
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

        exception_lineno = 33;

        goto try_except_handler_6;
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

        exception_lineno = 33;

        goto try_except_handler_6;
    }
    if ( outline_1_var_as_sql != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain_as_sql,
            outline_1_var_as_sql
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain_as_sql
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain_as_sql
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

        exception_lineno = 33;

        goto try_except_handler_6;
    }
    if ( outline_1_var_resolve_expression != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain_resolve_expression,
            outline_1_var_resolve_expression
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain_resolve_expression
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain_resolve_expression
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

        exception_lineno = 33;

        goto try_except_handler_6;
    }
    if ( outline_1_var_output_field != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain_output_field,
            outline_1_var_output_field
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain_output_field
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain_output_field
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

        exception_lineno = 33;

        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_5 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 33;
    tmp_assign_source_46 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_6;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_46;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
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

    Py_XDECREF( outline_1_var_lookup_name );
    outline_1_var_lookup_name = NULL;

    Py_XDECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    Py_XDECREF( outline_1_var_as_sql );
    outline_1_var_as_sql = NULL;

    Py_XDECREF( outline_1_var_resolve_expression );
    outline_1_var_resolve_expression = NULL;

    Py_XDECREF( outline_1_var_output_field );
    outline_1_var_output_field = NULL;

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

    Py_XDECREF( outline_1_var_lookup_name );
    outline_1_var_lookup_name = NULL;

    Py_XDECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    Py_XDECREF( outline_1_var_as_sql );
    outline_1_var_as_sql = NULL;

    Py_XDECREF( outline_1_var_resolve_expression );
    outline_1_var_resolve_expression = NULL;

    Py_XDECREF( outline_1_var_output_field );
    outline_1_var_output_field = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 33;
    goto try_except_handler_5;
    outline_result_2:;
    tmp_assign_source_38 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Extract, tmp_assign_source_38 );
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
    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    tmp_assign_source_47 = PyTuple_New( 1 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Extract );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Extract );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_47 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Extract" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;

        goto try_except_handler_7;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_47, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_47;

    tmp_assign_source_48 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_48;

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


        exception_lineno = 78;

        goto try_except_handler_7;
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


        exception_lineno = 78;

        goto try_except_handler_7;
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


        exception_lineno = 78;

        goto try_except_handler_7;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_7;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_49 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_3 );

        exception_lineno = 78;

        goto try_except_handler_7;
    }
    Py_DECREF( tmp_metaclass_name_3 );
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_49;

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


        exception_lineno = 78;

        goto try_except_handler_7;
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


        exception_lineno = 78;

        goto try_except_handler_7;
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


        exception_lineno = 78;

        goto try_except_handler_7;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_7 = const_str_plain_ExtractYear;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_7 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 78;
    tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_7;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_50 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_50;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_3);
    locals_dict_3 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_52 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_52 );
    outline_2_var___module__ = tmp_assign_source_52;

    tmp_assign_source_53 = const_str_plain_ExtractYear;
    assert( outline_2_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_53 );
    outline_2_var___qualname__ = tmp_assign_source_53;

    tmp_assign_source_54 = const_str_plain_year;
    assert( outline_2_var_lookup_name == NULL );
    Py_INCREF( tmp_assign_source_54 );
    outline_2_var_lookup_name = tmp_assign_source_54;

    // Tried code:
    tmp_called_name_8 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_args_name_6 = PyTuple_New( 3 );
    tmp_tuple_element_8 = const_str_plain_ExtractYear;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_8 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = locals_dict_3;
    Py_INCREF( tmp_tuple_element_8 );
    if ( outline_2_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_8,
            const_str_plain___qualname__,
            outline_2_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_8,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_8,
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
        Py_DECREF( tmp_tuple_element_8 );

        exception_lineno = 78;

        goto try_except_handler_8;
    }
    if ( outline_2_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_8,
            const_str_plain___module__,
            outline_2_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_8,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_8,
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
        Py_DECREF( tmp_tuple_element_8 );

        exception_lineno = 78;

        goto try_except_handler_8;
    }
    if ( outline_2_var_lookup_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_8,
            const_str_plain_lookup_name,
            outline_2_var_lookup_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_8,
            const_str_plain_lookup_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_8,
                const_str_plain_lookup_name
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
        Py_DECREF( tmp_tuple_element_8 );

        exception_lineno = 78;

        goto try_except_handler_8;
    }
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_8 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 78;
    tmp_assign_source_55 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_8;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_55;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    Py_XDECREF( outline_2_var___qualname__ );
    outline_2_var___qualname__ = NULL;

    Py_XDECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    Py_XDECREF( outline_2_var_lookup_name );
    outline_2_var_lookup_name = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_2_var___qualname__ );
    outline_2_var___qualname__ = NULL;

    Py_XDECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    Py_XDECREF( outline_2_var_lookup_name );
    outline_2_var_lookup_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 78;
    goto try_except_handler_7;
    outline_result_3:;
    tmp_assign_source_51 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractYear, tmp_assign_source_51 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    tmp_assign_source_56 = PyTuple_New( 1 );
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Extract );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Extract );
    }

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_56 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Extract" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;

        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_56, 0, tmp_tuple_element_9 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_56;

    tmp_assign_source_57 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_57;

    tmp_compare_left_7 = const_str_plain_metaclass;
    tmp_compare_right_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_7 );
    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_7 == -1) );
    if ( tmp_cmp_In_7 == 1 )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_dict_name_4 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_9;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_cond_value_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_9;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_subscribed_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_0;
    tmp_type_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_type_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_9;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_9;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_bases_name_4 );
    tmp_assign_source_58 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_4 );

        exception_lineno = 82;

        goto try_except_handler_9;
    }
    Py_DECREF( tmp_metaclass_name_4 );
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_58;

    tmp_compare_left_8 = const_str_plain_metaclass;
    tmp_compare_right_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_8 );
    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_8 == -1) );
    if ( tmp_cmp_In_8 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_9;
    }
    branch_no_4:;
    tmp_hasattr_source_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_4 );
    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_9;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_source_name_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_9;
    }
    tmp_args_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_10 = const_str_plain_ExtractMonth;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_10 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_10 );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 82;
    tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_9;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_59 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_59;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_4);
    locals_dict_4 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_61 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_3_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_61 );
    outline_3_var___module__ = tmp_assign_source_61;

    tmp_assign_source_62 = const_str_plain_ExtractMonth;
    assert( outline_3_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_62 );
    outline_3_var___qualname__ = tmp_assign_source_62;

    tmp_assign_source_63 = const_str_plain_month;
    assert( outline_3_var_lookup_name == NULL );
    Py_INCREF( tmp_assign_source_63 );
    outline_3_var_lookup_name = tmp_assign_source_63;

    // Tried code:
    tmp_called_name_10 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_args_name_8 = PyTuple_New( 3 );
    tmp_tuple_element_11 = const_str_plain_ExtractMonth;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_11 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_11 );
    tmp_tuple_element_11 = locals_dict_4;
    Py_INCREF( tmp_tuple_element_11 );
    if ( outline_3_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain___qualname__,
            outline_3_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
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
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 82;

        goto try_except_handler_10;
    }
    if ( outline_3_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain___module__,
            outline_3_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
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
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 82;

        goto try_except_handler_10;
    }
    if ( outline_3_var_lookup_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain_lookup_name,
            outline_3_var_lookup_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain_lookup_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
                const_str_plain_lookup_name
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
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 82;

        goto try_except_handler_10;
    }
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_11 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 82;
    tmp_assign_source_64 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_10;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_64;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    Py_XDECREF( outline_3_var___qualname__ );
    outline_3_var___qualname__ = NULL;

    Py_XDECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    Py_XDECREF( outline_3_var_lookup_name );
    outline_3_var_lookup_name = NULL;

    goto outline_result_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_3_var___qualname__ );
    outline_3_var___qualname__ = NULL;

    Py_XDECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    Py_XDECREF( outline_3_var_lookup_name );
    outline_3_var_lookup_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 82;
    goto try_except_handler_9;
    outline_result_4:;
    tmp_assign_source_60 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractMonth, tmp_assign_source_60 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Tried code:
    tmp_assign_source_65 = PyTuple_New( 1 );
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Extract );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Extract );
    }

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_65 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Extract" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;

        goto try_except_handler_11;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_assign_source_65, 0, tmp_tuple_element_12 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_65;

    tmp_assign_source_66 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_66;

    tmp_compare_left_9 = const_str_plain_metaclass;
    tmp_compare_right_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_9 );
    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    assert( !(tmp_cmp_In_9 == -1) );
    if ( tmp_cmp_In_9 == 1 )
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_dict_name_5 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_5 );
    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_11;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_cond_value_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_cond_value_5 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_11;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_subscribed_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_11;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_11;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_14:;
    condexpr_end_13:;
    tmp_bases_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_bases_name_5 );
    tmp_assign_source_67 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_5 );

        exception_lineno = 86;

        goto try_except_handler_11;
    }
    Py_DECREF( tmp_metaclass_name_5 );
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_67;

    tmp_compare_left_10 = const_str_plain_metaclass;
    tmp_compare_right_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_10 );
    tmp_cmp_In_10 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_10 == -1) );
    if ( tmp_cmp_In_10 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_11;
    }
    branch_no_5:;
    tmp_hasattr_source_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_5 );
    tmp_hasattr_attr_5 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_5, tmp_hasattr_attr_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_11;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_source_name_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_11;
    }
    tmp_args_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_13 = const_str_plain_ExtractDay;
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_13 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_13 );
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 86;
    tmp_assign_source_68 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_11;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_68 = PyDict_New();
    condexpr_end_15:;
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_68;

    tmp_set_locals = tmp_class_creation_5__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_5);
    locals_dict_5 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_70 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_4_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_70 );
    outline_4_var___module__ = tmp_assign_source_70;

    tmp_assign_source_71 = const_str_plain_ExtractDay;
    assert( outline_4_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_71 );
    outline_4_var___qualname__ = tmp_assign_source_71;

    tmp_assign_source_72 = const_str_plain_day;
    assert( outline_4_var_lookup_name == NULL );
    Py_INCREF( tmp_assign_source_72 );
    outline_4_var_lookup_name = tmp_assign_source_72;

    // Tried code:
    tmp_called_name_12 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_12 );
    tmp_args_name_10 = PyTuple_New( 3 );
    tmp_tuple_element_14 = const_str_plain_ExtractDay;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_14 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_14 );
    tmp_tuple_element_14 = locals_dict_5;
    Py_INCREF( tmp_tuple_element_14 );
    if ( outline_4_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_14,
            const_str_plain___qualname__,
            outline_4_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_14,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_14,
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
        Py_DECREF( tmp_args_name_10 );
        Py_DECREF( tmp_tuple_element_14 );

        exception_lineno = 86;

        goto try_except_handler_12;
    }
    if ( outline_4_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_14,
            const_str_plain___module__,
            outline_4_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_14,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_14,
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
        Py_DECREF( tmp_args_name_10 );
        Py_DECREF( tmp_tuple_element_14 );

        exception_lineno = 86;

        goto try_except_handler_12;
    }
    if ( outline_4_var_lookup_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_14,
            const_str_plain_lookup_name,
            outline_4_var_lookup_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_14,
            const_str_plain_lookup_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_14,
                const_str_plain_lookup_name
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
        Py_DECREF( tmp_args_name_10 );
        Py_DECREF( tmp_tuple_element_14 );

        exception_lineno = 86;

        goto try_except_handler_12;
    }
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_14 );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_10 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 86;
    tmp_assign_source_73 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto try_except_handler_12;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_73;

    tmp_outline_return_value_5 = outline_4_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_5 );
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    Py_XDECREF( outline_4_var___qualname__ );
    outline_4_var___qualname__ = NULL;

    Py_XDECREF( outline_4_var___module__ );
    outline_4_var___module__ = NULL;

    Py_XDECREF( outline_4_var_lookup_name );
    outline_4_var_lookup_name = NULL;

    goto outline_result_5;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_4_var___qualname__ );
    outline_4_var___qualname__ = NULL;

    Py_XDECREF( outline_4_var___module__ );
    outline_4_var___module__ = NULL;

    Py_XDECREF( outline_4_var_lookup_name );
    outline_4_var_lookup_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 86;
    goto try_except_handler_11;
    outline_result_5:;
    tmp_assign_source_69 = tmp_outline_return_value_5;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractDay, tmp_assign_source_69 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Tried code:
    tmp_assign_source_74 = PyTuple_New( 1 );
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Extract );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Extract );
    }

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_74 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Extract" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;

        goto try_except_handler_13;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_assign_source_74, 0, tmp_tuple_element_15 );
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_74;

    tmp_assign_source_75 = PyDict_New();
    assert( tmp_class_creation_6__class_decl_dict == NULL );
    tmp_class_creation_6__class_decl_dict = tmp_assign_source_75;

    tmp_compare_left_11 = const_str_plain_metaclass;
    tmp_compare_right_11 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_11 );
    tmp_cmp_In_11 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    assert( !(tmp_cmp_In_11 == -1) );
    if ( tmp_cmp_In_11 == 1 )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_dict_name_6 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;

        goto try_except_handler_13;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_cond_value_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_cond_value_6 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;

        goto try_except_handler_13;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    tmp_subscribed_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = const_int_0;
    tmp_type_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_type_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;

        goto try_except_handler_13;
    }
    tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_6 );
    Py_DECREF( tmp_type_arg_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;

        goto try_except_handler_13;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_6 );
    condexpr_end_17:;
    condexpr_end_16:;
    tmp_bases_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_bases_name_6 );
    tmp_assign_source_76 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_6 );

        exception_lineno = 90;

        goto try_except_handler_13;
    }
    Py_DECREF( tmp_metaclass_name_6 );
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_76;

    tmp_compare_left_12 = const_str_plain_metaclass;
    tmp_compare_right_12 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_12 );
    tmp_cmp_In_12 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    assert( !(tmp_cmp_In_12 == -1) );
    if ( tmp_cmp_In_12 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;

        goto try_except_handler_13;
    }
    branch_no_6:;
    tmp_hasattr_source_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_6 );
    tmp_hasattr_attr_6 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_6, tmp_hasattr_attr_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;

        goto try_except_handler_13;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_18;
    }
    else
    {
        goto condexpr_false_18;
    }
    condexpr_true_18:;
    tmp_source_name_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;

        goto try_except_handler_13;
    }
    tmp_args_name_11 = PyTuple_New( 2 );
    tmp_tuple_element_16 = const_str_plain_ExtractWeek;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_16 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_16 );
    tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_11 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 90;
    tmp_assign_source_77 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_name_11 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;

        goto try_except_handler_13;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_77 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_class_creation_6__prepared == NULL );
    tmp_class_creation_6__prepared = tmp_assign_source_77;

    tmp_set_locals = tmp_class_creation_6__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_6);
    locals_dict_6 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_79 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_5_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_79 );
    outline_5_var___module__ = tmp_assign_source_79;

    tmp_assign_source_80 = const_str_digest_d8ec081ce141ec638bcbde52b17c7baf;
    assert( outline_5_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_80 );
    outline_5_var___doc__ = tmp_assign_source_80;

    tmp_assign_source_81 = const_str_plain_ExtractWeek;
    assert( outline_5_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_81 );
    outline_5_var___qualname__ = tmp_assign_source_81;

    tmp_assign_source_82 = const_str_plain_week;
    assert( outline_5_var_lookup_name == NULL );
    Py_INCREF( tmp_assign_source_82 );
    outline_5_var_lookup_name = tmp_assign_source_82;

    // Tried code:
    tmp_called_name_14 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_14 );
    tmp_args_name_12 = PyTuple_New( 3 );
    tmp_tuple_element_17 = const_str_plain_ExtractWeek;
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_17 );
    tmp_tuple_element_17 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_17 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_17 );
    tmp_tuple_element_17 = locals_dict_6;
    Py_INCREF( tmp_tuple_element_17 );
    if ( outline_5_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain___qualname__,
            outline_5_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 90;

        goto try_except_handler_14;
    }
    if ( outline_5_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain___module__,
            outline_5_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 90;

        goto try_except_handler_14;
    }
    if ( outline_5_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain___doc__,
            outline_5_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 90;

        goto try_except_handler_14;
    }
    if ( outline_5_var_lookup_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain_lookup_name,
            outline_5_var_lookup_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain_lookup_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
                const_str_plain_lookup_name
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 90;

        goto try_except_handler_14;
    }
    PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_17 );
    tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_12 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 90;
    tmp_assign_source_83 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;

        goto try_except_handler_14;
    }
    assert( outline_5_var___class__ == NULL );
    outline_5_var___class__ = tmp_assign_source_83;

    tmp_outline_return_value_6 = outline_5_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_6 );
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
    Py_DECREF( outline_5_var___class__ );
    outline_5_var___class__ = NULL;

    Py_XDECREF( outline_5_var___qualname__ );
    outline_5_var___qualname__ = NULL;

    Py_XDECREF( outline_5_var___module__ );
    outline_5_var___module__ = NULL;

    Py_XDECREF( outline_5_var___doc__ );
    outline_5_var___doc__ = NULL;

    Py_XDECREF( outline_5_var_lookup_name );
    outline_5_var_lookup_name = NULL;

    goto outline_result_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_5_var___qualname__ );
    outline_5_var___qualname__ = NULL;

    Py_XDECREF( outline_5_var___module__ );
    outline_5_var___module__ = NULL;

    Py_XDECREF( outline_5_var___doc__ );
    outline_5_var___doc__ = NULL;

    Py_XDECREF( outline_5_var_lookup_name );
    outline_5_var_lookup_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto outline_exception_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 90;
    goto try_except_handler_13;
    outline_result_6:;
    tmp_assign_source_78 = tmp_outline_return_value_6;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractWeek, tmp_assign_source_78 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Tried code:
    tmp_assign_source_84 = PyTuple_New( 1 );
    tmp_tuple_element_18 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Extract );

    if (unlikely( tmp_tuple_element_18 == NULL ))
    {
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Extract );
    }

    if ( tmp_tuple_element_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_84 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Extract" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;

        goto try_except_handler_15;
    }

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_assign_source_84, 0, tmp_tuple_element_18 );
    assert( tmp_class_creation_7__bases == NULL );
    tmp_class_creation_7__bases = tmp_assign_source_84;

    tmp_assign_source_85 = PyDict_New();
    assert( tmp_class_creation_7__class_decl_dict == NULL );
    tmp_class_creation_7__class_decl_dict = tmp_assign_source_85;

    tmp_compare_left_13 = const_str_plain_metaclass;
    tmp_compare_right_13 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_13 );
    tmp_cmp_In_13 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    assert( !(tmp_cmp_In_13 == -1) );
    if ( tmp_cmp_In_13 == 1 )
    {
        goto condexpr_true_19;
    }
    else
    {
        goto condexpr_false_19;
    }
    condexpr_true_19:;
    tmp_dict_name_7 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto try_except_handler_15;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_cond_value_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_cond_value_7 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto try_except_handler_15;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto condexpr_true_20;
    }
    else
    {
        goto condexpr_false_20;
    }
    condexpr_true_20:;
    tmp_subscribed_name_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_7 = const_int_0;
    tmp_type_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_type_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto try_except_handler_15;
    }
    tmp_metaclass_name_7 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto try_except_handler_15;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_metaclass_name_7 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_7 );
    condexpr_end_20:;
    condexpr_end_19:;
    tmp_bases_name_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_bases_name_7 );
    tmp_assign_source_86 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_7 );

        exception_lineno = 98;

        goto try_except_handler_15;
    }
    Py_DECREF( tmp_metaclass_name_7 );
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_86;

    tmp_compare_left_14 = const_str_plain_metaclass;
    tmp_compare_right_14 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_14 );
    tmp_cmp_In_14 = PySequence_Contains( tmp_compare_right_14, tmp_compare_left_14 );
    assert( !(tmp_cmp_In_14 == -1) );
    if ( tmp_cmp_In_14 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto try_except_handler_15;
    }
    branch_no_7:;
    tmp_hasattr_source_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_7 );
    tmp_hasattr_attr_7 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_7, tmp_hasattr_attr_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto try_except_handler_15;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_21;
    }
    else
    {
        goto condexpr_false_21;
    }
    condexpr_true_21:;
    tmp_source_name_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto try_except_handler_15;
    }
    tmp_args_name_13 = PyTuple_New( 2 );
    tmp_tuple_element_19 = const_str_plain_ExtractWeekDay;
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_19 );
    tmp_tuple_element_19 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_tuple_element_19 );
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_13, 1, tmp_tuple_element_19 );
    tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_13 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 98;
    tmp_assign_source_87 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_name_13 );
    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto try_except_handler_15;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_assign_source_87 = PyDict_New();
    condexpr_end_21:;
    assert( tmp_class_creation_7__prepared == NULL );
    tmp_class_creation_7__prepared = tmp_assign_source_87;

    tmp_set_locals = tmp_class_creation_7__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_7);
    locals_dict_7 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_89 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_6_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_89 );
    outline_6_var___module__ = tmp_assign_source_89;

    tmp_assign_source_90 = const_str_digest_396cd331b099e141f910485b2e00fc01;
    assert( outline_6_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_90 );
    outline_6_var___doc__ = tmp_assign_source_90;

    tmp_assign_source_91 = const_str_plain_ExtractWeekDay;
    assert( outline_6_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_91 );
    outline_6_var___qualname__ = tmp_assign_source_91;

    tmp_assign_source_92 = const_str_plain_week_day;
    assert( outline_6_var_lookup_name == NULL );
    Py_INCREF( tmp_assign_source_92 );
    outline_6_var_lookup_name = tmp_assign_source_92;

    // Tried code:
    tmp_called_name_16 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_16 );
    tmp_args_name_14 = PyTuple_New( 3 );
    tmp_tuple_element_20 = const_str_plain_ExtractWeekDay;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_tuple_element_20 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_20 );
    tmp_tuple_element_20 = locals_dict_7;
    Py_INCREF( tmp_tuple_element_20 );
    if ( outline_6_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain___qualname__,
            outline_6_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
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
        Py_DECREF( tmp_args_name_14 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 98;

        goto try_except_handler_16;
    }
    if ( outline_6_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain___module__,
            outline_6_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
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
        Py_DECREF( tmp_args_name_14 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 98;

        goto try_except_handler_16;
    }
    if ( outline_6_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain___doc__,
            outline_6_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
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
        Py_DECREF( tmp_args_name_14 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 98;

        goto try_except_handler_16;
    }
    if ( outline_6_var_lookup_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain_lookup_name,
            outline_6_var_lookup_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain_lookup_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
                const_str_plain_lookup_name
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
        Py_DECREF( tmp_args_name_14 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 98;

        goto try_except_handler_16;
    }
    PyTuple_SET_ITEM( tmp_args_name_14, 2, tmp_tuple_element_20 );
    tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_14 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 98;
    tmp_assign_source_93 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_14, tmp_kw_name_14 );
    Py_DECREF( tmp_args_name_14 );
    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto try_except_handler_16;
    }
    assert( outline_6_var___class__ == NULL );
    outline_6_var___class__ = tmp_assign_source_93;

    tmp_outline_return_value_7 = outline_6_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_7 );
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_16;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    CHECK_OBJECT( (PyObject *)outline_6_var___class__ );
    Py_DECREF( outline_6_var___class__ );
    outline_6_var___class__ = NULL;

    Py_XDECREF( outline_6_var___qualname__ );
    outline_6_var___qualname__ = NULL;

    Py_XDECREF( outline_6_var___module__ );
    outline_6_var___module__ = NULL;

    Py_XDECREF( outline_6_var___doc__ );
    outline_6_var___doc__ = NULL;

    Py_XDECREF( outline_6_var_lookup_name );
    outline_6_var_lookup_name = NULL;

    goto outline_result_7;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_6_var___qualname__ );
    outline_6_var___qualname__ = NULL;

    Py_XDECREF( outline_6_var___module__ );
    outline_6_var___module__ = NULL;

    Py_XDECREF( outline_6_var___doc__ );
    outline_6_var___doc__ = NULL;

    Py_XDECREF( outline_6_var_lookup_name );
    outline_6_var_lookup_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto outline_exception_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 98;
    goto try_except_handler_15;
    outline_result_7:;
    tmp_assign_source_88 = tmp_outline_return_value_7;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractWeekDay, tmp_assign_source_88 );
    goto try_end_9;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Tried code:
    tmp_assign_source_94 = PyTuple_New( 1 );
    tmp_tuple_element_21 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Extract );

    if (unlikely( tmp_tuple_element_21 == NULL ))
    {
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Extract );
    }

    if ( tmp_tuple_element_21 == NULL )
    {
        Py_DECREF( tmp_assign_source_94 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Extract" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;

        goto try_except_handler_17;
    }

    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_assign_source_94, 0, tmp_tuple_element_21 );
    assert( tmp_class_creation_8__bases == NULL );
    tmp_class_creation_8__bases = tmp_assign_source_94;

    tmp_assign_source_95 = PyDict_New();
    assert( tmp_class_creation_8__class_decl_dict == NULL );
    tmp_class_creation_8__class_decl_dict = tmp_assign_source_95;

    tmp_compare_left_15 = const_str_plain_metaclass;
    tmp_compare_right_15 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_15 );
    tmp_cmp_In_15 = PySequence_Contains( tmp_compare_right_15, tmp_compare_left_15 );
    assert( !(tmp_cmp_In_15 == -1) );
    if ( tmp_cmp_In_15 == 1 )
    {
        goto condexpr_true_22;
    }
    else
    {
        goto condexpr_false_22;
    }
    condexpr_true_22:;
    tmp_dict_name_8 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_8 );
    tmp_key_name_8 = const_str_plain_metaclass;
    tmp_metaclass_name_8 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;

        goto try_except_handler_17;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_cond_value_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_cond_value_8 );
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;

        goto try_except_handler_17;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto condexpr_true_23;
    }
    else
    {
        goto condexpr_false_23;
    }
    condexpr_true_23:;
    tmp_subscribed_name_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_subscribed_name_8 );
    tmp_subscript_name_8 = const_int_0;
    tmp_type_arg_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_type_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;

        goto try_except_handler_17;
    }
    tmp_metaclass_name_8 = BUILTIN_TYPE1( tmp_type_arg_8 );
    Py_DECREF( tmp_type_arg_8 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;

        goto try_except_handler_17;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_metaclass_name_8 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_8 );
    condexpr_end_23:;
    condexpr_end_22:;
    tmp_bases_name_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_bases_name_8 );
    tmp_assign_source_96 = SELECT_METACLASS( tmp_metaclass_name_8, tmp_bases_name_8 );
    if ( tmp_assign_source_96 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_8 );

        exception_lineno = 107;

        goto try_except_handler_17;
    }
    Py_DECREF( tmp_metaclass_name_8 );
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_96;

    tmp_compare_left_16 = const_str_plain_metaclass;
    tmp_compare_right_16 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_16 );
    tmp_cmp_In_16 = PySequence_Contains( tmp_compare_right_16, tmp_compare_left_16 );
    assert( !(tmp_cmp_In_16 == -1) );
    if ( tmp_cmp_In_16 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;

        goto try_except_handler_17;
    }
    branch_no_8:;
    tmp_hasattr_source_8 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_8 );
    tmp_hasattr_attr_8 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_8, tmp_hasattr_attr_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;

        goto try_except_handler_17;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_24;
    }
    else
    {
        goto condexpr_false_24;
    }
    condexpr_true_24:;
    tmp_source_name_8 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;

        goto try_except_handler_17;
    }
    tmp_args_name_15 = PyTuple_New( 2 );
    tmp_tuple_element_22 = const_str_plain_ExtractHour;
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_15, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_tuple_element_22 );
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_15, 1, tmp_tuple_element_22 );
    tmp_kw_name_15 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_15 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 107;
    tmp_assign_source_97 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_15, tmp_kw_name_15 );
    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_name_15 );
    if ( tmp_assign_source_97 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;

        goto try_except_handler_17;
    }
    goto condexpr_end_24;
    condexpr_false_24:;
    tmp_assign_source_97 = PyDict_New();
    condexpr_end_24:;
    assert( tmp_class_creation_8__prepared == NULL );
    tmp_class_creation_8__prepared = tmp_assign_source_97;

    tmp_set_locals = tmp_class_creation_8__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_8);
    locals_dict_8 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_99 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_7_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_99 );
    outline_7_var___module__ = tmp_assign_source_99;

    tmp_assign_source_100 = const_str_plain_ExtractHour;
    assert( outline_7_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_100 );
    outline_7_var___qualname__ = tmp_assign_source_100;

    tmp_assign_source_101 = const_str_plain_hour;
    assert( outline_7_var_lookup_name == NULL );
    Py_INCREF( tmp_assign_source_101 );
    outline_7_var_lookup_name = tmp_assign_source_101;

    // Tried code:
    tmp_called_name_18 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_called_name_18 );
    tmp_args_name_16 = PyTuple_New( 3 );
    tmp_tuple_element_23 = const_str_plain_ExtractHour;
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_args_name_16, 0, tmp_tuple_element_23 );
    tmp_tuple_element_23 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_tuple_element_23 );
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_args_name_16, 1, tmp_tuple_element_23 );
    tmp_tuple_element_23 = locals_dict_8;
    Py_INCREF( tmp_tuple_element_23 );
    if ( outline_7_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_23,
            const_str_plain___qualname__,
            outline_7_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_23,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_23,
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
        Py_DECREF( tmp_args_name_16 );
        Py_DECREF( tmp_tuple_element_23 );

        exception_lineno = 107;

        goto try_except_handler_18;
    }
    if ( outline_7_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_23,
            const_str_plain___module__,
            outline_7_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_23,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_23,
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
        Py_DECREF( tmp_args_name_16 );
        Py_DECREF( tmp_tuple_element_23 );

        exception_lineno = 107;

        goto try_except_handler_18;
    }
    if ( outline_7_var_lookup_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_23,
            const_str_plain_lookup_name,
            outline_7_var_lookup_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_23,
            const_str_plain_lookup_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_23,
                const_str_plain_lookup_name
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
        Py_DECREF( tmp_args_name_16 );
        Py_DECREF( tmp_tuple_element_23 );

        exception_lineno = 107;

        goto try_except_handler_18;
    }
    PyTuple_SET_ITEM( tmp_args_name_16, 2, tmp_tuple_element_23 );
    tmp_kw_name_16 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_16 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 107;
    tmp_assign_source_102 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_16, tmp_kw_name_16 );
    Py_DECREF( tmp_args_name_16 );
    if ( tmp_assign_source_102 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;

        goto try_except_handler_18;
    }
    assert( outline_7_var___class__ == NULL );
    outline_7_var___class__ = tmp_assign_source_102;

    tmp_outline_return_value_8 = outline_7_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_8 );
    Py_INCREF( tmp_outline_return_value_8 );
    goto try_return_handler_18;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    CHECK_OBJECT( (PyObject *)outline_7_var___class__ );
    Py_DECREF( outline_7_var___class__ );
    outline_7_var___class__ = NULL;

    Py_XDECREF( outline_7_var___qualname__ );
    outline_7_var___qualname__ = NULL;

    Py_XDECREF( outline_7_var___module__ );
    outline_7_var___module__ = NULL;

    Py_XDECREF( outline_7_var_lookup_name );
    outline_7_var_lookup_name = NULL;

    goto outline_result_8;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_7_var___qualname__ );
    outline_7_var___qualname__ = NULL;

    Py_XDECREF( outline_7_var___module__ );
    outline_7_var___module__ = NULL;

    Py_XDECREF( outline_7_var_lookup_name );
    outline_7_var_lookup_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto outline_exception_8;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_8:;
    exception_lineno = 107;
    goto try_except_handler_17;
    outline_result_8:;
    tmp_assign_source_98 = tmp_outline_return_value_8;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractHour, tmp_assign_source_98 );
    goto try_end_10;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Tried code:
    tmp_assign_source_103 = PyTuple_New( 1 );
    tmp_tuple_element_24 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Extract );

    if (unlikely( tmp_tuple_element_24 == NULL ))
    {
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Extract );
    }

    if ( tmp_tuple_element_24 == NULL )
    {
        Py_DECREF( tmp_assign_source_103 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Extract" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;

        goto try_except_handler_19;
    }

    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_assign_source_103, 0, tmp_tuple_element_24 );
    assert( tmp_class_creation_9__bases == NULL );
    tmp_class_creation_9__bases = tmp_assign_source_103;

    tmp_assign_source_104 = PyDict_New();
    assert( tmp_class_creation_9__class_decl_dict == NULL );
    tmp_class_creation_9__class_decl_dict = tmp_assign_source_104;

    tmp_compare_left_17 = const_str_plain_metaclass;
    tmp_compare_right_17 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_17 );
    tmp_cmp_In_17 = PySequence_Contains( tmp_compare_right_17, tmp_compare_left_17 );
    assert( !(tmp_cmp_In_17 == -1) );
    if ( tmp_cmp_In_17 == 1 )
    {
        goto condexpr_true_25;
    }
    else
    {
        goto condexpr_false_25;
    }
    condexpr_true_25:;
    tmp_dict_name_9 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_metaclass_name_9 = DICT_GET_ITEM( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_19;
    }
    goto condexpr_end_25;
    condexpr_false_25:;
    tmp_cond_value_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_cond_value_9 );
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_19;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto condexpr_true_26;
    }
    else
    {
        goto condexpr_false_26;
    }
    condexpr_true_26:;
    tmp_subscribed_name_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_subscribed_name_9 );
    tmp_subscript_name_9 = const_int_0;
    tmp_type_arg_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_type_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_19;
    }
    tmp_metaclass_name_9 = BUILTIN_TYPE1( tmp_type_arg_9 );
    Py_DECREF( tmp_type_arg_9 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_19;
    }
    goto condexpr_end_26;
    condexpr_false_26:;
    tmp_metaclass_name_9 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_9 );
    condexpr_end_26:;
    condexpr_end_25:;
    tmp_bases_name_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_bases_name_9 );
    tmp_assign_source_105 = SELECT_METACLASS( tmp_metaclass_name_9, tmp_bases_name_9 );
    if ( tmp_assign_source_105 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_9 );

        exception_lineno = 111;

        goto try_except_handler_19;
    }
    Py_DECREF( tmp_metaclass_name_9 );
    assert( tmp_class_creation_9__metaclass == NULL );
    tmp_class_creation_9__metaclass = tmp_assign_source_105;

    tmp_compare_left_18 = const_str_plain_metaclass;
    tmp_compare_right_18 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_18 );
    tmp_cmp_In_18 = PySequence_Contains( tmp_compare_right_18, tmp_compare_left_18 );
    assert( !(tmp_cmp_In_18 == -1) );
    if ( tmp_cmp_In_18 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_19;
    }
    branch_no_9:;
    tmp_hasattr_source_9 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_9 );
    tmp_hasattr_attr_9 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_9, tmp_hasattr_attr_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_19;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_27;
    }
    else
    {
        goto condexpr_false_27;
    }
    condexpr_true_27:;
    tmp_source_name_9 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___prepare__ );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_19;
    }
    tmp_args_name_17 = PyTuple_New( 2 );
    tmp_tuple_element_25 = const_str_plain_ExtractMinute;
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_args_name_17, 0, tmp_tuple_element_25 );
    tmp_tuple_element_25 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_tuple_element_25 );
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_args_name_17, 1, tmp_tuple_element_25 );
    tmp_kw_name_17 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_17 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 111;
    tmp_assign_source_106 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_17, tmp_kw_name_17 );
    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_name_17 );
    if ( tmp_assign_source_106 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_19;
    }
    goto condexpr_end_27;
    condexpr_false_27:;
    tmp_assign_source_106 = PyDict_New();
    condexpr_end_27:;
    assert( tmp_class_creation_9__prepared == NULL );
    tmp_class_creation_9__prepared = tmp_assign_source_106;

    tmp_set_locals = tmp_class_creation_9__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_9);
    locals_dict_9 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_108 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_8_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_108 );
    outline_8_var___module__ = tmp_assign_source_108;

    tmp_assign_source_109 = const_str_plain_ExtractMinute;
    assert( outline_8_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_109 );
    outline_8_var___qualname__ = tmp_assign_source_109;

    tmp_assign_source_110 = const_str_plain_minute;
    assert( outline_8_var_lookup_name == NULL );
    Py_INCREF( tmp_assign_source_110 );
    outline_8_var_lookup_name = tmp_assign_source_110;

    // Tried code:
    tmp_called_name_20 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_called_name_20 );
    tmp_args_name_18 = PyTuple_New( 3 );
    tmp_tuple_element_26 = const_str_plain_ExtractMinute;
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_18, 0, tmp_tuple_element_26 );
    tmp_tuple_element_26 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_tuple_element_26 );
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_18, 1, tmp_tuple_element_26 );
    tmp_tuple_element_26 = locals_dict_9;
    Py_INCREF( tmp_tuple_element_26 );
    if ( outline_8_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_26,
            const_str_plain___qualname__,
            outline_8_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_26,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_26,
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
        Py_DECREF( tmp_args_name_18 );
        Py_DECREF( tmp_tuple_element_26 );

        exception_lineno = 111;

        goto try_except_handler_20;
    }
    if ( outline_8_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_26,
            const_str_plain___module__,
            outline_8_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_26,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_26,
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
        Py_DECREF( tmp_args_name_18 );
        Py_DECREF( tmp_tuple_element_26 );

        exception_lineno = 111;

        goto try_except_handler_20;
    }
    if ( outline_8_var_lookup_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_26,
            const_str_plain_lookup_name,
            outline_8_var_lookup_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_26,
            const_str_plain_lookup_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_26,
                const_str_plain_lookup_name
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
        Py_DECREF( tmp_args_name_18 );
        Py_DECREF( tmp_tuple_element_26 );

        exception_lineno = 111;

        goto try_except_handler_20;
    }
    PyTuple_SET_ITEM( tmp_args_name_18, 2, tmp_tuple_element_26 );
    tmp_kw_name_18 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_18 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 111;
    tmp_assign_source_111 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_18, tmp_kw_name_18 );
    Py_DECREF( tmp_args_name_18 );
    if ( tmp_assign_source_111 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_20;
    }
    assert( outline_8_var___class__ == NULL );
    outline_8_var___class__ = tmp_assign_source_111;

    tmp_outline_return_value_9 = outline_8_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_9 );
    Py_INCREF( tmp_outline_return_value_9 );
    goto try_return_handler_20;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_20:;
    CHECK_OBJECT( (PyObject *)outline_8_var___class__ );
    Py_DECREF( outline_8_var___class__ );
    outline_8_var___class__ = NULL;

    Py_XDECREF( outline_8_var___qualname__ );
    outline_8_var___qualname__ = NULL;

    Py_XDECREF( outline_8_var___module__ );
    outline_8_var___module__ = NULL;

    Py_XDECREF( outline_8_var_lookup_name );
    outline_8_var_lookup_name = NULL;

    goto outline_result_9;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_8_var___qualname__ );
    outline_8_var___qualname__ = NULL;

    Py_XDECREF( outline_8_var___module__ );
    outline_8_var___module__ = NULL;

    Py_XDECREF( outline_8_var_lookup_name );
    outline_8_var_lookup_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto outline_exception_9;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_9:;
    exception_lineno = 111;
    goto try_except_handler_19;
    outline_result_9:;
    tmp_assign_source_107 = tmp_outline_return_value_9;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractMinute, tmp_assign_source_107 );
    goto try_end_11;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Tried code:
    tmp_assign_source_112 = PyTuple_New( 1 );
    tmp_tuple_element_27 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Extract );

    if (unlikely( tmp_tuple_element_27 == NULL ))
    {
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Extract );
    }

    if ( tmp_tuple_element_27 == NULL )
    {
        Py_DECREF( tmp_assign_source_112 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Extract" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;

        goto try_except_handler_21;
    }

    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_assign_source_112, 0, tmp_tuple_element_27 );
    assert( tmp_class_creation_10__bases == NULL );
    tmp_class_creation_10__bases = tmp_assign_source_112;

    tmp_assign_source_113 = PyDict_New();
    assert( tmp_class_creation_10__class_decl_dict == NULL );
    tmp_class_creation_10__class_decl_dict = tmp_assign_source_113;

    tmp_compare_left_19 = const_str_plain_metaclass;
    tmp_compare_right_19 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_19 );
    tmp_cmp_In_19 = PySequence_Contains( tmp_compare_right_19, tmp_compare_left_19 );
    assert( !(tmp_cmp_In_19 == -1) );
    if ( tmp_cmp_In_19 == 1 )
    {
        goto condexpr_true_28;
    }
    else
    {
        goto condexpr_false_28;
    }
    condexpr_true_28:;
    tmp_dict_name_10 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_10 );
    tmp_key_name_10 = const_str_plain_metaclass;
    tmp_metaclass_name_10 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_21;
    }
    goto condexpr_end_28;
    condexpr_false_28:;
    tmp_cond_value_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_cond_value_10 );
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_21;
    }
    if ( tmp_cond_truth_10 == 1 )
    {
        goto condexpr_true_29;
    }
    else
    {
        goto condexpr_false_29;
    }
    condexpr_true_29:;
    tmp_subscribed_name_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_subscribed_name_10 );
    tmp_subscript_name_10 = const_int_0;
    tmp_type_arg_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_type_arg_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_21;
    }
    tmp_metaclass_name_10 = BUILTIN_TYPE1( tmp_type_arg_10 );
    Py_DECREF( tmp_type_arg_10 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_21;
    }
    goto condexpr_end_29;
    condexpr_false_29:;
    tmp_metaclass_name_10 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_10 );
    condexpr_end_29:;
    condexpr_end_28:;
    tmp_bases_name_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_bases_name_10 );
    tmp_assign_source_114 = SELECT_METACLASS( tmp_metaclass_name_10, tmp_bases_name_10 );
    if ( tmp_assign_source_114 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_10 );

        exception_lineno = 115;

        goto try_except_handler_21;
    }
    Py_DECREF( tmp_metaclass_name_10 );
    assert( tmp_class_creation_10__metaclass == NULL );
    tmp_class_creation_10__metaclass = tmp_assign_source_114;

    tmp_compare_left_20 = const_str_plain_metaclass;
    tmp_compare_right_20 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_20 );
    tmp_cmp_In_20 = PySequence_Contains( tmp_compare_right_20, tmp_compare_left_20 );
    assert( !(tmp_cmp_In_20 == -1) );
    if ( tmp_cmp_In_20 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_21;
    }
    branch_no_10:;
    tmp_hasattr_source_10 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_10 );
    tmp_hasattr_attr_10 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_10, tmp_hasattr_attr_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_21;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_30;
    }
    else
    {
        goto condexpr_false_30;
    }
    condexpr_true_30:;
    tmp_source_name_10 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_21;
    }
    tmp_args_name_19 = PyTuple_New( 2 );
    tmp_tuple_element_28 = const_str_plain_ExtractSecond;
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_19, 0, tmp_tuple_element_28 );
    tmp_tuple_element_28 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_tuple_element_28 );
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_19, 1, tmp_tuple_element_28 );
    tmp_kw_name_19 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_19 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 115;
    tmp_assign_source_115 = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_19, tmp_kw_name_19 );
    Py_DECREF( tmp_called_name_21 );
    Py_DECREF( tmp_args_name_19 );
    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_21;
    }
    goto condexpr_end_30;
    condexpr_false_30:;
    tmp_assign_source_115 = PyDict_New();
    condexpr_end_30:;
    assert( tmp_class_creation_10__prepared == NULL );
    tmp_class_creation_10__prepared = tmp_assign_source_115;

    tmp_set_locals = tmp_class_creation_10__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_10);
    locals_dict_10 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_117 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_9_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_117 );
    outline_9_var___module__ = tmp_assign_source_117;

    tmp_assign_source_118 = const_str_plain_ExtractSecond;
    assert( outline_9_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_118 );
    outline_9_var___qualname__ = tmp_assign_source_118;

    tmp_assign_source_119 = const_str_plain_second;
    assert( outline_9_var_lookup_name == NULL );
    Py_INCREF( tmp_assign_source_119 );
    outline_9_var_lookup_name = tmp_assign_source_119;

    // Tried code:
    tmp_called_name_22 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_called_name_22 );
    tmp_args_name_20 = PyTuple_New( 3 );
    tmp_tuple_element_29 = const_str_plain_ExtractSecond;
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_args_name_20, 0, tmp_tuple_element_29 );
    tmp_tuple_element_29 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_tuple_element_29 );
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_args_name_20, 1, tmp_tuple_element_29 );
    tmp_tuple_element_29 = locals_dict_10;
    Py_INCREF( tmp_tuple_element_29 );
    if ( outline_9_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_29,
            const_str_plain___qualname__,
            outline_9_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_29,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_29,
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
        Py_DECREF( tmp_args_name_20 );
        Py_DECREF( tmp_tuple_element_29 );

        exception_lineno = 115;

        goto try_except_handler_22;
    }
    if ( outline_9_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_29,
            const_str_plain___module__,
            outline_9_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_29,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_29,
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
        Py_DECREF( tmp_args_name_20 );
        Py_DECREF( tmp_tuple_element_29 );

        exception_lineno = 115;

        goto try_except_handler_22;
    }
    if ( outline_9_var_lookup_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_29,
            const_str_plain_lookup_name,
            outline_9_var_lookup_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_29,
            const_str_plain_lookup_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_29,
                const_str_plain_lookup_name
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
        Py_DECREF( tmp_args_name_20 );
        Py_DECREF( tmp_tuple_element_29 );

        exception_lineno = 115;

        goto try_except_handler_22;
    }
    PyTuple_SET_ITEM( tmp_args_name_20, 2, tmp_tuple_element_29 );
    tmp_kw_name_20 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_20 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 115;
    tmp_assign_source_120 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_20, tmp_kw_name_20 );
    Py_DECREF( tmp_args_name_20 );
    if ( tmp_assign_source_120 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_22;
    }
    assert( outline_9_var___class__ == NULL );
    outline_9_var___class__ = tmp_assign_source_120;

    tmp_outline_return_value_10 = outline_9_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_10 );
    Py_INCREF( tmp_outline_return_value_10 );
    goto try_return_handler_22;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_22:;
    CHECK_OBJECT( (PyObject *)outline_9_var___class__ );
    Py_DECREF( outline_9_var___class__ );
    outline_9_var___class__ = NULL;

    Py_XDECREF( outline_9_var___qualname__ );
    outline_9_var___qualname__ = NULL;

    Py_XDECREF( outline_9_var___module__ );
    outline_9_var___module__ = NULL;

    Py_XDECREF( outline_9_var_lookup_name );
    outline_9_var_lookup_name = NULL;

    goto outline_result_10;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_9_var___qualname__ );
    outline_9_var___qualname__ = NULL;

    Py_XDECREF( outline_9_var___module__ );
    outline_9_var___module__ = NULL;

    Py_XDECREF( outline_9_var_lookup_name );
    outline_9_var_lookup_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto outline_exception_10;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_10:;
    exception_lineno = 115;
    goto try_except_handler_21;
    outline_result_10:;
    tmp_assign_source_116 = tmp_outline_return_value_10;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractSecond, tmp_assign_source_116 );
    goto try_end_12;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateField );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateField );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;

        goto frame_exception_exit_1;
    }

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_register_lookup );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractYear );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractYear );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractYear" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 119;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateField );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateField );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;

        goto frame_exception_exit_1;
    }

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_register_lookup );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractMonth );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractMonth );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_24 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractMonth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 120;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_called_name_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateField );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateField );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;

        goto frame_exception_exit_1;
    }

    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_register_lookup );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractDay );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractDay );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_25 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractDay" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_called_name_25 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateField );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateField );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;

        goto frame_exception_exit_1;
    }

    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_register_lookup );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractWeekDay );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractWeekDay );
    }

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_26 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractWeekDay" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateField );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateField );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;

        goto frame_exception_exit_1;
    }

    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_register_lookup );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractWeek );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractWeek );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractWeek" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 123;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_called_name_27 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TimeField );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeField );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;

        goto frame_exception_exit_1;
    }

    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_register_lookup );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractHour );

    if (unlikely( tmp_args_element_name_9 == NULL ))
    {
        tmp_args_element_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractHour );
    }

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractHour" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
    }

    Py_DECREF( tmp_called_name_28 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TimeField );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeField );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;

        goto frame_exception_exit_1;
    }

    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_register_lookup );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_10 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractMinute );

    if (unlikely( tmp_args_element_name_10 == NULL ))
    {
        tmp_args_element_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractMinute );
    }

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractMinute" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 126;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
    }

    Py_DECREF( tmp_called_name_29 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TimeField );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeField );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;

        goto frame_exception_exit_1;
    }

    tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_register_lookup );
    if ( tmp_called_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractSecond );

    if (unlikely( tmp_args_element_name_11 == NULL ))
    {
        tmp_args_element_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractSecond );
    }

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractSecond" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 127;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_called_name_30 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateTimeField );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateTimeField );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateTimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;

        goto frame_exception_exit_1;
    }

    tmp_called_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_register_lookup );
    if ( tmp_called_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractHour );

    if (unlikely( tmp_args_element_name_12 == NULL ))
    {
        tmp_args_element_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractHour );
    }

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_31 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractHour" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
    }

    Py_DECREF( tmp_called_name_31 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateTimeField );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateTimeField );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateTimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;

        goto frame_exception_exit_1;
    }

    tmp_called_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_register_lookup );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_13 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractMinute );

    if (unlikely( tmp_args_element_name_13 == NULL ))
    {
        tmp_args_element_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractMinute );
    }

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractMinute" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 130;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
    }

    Py_DECREF( tmp_called_name_32 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateTimeField );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateTimeField );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateTimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;

        goto frame_exception_exit_1;
    }

    tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_register_lookup );
    if ( tmp_called_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractSecond );

    if (unlikely( tmp_args_element_name_14 == NULL ))
    {
        tmp_args_element_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractSecond );
    }

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_33 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractSecond" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, call_args );
    }

    Py_DECREF( tmp_called_name_33 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractYear );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractYear );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractYear" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;

        goto frame_exception_exit_1;
    }

    tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_register_lookup );
    if ( tmp_called_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_15 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_YearExact );

    if (unlikely( tmp_args_element_name_15 == NULL ))
    {
        tmp_args_element_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_YearExact );
    }

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "YearExact" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
    }

    Py_DECREF( tmp_called_name_34 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractYear );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractYear );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractYear" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;

        goto frame_exception_exit_1;
    }

    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_register_lookup );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_16 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_YearGt );

    if (unlikely( tmp_args_element_name_16 == NULL ))
    {
        tmp_args_element_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_YearGt );
    }

    if ( tmp_args_element_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "YearGt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 134;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, call_args );
    }

    Py_DECREF( tmp_called_name_35 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractYear );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractYear );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractYear" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;

        goto frame_exception_exit_1;
    }

    tmp_called_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_register_lookup );
    if ( tmp_called_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_17 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_YearGte );

    if (unlikely( tmp_args_element_name_17 == NULL ))
    {
        tmp_args_element_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_YearGte );
    }

    if ( tmp_args_element_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "YearGte" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 135;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, call_args );
    }

    Py_DECREF( tmp_called_name_36 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractYear );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractYear );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractYear" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;

        goto frame_exception_exit_1;
    }

    tmp_called_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_register_lookup );
    if ( tmp_called_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_18 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_YearLt );

    if (unlikely( tmp_args_element_name_18 == NULL ))
    {
        tmp_args_element_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_YearLt );
    }

    if ( tmp_args_element_name_18 == NULL )
    {
        Py_DECREF( tmp_called_name_37 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "YearLt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 136;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, call_args );
    }

    Py_DECREF( tmp_called_name_37 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_ExtractYear );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractYear );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtractYear" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;

        goto frame_exception_exit_1;
    }

    tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_register_lookup );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_19 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_YearLte );

    if (unlikely( tmp_args_element_name_19 == NULL ))
    {
        tmp_args_element_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_YearLte );
    }

    if ( tmp_args_element_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "YearLte" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 137;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_called_name_38 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_assign_source_121 = PyTuple_New( 2 );
    tmp_tuple_element_30 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TimezoneMixin );

    if (unlikely( tmp_tuple_element_30 == NULL ))
    {
        tmp_tuple_element_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimezoneMixin );
    }

    if ( tmp_tuple_element_30 == NULL )
    {
        Py_DECREF( tmp_assign_source_121 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimezoneMixin" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;

        goto try_except_handler_23;
    }

    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_assign_source_121, 0, tmp_tuple_element_30 );
    tmp_tuple_element_30 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Transform );

    if (unlikely( tmp_tuple_element_30 == NULL ))
    {
        tmp_tuple_element_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Transform );
    }

    if ( tmp_tuple_element_30 == NULL )
    {
        Py_DECREF( tmp_assign_source_121 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Transform" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;

        goto try_except_handler_23;
    }

    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_assign_source_121, 1, tmp_tuple_element_30 );
    assert( tmp_class_creation_11__bases == NULL );
    tmp_class_creation_11__bases = tmp_assign_source_121;

    tmp_assign_source_122 = PyDict_New();
    assert( tmp_class_creation_11__class_decl_dict == NULL );
    tmp_class_creation_11__class_decl_dict = tmp_assign_source_122;

    tmp_compare_left_21 = const_str_plain_metaclass;
    tmp_compare_right_21 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_21 );
    tmp_cmp_In_21 = PySequence_Contains( tmp_compare_right_21, tmp_compare_left_21 );
    assert( !(tmp_cmp_In_21 == -1) );
    if ( tmp_cmp_In_21 == 1 )
    {
        goto condexpr_true_31;
    }
    else
    {
        goto condexpr_false_31;
    }
    condexpr_true_31:;
    tmp_dict_name_11 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_11 );
    tmp_key_name_11 = const_str_plain_metaclass;
    tmp_metaclass_name_11 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_metaclass_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_23;
    }
    goto condexpr_end_31;
    condexpr_false_31:;
    tmp_cond_value_11 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_cond_value_11 );
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_23;
    }
    if ( tmp_cond_truth_11 == 1 )
    {
        goto condexpr_true_32;
    }
    else
    {
        goto condexpr_false_32;
    }
    condexpr_true_32:;
    tmp_subscribed_name_11 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_subscribed_name_11 );
    tmp_subscript_name_11 = const_int_0;
    tmp_type_arg_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_type_arg_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_23;
    }
    tmp_metaclass_name_11 = BUILTIN_TYPE1( tmp_type_arg_11 );
    Py_DECREF( tmp_type_arg_11 );
    if ( tmp_metaclass_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_23;
    }
    goto condexpr_end_32;
    condexpr_false_32:;
    tmp_metaclass_name_11 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_11 );
    condexpr_end_32:;
    condexpr_end_31:;
    tmp_bases_name_11 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_bases_name_11 );
    tmp_assign_source_123 = SELECT_METACLASS( tmp_metaclass_name_11, tmp_bases_name_11 );
    if ( tmp_assign_source_123 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_11 );

        exception_lineno = 140;

        goto try_except_handler_23;
    }
    Py_DECREF( tmp_metaclass_name_11 );
    assert( tmp_class_creation_11__metaclass == NULL );
    tmp_class_creation_11__metaclass = tmp_assign_source_123;

    tmp_compare_left_22 = const_str_plain_metaclass;
    tmp_compare_right_22 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_22 );
    tmp_cmp_In_22 = PySequence_Contains( tmp_compare_right_22, tmp_compare_left_22 );
    assert( !(tmp_cmp_In_22 == -1) );
    if ( tmp_cmp_In_22 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_dictdel_dict = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_23;
    }
    branch_no_11:;
    tmp_hasattr_source_11 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_11 );
    tmp_hasattr_attr_11 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_11, tmp_hasattr_attr_11 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_23;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_33;
    }
    else
    {
        goto condexpr_false_33;
    }
    condexpr_true_33:;
    tmp_source_name_27 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_source_name_27 );
    tmp_called_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain___prepare__ );
    if ( tmp_called_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_23;
    }
    tmp_args_name_21 = PyTuple_New( 2 );
    tmp_tuple_element_31 = const_str_plain_TruncBase;
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_args_name_21, 0, tmp_tuple_element_31 );
    tmp_tuple_element_31 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_tuple_element_31 );
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_args_name_21, 1, tmp_tuple_element_31 );
    tmp_kw_name_21 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_21 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 140;
    tmp_assign_source_124 = CALL_FUNCTION( tmp_called_name_39, tmp_args_name_21, tmp_kw_name_21 );
    Py_DECREF( tmp_called_name_39 );
    Py_DECREF( tmp_args_name_21 );
    if ( tmp_assign_source_124 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_23;
    }
    goto condexpr_end_33;
    condexpr_false_33:;
    tmp_assign_source_124 = PyDict_New();
    condexpr_end_33:;
    assert( tmp_class_creation_11__prepared == NULL );
    tmp_class_creation_11__prepared = tmp_assign_source_124;

    tmp_set_locals = tmp_class_creation_11__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_11);
    locals_dict_11 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_126 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_10_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_126 );
    outline_10_var___module__ = tmp_assign_source_126;

    tmp_assign_source_127 = const_str_plain_TruncBase;
    assert( outline_10_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_127 );
    outline_10_var___qualname__ = tmp_assign_source_127;

    tmp_assign_source_128 = const_int_pos_1;
    assert( outline_10_var_arity == NULL );
    Py_INCREF( tmp_assign_source_128 );
    outline_10_var_arity = tmp_assign_source_128;

    tmp_assign_source_129 = Py_None;
    assert( outline_10_var_kind == NULL );
    Py_INCREF( tmp_assign_source_129 );
    outline_10_var_kind = tmp_assign_source_129;

    tmp_assign_source_130 = Py_None;
    assert( outline_10_var_tzinfo == NULL );
    Py_INCREF( tmp_assign_source_130 );
    outline_10_var_tzinfo = tmp_assign_source_130;

    tmp_defaults_3 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_131 = MAKE_FUNCTION_django$db$models$functions$datetime$$$function_6___init__( tmp_defaults_3 );
    assert( outline_10_var___init__ == NULL );
    outline_10_var___init__ = tmp_assign_source_131;

    tmp_assign_source_132 = MAKE_FUNCTION_django$db$models$functions$datetime$$$function_7_as_sql(  );
    assert( outline_10_var_as_sql == NULL );
    outline_10_var_as_sql = tmp_assign_source_132;

    tmp_defaults_4 = const_tuple_none_true_none_false_false_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_133 = MAKE_FUNCTION_django$db$models$functions$datetime$$$function_8_resolve_expression( tmp_defaults_4 );
    assert( outline_10_var_resolve_expression == NULL );
    outline_10_var_resolve_expression = tmp_assign_source_133;

    tmp_assign_source_134 = MAKE_FUNCTION_django$db$models$functions$datetime$$$function_9_convert_value(  );
    assert( outline_10_var_convert_value == NULL );
    outline_10_var_convert_value = tmp_assign_source_134;

    // Tried code:
    tmp_called_name_40 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_called_name_40 );
    tmp_args_name_22 = PyTuple_New( 3 );
    tmp_tuple_element_32 = const_str_plain_TruncBase;
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_22, 0, tmp_tuple_element_32 );
    tmp_tuple_element_32 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_tuple_element_32 );
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_22, 1, tmp_tuple_element_32 );
    tmp_tuple_element_32 = locals_dict_11;
    Py_INCREF( tmp_tuple_element_32 );
    if ( outline_10_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_32,
            const_str_plain___qualname__,
            outline_10_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_32,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_32,
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
        Py_DECREF( tmp_args_name_22 );
        Py_DECREF( tmp_tuple_element_32 );

        exception_lineno = 140;

        goto try_except_handler_24;
    }
    if ( outline_10_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_32,
            const_str_plain___module__,
            outline_10_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_32,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_32,
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
        Py_DECREF( tmp_args_name_22 );
        Py_DECREF( tmp_tuple_element_32 );

        exception_lineno = 140;

        goto try_except_handler_24;
    }
    if ( outline_10_var_arity != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_32,
            const_str_plain_arity,
            outline_10_var_arity
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_32,
            const_str_plain_arity
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_32,
                const_str_plain_arity
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
        Py_DECREF( tmp_args_name_22 );
        Py_DECREF( tmp_tuple_element_32 );

        exception_lineno = 140;

        goto try_except_handler_24;
    }
    if ( outline_10_var_kind != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_32,
            const_str_plain_kind,
            outline_10_var_kind
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_32,
            const_str_plain_kind
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_32,
                const_str_plain_kind
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
        Py_DECREF( tmp_args_name_22 );
        Py_DECREF( tmp_tuple_element_32 );

        exception_lineno = 140;

        goto try_except_handler_24;
    }
    if ( outline_10_var_tzinfo != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_32,
            const_str_plain_tzinfo,
            outline_10_var_tzinfo
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_32,
            const_str_plain_tzinfo
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_32,
                const_str_plain_tzinfo
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
        Py_DECREF( tmp_args_name_22 );
        Py_DECREF( tmp_tuple_element_32 );

        exception_lineno = 140;

        goto try_except_handler_24;
    }
    if ( outline_10_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_32,
            const_str_plain___init__,
            outline_10_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_32,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_32,
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
        Py_DECREF( tmp_args_name_22 );
        Py_DECREF( tmp_tuple_element_32 );

        exception_lineno = 140;

        goto try_except_handler_24;
    }
    if ( outline_10_var_as_sql != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_32,
            const_str_plain_as_sql,
            outline_10_var_as_sql
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_32,
            const_str_plain_as_sql
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_32,
                const_str_plain_as_sql
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
        Py_DECREF( tmp_args_name_22 );
        Py_DECREF( tmp_tuple_element_32 );

        exception_lineno = 140;

        goto try_except_handler_24;
    }
    if ( outline_10_var_resolve_expression != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_32,
            const_str_plain_resolve_expression,
            outline_10_var_resolve_expression
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_32,
            const_str_plain_resolve_expression
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_32,
                const_str_plain_resolve_expression
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
        Py_DECREF( tmp_args_name_22 );
        Py_DECREF( tmp_tuple_element_32 );

        exception_lineno = 140;

        goto try_except_handler_24;
    }
    if ( outline_10_var_convert_value != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_32,
            const_str_plain_convert_value,
            outline_10_var_convert_value
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_32,
            const_str_plain_convert_value
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_32,
                const_str_plain_convert_value
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
        Py_DECREF( tmp_args_name_22 );
        Py_DECREF( tmp_tuple_element_32 );

        exception_lineno = 140;

        goto try_except_handler_24;
    }
    PyTuple_SET_ITEM( tmp_args_name_22, 2, tmp_tuple_element_32 );
    tmp_kw_name_22 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_22 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 140;
    tmp_assign_source_135 = CALL_FUNCTION( tmp_called_name_40, tmp_args_name_22, tmp_kw_name_22 );
    Py_DECREF( tmp_args_name_22 );
    if ( tmp_assign_source_135 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_24;
    }
    assert( outline_10_var___class__ == NULL );
    outline_10_var___class__ = tmp_assign_source_135;

    tmp_outline_return_value_11 = outline_10_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_11 );
    Py_INCREF( tmp_outline_return_value_11 );
    goto try_return_handler_24;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_24:;
    CHECK_OBJECT( (PyObject *)outline_10_var___class__ );
    Py_DECREF( outline_10_var___class__ );
    outline_10_var___class__ = NULL;

    Py_XDECREF( outline_10_var___qualname__ );
    outline_10_var___qualname__ = NULL;

    Py_XDECREF( outline_10_var___module__ );
    outline_10_var___module__ = NULL;

    Py_XDECREF( outline_10_var_arity );
    outline_10_var_arity = NULL;

    Py_XDECREF( outline_10_var_kind );
    outline_10_var_kind = NULL;

    Py_XDECREF( outline_10_var_tzinfo );
    outline_10_var_tzinfo = NULL;

    Py_XDECREF( outline_10_var___init__ );
    outline_10_var___init__ = NULL;

    Py_XDECREF( outline_10_var_as_sql );
    outline_10_var_as_sql = NULL;

    Py_XDECREF( outline_10_var_resolve_expression );
    outline_10_var_resolve_expression = NULL;

    Py_XDECREF( outline_10_var_convert_value );
    outline_10_var_convert_value = NULL;

    goto outline_result_11;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_10_var___qualname__ );
    outline_10_var___qualname__ = NULL;

    Py_XDECREF( outline_10_var___module__ );
    outline_10_var___module__ = NULL;

    Py_XDECREF( outline_10_var_arity );
    outline_10_var_arity = NULL;

    Py_XDECREF( outline_10_var_kind );
    outline_10_var_kind = NULL;

    Py_XDECREF( outline_10_var_tzinfo );
    outline_10_var_tzinfo = NULL;

    Py_XDECREF( outline_10_var___init__ );
    outline_10_var___init__ = NULL;

    Py_XDECREF( outline_10_var_as_sql );
    outline_10_var_as_sql = NULL;

    Py_XDECREF( outline_10_var_resolve_expression );
    outline_10_var_resolve_expression = NULL;

    Py_XDECREF( outline_10_var_convert_value );
    outline_10_var_convert_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto outline_exception_11;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_11:;
    exception_lineno = 140;
    goto try_except_handler_23;
    outline_result_11:;
    tmp_assign_source_125 = tmp_outline_return_value_11;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncBase, tmp_assign_source_125 );
    goto try_end_13;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_class_creation_11__class_decl_dict );
    tmp_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_11__prepared );
    tmp_class_creation_11__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_class_creation_11__class_decl_dict );
    tmp_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_11__prepared );
    tmp_class_creation_11__prepared = NULL;

    // Tried code:
    tmp_assign_source_136 = PyTuple_New( 1 );
    tmp_tuple_element_33 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncBase );

    if (unlikely( tmp_tuple_element_33 == NULL ))
    {
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TruncBase );
    }

    if ( tmp_tuple_element_33 == NULL )
    {
        Py_DECREF( tmp_assign_source_136 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TruncBase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;

        goto try_except_handler_25;
    }

    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_assign_source_136, 0, tmp_tuple_element_33 );
    assert( tmp_class_creation_12__bases == NULL );
    tmp_class_creation_12__bases = tmp_assign_source_136;

    tmp_assign_source_137 = PyDict_New();
    assert( tmp_class_creation_12__class_decl_dict == NULL );
    tmp_class_creation_12__class_decl_dict = tmp_assign_source_137;

    tmp_compare_left_23 = const_str_plain_metaclass;
    tmp_compare_right_23 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_23 );
    tmp_cmp_In_23 = PySequence_Contains( tmp_compare_right_23, tmp_compare_left_23 );
    assert( !(tmp_cmp_In_23 == -1) );
    if ( tmp_cmp_In_23 == 1 )
    {
        goto condexpr_true_34;
    }
    else
    {
        goto condexpr_false_34;
    }
    condexpr_true_34:;
    tmp_dict_name_12 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_12 );
    tmp_key_name_12 = const_str_plain_metaclass;
    tmp_metaclass_name_12 = DICT_GET_ITEM( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_metaclass_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;

        goto try_except_handler_25;
    }
    goto condexpr_end_34;
    condexpr_false_34:;
    tmp_cond_value_12 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_cond_value_12 );
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;

        goto try_except_handler_25;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto condexpr_true_35;
    }
    else
    {
        goto condexpr_false_35;
    }
    condexpr_true_35:;
    tmp_subscribed_name_12 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_subscribed_name_12 );
    tmp_subscript_name_12 = const_int_0;
    tmp_type_arg_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
    if ( tmp_type_arg_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;

        goto try_except_handler_25;
    }
    tmp_metaclass_name_12 = BUILTIN_TYPE1( tmp_type_arg_12 );
    Py_DECREF( tmp_type_arg_12 );
    if ( tmp_metaclass_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;

        goto try_except_handler_25;
    }
    goto condexpr_end_35;
    condexpr_false_35:;
    tmp_metaclass_name_12 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_12 );
    condexpr_end_35:;
    condexpr_end_34:;
    tmp_bases_name_12 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_bases_name_12 );
    tmp_assign_source_138 = SELECT_METACLASS( tmp_metaclass_name_12, tmp_bases_name_12 );
    if ( tmp_assign_source_138 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_12 );

        exception_lineno = 211;

        goto try_except_handler_25;
    }
    Py_DECREF( tmp_metaclass_name_12 );
    assert( tmp_class_creation_12__metaclass == NULL );
    tmp_class_creation_12__metaclass = tmp_assign_source_138;

    tmp_compare_left_24 = const_str_plain_metaclass;
    tmp_compare_right_24 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_24 );
    tmp_cmp_In_24 = PySequence_Contains( tmp_compare_right_24, tmp_compare_left_24 );
    assert( !(tmp_cmp_In_24 == -1) );
    if ( tmp_cmp_In_24 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_dictdel_dict = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;

        goto try_except_handler_25;
    }
    branch_no_12:;
    tmp_hasattr_source_12 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_12 );
    tmp_hasattr_attr_12 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_12, tmp_hasattr_attr_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;

        goto try_except_handler_25;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_36;
    }
    else
    {
        goto condexpr_false_36;
    }
    condexpr_true_36:;
    tmp_source_name_28 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_source_name_28 );
    tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain___prepare__ );
    if ( tmp_called_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;

        goto try_except_handler_25;
    }
    tmp_args_name_23 = PyTuple_New( 2 );
    tmp_tuple_element_34 = const_str_plain_Trunc;
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_23, 0, tmp_tuple_element_34 );
    tmp_tuple_element_34 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_tuple_element_34 );
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_23, 1, tmp_tuple_element_34 );
    tmp_kw_name_23 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_23 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 211;
    tmp_assign_source_139 = CALL_FUNCTION( tmp_called_name_41, tmp_args_name_23, tmp_kw_name_23 );
    Py_DECREF( tmp_called_name_41 );
    Py_DECREF( tmp_args_name_23 );
    if ( tmp_assign_source_139 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;

        goto try_except_handler_25;
    }
    goto condexpr_end_36;
    condexpr_false_36:;
    tmp_assign_source_139 = PyDict_New();
    condexpr_end_36:;
    assert( tmp_class_creation_12__prepared == NULL );
    tmp_class_creation_12__prepared = tmp_assign_source_139;

    tmp_set_locals = tmp_class_creation_12__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_12);
    locals_dict_12 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_141 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_11_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_141 );
    outline_11_var___module__ = tmp_assign_source_141;

    tmp_assign_source_142 = const_str_plain_Trunc;
    assert( outline_11_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_142 );
    outline_11_var___qualname__ = tmp_assign_source_142;

    tmp_defaults_5 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_assign_source_143 = MAKE_FUNCTION_django$db$models$functions$datetime$$$function_10___init__( tmp_defaults_5 );
    assert( outline_11_var___init__ == NULL );
    outline_11_var___init__ = tmp_assign_source_143;

    // Tried code:
    tmp_called_name_42 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_called_name_42 );
    tmp_args_name_24 = PyTuple_New( 3 );
    tmp_tuple_element_35 = const_str_plain_Trunc;
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_args_name_24, 0, tmp_tuple_element_35 );
    tmp_tuple_element_35 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_tuple_element_35 );
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_args_name_24, 1, tmp_tuple_element_35 );
    tmp_tuple_element_35 = locals_dict_12;
    Py_INCREF( tmp_tuple_element_35 );
    if ( outline_11_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_35,
            const_str_plain___qualname__,
            outline_11_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_35,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_35,
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
        Py_DECREF( tmp_args_name_24 );
        Py_DECREF( tmp_tuple_element_35 );

        exception_lineno = 211;

        goto try_except_handler_26;
    }
    if ( outline_11_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_35,
            const_str_plain___module__,
            outline_11_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_35,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_35,
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
        Py_DECREF( tmp_args_name_24 );
        Py_DECREF( tmp_tuple_element_35 );

        exception_lineno = 211;

        goto try_except_handler_26;
    }
    if ( outline_11_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_35,
            const_str_plain___init__,
            outline_11_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_35,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_35,
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
        Py_DECREF( tmp_args_name_24 );
        Py_DECREF( tmp_tuple_element_35 );

        exception_lineno = 211;

        goto try_except_handler_26;
    }
    PyTuple_SET_ITEM( tmp_args_name_24, 2, tmp_tuple_element_35 );
    tmp_kw_name_24 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_24 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 211;
    tmp_assign_source_144 = CALL_FUNCTION( tmp_called_name_42, tmp_args_name_24, tmp_kw_name_24 );
    Py_DECREF( tmp_args_name_24 );
    if ( tmp_assign_source_144 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;

        goto try_except_handler_26;
    }
    assert( outline_11_var___class__ == NULL );
    outline_11_var___class__ = tmp_assign_source_144;

    tmp_outline_return_value_12 = outline_11_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_12 );
    Py_INCREF( tmp_outline_return_value_12 );
    goto try_return_handler_26;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_26:;
    CHECK_OBJECT( (PyObject *)outline_11_var___class__ );
    Py_DECREF( outline_11_var___class__ );
    outline_11_var___class__ = NULL;

    Py_XDECREF( outline_11_var___qualname__ );
    outline_11_var___qualname__ = NULL;

    Py_XDECREF( outline_11_var___module__ );
    outline_11_var___module__ = NULL;

    Py_XDECREF( outline_11_var___init__ );
    outline_11_var___init__ = NULL;

    goto outline_result_12;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_11_var___qualname__ );
    outline_11_var___qualname__ = NULL;

    Py_XDECREF( outline_11_var___module__ );
    outline_11_var___module__ = NULL;

    Py_XDECREF( outline_11_var___init__ );
    outline_11_var___init__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto outline_exception_12;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_12:;
    exception_lineno = 211;
    goto try_except_handler_25;
    outline_result_12:;
    tmp_assign_source_140 = tmp_outline_return_value_12;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_Trunc, tmp_assign_source_140 );
    goto try_end_14;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_class_creation_12__class_decl_dict );
    tmp_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_12__prepared );
    tmp_class_creation_12__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    Py_XDECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_class_creation_12__class_decl_dict );
    tmp_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_12__prepared );
    tmp_class_creation_12__prepared = NULL;

    // Tried code:
    tmp_assign_source_145 = PyTuple_New( 1 );
    tmp_tuple_element_36 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncBase );

    if (unlikely( tmp_tuple_element_36 == NULL ))
    {
        tmp_tuple_element_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TruncBase );
    }

    if ( tmp_tuple_element_36 == NULL )
    {
        Py_DECREF( tmp_assign_source_145 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TruncBase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;

        goto try_except_handler_27;
    }

    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_assign_source_145, 0, tmp_tuple_element_36 );
    assert( tmp_class_creation_13__bases == NULL );
    tmp_class_creation_13__bases = tmp_assign_source_145;

    tmp_assign_source_146 = PyDict_New();
    assert( tmp_class_creation_13__class_decl_dict == NULL );
    tmp_class_creation_13__class_decl_dict = tmp_assign_source_146;

    tmp_compare_left_25 = const_str_plain_metaclass;
    tmp_compare_right_25 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_25 );
    tmp_cmp_In_25 = PySequence_Contains( tmp_compare_right_25, tmp_compare_left_25 );
    assert( !(tmp_cmp_In_25 == -1) );
    if ( tmp_cmp_In_25 == 1 )
    {
        goto condexpr_true_37;
    }
    else
    {
        goto condexpr_false_37;
    }
    condexpr_true_37:;
    tmp_dict_name_13 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_13 );
    tmp_key_name_13 = const_str_plain_metaclass;
    tmp_metaclass_name_13 = DICT_GET_ITEM( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_metaclass_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto try_except_handler_27;
    }
    goto condexpr_end_37;
    condexpr_false_37:;
    tmp_cond_value_13 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_cond_value_13 );
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto try_except_handler_27;
    }
    if ( tmp_cond_truth_13 == 1 )
    {
        goto condexpr_true_38;
    }
    else
    {
        goto condexpr_false_38;
    }
    condexpr_true_38:;
    tmp_subscribed_name_13 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_subscribed_name_13 );
    tmp_subscript_name_13 = const_int_0;
    tmp_type_arg_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
    if ( tmp_type_arg_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto try_except_handler_27;
    }
    tmp_metaclass_name_13 = BUILTIN_TYPE1( tmp_type_arg_13 );
    Py_DECREF( tmp_type_arg_13 );
    if ( tmp_metaclass_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto try_except_handler_27;
    }
    goto condexpr_end_38;
    condexpr_false_38:;
    tmp_metaclass_name_13 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_13 );
    condexpr_end_38:;
    condexpr_end_37:;
    tmp_bases_name_13 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_bases_name_13 );
    tmp_assign_source_147 = SELECT_METACLASS( tmp_metaclass_name_13, tmp_bases_name_13 );
    if ( tmp_assign_source_147 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_13 );

        exception_lineno = 218;

        goto try_except_handler_27;
    }
    Py_DECREF( tmp_metaclass_name_13 );
    assert( tmp_class_creation_13__metaclass == NULL );
    tmp_class_creation_13__metaclass = tmp_assign_source_147;

    tmp_compare_left_26 = const_str_plain_metaclass;
    tmp_compare_right_26 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_26 );
    tmp_cmp_In_26 = PySequence_Contains( tmp_compare_right_26, tmp_compare_left_26 );
    assert( !(tmp_cmp_In_26 == -1) );
    if ( tmp_cmp_In_26 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_dictdel_dict = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto try_except_handler_27;
    }
    branch_no_13:;
    tmp_hasattr_source_13 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_13 );
    tmp_hasattr_attr_13 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_13, tmp_hasattr_attr_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto try_except_handler_27;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_39;
    }
    else
    {
        goto condexpr_false_39;
    }
    condexpr_true_39:;
    tmp_source_name_29 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_source_name_29 );
    tmp_called_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain___prepare__ );
    if ( tmp_called_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto try_except_handler_27;
    }
    tmp_args_name_25 = PyTuple_New( 2 );
    tmp_tuple_element_37 = const_str_plain_TruncYear;
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_args_name_25, 0, tmp_tuple_element_37 );
    tmp_tuple_element_37 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_tuple_element_37 );
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_args_name_25, 1, tmp_tuple_element_37 );
    tmp_kw_name_25 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_25 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 218;
    tmp_assign_source_148 = CALL_FUNCTION( tmp_called_name_43, tmp_args_name_25, tmp_kw_name_25 );
    Py_DECREF( tmp_called_name_43 );
    Py_DECREF( tmp_args_name_25 );
    if ( tmp_assign_source_148 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto try_except_handler_27;
    }
    goto condexpr_end_39;
    condexpr_false_39:;
    tmp_assign_source_148 = PyDict_New();
    condexpr_end_39:;
    assert( tmp_class_creation_13__prepared == NULL );
    tmp_class_creation_13__prepared = tmp_assign_source_148;

    tmp_set_locals = tmp_class_creation_13__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_13);
    locals_dict_13 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_150 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_12_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_150 );
    outline_12_var___module__ = tmp_assign_source_150;

    tmp_assign_source_151 = const_str_plain_TruncYear;
    assert( outline_12_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_151 );
    outline_12_var___qualname__ = tmp_assign_source_151;

    tmp_assign_source_152 = const_str_plain_year;
    assert( outline_12_var_kind == NULL );
    Py_INCREF( tmp_assign_source_152 );
    outline_12_var_kind = tmp_assign_source_152;

    // Tried code:
    tmp_called_name_44 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_called_name_44 );
    tmp_args_name_26 = PyTuple_New( 3 );
    tmp_tuple_element_38 = const_str_plain_TruncYear;
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_args_name_26, 0, tmp_tuple_element_38 );
    tmp_tuple_element_38 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_tuple_element_38 );
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_args_name_26, 1, tmp_tuple_element_38 );
    tmp_tuple_element_38 = locals_dict_13;
    Py_INCREF( tmp_tuple_element_38 );
    if ( outline_12_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_38,
            const_str_plain___qualname__,
            outline_12_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_38,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_38,
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
        Py_DECREF( tmp_args_name_26 );
        Py_DECREF( tmp_tuple_element_38 );

        exception_lineno = 218;

        goto try_except_handler_28;
    }
    if ( outline_12_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_38,
            const_str_plain___module__,
            outline_12_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_38,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_38,
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
        Py_DECREF( tmp_args_name_26 );
        Py_DECREF( tmp_tuple_element_38 );

        exception_lineno = 218;

        goto try_except_handler_28;
    }
    if ( outline_12_var_kind != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_38,
            const_str_plain_kind,
            outline_12_var_kind
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_38,
            const_str_plain_kind
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_38,
                const_str_plain_kind
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
        Py_DECREF( tmp_args_name_26 );
        Py_DECREF( tmp_tuple_element_38 );

        exception_lineno = 218;

        goto try_except_handler_28;
    }
    PyTuple_SET_ITEM( tmp_args_name_26, 2, tmp_tuple_element_38 );
    tmp_kw_name_26 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_26 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 218;
    tmp_assign_source_153 = CALL_FUNCTION( tmp_called_name_44, tmp_args_name_26, tmp_kw_name_26 );
    Py_DECREF( tmp_args_name_26 );
    if ( tmp_assign_source_153 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto try_except_handler_28;
    }
    assert( outline_12_var___class__ == NULL );
    outline_12_var___class__ = tmp_assign_source_153;

    tmp_outline_return_value_13 = outline_12_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_13 );
    Py_INCREF( tmp_outline_return_value_13 );
    goto try_return_handler_28;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_28:;
    CHECK_OBJECT( (PyObject *)outline_12_var___class__ );
    Py_DECREF( outline_12_var___class__ );
    outline_12_var___class__ = NULL;

    Py_XDECREF( outline_12_var___qualname__ );
    outline_12_var___qualname__ = NULL;

    Py_XDECREF( outline_12_var___module__ );
    outline_12_var___module__ = NULL;

    Py_XDECREF( outline_12_var_kind );
    outline_12_var_kind = NULL;

    goto outline_result_13;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_12_var___qualname__ );
    outline_12_var___qualname__ = NULL;

    Py_XDECREF( outline_12_var___module__ );
    outline_12_var___module__ = NULL;

    Py_XDECREF( outline_12_var_kind );
    outline_12_var_kind = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto outline_exception_13;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_13:;
    exception_lineno = 218;
    goto try_except_handler_27;
    outline_result_13:;
    tmp_assign_source_149 = tmp_outline_return_value_13;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncYear, tmp_assign_source_149 );
    goto try_end_15;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_class_creation_13__class_decl_dict );
    tmp_class_creation_13__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_13__prepared );
    tmp_class_creation_13__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    Py_XDECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_class_creation_13__class_decl_dict );
    tmp_class_creation_13__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_13__prepared );
    tmp_class_creation_13__prepared = NULL;

    // Tried code:
    tmp_assign_source_154 = PyTuple_New( 1 );
    tmp_tuple_element_39 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncBase );

    if (unlikely( tmp_tuple_element_39 == NULL ))
    {
        tmp_tuple_element_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TruncBase );
    }

    if ( tmp_tuple_element_39 == NULL )
    {
        Py_DECREF( tmp_assign_source_154 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TruncBase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;

        goto try_except_handler_29;
    }

    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_assign_source_154, 0, tmp_tuple_element_39 );
    assert( tmp_class_creation_14__bases == NULL );
    tmp_class_creation_14__bases = tmp_assign_source_154;

    tmp_assign_source_155 = PyDict_New();
    assert( tmp_class_creation_14__class_decl_dict == NULL );
    tmp_class_creation_14__class_decl_dict = tmp_assign_source_155;

    tmp_compare_left_27 = const_str_plain_metaclass;
    tmp_compare_right_27 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_27 );
    tmp_cmp_In_27 = PySequence_Contains( tmp_compare_right_27, tmp_compare_left_27 );
    assert( !(tmp_cmp_In_27 == -1) );
    if ( tmp_cmp_In_27 == 1 )
    {
        goto condexpr_true_40;
    }
    else
    {
        goto condexpr_false_40;
    }
    condexpr_true_40:;
    tmp_dict_name_14 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_14 );
    tmp_key_name_14 = const_str_plain_metaclass;
    tmp_metaclass_name_14 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
    if ( tmp_metaclass_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;

        goto try_except_handler_29;
    }
    goto condexpr_end_40;
    condexpr_false_40:;
    tmp_cond_value_14 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_cond_value_14 );
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;

        goto try_except_handler_29;
    }
    if ( tmp_cond_truth_14 == 1 )
    {
        goto condexpr_true_41;
    }
    else
    {
        goto condexpr_false_41;
    }
    condexpr_true_41:;
    tmp_subscribed_name_14 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_subscribed_name_14 );
    tmp_subscript_name_14 = const_int_0;
    tmp_type_arg_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
    if ( tmp_type_arg_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;

        goto try_except_handler_29;
    }
    tmp_metaclass_name_14 = BUILTIN_TYPE1( tmp_type_arg_14 );
    Py_DECREF( tmp_type_arg_14 );
    if ( tmp_metaclass_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;

        goto try_except_handler_29;
    }
    goto condexpr_end_41;
    condexpr_false_41:;
    tmp_metaclass_name_14 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_14 );
    condexpr_end_41:;
    condexpr_end_40:;
    tmp_bases_name_14 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_bases_name_14 );
    tmp_assign_source_156 = SELECT_METACLASS( tmp_metaclass_name_14, tmp_bases_name_14 );
    if ( tmp_assign_source_156 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_14 );

        exception_lineno = 222;

        goto try_except_handler_29;
    }
    Py_DECREF( tmp_metaclass_name_14 );
    assert( tmp_class_creation_14__metaclass == NULL );
    tmp_class_creation_14__metaclass = tmp_assign_source_156;

    tmp_compare_left_28 = const_str_plain_metaclass;
    tmp_compare_right_28 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_28 );
    tmp_cmp_In_28 = PySequence_Contains( tmp_compare_right_28, tmp_compare_left_28 );
    assert( !(tmp_cmp_In_28 == -1) );
    if ( tmp_cmp_In_28 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_dictdel_dict = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;

        goto try_except_handler_29;
    }
    branch_no_14:;
    tmp_hasattr_source_14 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_14 );
    tmp_hasattr_attr_14 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_14, tmp_hasattr_attr_14 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;

        goto try_except_handler_29;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_42;
    }
    else
    {
        goto condexpr_false_42;
    }
    condexpr_true_42:;
    tmp_source_name_30 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_source_name_30 );
    tmp_called_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain___prepare__ );
    if ( tmp_called_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;

        goto try_except_handler_29;
    }
    tmp_args_name_27 = PyTuple_New( 2 );
    tmp_tuple_element_40 = const_str_plain_TruncMonth;
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_args_name_27, 0, tmp_tuple_element_40 );
    tmp_tuple_element_40 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_tuple_element_40 );
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_args_name_27, 1, tmp_tuple_element_40 );
    tmp_kw_name_27 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_27 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 222;
    tmp_assign_source_157 = CALL_FUNCTION( tmp_called_name_45, tmp_args_name_27, tmp_kw_name_27 );
    Py_DECREF( tmp_called_name_45 );
    Py_DECREF( tmp_args_name_27 );
    if ( tmp_assign_source_157 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;

        goto try_except_handler_29;
    }
    goto condexpr_end_42;
    condexpr_false_42:;
    tmp_assign_source_157 = PyDict_New();
    condexpr_end_42:;
    assert( tmp_class_creation_14__prepared == NULL );
    tmp_class_creation_14__prepared = tmp_assign_source_157;

    tmp_set_locals = tmp_class_creation_14__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_14);
    locals_dict_14 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_159 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_13_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_159 );
    outline_13_var___module__ = tmp_assign_source_159;

    tmp_assign_source_160 = const_str_plain_TruncMonth;
    assert( outline_13_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_160 );
    outline_13_var___qualname__ = tmp_assign_source_160;

    tmp_assign_source_161 = const_str_plain_month;
    assert( outline_13_var_kind == NULL );
    Py_INCREF( tmp_assign_source_161 );
    outline_13_var_kind = tmp_assign_source_161;

    // Tried code:
    tmp_called_name_46 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_called_name_46 );
    tmp_args_name_28 = PyTuple_New( 3 );
    tmp_tuple_element_41 = const_str_plain_TruncMonth;
    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_args_name_28, 0, tmp_tuple_element_41 );
    tmp_tuple_element_41 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_tuple_element_41 );
    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_args_name_28, 1, tmp_tuple_element_41 );
    tmp_tuple_element_41 = locals_dict_14;
    Py_INCREF( tmp_tuple_element_41 );
    if ( outline_13_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_41,
            const_str_plain___qualname__,
            outline_13_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_41,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_41,
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
        Py_DECREF( tmp_args_name_28 );
        Py_DECREF( tmp_tuple_element_41 );

        exception_lineno = 222;

        goto try_except_handler_30;
    }
    if ( outline_13_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_41,
            const_str_plain___module__,
            outline_13_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_41,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_41,
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
        Py_DECREF( tmp_args_name_28 );
        Py_DECREF( tmp_tuple_element_41 );

        exception_lineno = 222;

        goto try_except_handler_30;
    }
    if ( outline_13_var_kind != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_41,
            const_str_plain_kind,
            outline_13_var_kind
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_41,
            const_str_plain_kind
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_41,
                const_str_plain_kind
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
        Py_DECREF( tmp_args_name_28 );
        Py_DECREF( tmp_tuple_element_41 );

        exception_lineno = 222;

        goto try_except_handler_30;
    }
    PyTuple_SET_ITEM( tmp_args_name_28, 2, tmp_tuple_element_41 );
    tmp_kw_name_28 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_28 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 222;
    tmp_assign_source_162 = CALL_FUNCTION( tmp_called_name_46, tmp_args_name_28, tmp_kw_name_28 );
    Py_DECREF( tmp_args_name_28 );
    if ( tmp_assign_source_162 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;

        goto try_except_handler_30;
    }
    assert( outline_13_var___class__ == NULL );
    outline_13_var___class__ = tmp_assign_source_162;

    tmp_outline_return_value_14 = outline_13_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_14 );
    Py_INCREF( tmp_outline_return_value_14 );
    goto try_return_handler_30;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_30:;
    CHECK_OBJECT( (PyObject *)outline_13_var___class__ );
    Py_DECREF( outline_13_var___class__ );
    outline_13_var___class__ = NULL;

    Py_XDECREF( outline_13_var___qualname__ );
    outline_13_var___qualname__ = NULL;

    Py_XDECREF( outline_13_var___module__ );
    outline_13_var___module__ = NULL;

    Py_XDECREF( outline_13_var_kind );
    outline_13_var_kind = NULL;

    goto outline_result_14;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_13_var___qualname__ );
    outline_13_var___qualname__ = NULL;

    Py_XDECREF( outline_13_var___module__ );
    outline_13_var___module__ = NULL;

    Py_XDECREF( outline_13_var_kind );
    outline_13_var_kind = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto outline_exception_14;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_14:;
    exception_lineno = 222;
    goto try_except_handler_29;
    outline_result_14:;
    tmp_assign_source_158 = tmp_outline_return_value_14;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncMonth, tmp_assign_source_158 );
    goto try_end_16;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    Py_XDECREF( tmp_class_creation_14__class_decl_dict );
    tmp_class_creation_14__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_14__prepared );
    tmp_class_creation_14__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    Py_XDECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    Py_XDECREF( tmp_class_creation_14__class_decl_dict );
    tmp_class_creation_14__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_14__prepared );
    tmp_class_creation_14__prepared = NULL;

    // Tried code:
    tmp_assign_source_163 = PyTuple_New( 1 );
    tmp_tuple_element_42 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncBase );

    if (unlikely( tmp_tuple_element_42 == NULL ))
    {
        tmp_tuple_element_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TruncBase );
    }

    if ( tmp_tuple_element_42 == NULL )
    {
        Py_DECREF( tmp_assign_source_163 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TruncBase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;

        goto try_except_handler_31;
    }

    Py_INCREF( tmp_tuple_element_42 );
    PyTuple_SET_ITEM( tmp_assign_source_163, 0, tmp_tuple_element_42 );
    assert( tmp_class_creation_15__bases == NULL );
    tmp_class_creation_15__bases = tmp_assign_source_163;

    tmp_assign_source_164 = PyDict_New();
    assert( tmp_class_creation_15__class_decl_dict == NULL );
    tmp_class_creation_15__class_decl_dict = tmp_assign_source_164;

    tmp_compare_left_29 = const_str_plain_metaclass;
    tmp_compare_right_29 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_29 );
    tmp_cmp_In_29 = PySequence_Contains( tmp_compare_right_29, tmp_compare_left_29 );
    assert( !(tmp_cmp_In_29 == -1) );
    if ( tmp_cmp_In_29 == 1 )
    {
        goto condexpr_true_43;
    }
    else
    {
        goto condexpr_false_43;
    }
    condexpr_true_43:;
    tmp_dict_name_15 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_15 );
    tmp_key_name_15 = const_str_plain_metaclass;
    tmp_metaclass_name_15 = DICT_GET_ITEM( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_metaclass_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;

        goto try_except_handler_31;
    }
    goto condexpr_end_43;
    condexpr_false_43:;
    tmp_cond_value_15 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_cond_value_15 );
    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;

        goto try_except_handler_31;
    }
    if ( tmp_cond_truth_15 == 1 )
    {
        goto condexpr_true_44;
    }
    else
    {
        goto condexpr_false_44;
    }
    condexpr_true_44:;
    tmp_subscribed_name_15 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_subscribed_name_15 );
    tmp_subscript_name_15 = const_int_0;
    tmp_type_arg_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
    if ( tmp_type_arg_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;

        goto try_except_handler_31;
    }
    tmp_metaclass_name_15 = BUILTIN_TYPE1( tmp_type_arg_15 );
    Py_DECREF( tmp_type_arg_15 );
    if ( tmp_metaclass_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;

        goto try_except_handler_31;
    }
    goto condexpr_end_44;
    condexpr_false_44:;
    tmp_metaclass_name_15 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_15 );
    condexpr_end_44:;
    condexpr_end_43:;
    tmp_bases_name_15 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_bases_name_15 );
    tmp_assign_source_165 = SELECT_METACLASS( tmp_metaclass_name_15, tmp_bases_name_15 );
    if ( tmp_assign_source_165 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_15 );

        exception_lineno = 226;

        goto try_except_handler_31;
    }
    Py_DECREF( tmp_metaclass_name_15 );
    assert( tmp_class_creation_15__metaclass == NULL );
    tmp_class_creation_15__metaclass = tmp_assign_source_165;

    tmp_compare_left_30 = const_str_plain_metaclass;
    tmp_compare_right_30 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_30 );
    tmp_cmp_In_30 = PySequence_Contains( tmp_compare_right_30, tmp_compare_left_30 );
    assert( !(tmp_cmp_In_30 == -1) );
    if ( tmp_cmp_In_30 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_dictdel_dict = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;

        goto try_except_handler_31;
    }
    branch_no_15:;
    tmp_hasattr_source_15 = tmp_class_creation_15__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_15 );
    tmp_hasattr_attr_15 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_15, tmp_hasattr_attr_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;

        goto try_except_handler_31;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_45;
    }
    else
    {
        goto condexpr_false_45;
    }
    condexpr_true_45:;
    tmp_source_name_31 = tmp_class_creation_15__metaclass;

    CHECK_OBJECT( tmp_source_name_31 );
    tmp_called_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain___prepare__ );
    if ( tmp_called_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;

        goto try_except_handler_31;
    }
    tmp_args_name_29 = PyTuple_New( 2 );
    tmp_tuple_element_43 = const_str_plain_TruncDay;
    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_args_name_29, 0, tmp_tuple_element_43 );
    tmp_tuple_element_43 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_tuple_element_43 );
    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_args_name_29, 1, tmp_tuple_element_43 );
    tmp_kw_name_29 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_29 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 226;
    tmp_assign_source_166 = CALL_FUNCTION( tmp_called_name_47, tmp_args_name_29, tmp_kw_name_29 );
    Py_DECREF( tmp_called_name_47 );
    Py_DECREF( tmp_args_name_29 );
    if ( tmp_assign_source_166 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;

        goto try_except_handler_31;
    }
    goto condexpr_end_45;
    condexpr_false_45:;
    tmp_assign_source_166 = PyDict_New();
    condexpr_end_45:;
    assert( tmp_class_creation_15__prepared == NULL );
    tmp_class_creation_15__prepared = tmp_assign_source_166;

    tmp_set_locals = tmp_class_creation_15__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_15);
    locals_dict_15 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_168 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_14_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_168 );
    outline_14_var___module__ = tmp_assign_source_168;

    tmp_assign_source_169 = const_str_plain_TruncDay;
    assert( outline_14_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_169 );
    outline_14_var___qualname__ = tmp_assign_source_169;

    tmp_assign_source_170 = const_str_plain_day;
    assert( outline_14_var_kind == NULL );
    Py_INCREF( tmp_assign_source_170 );
    outline_14_var_kind = tmp_assign_source_170;

    // Tried code:
    tmp_called_name_48 = tmp_class_creation_15__metaclass;

    CHECK_OBJECT( tmp_called_name_48 );
    tmp_args_name_30 = PyTuple_New( 3 );
    tmp_tuple_element_44 = const_str_plain_TruncDay;
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_args_name_30, 0, tmp_tuple_element_44 );
    tmp_tuple_element_44 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_tuple_element_44 );
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_args_name_30, 1, tmp_tuple_element_44 );
    tmp_tuple_element_44 = locals_dict_15;
    Py_INCREF( tmp_tuple_element_44 );
    if ( outline_14_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_44,
            const_str_plain___qualname__,
            outline_14_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_44,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_44,
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
        Py_DECREF( tmp_args_name_30 );
        Py_DECREF( tmp_tuple_element_44 );

        exception_lineno = 226;

        goto try_except_handler_32;
    }
    if ( outline_14_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_44,
            const_str_plain___module__,
            outline_14_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_44,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_44,
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
        Py_DECREF( tmp_args_name_30 );
        Py_DECREF( tmp_tuple_element_44 );

        exception_lineno = 226;

        goto try_except_handler_32;
    }
    if ( outline_14_var_kind != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_44,
            const_str_plain_kind,
            outline_14_var_kind
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_44,
            const_str_plain_kind
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_44,
                const_str_plain_kind
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
        Py_DECREF( tmp_args_name_30 );
        Py_DECREF( tmp_tuple_element_44 );

        exception_lineno = 226;

        goto try_except_handler_32;
    }
    PyTuple_SET_ITEM( tmp_args_name_30, 2, tmp_tuple_element_44 );
    tmp_kw_name_30 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_30 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 226;
    tmp_assign_source_171 = CALL_FUNCTION( tmp_called_name_48, tmp_args_name_30, tmp_kw_name_30 );
    Py_DECREF( tmp_args_name_30 );
    if ( tmp_assign_source_171 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;

        goto try_except_handler_32;
    }
    assert( outline_14_var___class__ == NULL );
    outline_14_var___class__ = tmp_assign_source_171;

    tmp_outline_return_value_15 = outline_14_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_15 );
    Py_INCREF( tmp_outline_return_value_15 );
    goto try_return_handler_32;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_32:;
    CHECK_OBJECT( (PyObject *)outline_14_var___class__ );
    Py_DECREF( outline_14_var___class__ );
    outline_14_var___class__ = NULL;

    Py_XDECREF( outline_14_var___qualname__ );
    outline_14_var___qualname__ = NULL;

    Py_XDECREF( outline_14_var___module__ );
    outline_14_var___module__ = NULL;

    Py_XDECREF( outline_14_var_kind );
    outline_14_var_kind = NULL;

    goto outline_result_15;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_14_var___qualname__ );
    outline_14_var___qualname__ = NULL;

    Py_XDECREF( outline_14_var___module__ );
    outline_14_var___module__ = NULL;

    Py_XDECREF( outline_14_var_kind );
    outline_14_var_kind = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto outline_exception_15;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_15:;
    exception_lineno = 226;
    goto try_except_handler_31;
    outline_result_15:;
    tmp_assign_source_167 = tmp_outline_return_value_15;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncDay, tmp_assign_source_167 );
    goto try_end_17;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    Py_XDECREF( tmp_class_creation_15__class_decl_dict );
    tmp_class_creation_15__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_15__prepared );
    tmp_class_creation_15__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    Py_XDECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    Py_XDECREF( tmp_class_creation_15__class_decl_dict );
    tmp_class_creation_15__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_15__prepared );
    tmp_class_creation_15__prepared = NULL;

    // Tried code:
    tmp_assign_source_172 = PyTuple_New( 1 );
    tmp_tuple_element_45 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncBase );

    if (unlikely( tmp_tuple_element_45 == NULL ))
    {
        tmp_tuple_element_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TruncBase );
    }

    if ( tmp_tuple_element_45 == NULL )
    {
        Py_DECREF( tmp_assign_source_172 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TruncBase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;

        goto try_except_handler_33;
    }

    Py_INCREF( tmp_tuple_element_45 );
    PyTuple_SET_ITEM( tmp_assign_source_172, 0, tmp_tuple_element_45 );
    assert( tmp_class_creation_16__bases == NULL );
    tmp_class_creation_16__bases = tmp_assign_source_172;

    tmp_assign_source_173 = PyDict_New();
    assert( tmp_class_creation_16__class_decl_dict == NULL );
    tmp_class_creation_16__class_decl_dict = tmp_assign_source_173;

    tmp_compare_left_31 = const_str_plain_metaclass;
    tmp_compare_right_31 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_31 );
    tmp_cmp_In_31 = PySequence_Contains( tmp_compare_right_31, tmp_compare_left_31 );
    assert( !(tmp_cmp_In_31 == -1) );
    if ( tmp_cmp_In_31 == 1 )
    {
        goto condexpr_true_46;
    }
    else
    {
        goto condexpr_false_46;
    }
    condexpr_true_46:;
    tmp_dict_name_16 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_16 );
    tmp_key_name_16 = const_str_plain_metaclass;
    tmp_metaclass_name_16 = DICT_GET_ITEM( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_metaclass_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;

        goto try_except_handler_33;
    }
    goto condexpr_end_46;
    condexpr_false_46:;
    tmp_cond_value_16 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_cond_value_16 );
    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;

        goto try_except_handler_33;
    }
    if ( tmp_cond_truth_16 == 1 )
    {
        goto condexpr_true_47;
    }
    else
    {
        goto condexpr_false_47;
    }
    condexpr_true_47:;
    tmp_subscribed_name_16 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_subscribed_name_16 );
    tmp_subscript_name_16 = const_int_0;
    tmp_type_arg_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
    if ( tmp_type_arg_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;

        goto try_except_handler_33;
    }
    tmp_metaclass_name_16 = BUILTIN_TYPE1( tmp_type_arg_16 );
    Py_DECREF( tmp_type_arg_16 );
    if ( tmp_metaclass_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;

        goto try_except_handler_33;
    }
    goto condexpr_end_47;
    condexpr_false_47:;
    tmp_metaclass_name_16 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_16 );
    condexpr_end_47:;
    condexpr_end_46:;
    tmp_bases_name_16 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_bases_name_16 );
    tmp_assign_source_174 = SELECT_METACLASS( tmp_metaclass_name_16, tmp_bases_name_16 );
    if ( tmp_assign_source_174 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_16 );

        exception_lineno = 230;

        goto try_except_handler_33;
    }
    Py_DECREF( tmp_metaclass_name_16 );
    assert( tmp_class_creation_16__metaclass == NULL );
    tmp_class_creation_16__metaclass = tmp_assign_source_174;

    tmp_compare_left_32 = const_str_plain_metaclass;
    tmp_compare_right_32 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_32 );
    tmp_cmp_In_32 = PySequence_Contains( tmp_compare_right_32, tmp_compare_left_32 );
    assert( !(tmp_cmp_In_32 == -1) );
    if ( tmp_cmp_In_32 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_dictdel_dict = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;

        goto try_except_handler_33;
    }
    branch_no_16:;
    tmp_hasattr_source_16 = tmp_class_creation_16__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_16 );
    tmp_hasattr_attr_16 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_16, tmp_hasattr_attr_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;

        goto try_except_handler_33;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_48;
    }
    else
    {
        goto condexpr_false_48;
    }
    condexpr_true_48:;
    tmp_source_name_32 = tmp_class_creation_16__metaclass;

    CHECK_OBJECT( tmp_source_name_32 );
    tmp_called_name_49 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain___prepare__ );
    if ( tmp_called_name_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;

        goto try_except_handler_33;
    }
    tmp_args_name_31 = PyTuple_New( 2 );
    tmp_tuple_element_46 = const_str_plain_TruncDate;
    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_args_name_31, 0, tmp_tuple_element_46 );
    tmp_tuple_element_46 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_tuple_element_46 );
    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_args_name_31, 1, tmp_tuple_element_46 );
    tmp_kw_name_31 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_31 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 230;
    tmp_assign_source_175 = CALL_FUNCTION( tmp_called_name_49, tmp_args_name_31, tmp_kw_name_31 );
    Py_DECREF( tmp_called_name_49 );
    Py_DECREF( tmp_args_name_31 );
    if ( tmp_assign_source_175 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;

        goto try_except_handler_33;
    }
    goto condexpr_end_48;
    condexpr_false_48:;
    tmp_assign_source_175 = PyDict_New();
    condexpr_end_48:;
    assert( tmp_class_creation_16__prepared == NULL );
    tmp_class_creation_16__prepared = tmp_assign_source_175;

    tmp_set_locals = tmp_class_creation_16__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_16);
    locals_dict_16 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_177 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_15_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_177 );
    outline_15_var___module__ = tmp_assign_source_177;

    tmp_assign_source_178 = const_str_plain_TruncDate;
    assert( outline_15_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_178 );
    outline_15_var___qualname__ = tmp_assign_source_178;

    tmp_assign_source_179 = const_str_plain_date;
    assert( outline_15_var_kind == NULL );
    Py_INCREF( tmp_assign_source_179 );
    outline_15_var_kind = tmp_assign_source_179;

    tmp_assign_source_180 = const_str_plain_date;
    assert( outline_15_var_lookup_name == NULL );
    Py_INCREF( tmp_assign_source_180 );
    outline_15_var_lookup_name = tmp_assign_source_180;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ca07a69e2faf5f5c153562b9b485dceb_3, codeobj_ca07a69e2faf5f5c153562b9b485dceb, module_django$db$models$functions$datetime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ca07a69e2faf5f5c153562b9b485dceb_3 = cache_frame_ca07a69e2faf5f5c153562b9b485dceb_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ca07a69e2faf5f5c153562b9b485dceb_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ca07a69e2faf5f5c153562b9b485dceb_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_50 = PyDict_GetItem( locals_dict_16, const_str_plain_cached_property );

    if ( tmp_called_name_50 == NULL )
    {
        tmp_called_name_50 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_cached_property );

        if (unlikely( tmp_called_name_50 == NULL ))
        {
            tmp_called_name_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cached_property );
        }

        if ( tmp_called_name_50 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cached_property" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 234;
            type_description_2 = "NooooNN";
            goto frame_exception_exit_3;
        }

    }

    tmp_args_element_name_20 = MAKE_FUNCTION_django$db$models$functions$datetime$$$function_11_output_field(  );
    frame_ca07a69e2faf5f5c153562b9b485dceb_3->m_frame.f_lineno = 234;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_assign_source_181 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_50, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_assign_source_181 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_2 = "NooooNN";
        goto frame_exception_exit_3;
    }
    assert( outline_15_var_output_field == NULL );
    outline_15_var_output_field = tmp_assign_source_181;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca07a69e2faf5f5c153562b9b485dceb_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca07a69e2faf5f5c153562b9b485dceb_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ca07a69e2faf5f5c153562b9b485dceb_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ca07a69e2faf5f5c153562b9b485dceb_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ca07a69e2faf5f5c153562b9b485dceb_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ca07a69e2faf5f5c153562b9b485dceb_3,
        type_description_2,
        NULL,
        outline_15_var___qualname__,
        outline_15_var___module__,
        outline_15_var_kind,
        outline_15_var_lookup_name,
        outline_15_var_output_field,
        NULL
    );


    // Release cached frame.
    if ( frame_ca07a69e2faf5f5c153562b9b485dceb_3 == cache_frame_ca07a69e2faf5f5c153562b9b485dceb_3 )
    {
        Py_DECREF( frame_ca07a69e2faf5f5c153562b9b485dceb_3 );
    }
    cache_frame_ca07a69e2faf5f5c153562b9b485dceb_3 = NULL;

    assertFrameObject( frame_ca07a69e2faf5f5c153562b9b485dceb_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_34;
    skip_nested_handling_2:;
    tmp_assign_source_182 = MAKE_FUNCTION_django$db$models$functions$datetime$$$function_12_as_sql(  );
    assert( outline_15_var_as_sql == NULL );
    outline_15_var_as_sql = tmp_assign_source_182;

    tmp_called_name_51 = tmp_class_creation_16__metaclass;

    CHECK_OBJECT( tmp_called_name_51 );
    tmp_args_name_32 = PyTuple_New( 3 );
    tmp_tuple_element_47 = const_str_plain_TruncDate;
    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_args_name_32, 0, tmp_tuple_element_47 );
    tmp_tuple_element_47 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_tuple_element_47 );
    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_args_name_32, 1, tmp_tuple_element_47 );
    tmp_tuple_element_47 = locals_dict_16;
    Py_INCREF( tmp_tuple_element_47 );
    if ( outline_15_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_47,
            const_str_plain___qualname__,
            outline_15_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_47,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_47,
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
        Py_DECREF( tmp_args_name_32 );
        Py_DECREF( tmp_tuple_element_47 );

        exception_lineno = 230;

        goto try_except_handler_34;
    }
    if ( outline_15_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_47,
            const_str_plain___module__,
            outline_15_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_47,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_47,
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
        Py_DECREF( tmp_args_name_32 );
        Py_DECREF( tmp_tuple_element_47 );

        exception_lineno = 230;

        goto try_except_handler_34;
    }
    if ( outline_15_var_kind != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_47,
            const_str_plain_kind,
            outline_15_var_kind
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_47,
            const_str_plain_kind
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_47,
                const_str_plain_kind
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
        Py_DECREF( tmp_args_name_32 );
        Py_DECREF( tmp_tuple_element_47 );

        exception_lineno = 230;

        goto try_except_handler_34;
    }
    if ( outline_15_var_lookup_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_47,
            const_str_plain_lookup_name,
            outline_15_var_lookup_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_47,
            const_str_plain_lookup_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_47,
                const_str_plain_lookup_name
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
        Py_DECREF( tmp_args_name_32 );
        Py_DECREF( tmp_tuple_element_47 );

        exception_lineno = 230;

        goto try_except_handler_34;
    }
    if ( outline_15_var_output_field != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_47,
            const_str_plain_output_field,
            outline_15_var_output_field
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_47,
            const_str_plain_output_field
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_47,
                const_str_plain_output_field
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
        Py_DECREF( tmp_args_name_32 );
        Py_DECREF( tmp_tuple_element_47 );

        exception_lineno = 230;

        goto try_except_handler_34;
    }
    if ( outline_15_var_as_sql != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_47,
            const_str_plain_as_sql,
            outline_15_var_as_sql
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_47,
            const_str_plain_as_sql
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_47,
                const_str_plain_as_sql
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
        Py_DECREF( tmp_args_name_32 );
        Py_DECREF( tmp_tuple_element_47 );

        exception_lineno = 230;

        goto try_except_handler_34;
    }
    PyTuple_SET_ITEM( tmp_args_name_32, 2, tmp_tuple_element_47 );
    tmp_kw_name_32 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_32 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 230;
    tmp_assign_source_183 = CALL_FUNCTION( tmp_called_name_51, tmp_args_name_32, tmp_kw_name_32 );
    Py_DECREF( tmp_args_name_32 );
    if ( tmp_assign_source_183 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;

        goto try_except_handler_34;
    }
    assert( outline_15_var___class__ == NULL );
    outline_15_var___class__ = tmp_assign_source_183;

    tmp_outline_return_value_16 = outline_15_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_16 );
    Py_INCREF( tmp_outline_return_value_16 );
    goto try_return_handler_34;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_34:;
    CHECK_OBJECT( (PyObject *)outline_15_var___class__ );
    Py_DECREF( outline_15_var___class__ );
    outline_15_var___class__ = NULL;

    Py_XDECREF( outline_15_var___qualname__ );
    outline_15_var___qualname__ = NULL;

    Py_XDECREF( outline_15_var___module__ );
    outline_15_var___module__ = NULL;

    Py_XDECREF( outline_15_var_kind );
    outline_15_var_kind = NULL;

    Py_XDECREF( outline_15_var_lookup_name );
    outline_15_var_lookup_name = NULL;

    Py_XDECREF( outline_15_var_output_field );
    outline_15_var_output_field = NULL;

    Py_XDECREF( outline_15_var_as_sql );
    outline_15_var_as_sql = NULL;

    goto outline_result_16;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_15_var___qualname__ );
    outline_15_var___qualname__ = NULL;

    Py_XDECREF( outline_15_var___module__ );
    outline_15_var___module__ = NULL;

    Py_XDECREF( outline_15_var_kind );
    outline_15_var_kind = NULL;

    Py_XDECREF( outline_15_var_lookup_name );
    outline_15_var_lookup_name = NULL;

    Py_XDECREF( outline_15_var_output_field );
    outline_15_var_output_field = NULL;

    Py_XDECREF( outline_15_var_as_sql );
    outline_15_var_as_sql = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto outline_exception_16;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_16:;
    exception_lineno = 230;
    goto try_except_handler_33;
    outline_result_16:;
    tmp_assign_source_176 = tmp_outline_return_value_16;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncDate, tmp_assign_source_176 );
    goto try_end_18;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    Py_XDECREF( tmp_class_creation_16__class_decl_dict );
    tmp_class_creation_16__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_16__prepared );
    tmp_class_creation_16__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    Py_XDECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    Py_XDECREF( tmp_class_creation_16__class_decl_dict );
    tmp_class_creation_16__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_16__prepared );
    tmp_class_creation_16__prepared = NULL;

    // Tried code:
    tmp_assign_source_184 = PyTuple_New( 1 );
    tmp_tuple_element_48 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncBase );

    if (unlikely( tmp_tuple_element_48 == NULL ))
    {
        tmp_tuple_element_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TruncBase );
    }

    if ( tmp_tuple_element_48 == NULL )
    {
        Py_DECREF( tmp_assign_source_184 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TruncBase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;

        goto try_except_handler_35;
    }

    Py_INCREF( tmp_tuple_element_48 );
    PyTuple_SET_ITEM( tmp_assign_source_184, 0, tmp_tuple_element_48 );
    assert( tmp_class_creation_17__bases == NULL );
    tmp_class_creation_17__bases = tmp_assign_source_184;

    tmp_assign_source_185 = PyDict_New();
    assert( tmp_class_creation_17__class_decl_dict == NULL );
    tmp_class_creation_17__class_decl_dict = tmp_assign_source_185;

    tmp_compare_left_33 = const_str_plain_metaclass;
    tmp_compare_right_33 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_33 );
    tmp_cmp_In_33 = PySequence_Contains( tmp_compare_right_33, tmp_compare_left_33 );
    assert( !(tmp_cmp_In_33 == -1) );
    if ( tmp_cmp_In_33 == 1 )
    {
        goto condexpr_true_49;
    }
    else
    {
        goto condexpr_false_49;
    }
    condexpr_true_49:;
    tmp_dict_name_17 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_17 );
    tmp_key_name_17 = const_str_plain_metaclass;
    tmp_metaclass_name_17 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
    if ( tmp_metaclass_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;

        goto try_except_handler_35;
    }
    goto condexpr_end_49;
    condexpr_false_49:;
    tmp_cond_value_17 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_cond_value_17 );
    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;

        goto try_except_handler_35;
    }
    if ( tmp_cond_truth_17 == 1 )
    {
        goto condexpr_true_50;
    }
    else
    {
        goto condexpr_false_50;
    }
    condexpr_true_50:;
    tmp_subscribed_name_17 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_subscribed_name_17 );
    tmp_subscript_name_17 = const_int_0;
    tmp_type_arg_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
    if ( tmp_type_arg_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;

        goto try_except_handler_35;
    }
    tmp_metaclass_name_17 = BUILTIN_TYPE1( tmp_type_arg_17 );
    Py_DECREF( tmp_type_arg_17 );
    if ( tmp_metaclass_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;

        goto try_except_handler_35;
    }
    goto condexpr_end_50;
    condexpr_false_50:;
    tmp_metaclass_name_17 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_17 );
    condexpr_end_50:;
    condexpr_end_49:;
    tmp_bases_name_17 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_bases_name_17 );
    tmp_assign_source_186 = SELECT_METACLASS( tmp_metaclass_name_17, tmp_bases_name_17 );
    if ( tmp_assign_source_186 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_17 );

        exception_lineno = 247;

        goto try_except_handler_35;
    }
    Py_DECREF( tmp_metaclass_name_17 );
    assert( tmp_class_creation_17__metaclass == NULL );
    tmp_class_creation_17__metaclass = tmp_assign_source_186;

    tmp_compare_left_34 = const_str_plain_metaclass;
    tmp_compare_right_34 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_34 );
    tmp_cmp_In_34 = PySequence_Contains( tmp_compare_right_34, tmp_compare_left_34 );
    assert( !(tmp_cmp_In_34 == -1) );
    if ( tmp_cmp_In_34 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_dictdel_dict = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;

        goto try_except_handler_35;
    }
    branch_no_17:;
    tmp_hasattr_source_17 = tmp_class_creation_17__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_17 );
    tmp_hasattr_attr_17 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_17, tmp_hasattr_attr_17 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;

        goto try_except_handler_35;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_51;
    }
    else
    {
        goto condexpr_false_51;
    }
    condexpr_true_51:;
    tmp_source_name_33 = tmp_class_creation_17__metaclass;

    CHECK_OBJECT( tmp_source_name_33 );
    tmp_called_name_52 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain___prepare__ );
    if ( tmp_called_name_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;

        goto try_except_handler_35;
    }
    tmp_args_name_33 = PyTuple_New( 2 );
    tmp_tuple_element_49 = const_str_plain_TruncTime;
    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_args_name_33, 0, tmp_tuple_element_49 );
    tmp_tuple_element_49 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_tuple_element_49 );
    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_args_name_33, 1, tmp_tuple_element_49 );
    tmp_kw_name_33 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_33 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 247;
    tmp_assign_source_187 = CALL_FUNCTION( tmp_called_name_52, tmp_args_name_33, tmp_kw_name_33 );
    Py_DECREF( tmp_called_name_52 );
    Py_DECREF( tmp_args_name_33 );
    if ( tmp_assign_source_187 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;

        goto try_except_handler_35;
    }
    goto condexpr_end_51;
    condexpr_false_51:;
    tmp_assign_source_187 = PyDict_New();
    condexpr_end_51:;
    assert( tmp_class_creation_17__prepared == NULL );
    tmp_class_creation_17__prepared = tmp_assign_source_187;

    tmp_set_locals = tmp_class_creation_17__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_17);
    locals_dict_17 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_189 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_16_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_189 );
    outline_16_var___module__ = tmp_assign_source_189;

    tmp_assign_source_190 = const_str_plain_TruncTime;
    assert( outline_16_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_190 );
    outline_16_var___qualname__ = tmp_assign_source_190;

    tmp_assign_source_191 = const_str_plain_time;
    assert( outline_16_var_kind == NULL );
    Py_INCREF( tmp_assign_source_191 );
    outline_16_var_kind = tmp_assign_source_191;

    tmp_assign_source_192 = const_str_plain_time;
    assert( outline_16_var_lookup_name == NULL );
    Py_INCREF( tmp_assign_source_192 );
    outline_16_var_lookup_name = tmp_assign_source_192;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b41c75f9af44638ba4d912fbd6d6a3d9_4, codeobj_b41c75f9af44638ba4d912fbd6d6a3d9, module_django$db$models$functions$datetime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b41c75f9af44638ba4d912fbd6d6a3d9_4 = cache_frame_b41c75f9af44638ba4d912fbd6d6a3d9_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b41c75f9af44638ba4d912fbd6d6a3d9_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b41c75f9af44638ba4d912fbd6d6a3d9_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_53 = PyDict_GetItem( locals_dict_17, const_str_plain_cached_property );

    if ( tmp_called_name_53 == NULL )
    {
        tmp_called_name_53 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_cached_property );

        if (unlikely( tmp_called_name_53 == NULL ))
        {
            tmp_called_name_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cached_property );
        }

        if ( tmp_called_name_53 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cached_property" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 251;
            type_description_2 = "NooooNN";
            goto frame_exception_exit_4;
        }

    }

    tmp_args_element_name_21 = MAKE_FUNCTION_django$db$models$functions$datetime$$$function_13_output_field(  );
    frame_b41c75f9af44638ba4d912fbd6d6a3d9_4->m_frame.f_lineno = 251;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_assign_source_193 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_53, call_args );
    }

    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_assign_source_193 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_2 = "NooooNN";
        goto frame_exception_exit_4;
    }
    assert( outline_16_var_output_field == NULL );
    outline_16_var_output_field = tmp_assign_source_193;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_b41c75f9af44638ba4d912fbd6d6a3d9_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b41c75f9af44638ba4d912fbd6d6a3d9_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b41c75f9af44638ba4d912fbd6d6a3d9_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b41c75f9af44638ba4d912fbd6d6a3d9_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b41c75f9af44638ba4d912fbd6d6a3d9_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b41c75f9af44638ba4d912fbd6d6a3d9_4,
        type_description_2,
        NULL,
        outline_16_var___qualname__,
        outline_16_var___module__,
        outline_16_var_kind,
        outline_16_var_lookup_name,
        outline_16_var_output_field,
        NULL
    );


    // Release cached frame.
    if ( frame_b41c75f9af44638ba4d912fbd6d6a3d9_4 == cache_frame_b41c75f9af44638ba4d912fbd6d6a3d9_4 )
    {
        Py_DECREF( frame_b41c75f9af44638ba4d912fbd6d6a3d9_4 );
    }
    cache_frame_b41c75f9af44638ba4d912fbd6d6a3d9_4 = NULL;

    assertFrameObject( frame_b41c75f9af44638ba4d912fbd6d6a3d9_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_36;
    skip_nested_handling_3:;
    tmp_assign_source_194 = MAKE_FUNCTION_django$db$models$functions$datetime$$$function_14_as_sql(  );
    assert( outline_16_var_as_sql == NULL );
    outline_16_var_as_sql = tmp_assign_source_194;

    tmp_called_name_54 = tmp_class_creation_17__metaclass;

    CHECK_OBJECT( tmp_called_name_54 );
    tmp_args_name_34 = PyTuple_New( 3 );
    tmp_tuple_element_50 = const_str_plain_TruncTime;
    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_args_name_34, 0, tmp_tuple_element_50 );
    tmp_tuple_element_50 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_tuple_element_50 );
    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_args_name_34, 1, tmp_tuple_element_50 );
    tmp_tuple_element_50 = locals_dict_17;
    Py_INCREF( tmp_tuple_element_50 );
    if ( outline_16_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_50,
            const_str_plain___qualname__,
            outline_16_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_50,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_50,
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
        Py_DECREF( tmp_args_name_34 );
        Py_DECREF( tmp_tuple_element_50 );

        exception_lineno = 247;

        goto try_except_handler_36;
    }
    if ( outline_16_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_50,
            const_str_plain___module__,
            outline_16_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_50,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_50,
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
        Py_DECREF( tmp_args_name_34 );
        Py_DECREF( tmp_tuple_element_50 );

        exception_lineno = 247;

        goto try_except_handler_36;
    }
    if ( outline_16_var_kind != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_50,
            const_str_plain_kind,
            outline_16_var_kind
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_50,
            const_str_plain_kind
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_50,
                const_str_plain_kind
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
        Py_DECREF( tmp_args_name_34 );
        Py_DECREF( tmp_tuple_element_50 );

        exception_lineno = 247;

        goto try_except_handler_36;
    }
    if ( outline_16_var_lookup_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_50,
            const_str_plain_lookup_name,
            outline_16_var_lookup_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_50,
            const_str_plain_lookup_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_50,
                const_str_plain_lookup_name
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
        Py_DECREF( tmp_args_name_34 );
        Py_DECREF( tmp_tuple_element_50 );

        exception_lineno = 247;

        goto try_except_handler_36;
    }
    if ( outline_16_var_output_field != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_50,
            const_str_plain_output_field,
            outline_16_var_output_field
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_50,
            const_str_plain_output_field
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_50,
                const_str_plain_output_field
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
        Py_DECREF( tmp_args_name_34 );
        Py_DECREF( tmp_tuple_element_50 );

        exception_lineno = 247;

        goto try_except_handler_36;
    }
    if ( outline_16_var_as_sql != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_50,
            const_str_plain_as_sql,
            outline_16_var_as_sql
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_50,
            const_str_plain_as_sql
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_50,
                const_str_plain_as_sql
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
        Py_DECREF( tmp_args_name_34 );
        Py_DECREF( tmp_tuple_element_50 );

        exception_lineno = 247;

        goto try_except_handler_36;
    }
    PyTuple_SET_ITEM( tmp_args_name_34, 2, tmp_tuple_element_50 );
    tmp_kw_name_34 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_34 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 247;
    tmp_assign_source_195 = CALL_FUNCTION( tmp_called_name_54, tmp_args_name_34, tmp_kw_name_34 );
    Py_DECREF( tmp_args_name_34 );
    if ( tmp_assign_source_195 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;

        goto try_except_handler_36;
    }
    assert( outline_16_var___class__ == NULL );
    outline_16_var___class__ = tmp_assign_source_195;

    tmp_outline_return_value_17 = outline_16_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_17 );
    Py_INCREF( tmp_outline_return_value_17 );
    goto try_return_handler_36;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_36:;
    CHECK_OBJECT( (PyObject *)outline_16_var___class__ );
    Py_DECREF( outline_16_var___class__ );
    outline_16_var___class__ = NULL;

    Py_XDECREF( outline_16_var___qualname__ );
    outline_16_var___qualname__ = NULL;

    Py_XDECREF( outline_16_var___module__ );
    outline_16_var___module__ = NULL;

    Py_XDECREF( outline_16_var_kind );
    outline_16_var_kind = NULL;

    Py_XDECREF( outline_16_var_lookup_name );
    outline_16_var_lookup_name = NULL;

    Py_XDECREF( outline_16_var_output_field );
    outline_16_var_output_field = NULL;

    Py_XDECREF( outline_16_var_as_sql );
    outline_16_var_as_sql = NULL;

    goto outline_result_17;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_16_var___qualname__ );
    outline_16_var___qualname__ = NULL;

    Py_XDECREF( outline_16_var___module__ );
    outline_16_var___module__ = NULL;

    Py_XDECREF( outline_16_var_kind );
    outline_16_var_kind = NULL;

    Py_XDECREF( outline_16_var_lookup_name );
    outline_16_var_lookup_name = NULL;

    Py_XDECREF( outline_16_var_output_field );
    outline_16_var_output_field = NULL;

    Py_XDECREF( outline_16_var_as_sql );
    outline_16_var_as_sql = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto outline_exception_17;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_17:;
    exception_lineno = 247;
    goto try_except_handler_35;
    outline_result_17:;
    tmp_assign_source_188 = tmp_outline_return_value_17;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncTime, tmp_assign_source_188 );
    goto try_end_19;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    Py_XDECREF( tmp_class_creation_17__class_decl_dict );
    tmp_class_creation_17__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_17__prepared );
    tmp_class_creation_17__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    Py_XDECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    Py_XDECREF( tmp_class_creation_17__class_decl_dict );
    tmp_class_creation_17__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_17__prepared );
    tmp_class_creation_17__prepared = NULL;

    // Tried code:
    tmp_assign_source_196 = PyTuple_New( 1 );
    tmp_tuple_element_51 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncBase );

    if (unlikely( tmp_tuple_element_51 == NULL ))
    {
        tmp_tuple_element_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TruncBase );
    }

    if ( tmp_tuple_element_51 == NULL )
    {
        Py_DECREF( tmp_assign_source_196 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TruncBase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;

        goto try_except_handler_37;
    }

    Py_INCREF( tmp_tuple_element_51 );
    PyTuple_SET_ITEM( tmp_assign_source_196, 0, tmp_tuple_element_51 );
    assert( tmp_class_creation_18__bases == NULL );
    tmp_class_creation_18__bases = tmp_assign_source_196;

    tmp_assign_source_197 = PyDict_New();
    assert( tmp_class_creation_18__class_decl_dict == NULL );
    tmp_class_creation_18__class_decl_dict = tmp_assign_source_197;

    tmp_compare_left_35 = const_str_plain_metaclass;
    tmp_compare_right_35 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_35 );
    tmp_cmp_In_35 = PySequence_Contains( tmp_compare_right_35, tmp_compare_left_35 );
    assert( !(tmp_cmp_In_35 == -1) );
    if ( tmp_cmp_In_35 == 1 )
    {
        goto condexpr_true_52;
    }
    else
    {
        goto condexpr_false_52;
    }
    condexpr_true_52:;
    tmp_dict_name_18 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_18 );
    tmp_key_name_18 = const_str_plain_metaclass;
    tmp_metaclass_name_18 = DICT_GET_ITEM( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_metaclass_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    goto condexpr_end_52;
    condexpr_false_52:;
    tmp_cond_value_18 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_cond_value_18 );
    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    if ( tmp_cond_truth_18 == 1 )
    {
        goto condexpr_true_53;
    }
    else
    {
        goto condexpr_false_53;
    }
    condexpr_true_53:;
    tmp_subscribed_name_18 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_subscribed_name_18 );
    tmp_subscript_name_18 = const_int_0;
    tmp_type_arg_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
    if ( tmp_type_arg_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    tmp_metaclass_name_18 = BUILTIN_TYPE1( tmp_type_arg_18 );
    Py_DECREF( tmp_type_arg_18 );
    if ( tmp_metaclass_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    goto condexpr_end_53;
    condexpr_false_53:;
    tmp_metaclass_name_18 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_18 );
    condexpr_end_53:;
    condexpr_end_52:;
    tmp_bases_name_18 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_bases_name_18 );
    tmp_assign_source_198 = SELECT_METACLASS( tmp_metaclass_name_18, tmp_bases_name_18 );
    if ( tmp_assign_source_198 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_18 );

        exception_lineno = 264;

        goto try_except_handler_37;
    }
    Py_DECREF( tmp_metaclass_name_18 );
    assert( tmp_class_creation_18__metaclass == NULL );
    tmp_class_creation_18__metaclass = tmp_assign_source_198;

    tmp_compare_left_36 = const_str_plain_metaclass;
    tmp_compare_right_36 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_36 );
    tmp_cmp_In_36 = PySequence_Contains( tmp_compare_right_36, tmp_compare_left_36 );
    assert( !(tmp_cmp_In_36 == -1) );
    if ( tmp_cmp_In_36 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_dictdel_dict = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    branch_no_18:;
    tmp_hasattr_source_18 = tmp_class_creation_18__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_18 );
    tmp_hasattr_attr_18 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_18, tmp_hasattr_attr_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_54;
    }
    else
    {
        goto condexpr_false_54;
    }
    condexpr_true_54:;
    tmp_source_name_34 = tmp_class_creation_18__metaclass;

    CHECK_OBJECT( tmp_source_name_34 );
    tmp_called_name_55 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain___prepare__ );
    if ( tmp_called_name_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    tmp_args_name_35 = PyTuple_New( 2 );
    tmp_tuple_element_52 = const_str_plain_TruncHour;
    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_args_name_35, 0, tmp_tuple_element_52 );
    tmp_tuple_element_52 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_tuple_element_52 );
    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_args_name_35, 1, tmp_tuple_element_52 );
    tmp_kw_name_35 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_35 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 264;
    tmp_assign_source_199 = CALL_FUNCTION( tmp_called_name_55, tmp_args_name_35, tmp_kw_name_35 );
    Py_DECREF( tmp_called_name_55 );
    Py_DECREF( tmp_args_name_35 );
    if ( tmp_assign_source_199 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    goto condexpr_end_54;
    condexpr_false_54:;
    tmp_assign_source_199 = PyDict_New();
    condexpr_end_54:;
    assert( tmp_class_creation_18__prepared == NULL );
    tmp_class_creation_18__prepared = tmp_assign_source_199;

    tmp_set_locals = tmp_class_creation_18__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_18);
    locals_dict_18 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_201 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_17_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_201 );
    outline_17_var___module__ = tmp_assign_source_201;

    tmp_assign_source_202 = const_str_plain_TruncHour;
    assert( outline_17_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_202 );
    outline_17_var___qualname__ = tmp_assign_source_202;

    tmp_assign_source_203 = const_str_plain_hour;
    assert( outline_17_var_kind == NULL );
    Py_INCREF( tmp_assign_source_203 );
    outline_17_var_kind = tmp_assign_source_203;

    // Tried code:
    tmp_called_name_56 = tmp_class_creation_18__metaclass;

    CHECK_OBJECT( tmp_called_name_56 );
    tmp_args_name_36 = PyTuple_New( 3 );
    tmp_tuple_element_53 = const_str_plain_TruncHour;
    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_args_name_36, 0, tmp_tuple_element_53 );
    tmp_tuple_element_53 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_tuple_element_53 );
    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_args_name_36, 1, tmp_tuple_element_53 );
    tmp_tuple_element_53 = locals_dict_18;
    Py_INCREF( tmp_tuple_element_53 );
    if ( outline_17_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_53,
            const_str_plain___qualname__,
            outline_17_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_53,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_53,
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
        Py_DECREF( tmp_args_name_36 );
        Py_DECREF( tmp_tuple_element_53 );

        exception_lineno = 264;

        goto try_except_handler_38;
    }
    if ( outline_17_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_53,
            const_str_plain___module__,
            outline_17_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_53,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_53,
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
        Py_DECREF( tmp_args_name_36 );
        Py_DECREF( tmp_tuple_element_53 );

        exception_lineno = 264;

        goto try_except_handler_38;
    }
    if ( outline_17_var_kind != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_53,
            const_str_plain_kind,
            outline_17_var_kind
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_53,
            const_str_plain_kind
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_53,
                const_str_plain_kind
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
        Py_DECREF( tmp_args_name_36 );
        Py_DECREF( tmp_tuple_element_53 );

        exception_lineno = 264;

        goto try_except_handler_38;
    }
    PyTuple_SET_ITEM( tmp_args_name_36, 2, tmp_tuple_element_53 );
    tmp_kw_name_36 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_36 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 264;
    tmp_assign_source_204 = CALL_FUNCTION( tmp_called_name_56, tmp_args_name_36, tmp_kw_name_36 );
    Py_DECREF( tmp_args_name_36 );
    if ( tmp_assign_source_204 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_38;
    }
    assert( outline_17_var___class__ == NULL );
    outline_17_var___class__ = tmp_assign_source_204;

    tmp_outline_return_value_18 = outline_17_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_18 );
    Py_INCREF( tmp_outline_return_value_18 );
    goto try_return_handler_38;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_38:;
    CHECK_OBJECT( (PyObject *)outline_17_var___class__ );
    Py_DECREF( outline_17_var___class__ );
    outline_17_var___class__ = NULL;

    Py_XDECREF( outline_17_var___qualname__ );
    outline_17_var___qualname__ = NULL;

    Py_XDECREF( outline_17_var___module__ );
    outline_17_var___module__ = NULL;

    Py_XDECREF( outline_17_var_kind );
    outline_17_var_kind = NULL;

    goto outline_result_18;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_17_var___qualname__ );
    outline_17_var___qualname__ = NULL;

    Py_XDECREF( outline_17_var___module__ );
    outline_17_var___module__ = NULL;

    Py_XDECREF( outline_17_var_kind );
    outline_17_var_kind = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto outline_exception_18;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_18:;
    exception_lineno = 264;
    goto try_except_handler_37;
    outline_result_18:;
    tmp_assign_source_200 = tmp_outline_return_value_18;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncHour, tmp_assign_source_200 );
    goto try_end_20;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    Py_XDECREF( tmp_class_creation_18__class_decl_dict );
    tmp_class_creation_18__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_18__prepared );
    tmp_class_creation_18__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    Py_XDECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    Py_XDECREF( tmp_class_creation_18__class_decl_dict );
    tmp_class_creation_18__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_18__prepared );
    tmp_class_creation_18__prepared = NULL;

    // Tried code:
    tmp_assign_source_205 = PyTuple_New( 1 );
    tmp_tuple_element_54 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncBase );

    if (unlikely( tmp_tuple_element_54 == NULL ))
    {
        tmp_tuple_element_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TruncBase );
    }

    if ( tmp_tuple_element_54 == NULL )
    {
        Py_DECREF( tmp_assign_source_205 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TruncBase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 268;

        goto try_except_handler_39;
    }

    Py_INCREF( tmp_tuple_element_54 );
    PyTuple_SET_ITEM( tmp_assign_source_205, 0, tmp_tuple_element_54 );
    assert( tmp_class_creation_19__bases == NULL );
    tmp_class_creation_19__bases = tmp_assign_source_205;

    tmp_assign_source_206 = PyDict_New();
    assert( tmp_class_creation_19__class_decl_dict == NULL );
    tmp_class_creation_19__class_decl_dict = tmp_assign_source_206;

    tmp_compare_left_37 = const_str_plain_metaclass;
    tmp_compare_right_37 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_37 );
    tmp_cmp_In_37 = PySequence_Contains( tmp_compare_right_37, tmp_compare_left_37 );
    assert( !(tmp_cmp_In_37 == -1) );
    if ( tmp_cmp_In_37 == 1 )
    {
        goto condexpr_true_55;
    }
    else
    {
        goto condexpr_false_55;
    }
    condexpr_true_55:;
    tmp_dict_name_19 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_19 );
    tmp_key_name_19 = const_str_plain_metaclass;
    tmp_metaclass_name_19 = DICT_GET_ITEM( tmp_dict_name_19, tmp_key_name_19 );
    if ( tmp_metaclass_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;

        goto try_except_handler_39;
    }
    goto condexpr_end_55;
    condexpr_false_55:;
    tmp_cond_value_19 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_cond_value_19 );
    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;

        goto try_except_handler_39;
    }
    if ( tmp_cond_truth_19 == 1 )
    {
        goto condexpr_true_56;
    }
    else
    {
        goto condexpr_false_56;
    }
    condexpr_true_56:;
    tmp_subscribed_name_19 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_subscribed_name_19 );
    tmp_subscript_name_19 = const_int_0;
    tmp_type_arg_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
    if ( tmp_type_arg_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;

        goto try_except_handler_39;
    }
    tmp_metaclass_name_19 = BUILTIN_TYPE1( tmp_type_arg_19 );
    Py_DECREF( tmp_type_arg_19 );
    if ( tmp_metaclass_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;

        goto try_except_handler_39;
    }
    goto condexpr_end_56;
    condexpr_false_56:;
    tmp_metaclass_name_19 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_19 );
    condexpr_end_56:;
    condexpr_end_55:;
    tmp_bases_name_19 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_bases_name_19 );
    tmp_assign_source_207 = SELECT_METACLASS( tmp_metaclass_name_19, tmp_bases_name_19 );
    if ( tmp_assign_source_207 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_19 );

        exception_lineno = 268;

        goto try_except_handler_39;
    }
    Py_DECREF( tmp_metaclass_name_19 );
    assert( tmp_class_creation_19__metaclass == NULL );
    tmp_class_creation_19__metaclass = tmp_assign_source_207;

    tmp_compare_left_38 = const_str_plain_metaclass;
    tmp_compare_right_38 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_38 );
    tmp_cmp_In_38 = PySequence_Contains( tmp_compare_right_38, tmp_compare_left_38 );
    assert( !(tmp_cmp_In_38 == -1) );
    if ( tmp_cmp_In_38 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_dictdel_dict = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;

        goto try_except_handler_39;
    }
    branch_no_19:;
    tmp_hasattr_source_19 = tmp_class_creation_19__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_19 );
    tmp_hasattr_attr_19 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_19, tmp_hasattr_attr_19 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;

        goto try_except_handler_39;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_57;
    }
    else
    {
        goto condexpr_false_57;
    }
    condexpr_true_57:;
    tmp_source_name_35 = tmp_class_creation_19__metaclass;

    CHECK_OBJECT( tmp_source_name_35 );
    tmp_called_name_57 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain___prepare__ );
    if ( tmp_called_name_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;

        goto try_except_handler_39;
    }
    tmp_args_name_37 = PyTuple_New( 2 );
    tmp_tuple_element_55 = const_str_plain_TruncMinute;
    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_args_name_37, 0, tmp_tuple_element_55 );
    tmp_tuple_element_55 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_tuple_element_55 );
    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_args_name_37, 1, tmp_tuple_element_55 );
    tmp_kw_name_37 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_37 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 268;
    tmp_assign_source_208 = CALL_FUNCTION( tmp_called_name_57, tmp_args_name_37, tmp_kw_name_37 );
    Py_DECREF( tmp_called_name_57 );
    Py_DECREF( tmp_args_name_37 );
    if ( tmp_assign_source_208 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;

        goto try_except_handler_39;
    }
    goto condexpr_end_57;
    condexpr_false_57:;
    tmp_assign_source_208 = PyDict_New();
    condexpr_end_57:;
    assert( tmp_class_creation_19__prepared == NULL );
    tmp_class_creation_19__prepared = tmp_assign_source_208;

    tmp_set_locals = tmp_class_creation_19__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_19);
    locals_dict_19 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_210 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_18_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_210 );
    outline_18_var___module__ = tmp_assign_source_210;

    tmp_assign_source_211 = const_str_plain_TruncMinute;
    assert( outline_18_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_211 );
    outline_18_var___qualname__ = tmp_assign_source_211;

    tmp_assign_source_212 = const_str_plain_minute;
    assert( outline_18_var_kind == NULL );
    Py_INCREF( tmp_assign_source_212 );
    outline_18_var_kind = tmp_assign_source_212;

    // Tried code:
    tmp_called_name_58 = tmp_class_creation_19__metaclass;

    CHECK_OBJECT( tmp_called_name_58 );
    tmp_args_name_38 = PyTuple_New( 3 );
    tmp_tuple_element_56 = const_str_plain_TruncMinute;
    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_args_name_38, 0, tmp_tuple_element_56 );
    tmp_tuple_element_56 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_tuple_element_56 );
    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_args_name_38, 1, tmp_tuple_element_56 );
    tmp_tuple_element_56 = locals_dict_19;
    Py_INCREF( tmp_tuple_element_56 );
    if ( outline_18_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_56,
            const_str_plain___qualname__,
            outline_18_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_56,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_56,
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
        Py_DECREF( tmp_args_name_38 );
        Py_DECREF( tmp_tuple_element_56 );

        exception_lineno = 268;

        goto try_except_handler_40;
    }
    if ( outline_18_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_56,
            const_str_plain___module__,
            outline_18_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_56,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_56,
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
        Py_DECREF( tmp_args_name_38 );
        Py_DECREF( tmp_tuple_element_56 );

        exception_lineno = 268;

        goto try_except_handler_40;
    }
    if ( outline_18_var_kind != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_56,
            const_str_plain_kind,
            outline_18_var_kind
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_56,
            const_str_plain_kind
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_56,
                const_str_plain_kind
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
        Py_DECREF( tmp_args_name_38 );
        Py_DECREF( tmp_tuple_element_56 );

        exception_lineno = 268;

        goto try_except_handler_40;
    }
    PyTuple_SET_ITEM( tmp_args_name_38, 2, tmp_tuple_element_56 );
    tmp_kw_name_38 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_38 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 268;
    tmp_assign_source_213 = CALL_FUNCTION( tmp_called_name_58, tmp_args_name_38, tmp_kw_name_38 );
    Py_DECREF( tmp_args_name_38 );
    if ( tmp_assign_source_213 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;

        goto try_except_handler_40;
    }
    assert( outline_18_var___class__ == NULL );
    outline_18_var___class__ = tmp_assign_source_213;

    tmp_outline_return_value_19 = outline_18_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_19 );
    Py_INCREF( tmp_outline_return_value_19 );
    goto try_return_handler_40;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_40:;
    CHECK_OBJECT( (PyObject *)outline_18_var___class__ );
    Py_DECREF( outline_18_var___class__ );
    outline_18_var___class__ = NULL;

    Py_XDECREF( outline_18_var___qualname__ );
    outline_18_var___qualname__ = NULL;

    Py_XDECREF( outline_18_var___module__ );
    outline_18_var___module__ = NULL;

    Py_XDECREF( outline_18_var_kind );
    outline_18_var_kind = NULL;

    goto outline_result_19;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_18_var___qualname__ );
    outline_18_var___qualname__ = NULL;

    Py_XDECREF( outline_18_var___module__ );
    outline_18_var___module__ = NULL;

    Py_XDECREF( outline_18_var_kind );
    outline_18_var_kind = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto outline_exception_19;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_19:;
    exception_lineno = 268;
    goto try_except_handler_39;
    outline_result_19:;
    tmp_assign_source_209 = tmp_outline_return_value_19;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncMinute, tmp_assign_source_209 );
    goto try_end_21;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    Py_XDECREF( tmp_class_creation_19__class_decl_dict );
    tmp_class_creation_19__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_19__prepared );
    tmp_class_creation_19__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    Py_XDECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    Py_XDECREF( tmp_class_creation_19__class_decl_dict );
    tmp_class_creation_19__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_19__prepared );
    tmp_class_creation_19__prepared = NULL;

    // Tried code:
    tmp_assign_source_214 = PyTuple_New( 1 );
    tmp_tuple_element_57 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncBase );

    if (unlikely( tmp_tuple_element_57 == NULL ))
    {
        tmp_tuple_element_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TruncBase );
    }

    if ( tmp_tuple_element_57 == NULL )
    {
        Py_DECREF( tmp_assign_source_214 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TruncBase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 272;

        goto try_except_handler_41;
    }

    Py_INCREF( tmp_tuple_element_57 );
    PyTuple_SET_ITEM( tmp_assign_source_214, 0, tmp_tuple_element_57 );
    assert( tmp_class_creation_20__bases == NULL );
    tmp_class_creation_20__bases = tmp_assign_source_214;

    tmp_assign_source_215 = PyDict_New();
    assert( tmp_class_creation_20__class_decl_dict == NULL );
    tmp_class_creation_20__class_decl_dict = tmp_assign_source_215;

    tmp_compare_left_39 = const_str_plain_metaclass;
    tmp_compare_right_39 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_39 );
    tmp_cmp_In_39 = PySequence_Contains( tmp_compare_right_39, tmp_compare_left_39 );
    assert( !(tmp_cmp_In_39 == -1) );
    if ( tmp_cmp_In_39 == 1 )
    {
        goto condexpr_true_58;
    }
    else
    {
        goto condexpr_false_58;
    }
    condexpr_true_58:;
    tmp_dict_name_20 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_20 );
    tmp_key_name_20 = const_str_plain_metaclass;
    tmp_metaclass_name_20 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
    if ( tmp_metaclass_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;

        goto try_except_handler_41;
    }
    goto condexpr_end_58;
    condexpr_false_58:;
    tmp_cond_value_20 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_cond_value_20 );
    tmp_cond_truth_20 = CHECK_IF_TRUE( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;

        goto try_except_handler_41;
    }
    if ( tmp_cond_truth_20 == 1 )
    {
        goto condexpr_true_59;
    }
    else
    {
        goto condexpr_false_59;
    }
    condexpr_true_59:;
    tmp_subscribed_name_20 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_subscribed_name_20 );
    tmp_subscript_name_20 = const_int_0;
    tmp_type_arg_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
    if ( tmp_type_arg_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;

        goto try_except_handler_41;
    }
    tmp_metaclass_name_20 = BUILTIN_TYPE1( tmp_type_arg_20 );
    Py_DECREF( tmp_type_arg_20 );
    if ( tmp_metaclass_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;

        goto try_except_handler_41;
    }
    goto condexpr_end_59;
    condexpr_false_59:;
    tmp_metaclass_name_20 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_20 );
    condexpr_end_59:;
    condexpr_end_58:;
    tmp_bases_name_20 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_bases_name_20 );
    tmp_assign_source_216 = SELECT_METACLASS( tmp_metaclass_name_20, tmp_bases_name_20 );
    if ( tmp_assign_source_216 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_20 );

        exception_lineno = 272;

        goto try_except_handler_41;
    }
    Py_DECREF( tmp_metaclass_name_20 );
    assert( tmp_class_creation_20__metaclass == NULL );
    tmp_class_creation_20__metaclass = tmp_assign_source_216;

    tmp_compare_left_40 = const_str_plain_metaclass;
    tmp_compare_right_40 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_40 );
    tmp_cmp_In_40 = PySequence_Contains( tmp_compare_right_40, tmp_compare_left_40 );
    assert( !(tmp_cmp_In_40 == -1) );
    if ( tmp_cmp_In_40 == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_dictdel_dict = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;

        goto try_except_handler_41;
    }
    branch_no_20:;
    tmp_hasattr_source_20 = tmp_class_creation_20__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_20 );
    tmp_hasattr_attr_20 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_20, tmp_hasattr_attr_20 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;

        goto try_except_handler_41;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_60;
    }
    else
    {
        goto condexpr_false_60;
    }
    condexpr_true_60:;
    tmp_source_name_36 = tmp_class_creation_20__metaclass;

    CHECK_OBJECT( tmp_source_name_36 );
    tmp_called_name_59 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain___prepare__ );
    if ( tmp_called_name_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;

        goto try_except_handler_41;
    }
    tmp_args_name_39 = PyTuple_New( 2 );
    tmp_tuple_element_58 = const_str_plain_TruncSecond;
    Py_INCREF( tmp_tuple_element_58 );
    PyTuple_SET_ITEM( tmp_args_name_39, 0, tmp_tuple_element_58 );
    tmp_tuple_element_58 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_tuple_element_58 );
    Py_INCREF( tmp_tuple_element_58 );
    PyTuple_SET_ITEM( tmp_args_name_39, 1, tmp_tuple_element_58 );
    tmp_kw_name_39 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_39 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 272;
    tmp_assign_source_217 = CALL_FUNCTION( tmp_called_name_59, tmp_args_name_39, tmp_kw_name_39 );
    Py_DECREF( tmp_called_name_59 );
    Py_DECREF( tmp_args_name_39 );
    if ( tmp_assign_source_217 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;

        goto try_except_handler_41;
    }
    goto condexpr_end_60;
    condexpr_false_60:;
    tmp_assign_source_217 = PyDict_New();
    condexpr_end_60:;
    assert( tmp_class_creation_20__prepared == NULL );
    tmp_class_creation_20__prepared = tmp_assign_source_217;

    tmp_set_locals = tmp_class_creation_20__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_20);
    locals_dict_20 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_219 = const_str_digest_a732f039cc8d6dda06497c69ab447a52;
    assert( outline_19_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_219 );
    outline_19_var___module__ = tmp_assign_source_219;

    tmp_assign_source_220 = const_str_plain_TruncSecond;
    assert( outline_19_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_220 );
    outline_19_var___qualname__ = tmp_assign_source_220;

    tmp_assign_source_221 = const_str_plain_second;
    assert( outline_19_var_kind == NULL );
    Py_INCREF( tmp_assign_source_221 );
    outline_19_var_kind = tmp_assign_source_221;

    // Tried code:
    tmp_called_name_60 = tmp_class_creation_20__metaclass;

    CHECK_OBJECT( tmp_called_name_60 );
    tmp_args_name_40 = PyTuple_New( 3 );
    tmp_tuple_element_59 = const_str_plain_TruncSecond;
    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_args_name_40, 0, tmp_tuple_element_59 );
    tmp_tuple_element_59 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_tuple_element_59 );
    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_args_name_40, 1, tmp_tuple_element_59 );
    tmp_tuple_element_59 = locals_dict_20;
    Py_INCREF( tmp_tuple_element_59 );
    if ( outline_19_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_59,
            const_str_plain___qualname__,
            outline_19_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_59,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_59,
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
        Py_DECREF( tmp_args_name_40 );
        Py_DECREF( tmp_tuple_element_59 );

        exception_lineno = 272;

        goto try_except_handler_42;
    }
    if ( outline_19_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_59,
            const_str_plain___module__,
            outline_19_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_59,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_59,
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
        Py_DECREF( tmp_args_name_40 );
        Py_DECREF( tmp_tuple_element_59 );

        exception_lineno = 272;

        goto try_except_handler_42;
    }
    if ( outline_19_var_kind != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_59,
            const_str_plain_kind,
            outline_19_var_kind
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_59,
            const_str_plain_kind
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_59,
                const_str_plain_kind
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
        Py_DECREF( tmp_args_name_40 );
        Py_DECREF( tmp_tuple_element_59 );

        exception_lineno = 272;

        goto try_except_handler_42;
    }
    PyTuple_SET_ITEM( tmp_args_name_40, 2, tmp_tuple_element_59 );
    tmp_kw_name_40 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_40 );
    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 272;
    tmp_assign_source_222 = CALL_FUNCTION( tmp_called_name_60, tmp_args_name_40, tmp_kw_name_40 );
    Py_DECREF( tmp_args_name_40 );
    if ( tmp_assign_source_222 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;

        goto try_except_handler_42;
    }
    assert( outline_19_var___class__ == NULL );
    outline_19_var___class__ = tmp_assign_source_222;

    tmp_outline_return_value_20 = outline_19_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_20 );
    Py_INCREF( tmp_outline_return_value_20 );
    goto try_return_handler_42;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_42:;
    CHECK_OBJECT( (PyObject *)outline_19_var___class__ );
    Py_DECREF( outline_19_var___class__ );
    outline_19_var___class__ = NULL;

    Py_XDECREF( outline_19_var___qualname__ );
    outline_19_var___qualname__ = NULL;

    Py_XDECREF( outline_19_var___module__ );
    outline_19_var___module__ = NULL;

    Py_XDECREF( outline_19_var_kind );
    outline_19_var_kind = NULL;

    goto outline_result_20;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_19_var___qualname__ );
    outline_19_var___qualname__ = NULL;

    Py_XDECREF( outline_19_var___module__ );
    outline_19_var___module__ = NULL;

    Py_XDECREF( outline_19_var_kind );
    outline_19_var_kind = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto outline_exception_20;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$functions$datetime );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_20:;
    exception_lineno = 272;
    goto try_except_handler_41;
    outline_result_20:;
    tmp_assign_source_218 = tmp_outline_return_value_20;
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncSecond, tmp_assign_source_218 );
    goto try_end_22;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    Py_XDECREF( tmp_class_creation_20__class_decl_dict );
    tmp_class_creation_20__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_20__prepared );
    tmp_class_creation_20__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    Py_XDECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    Py_XDECREF( tmp_class_creation_20__class_decl_dict );
    tmp_class_creation_20__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_20__prepared );
    tmp_class_creation_20__prepared = NULL;

    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateTimeField );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateTimeField );
    }

    if ( tmp_source_name_37 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateTimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;

        goto frame_exception_exit_1;
    }

    tmp_called_name_61 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_register_lookup );
    if ( tmp_called_name_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_22 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncDate );

    if (unlikely( tmp_args_element_name_22 == NULL ))
    {
        tmp_args_element_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TruncDate );
    }

    if ( tmp_args_element_name_22 == NULL )
    {
        Py_DECREF( tmp_called_name_61 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TruncDate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 276;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_61, call_args );
    }

    Py_DECREF( tmp_called_name_61 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_38 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_DateTimeField );

    if (unlikely( tmp_source_name_38 == NULL ))
    {
        tmp_source_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DateTimeField );
    }

    if ( tmp_source_name_38 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DateTimeField" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;

        goto frame_exception_exit_1;
    }

    tmp_called_name_62 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_register_lookup );
    if ( tmp_called_name_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_23 = GET_STRING_DICT_VALUE( moduledict_django$db$models$functions$datetime, (Nuitka_StringObject *)const_str_plain_TruncTime );

    if (unlikely( tmp_args_element_name_23 == NULL ))
    {
        tmp_args_element_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TruncTime );
    }

    if ( tmp_args_element_name_23 == NULL )
    {
        Py_DECREF( tmp_called_name_62 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TruncTime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;

        goto frame_exception_exit_1;
    }

    frame_7d057895e572573cb3149c484cc0e440->m_frame.f_lineno = 277;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_62, call_args );
    }

    Py_DECREF( tmp_called_name_62 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d057895e572573cb3149c484cc0e440 );
#endif
    popFrameStack();

    assertFrameObject( frame_7d057895e572573cb3149c484cc0e440 );

    goto frame_no_exception_4;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d057895e572573cb3149c484cc0e440 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7d057895e572573cb3149c484cc0e440, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7d057895e572573cb3149c484cc0e440->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7d057895e572573cb3149c484cc0e440, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;

    return MOD_RETURN_VALUE( module_django$db$models$functions$datetime );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
