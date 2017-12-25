/* Generated code for Python source for module 'pytz'
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

/* The _module_pytz is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pytz;
PyDictObject *moduledict_pytz;

/* The module constants used, if any. */
extern PyObject *const_str_digest_b1bc7fe008192248e9be21d38f9c02c1;
static PyObject *const_str_digest_1e4c2b75c9f1db6a400788e38232d291;
extern PyObject *const_str_plain_readlines;
static PyObject *const_list_e0c41cf66ed84c646cccc6342b37a9b8_list;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_str_plain_zone_str_plain_fp_tuple;
static PyObject *const_str_digest_d9377d9886e98c27cec2d5edcf37c120;
static PyObject *const_str_digest_c9936f1548c11ea6c3047698538b3dca;
extern PyObject *const_str_plain_LazyList;
extern PyObject *const_str_plain___reduce__;
extern PyObject *const_str_plain_sep;
static PyObject *const_tuple_str_digest_c9936f1548c11ea6c3047698538b3dca_tuple;
extern PyObject *const_str_chr_43;
extern PyObject *const_str_plain_timedelta;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_name_parts;
static PyObject *const_str_plain__plus_;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_offset;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_digest_e399ba4554180f37de594a6743234f17;
static PyObject *const_list_e442bdbf8df831c1de739ae7e7e12872_list;
extern PyObject *const_str_plain_gettext;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_lstrip;
static PyObject *const_str_plain__tzinfo_cache;
static PyObject *const_str_plain___safe_for_unpickling__;
static PyObject *const_tuple_str_plain_self_str_plain_iso3166_code_tuple;
extern PyObject *const_tuple_str_plain_s_tuple;
extern PyObject *const_str_digest_5f18f2c6586a4ad10d7b44ad223b9240;
extern PyObject *const_tuple_str_chr_35_tuple;
static PyObject *const_str_digest_8b99c616c864c1da0516542db12c66b8;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_strip;
static PyObject *const_str_digest_e8e88b2e956a7bdb0e7f5c20e09d37a3;
static PyObject *const_str_plain_country_names;
extern PyObject *const_str_plain_build_tzinfo;
extern PyObject *const_str_plain_join;
static PyObject *const_tuple_str_plain__minus__str_chr_45_tuple;
static PyObject *const_str_digest_235ffd3085116cd605ef64064f4a8cbe;
extern PyObject *const_str_plain_minutes;
extern PyObject *const_str_plain_InvalidTimeError;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_fp;
extern PyObject *const_str_plain_UnknownTimeZoneError;
static PyObject *const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple;
extern PyObject *const_str_plain_LazyDict;
extern PyObject *const_str_digest_c3c7bf3c5a4a733fe62b7f4b6ed9a9ea;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_utcoffset;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_plain_open_resource;
extern PyObject *const_tuple_str_plain_ASCII_tuple;
static PyObject *const_tuple_str_plain_AmbiguousTimeError_tuple;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_digest_8fba0ec9be0c4ed486d17847c03a428a;
static PyObject *const_str_plain__minutes;
extern PyObject *const_str_plain__tzname;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_hours;
static PyObject *const_str_plain_zoneinfo;
static PyObject *const_str_plain__CountryTimezoneDict;
static PyObject *const_str_digest_c93acf6b434d55ddecef50534819d47b;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_tzinfo;
extern PyObject *const_str_plain_path;
static PyObject *const_tuple_str_plain_LazyDict_str_plain_LazyList_str_plain_LazySet_tuple;
extern PyObject *const_str_chr_45;
static PyObject *const_tuple_str_plain_NonExistentTimeError_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_unicode;
static PyObject *const_str_digest_474f3cb26417a0b447aabbea02146a81;
extern PyObject *const_str_plain_insert;
extern PyObject *const_str_angle_UTC;
extern PyObject *const_str_chr_35;
extern PyObject *const_str_plain_fromutc;
extern PyObject *const_str_digest_785982eb38344f1637ddf8c4ec0b18f1;
static PyObject *const_str_digest_3fa3ebc1a4c5914c87c94acceb6311f5;
extern PyObject *const_str_plain__p;
static PyObject *const_str_digest_52ef8f9a22d97ac6b8eb9687a0e2f1c3;
static PyObject *const_str_plain_common_timezones;
static PyObject *const_tuple_str_plain_self_str_plain_dt_str_plain___class___tuple;
extern PyObject *const_str_plain_line;
extern PyObject *const_str_plain_rb;
extern PyObject *const_str_plain_UTC;
static PyObject *const_dict_e2952c9492316513fb6e1b78814fb058;
static PyObject *const_list_f651e864a03e431905982f1cddccd457_list;
static PyObject *const_str_digest_4e746935c1c147f98975f9b403cad20d;
extern PyObject *const_str_plain___path__;
static PyObject *const_tuple_str_plain_offset_str_plain__tzinfos_str_plain_info_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain__CountryNameDict;
static PyObject *const_str_digest_d7cca9e411e72c3aa12aef9e50149884;
extern PyObject *const_str_plain_NonExistentTimeError;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_VERSION;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_PYTZ_TZDATADIR;
extern PyObject *const_tuple_str_plain_self_str_plain_dt_str_plain_is_dst_tuple;
static PyObject *const_str_digest_84cb20f0560c44bf7323c66541aaa539;
static PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_tz_tuple;
static PyObject *const_str_plain__minus_;
static PyObject *const_str_digest_062d6592abaa96cae3da6e635394d6e6;
extern PyObject *const_str_plain_FixedOffset;
static PyObject *const_str_plain_all_timezones_set;
static PyObject *const_str_plain__unmunge_zone;
static PyObject *const_str_digest_a16445c449d3b93d873704f8853b5f01;
static PyObject *const_tuple_none_int_pos_1_tuple;
static PyObject *const_str_digest_e3ca0a2a96ff88561f8696f750ba750f;
static PyObject *const_tuple_str_plain_zone_tuple;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_digest_d80d8945c1075596a484c18b20ab6235;
extern PyObject *const_str_plain_localize;
static PyObject *const_str_digest_cbd04be0bd0fcacf5820968e4828185d;
extern PyObject *const_tuple_int_0_tuple;
static PyObject *const_str_digest_b14139c8eeddedc0051aa77095084277;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain_unpickler;
static PyObject *const_str_plain_common_timezones_set;
static PyObject *const_str_digest_47ce2e6888a56bafc1f83969795c931a;
extern PyObject *const_str_plain_decode;
extern PyObject *const_tuple_str_plain_args_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_dt_tuple;
static PyObject *const_str_plain_zone_tab;
static PyObject *const_str_digest_fc1c4881636a98bdccfe1a5abb52784f;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain__byte_string;
extern PyObject *const_str_plain_coordinates;
static PyObject *const_tuple_str_plain_build_tzinfo_str_plain__byte_string_tuple;
static PyObject *const_int_pos_1440;
static PyObject *const_tuple_str_plain_resource_stream_tuple;
static PyObject *const_tuple_7a491582313d353cda344983d9180a8a_tuple;
static PyObject *const_str_digest_2720e4cb749c0c6448b10643c93169ae;
extern PyObject *const_str_plain___version__;
static PyObject *const_tuple_4b124e02e19baae2eb5b80093a978540_tuple;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_UnknownTimeZoneError_tuple;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_digest_6f6ed120385c30c5ae275bbd94d26244;
static PyObject *const_str_plain_country_timezones;
static PyObject *const_str_digest_36f5c34230ac745520fc175f80e9d8b6;
extern PyObject *const_slice_none_int_pos_3_none;
static PyObject *const_str_digest_4116d603cf18d622a3a96438c3ed8247;
static PyObject *const_tuple_str_plain_self_str_plain_minutes_tuple;
extern PyObject *const_str_plain__dst;
extern PyObject *const_str_plain_timezone;
extern PyObject *const_str_plain_LazySet;
extern PyObject *const_str_plain_exists;
extern PyObject *const_str_plain_is_dst;
static PyObject *const_str_digest_7da72749e596baad4f32ab2c7d5af7cd;
extern PyObject *const_str_plain_tz;
extern PyObject *const_str_plain_code;
extern PyObject *const_str_plain__utcoffset;
static PyObject *const_str_plain__UTC;
static PyObject *const_str_plain__FixedOffset;
static PyObject *const_str_plain_resource_exists;
static PyObject *const_str_digest_28f8b1be0eec2c3927237dee79de4e1e;
static PyObject *const_str_digest_f99045ecb05074b2b58d62365c36390b;
extern PyObject *const_str_plain_part;
static PyObject *const_str_plain_doctest;
static PyObject *const_str_plain__test;
extern PyObject *const_str_plain_ZERO;
extern PyObject *const_str_plain__tzinfos;
static PyObject *const_str_plain_NUITKA_PACKAGE_pytz;
extern PyObject *const_str_plain__offset;
static PyObject *const_str_plain_iso3166_code;
static PyObject *const_str_digest_b245bb5820494867ad638f0cd3dab22b;
extern PyObject *const_str_plain_setdefault;
extern PyObject *const_str_plain__fill;
extern PyObject *const_str_plain_normalize;
extern PyObject *const_int_pos_4;
static PyObject *const_str_digest_bb3f1eb0ff65804a6d288f0fbc2640e3;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_zone;
static PyObject *const_str_digest_6c2bdf6908d6e8bceb61fef9c7d5ed7c;
extern PyObject *const_str_plain_dst;
extern PyObject *const_str_plain_AmbiguousTimeError;
extern PyObject *const_tuple_str_digest_d80d8945c1075596a484c18b20ab6235_tuple;
extern PyObject *const_str_plain_ASCII;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_tuple_str_plain_InvalidTimeError_tuple;
static PyObject *const_str_digest_64abce0daf65cf11df497763b2422a8e;
static PyObject *const_str_plain_OLSEN_VERSION;
extern PyObject *const_str_plain___str__;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_6a5f3c6db876837a53c30c7562c81da7;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_chr_47;
extern PyObject *const_str_plain_tzname;
static PyObject *const_str_plain_2017c;
static PyObject *const_str_digest_c7b4fb5b2cd86da580837312828ea772;
static PyObject *const_tuple_str_digest_3735242e556d5ab23254722e494faf6c_tuple;
extern PyObject *const_str_plain_pytz;
extern PyObject *const_str_plain_filename;
static PyObject *const_str_digest_4f6b8640a25bf7332f7083aadeee7f2a;
static PyObject *const_str_digest_3b8615855cee11321175eddec500de7a;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
static PyObject *const_str_plain_resource_stream;
extern PyObject *const_tuple_str_chr_47_tuple;
static PyObject *const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple;
static PyObject *const_str_plain_all_timezones;
static PyObject *const_str_digest_531956cdcb366feb85be920d7cf253bf;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_pardir;
static PyObject *const_tuple_str_plain_doctest_str_plain_os_str_plain_sys_str_plain_pytz_tuple;
static PyObject *const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_OLSON_VERSION;
static PyObject *const_str_digest_2aabf7ccfa8c1bc7b647e8654408dae9;
static PyObject *const_str_digest_49712a922b4bc4d3e185bc350ead7bfd;
extern PyObject *const_tuple_str_plain_name_tuple;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain___call__;
static PyObject *const_tuple_str_plain_unpickler_tuple;
extern PyObject *const_str_plain_utc;
extern PyObject *const_str_plain_get;
static PyObject *const_tuple_str_plain_PYTZ_TZDATADIR_none_tuple;
extern PyObject *const_str_plain_pkg_resources;
static PyObject *const_str_digest_3f309a6fa057172df842d7906d83291f;
static PyObject *const_str_plain_testmod;
static PyObject *const_str_digest_3735242e556d5ab23254722e494faf6c;
extern PyObject *const_str_plain_ascii;
static PyObject *const_str_digest_40b1ef956ad859b053615f6025f8f897;
extern PyObject *const_str_plain_info;
static PyObject *const_str_plain_zoneinfo_dir;
static PyObject *const_str_digest_aefecf5ce296f5bb141b49fdd803dd45;
extern PyObject *const_str_plain_startswith;
static PyObject *const_tuple_str_plain__plus__str_chr_43_tuple;
extern PyObject *const_tuple_none_int_pos_4_tuple;
static PyObject *const_str_digest_4e398d8cf2a8e37650e81f23aa9b58cd;
extern PyObject *const_str_plain_dt;
extern PyObject *const_str_digest_05ebd808c21ea74523ac7072ed059560;
extern PyObject *const_str_plain_astimezone;
static PyObject *const_str_plain_HOUR;
static PyObject *const_str_digest_03b55b7fb007d622534dd1e32a9aab46;
static PyObject *const_str_digest_5a54c8ba187e0241681447f3d9e10a0e;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_1e4c2b75c9f1db6a400788e38232d291 = UNSTREAM_STRING( &constant_bin[ 1770756 ], 264, 0 );
    const_list_e0c41cf66ed84c646cccc6342b37a9b8_list = PyList_New( 12 );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 0, const_str_plain_timezone ); Py_INCREF( const_str_plain_timezone );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 1, const_str_plain_utc ); Py_INCREF( const_str_plain_utc );
    const_str_plain_country_timezones = UNSTREAM_STRING( &constant_bin[ 1771020 ], 17, 1 );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 2, const_str_plain_country_timezones ); Py_INCREF( const_str_plain_country_timezones );
    const_str_plain_country_names = UNSTREAM_STRING( &constant_bin[ 1771037 ], 13, 1 );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 3, const_str_plain_country_names ); Py_INCREF( const_str_plain_country_names );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 4, const_str_plain_AmbiguousTimeError ); Py_INCREF( const_str_plain_AmbiguousTimeError );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 5, const_str_plain_InvalidTimeError ); Py_INCREF( const_str_plain_InvalidTimeError );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 6, const_str_plain_NonExistentTimeError ); Py_INCREF( const_str_plain_NonExistentTimeError );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 7, const_str_plain_UnknownTimeZoneError ); Py_INCREF( const_str_plain_UnknownTimeZoneError );
    const_str_plain_all_timezones = UNSTREAM_STRING( &constant_bin[ 1771050 ], 13, 1 );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 8, const_str_plain_all_timezones ); Py_INCREF( const_str_plain_all_timezones );
    const_str_plain_all_timezones_set = UNSTREAM_STRING( &constant_bin[ 1771063 ], 17, 1 );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 9, const_str_plain_all_timezones_set ); Py_INCREF( const_str_plain_all_timezones_set );
    const_str_plain_common_timezones = UNSTREAM_STRING( &constant_bin[ 1771080 ], 16, 1 );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 10, const_str_plain_common_timezones ); Py_INCREF( const_str_plain_common_timezones );
    const_str_plain_common_timezones_set = UNSTREAM_STRING( &constant_bin[ 1771096 ], 20, 1 );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 11, const_str_plain_common_timezones_set ); Py_INCREF( const_str_plain_common_timezones_set );
    const_tuple_str_plain_zone_str_plain_fp_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_zone_str_plain_fp_tuple, 0, const_str_plain_zone ); Py_INCREF( const_str_plain_zone );
    PyTuple_SET_ITEM( const_tuple_str_plain_zone_str_plain_fp_tuple, 1, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    const_str_digest_d9377d9886e98c27cec2d5edcf37c120 = UNSTREAM_STRING( &constant_bin[ 1771116 ], 140, 0 );
    const_str_digest_c9936f1548c11ea6c3047698538b3dca = UNSTREAM_STRING( &constant_bin[ 1771256 ], 8, 0 );
    const_tuple_str_digest_c9936f1548c11ea6c3047698538b3dca_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c9936f1548c11ea6c3047698538b3dca_tuple, 0, const_str_digest_c9936f1548c11ea6c3047698538b3dca ); Py_INCREF( const_str_digest_c9936f1548c11ea6c3047698538b3dca );
    const_str_plain_name_parts = UNSTREAM_STRING( &constant_bin[ 1771264 ], 10, 1 );
    const_str_plain__plus_ = UNSTREAM_STRING( &constant_bin[ 1771274 ], 6, 1 );
    const_list_e442bdbf8df831c1de739ae7e7e12872_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1771280 ], 7627 );
    const_str_plain__tzinfo_cache = UNSTREAM_STRING( &constant_bin[ 1778907 ], 13, 1 );
    const_str_plain___safe_for_unpickling__ = UNSTREAM_STRING( &constant_bin[ 1778920 ], 23, 1 );
    const_tuple_str_plain_self_str_plain_iso3166_code_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_iso3166_code_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_iso3166_code = UNSTREAM_STRING( &constant_bin[ 1778943 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_iso3166_code_tuple, 1, const_str_plain_iso3166_code ); Py_INCREF( const_str_plain_iso3166_code );
    const_str_digest_8b99c616c864c1da0516542db12c66b8 = UNSTREAM_STRING( &constant_bin[ 1778955 ], 22, 0 );
    const_str_digest_e8e88b2e956a7bdb0e7f5c20e09d37a3 = UNSTREAM_STRING( &constant_bin[ 1778977 ], 13, 0 );
    const_tuple_str_plain__minus__str_chr_45_tuple = PyTuple_New( 2 );
    const_str_plain__minus_ = UNSTREAM_STRING( &constant_bin[ 1778990 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__minus__str_chr_45_tuple, 0, const_str_plain__minus_ ); Py_INCREF( const_str_plain__minus_ );
    PyTuple_SET_ITEM( const_tuple_str_plain__minus__str_chr_45_tuple, 1, const_str_chr_45 ); Py_INCREF( const_str_chr_45 );
    const_str_digest_235ffd3085116cd605ef64064f4a8cbe = UNSTREAM_STRING( &constant_bin[ 1778997 ], 13, 0 );
    const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 0, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 2, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 3, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 4, const_str_plain_zone ); Py_INCREF( const_str_plain_zone );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 5, const_str_plain__utcoffset ); Py_INCREF( const_str_plain__utcoffset );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 6, const_str_plain__dst ); Py_INCREF( const_str_plain__dst );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 7, const_str_plain__tzname ); Py_INCREF( const_str_plain__tzname );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 8, const_str_plain_fromutc ); Py_INCREF( const_str_plain_fromutc );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 9, const_str_plain_utcoffset ); Py_INCREF( const_str_plain_utcoffset );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 10, const_str_plain_tzname ); Py_INCREF( const_str_plain_tzname );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 11, const_str_plain_dst ); Py_INCREF( const_str_plain_dst );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 12, const_str_plain___reduce__ ); Py_INCREF( const_str_plain___reduce__ );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 13, const_str_plain_localize ); Py_INCREF( const_str_plain_localize );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 14, const_str_plain_normalize ); Py_INCREF( const_str_plain_normalize );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 15, const_str_plain___repr__ ); Py_INCREF( const_str_plain___repr__ );
    PyTuple_SET_ITEM( const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 16, const_str_plain___str__ ); Py_INCREF( const_str_plain___str__ );
    const_str_plain_open_resource = UNSTREAM_STRING( &constant_bin[ 1779010 ], 13, 1 );
    const_tuple_str_plain_AmbiguousTimeError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_AmbiguousTimeError_tuple, 0, const_str_plain_AmbiguousTimeError ); Py_INCREF( const_str_plain_AmbiguousTimeError );
    const_str_plain__minutes = UNSTREAM_STRING( &constant_bin[ 1779023 ], 8, 1 );
    const_str_plain_zoneinfo = UNSTREAM_STRING( &constant_bin[ 739269 ], 8, 1 );
    const_str_plain__CountryTimezoneDict = UNSTREAM_STRING( &constant_bin[ 1779031 ], 20, 1 );
    const_str_digest_c93acf6b434d55ddecef50534819d47b = UNSTREAM_STRING( &constant_bin[ 1779051 ], 13, 0 );
    const_tuple_str_plain_LazyDict_str_plain_LazyList_str_plain_LazySet_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LazyDict_str_plain_LazyList_str_plain_LazySet_tuple, 0, const_str_plain_LazyDict ); Py_INCREF( const_str_plain_LazyDict );
    PyTuple_SET_ITEM( const_tuple_str_plain_LazyDict_str_plain_LazyList_str_plain_LazySet_tuple, 1, const_str_plain_LazyList ); Py_INCREF( const_str_plain_LazyList );
    PyTuple_SET_ITEM( const_tuple_str_plain_LazyDict_str_plain_LazyList_str_plain_LazySet_tuple, 2, const_str_plain_LazySet ); Py_INCREF( const_str_plain_LazySet );
    const_tuple_str_plain_NonExistentTimeError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NonExistentTimeError_tuple, 0, const_str_plain_NonExistentTimeError ); Py_INCREF( const_str_plain_NonExistentTimeError );
    const_str_digest_474f3cb26417a0b447aabbea02146a81 = UNSTREAM_STRING( &constant_bin[ 1779064 ], 11, 0 );
    const_str_digest_3fa3ebc1a4c5914c87c94acceb6311f5 = UNSTREAM_STRING( &constant_bin[ 1779075 ], 12, 0 );
    const_str_digest_52ef8f9a22d97ac6b8eb9687a0e2f1c3 = UNSTREAM_STRING( &constant_bin[ 1779087 ], 7, 0 );
    const_tuple_str_plain_self_str_plain_dt_str_plain___class___tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dt_str_plain___class___tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dt_str_plain___class___tuple, 1, const_str_plain_dt ); Py_INCREF( const_str_plain_dt );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dt_str_plain___class___tuple, 2, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_dict_e2952c9492316513fb6e1b78814fb058 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_e2952c9492316513fb6e1b78814fb058, const_str_plain_hours, const_int_pos_1 );
    assert( PyDict_Size( const_dict_e2952c9492316513fb6e1b78814fb058 ) == 1 );
    const_list_f651e864a03e431905982f1cddccd457_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1779094 ], 9612 );
    const_str_digest_4e746935c1c147f98975f9b403cad20d = UNSTREAM_STRING( &constant_bin[ 1788706 ], 16, 0 );
    const_tuple_str_plain_offset_str_plain__tzinfos_str_plain_info_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_offset_str_plain__tzinfos_str_plain_info_tuple, 0, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );
    PyTuple_SET_ITEM( const_tuple_str_plain_offset_str_plain__tzinfos_str_plain_info_tuple, 1, const_str_plain__tzinfos ); Py_INCREF( const_str_plain__tzinfos );
    PyTuple_SET_ITEM( const_tuple_str_plain_offset_str_plain__tzinfos_str_plain_info_tuple, 2, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    const_str_plain__CountryNameDict = UNSTREAM_STRING( &constant_bin[ 1788722 ], 16, 1 );
    const_str_digest_d7cca9e411e72c3aa12aef9e50149884 = UNSTREAM_STRING( &constant_bin[ 1788738 ], 63, 0 );
    const_str_plain_PYTZ_TZDATADIR = UNSTREAM_STRING( &constant_bin[ 1788801 ], 14, 1 );
    const_str_digest_84cb20f0560c44bf7323c66541aaa539 = UNSTREAM_STRING( &constant_bin[ 1788815 ], 12, 0 );
    const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_tz_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_tz_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_tz_tuple, 1, const_str_plain_tz ); Py_INCREF( const_str_plain_tz );
    const_str_digest_062d6592abaa96cae3da6e635394d6e6 = UNSTREAM_STRING( &constant_bin[ 1788827 ], 810, 0 );
    const_str_plain__unmunge_zone = UNSTREAM_STRING( &constant_bin[ 1789637 ], 13, 1 );
    const_str_digest_a16445c449d3b93d873704f8853b5f01 = UNSTREAM_STRING( &constant_bin[ 1789650 ], 54, 0 );
    const_tuple_none_int_pos_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_digest_e3ca0a2a96ff88561f8696f750ba750f = UNSTREAM_STRING( &constant_bin[ 1789704 ], 24, 0 );
    const_tuple_str_plain_zone_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_zone_tuple, 0, const_str_plain_zone ); Py_INCREF( const_str_plain_zone );
    const_str_digest_cbd04be0bd0fcacf5820968e4828185d = UNSTREAM_STRING( &constant_bin[ 1789728 ], 40, 0 );
    const_str_digest_b14139c8eeddedc0051aa77095084277 = UNSTREAM_STRING( &constant_bin[ 1789768 ], 935, 0 );
    const_str_digest_47ce2e6888a56bafc1f83969795c931a = UNSTREAM_STRING( &constant_bin[ 1790703 ], 11, 0 );
    const_str_plain_zone_tab = UNSTREAM_STRING( &constant_bin[ 1790714 ], 8, 1 );
    const_str_digest_fc1c4881636a98bdccfe1a5abb52784f = UNSTREAM_STRING( &constant_bin[ 1790722 ], 229, 0 );
    const_tuple_str_plain_build_tzinfo_str_plain__byte_string_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_build_tzinfo_str_plain__byte_string_tuple, 0, const_str_plain_build_tzinfo ); Py_INCREF( const_str_plain_build_tzinfo );
    PyTuple_SET_ITEM( const_tuple_str_plain_build_tzinfo_str_plain__byte_string_tuple, 1, const_str_plain__byte_string ); Py_INCREF( const_str_plain__byte_string );
    const_int_pos_1440 = PyLong_FromUnsignedLong( 1440ul );
    const_tuple_str_plain_resource_stream_tuple = PyTuple_New( 1 );
    const_str_plain_resource_stream = UNSTREAM_STRING( &constant_bin[ 1790951 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_resource_stream_tuple, 0, const_str_plain_resource_stream ); Py_INCREF( const_str_plain_resource_stream );
    const_tuple_7a491582313d353cda344983d9180a8a_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_7a491582313d353cda344983d9180a8a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7a491582313d353cda344983d9180a8a_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_7a491582313d353cda344983d9180a8a_tuple, 2, const_str_plain_zone_tab ); Py_INCREF( const_str_plain_zone_tab );
    PyTuple_SET_ITEM( const_tuple_7a491582313d353cda344983d9180a8a_tuple, 3, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    PyTuple_SET_ITEM( const_tuple_7a491582313d353cda344983d9180a8a_tuple, 4, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    PyTuple_SET_ITEM( const_tuple_7a491582313d353cda344983d9180a8a_tuple, 5, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_digest_2720e4cb749c0c6448b10643c93169ae = UNSTREAM_STRING( &constant_bin[ 1790966 ], 22, 0 );
    const_tuple_4b124e02e19baae2eb5b80093a978540_tuple = PyTuple_New( 2 );
    const_str_plain_NUITKA_PACKAGE_pytz = UNSTREAM_STRING( &constant_bin[ 1790988 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_4b124e02e19baae2eb5b80093a978540_tuple, 0, const_str_plain_NUITKA_PACKAGE_pytz ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_pytz );
    PyTuple_SET_ITEM( const_tuple_4b124e02e19baae2eb5b80093a978540_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_tuple_str_plain_UnknownTimeZoneError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_UnknownTimeZoneError_tuple, 0, const_str_plain_UnknownTimeZoneError ); Py_INCREF( const_str_plain_UnknownTimeZoneError );
    const_str_digest_36f5c34230ac745520fc175f80e9d8b6 = UNSTREAM_STRING( &constant_bin[ 1791007 ], 21, 0 );
    const_str_digest_4116d603cf18d622a3a96438c3ed8247 = UNSTREAM_STRING( &constant_bin[ 1791028 ], 20, 0 );
    const_tuple_str_plain_self_str_plain_minutes_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_minutes_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_minutes_tuple, 1, const_str_plain_minutes ); Py_INCREF( const_str_plain_minutes );
    const_str_digest_7da72749e596baad4f32ab2c7d5af7cd = UNSTREAM_STRING( &constant_bin[ 1791048 ], 166, 0 );
    const_str_plain__UTC = UNSTREAM_STRING( &constant_bin[ 1779074 ], 4, 1 );
    const_str_plain__FixedOffset = UNSTREAM_STRING( &constant_bin[ 1778955 ], 12, 1 );
    const_str_plain_resource_exists = UNSTREAM_STRING( &constant_bin[ 1791214 ], 15, 1 );
    const_str_digest_28f8b1be0eec2c3927237dee79de4e1e = UNSTREAM_STRING( &constant_bin[ 1791229 ], 1135, 0 );
    const_str_digest_f99045ecb05074b2b58d62365c36390b = UNSTREAM_STRING( &constant_bin[ 1792364 ], 26, 0 );
    const_str_plain_doctest = UNSTREAM_STRING( &constant_bin[ 1770887 ], 7, 1 );
    const_str_plain__test = UNSTREAM_STRING( &constant_bin[ 1027022 ], 5, 1 );
    const_str_digest_b245bb5820494867ad638f0cd3dab22b = UNSTREAM_STRING( &constant_bin[ 1792390 ], 19, 0 );
    const_str_digest_bb3f1eb0ff65804a6d288f0fbc2640e3 = UNSTREAM_STRING( &constant_bin[ 1792409 ], 103, 0 );
    const_str_digest_6c2bdf6908d6e8bceb61fef9c7d5ed7c = UNSTREAM_STRING( &constant_bin[ 1792512 ], 22, 0 );
    const_tuple_str_plain_InvalidTimeError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InvalidTimeError_tuple, 0, const_str_plain_InvalidTimeError ); Py_INCREF( const_str_plain_InvalidTimeError );
    const_str_digest_64abce0daf65cf11df497763b2422a8e = UNSTREAM_STRING( &constant_bin[ 1792534 ], 14, 0 );
    const_str_plain_OLSEN_VERSION = UNSTREAM_STRING( &constant_bin[ 1792548 ], 13, 1 );
    const_str_digest_6a5f3c6db876837a53c30c7562c81da7 = UNSTREAM_STRING( &constant_bin[ 1792561 ], 21, 0 );
    const_str_plain_2017c = UNSTREAM_STRING( &constant_bin[ 1792582 ], 5, 0 );
    const_str_digest_c7b4fb5b2cd86da580837312828ea772 = UNSTREAM_STRING( &constant_bin[ 1792587 ], 289, 0 );
    const_tuple_str_digest_3735242e556d5ab23254722e494faf6c_tuple = PyTuple_New( 1 );
    const_str_digest_3735242e556d5ab23254722e494faf6c = UNSTREAM_STRING( &constant_bin[ 1792876 ], 11, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_3735242e556d5ab23254722e494faf6c_tuple, 0, const_str_digest_3735242e556d5ab23254722e494faf6c ); Py_INCREF( const_str_digest_3735242e556d5ab23254722e494faf6c );
    const_str_digest_4f6b8640a25bf7332f7083aadeee7f2a = UNSTREAM_STRING( &constant_bin[ 1792887 ], 10, 0 );
    const_str_digest_3b8615855cee11321175eddec500de7a = UNSTREAM_STRING( &constant_bin[ 1792897 ], 23, 0 );
    const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 2, const_str_plain_zone_tab ); Py_INCREF( const_str_plain_zone_tab );
    PyTuple_SET_ITEM( const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 3, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    PyTuple_SET_ITEM( const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 4, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    PyTuple_SET_ITEM( const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 5, const_str_plain_coordinates ); Py_INCREF( const_str_plain_coordinates );
    PyTuple_SET_ITEM( const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 6, const_str_plain_zone ); Py_INCREF( const_str_plain_zone );
    const_str_digest_531956cdcb366feb85be920d7cf253bf = UNSTREAM_STRING( &constant_bin[ 1792920 ], 6, 0 );
    const_tuple_str_plain_doctest_str_plain_os_str_plain_sys_str_plain_pytz_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_doctest_str_plain_os_str_plain_sys_str_plain_pytz_tuple, 0, const_str_plain_doctest ); Py_INCREF( const_str_plain_doctest );
    PyTuple_SET_ITEM( const_tuple_str_plain_doctest_str_plain_os_str_plain_sys_str_plain_pytz_tuple, 1, const_str_plain_os ); Py_INCREF( const_str_plain_os );
    PyTuple_SET_ITEM( const_tuple_str_plain_doctest_str_plain_os_str_plain_sys_str_plain_pytz_tuple, 2, const_str_plain_sys ); Py_INCREF( const_str_plain_sys );
    PyTuple_SET_ITEM( const_tuple_str_plain_doctest_str_plain_os_str_plain_sys_str_plain_pytz_tuple, 3, const_str_plain_pytz ); Py_INCREF( const_str_plain_pytz );
    const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple, 1, const_str_plain_name_parts ); Py_INCREF( const_str_plain_name_parts );
    PyTuple_SET_ITEM( const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple, 2, const_str_plain_part ); Py_INCREF( const_str_plain_part );
    const_str_plain_zoneinfo_dir = UNSTREAM_STRING( &constant_bin[ 1792926 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple, 3, const_str_plain_zoneinfo_dir ); Py_INCREF( const_str_plain_zoneinfo_dir );
    PyTuple_SET_ITEM( const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple, 4, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple, 5, const_str_plain_resource_stream ); Py_INCREF( const_str_plain_resource_stream );
    const_str_plain_OLSON_VERSION = UNSTREAM_STRING( &constant_bin[ 1792938 ], 13, 1 );
    const_str_digest_2aabf7ccfa8c1bc7b647e8654408dae9 = UNSTREAM_STRING( &constant_bin[ 1792951 ], 20, 0 );
    const_str_digest_49712a922b4bc4d3e185bc350ead7bfd = UNSTREAM_STRING( &constant_bin[ 1792971 ], 9, 0 );
    const_tuple_str_plain_unpickler_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_unpickler_tuple, 0, const_str_plain_unpickler ); Py_INCREF( const_str_plain_unpickler );
    const_tuple_str_plain_PYTZ_TZDATADIR_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PYTZ_TZDATADIR_none_tuple, 0, const_str_plain_PYTZ_TZDATADIR ); Py_INCREF( const_str_plain_PYTZ_TZDATADIR );
    PyTuple_SET_ITEM( const_tuple_str_plain_PYTZ_TZDATADIR_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_3f309a6fa057172df842d7906d83291f = UNSTREAM_STRING( &constant_bin[ 1792980 ], 21, 0 );
    const_str_plain_testmod = UNSTREAM_STRING( &constant_bin[ 1793001 ], 7, 1 );
    const_str_digest_40b1ef956ad859b053615f6025f8f897 = UNSTREAM_STRING( &constant_bin[ 1793008 ], 219, 0 );
    const_str_digest_aefecf5ce296f5bb141b49fdd803dd45 = UNSTREAM_STRING( &constant_bin[ 1793227 ], 1472, 0 );
    const_tuple_str_plain__plus__str_chr_43_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain__plus__str_chr_43_tuple, 0, const_str_plain__plus_ ); Py_INCREF( const_str_plain__plus_ );
    PyTuple_SET_ITEM( const_tuple_str_plain__plus__str_chr_43_tuple, 1, const_str_chr_43 ); Py_INCREF( const_str_chr_43 );
    const_str_digest_4e398d8cf2a8e37650e81f23aa9b58cd = UNSTREAM_STRING( &constant_bin[ 1793982 ], 28, 0 );
    const_str_plain_HOUR = UNSTREAM_STRING( &constant_bin[ 1794699 ], 4, 1 );
    const_str_digest_03b55b7fb007d622534dd1e32a9aab46 = UNSTREAM_STRING( &constant_bin[ 1794703 ], 29, 0 );
    const_str_digest_5a54c8ba187e0241681447f3d9e10a0e = UNSTREAM_STRING( &constant_bin[ 1794732 ], 16, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pytz( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2fb86dec8736b60a32d3213809914b77;
static PyCodeObject *codeobj_3e62b3de0a7c2fdda5880bc1d9fa7377;
static PyCodeObject *codeobj_65d1665d06f14b38f67fd1302ccacc2d;
static PyCodeObject *codeobj_3d6d0c7ac0dc7358c8d379894690a89a;
static PyCodeObject *codeobj_3d453df4146e12869f9f0dc30e47572c;
static PyCodeObject *codeobj_7d3cb6e62c315e1d487907dac93dce5b;
static PyCodeObject *codeobj_6d6afa008c6a1796bf4cc23158cd3505;
static PyCodeObject *codeobj_ed6e7f08e784031caca1c295f74d5a4b;
static PyCodeObject *codeobj_58849b9e4051e923d871972064cb292c;
static PyCodeObject *codeobj_8dc34895959aa79a221b91aca7db4207;
static PyCodeObject *codeobj_760e6abd5113e93e6a2e9a973355afdc;
static PyCodeObject *codeobj_11efce511210f717fdd15bb64377ee06;
static PyCodeObject *codeobj_eadee738e71442ecf5f8b50e9b801c8a;
static PyCodeObject *codeobj_3e7272b207568406931821d1e6f6879c;
static PyCodeObject *codeobj_92f9d5039d8c261edda817b96fba863e;
static PyCodeObject *codeobj_8aa1a500ca5d70f03910ce283cdad972;
static PyCodeObject *codeobj_93a66a04422dfc334639fbe578bf6962;
static PyCodeObject *codeobj_94805af7abe367121b2a025b351aa7a6;
static PyCodeObject *codeobj_e1c02cc1df6639aa4aee25ffccb8c18a;
static PyCodeObject *codeobj_4f4f148e3ac63f4f7d2a14df63a2f8e2;
static PyCodeObject *codeobj_59ce4f007c81110fa85f66fd5b4736a2;
static PyCodeObject *codeobj_c297704597bf1c3ccb8f5973d2d948cb;
static PyCodeObject *codeobj_ea466f546215223d2a12db5f6d9cc480;
static PyCodeObject *codeobj_3662bffd319a6a499f886fc53b2fa130;
static PyCodeObject *codeobj_18afbe579375b2f097653cd917aec15e;
static PyCodeObject *codeobj_5c782390158713444233c714c8c7ed42;
static PyCodeObject *codeobj_25cec1c9cb9d01938e477c2282089be3;
static PyCodeObject *codeobj_6a944847f75d6c8b19799341766dac00;
static PyCodeObject *codeobj_f5638f218c4f7cabc106e77c59780861;
static PyCodeObject *codeobj_0d1ba57d9db40726577b9cbca78e3e03;
static PyCodeObject *codeobj_e5bfbe8f41375ff2032102e6b9dab0a5;
static PyCodeObject *codeobj_8d5563c2ad334e4e5356abe113fbea2d;
static PyCodeObject *codeobj_e103b51103db53c1555451b8a9ea29a6;
static PyCodeObject *codeobj_7d2a792c8404ec12079075d4c3428ce9;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_4e746935c1c147f98975f9b403cad20d );
    codeobj_2fb86dec8736b60a32d3213809914b77 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 1097, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_tz_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3e62b3de0a7c2fdda5880bc1d9fa7377 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 1541, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_tz_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_65d1665d06f14b38f67fd1302ccacc2d = MAKE_CODEOBJ( module_filename_obj, const_str_digest_235ffd3085116cd605ef64064f4a8cbe, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_3d6d0c7ac0dc7358c8d379894690a89a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_FixedOffset, 425, const_tuple_str_plain_offset_str_plain__tzinfos_str_plain_info_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3d453df4146e12869f9f0dc30e47572c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_UTC, 205, const_tuple_a95969a0fe9b6a4765e379b7fa0fba57_tuple, 0, 0, CO_NOFREE );
    codeobj_7d3cb6e62c315e1d487907dac93dce5b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__UTC, 258, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6d6afa008c6a1796bf4cc23158cd3505 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 334, const_tuple_str_plain_self_str_plain_iso3166_code_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ed6e7f08e784031caca1c295f74d5a4b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 389, const_tuple_str_plain_self_str_plain_minutes_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_58849b9e4051e923d871972064cb292c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___reduce__, 231, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8dc34895959aa79a221b91aca7db4207 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___reduce__, 398, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_760e6abd5113e93e6a2e9a973355afdc = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 248, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_11efce511210f717fdd15bb64377ee06 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 407, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_eadee738e71442ecf5f8b50e9b801c8a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 251, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3e7272b207568406931821d1e6f6879c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fill, 338, const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_92f9d5039d8c261edda817b96fba863e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fill, 366, const_tuple_7a491582313d353cda344983d9180a8a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8aa1a500ca5d70f03910ce283cdad972 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__p, 291, const_tuple_str_plain_args_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_93a66a04422dfc334639fbe578bf6962 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__test, 494, const_tuple_str_plain_doctest_str_plain_os_str_plain_sys_str_plain_pytz_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_94805af7abe367121b2a025b351aa7a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unmunge_zone, 196, const_tuple_str_plain_zone_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e1c02cc1df6639aa4aee25ffccb8c18a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ascii, 46, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4f4f148e3ac63f4f7d2a14df63a2f8e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ascii, 63, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_59ce4f007c81110fa85f66fd5b4736a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dst, 228, const_tuple_str_plain_self_str_plain_dt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c297704597bf1c3ccb8f5973d2d948cb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dst, 401, const_tuple_str_plain_self_str_plain_dt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ea466f546215223d2a12db5f6d9cc480 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fromutc, 217, const_tuple_str_plain_self_str_plain_dt_str_plain___class___tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_3662bffd319a6a499f886fc53b2fa130 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_localize, 234, const_tuple_str_plain_self_str_plain_dt_str_plain_is_dst_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_18afbe579375b2f097653cd917aec15e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_localize, 410, const_tuple_str_plain_self_str_plain_dt_str_plain_is_dst_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5c782390158713444233c714c8c7ed42 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normalize, 240, const_tuple_str_plain_self_str_plain_dt_str_plain_is_dst_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_25cec1c9cb9d01938e477c2282089be3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normalize, 416, const_tuple_str_plain_self_str_plain_dt_str_plain_is_dst_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6a944847f75d6c8b19799341766dac00 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open_resource, 77, const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f5638f218c4f7cabc106e77c59780861 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resource_exists, 110, const_tuple_str_plain_name_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0d1ba57d9db40726577b9cbca78e3e03 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_timezone, 136, const_tuple_str_plain_zone_str_plain_fp_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e5bfbe8f41375ff2032102e6b9dab0a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tzname, 225, const_tuple_str_plain_self_str_plain_dt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8d5563c2ad334e4e5356abe113fbea2d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tzname, 404, const_tuple_str_plain_self_str_plain_dt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e103b51103db53c1555451b8a9ea29a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_utcoffset, 222, const_tuple_str_plain_self_str_plain_dt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7d2a792c8404ec12079075d4c3428ce9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_utcoffset, 395, const_tuple_str_plain_self_str_plain_dt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *pytz$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void pytz$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *pytz$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void pytz$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_12_complex_call_helper_pos_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_pytz$$$function_10_dst(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_11___reduce__(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_12_localize( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pytz$$$function_13_normalize( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pytz$$$function_14___repr__(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_15___str__(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_16__UTC(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_17__p(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_18___call__(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_19__fill(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_1_ascii(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_20__fill(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_21___init__(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_22_utcoffset(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_23___reduce__(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_24_dst(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_25_tzname(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_26___repr__(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_27_localize( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pytz$$$function_28_normalize( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pytz$$$function_29_FixedOffset( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pytz$$$function_2_ascii(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_30__test(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_3_open_resource(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_4_resource_exists(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_5_timezone(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_6__unmunge_zone(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_7_fromutc(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_8_utcoffset(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_9_tzname(  );


// The module function definitions.
static PyObject *impl_pytz$$$function_1_ascii( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e1c02cc1df6639aa4aee25ffccb8c18a = NULL;

    struct Nuitka_FrameObject *frame_e1c02cc1df6639aa4aee25ffccb8c18a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e1c02cc1df6639aa4aee25ffccb8c18a, codeobj_e1c02cc1df6639aa4aee25ffccb8c18a, module_pytz, sizeof(void *) );
    frame_e1c02cc1df6639aa4aee25ffccb8c18a = cache_frame_e1c02cc1df6639aa4aee25ffccb8c18a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e1c02cc1df6639aa4aee25ffccb8c18a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e1c02cc1df6639aa4aee25ffccb8c18a ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_arg_1 = par_s;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compare_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compare_left_1 != NULL );
    tmp_compare_right_1 = (PyObject *)&PyBytes_Type;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 55;
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
    tmp_called_instance_1 = par_s;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_e1c02cc1df6639aa4aee25ffccb8c18a->m_frame.f_lineno = 56;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_ASCII_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_s;
        par_s = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_2 = par_s;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_e1c02cc1df6639aa4aee25ffccb8c18a->m_frame.f_lineno = 58;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ASCII_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;
    tmp_return_value = par_s;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1c02cc1df6639aa4aee25ffccb8c18a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1c02cc1df6639aa4aee25ffccb8c18a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1c02cc1df6639aa4aee25ffccb8c18a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e1c02cc1df6639aa4aee25ffccb8c18a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e1c02cc1df6639aa4aee25ffccb8c18a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e1c02cc1df6639aa4aee25ffccb8c18a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e1c02cc1df6639aa4aee25ffccb8c18a,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_e1c02cc1df6639aa4aee25ffccb8c18a == cache_frame_e1c02cc1df6639aa4aee25ffccb8c18a )
    {
        Py_DECREF( frame_e1c02cc1df6639aa4aee25ffccb8c18a );
    }
    cache_frame_e1c02cc1df6639aa4aee25ffccb8c18a = NULL;

    assertFrameObject( frame_e1c02cc1df6639aa4aee25ffccb8c18a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_1_ascii );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_1_ascii );
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


static PyObject *impl_pytz$$$function_2_ascii( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_4f4f148e3ac63f4f7d2a14df63a2f8e2 = NULL;

    struct Nuitka_FrameObject *frame_4f4f148e3ac63f4f7d2a14df63a2f8e2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4f4f148e3ac63f4f7d2a14df63a2f8e2, codeobj_4f4f148e3ac63f4f7d2a14df63a2f8e2, module_pytz, sizeof(void *) );
    frame_4f4f148e3ac63f4f7d2a14df63a2f8e2 = cache_frame_4f4f148e3ac63f4f7d2a14df63a2f8e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4f4f148e3ac63f4f7d2a14df63a2f8e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4f4f148e3ac63f4f7d2a14df63a2f8e2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_s;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_4f4f148e3ac63f4f7d2a14df63a2f8e2->m_frame.f_lineno = 74;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ASCII_tuple, 0 ) );

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f4f148e3ac63f4f7d2a14df63a2f8e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f4f148e3ac63f4f7d2a14df63a2f8e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f4f148e3ac63f4f7d2a14df63a2f8e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4f4f148e3ac63f4f7d2a14df63a2f8e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4f4f148e3ac63f4f7d2a14df63a2f8e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4f4f148e3ac63f4f7d2a14df63a2f8e2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4f4f148e3ac63f4f7d2a14df63a2f8e2,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_4f4f148e3ac63f4f7d2a14df63a2f8e2 == cache_frame_4f4f148e3ac63f4f7d2a14df63a2f8e2 )
    {
        Py_DECREF( frame_4f4f148e3ac63f4f7d2a14df63a2f8e2 );
    }
    cache_frame_4f4f148e3ac63f4f7d2a14df63a2f8e2 = NULL;

    assertFrameObject( frame_4f4f148e3ac63f4f7d2a14df63a2f8e2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_2_ascii );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_2_ascii );
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


static PyObject *impl_pytz$$$function_3_open_resource( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *var_name_parts = NULL;
    PyObject *var_part = NULL;
    PyObject *var_zoneinfo_dir = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_resource_stream = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
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
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_6a944847f75d6c8b19799341766dac00 = NULL;

    struct Nuitka_FrameObject *frame_6a944847f75d6c8b19799341766dac00;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6a944847f75d6c8b19799341766dac00, codeobj_6a944847f75d6c8b19799341766dac00, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6a944847f75d6c8b19799341766dac00 = cache_frame_6a944847f75d6c8b19799341766dac00;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6a944847f75d6c8b19799341766dac00 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6a944847f75d6c8b19799341766dac00 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_2 = par_name;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_6a944847f75d6c8b19799341766dac00->m_frame.f_lineno = 86;
    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_lstrip, &PyTuple_GET_ITEM( const_tuple_str_chr_47_tuple, 0 ) );

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_6a944847f75d6c8b19799341766dac00->m_frame.f_lineno = 86;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_47_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_name_parts == NULL );
    var_name_parts = tmp_assign_source_1;

    tmp_iter_arg_1 = var_name_parts;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooo";
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
            type_description_1 = "oooooo";
            exception_lineno = 87;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_part;
        var_part = tmp_assign_source_4;
        Py_INCREF( var_part );
        Py_XDECREF( old );
    }

    tmp_compexpr_left_1 = var_part;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pardir );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_or_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 88;
        type_description_1 = "oooooo";
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
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sep );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_compexpr_right_2 = var_part;

    if ( tmp_compexpr_right_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "part" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_or_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    Py_INCREF( tmp_or_right_value_1 );
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
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
    tmp_left_name_1 = const_str_digest_2aabf7ccfa8c1bc7b647e8654408dae9;
    tmp_right_name_1 = var_part;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "part" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    frame_6a944847f75d6c8b19799341766dac00->m_frame.f_lineno = 89;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 89;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto try_except_handler_2;
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooo";
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

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_environ );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_6a944847f75d6c8b19799341766dac00->m_frame.f_lineno = 90;
    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_PYTZ_TZDATADIR_none_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_zoneinfo_dir == NULL );
    var_zoneinfo_dir = tmp_assign_source_5;

    tmp_compare_left_1 = var_zoneinfo_dir;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_path );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_join );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_zoneinfo_dir;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zoneinfo_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = var_name_parts;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name_parts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_6 = impl___internal__$$$function_12_complex_call_helper_pos_star_list( dir_call_args );
    }
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_filename == NULL );
    var_filename = tmp_assign_source_6;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_path );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_join );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_2 = PyTuple_New( 2 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_path );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );

        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );

        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___file__ );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___file__ );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__file__" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_6a944847f75d6c8b19799341766dac00->m_frame.f_lineno = 94;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );

        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_str_plain_zoneinfo;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_2 );
    tmp_dircall_arg3_2 = var_name_parts;

    if ( tmp_dircall_arg3_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name_parts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
        tmp_assign_source_7 = impl___internal__$$$function_12_complex_call_helper_pos_star_list( dir_call_args );
    }
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_filename == NULL );
    var_filename = tmp_assign_source_7;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_path );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_exists );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_filename;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_6a944847f75d6c8b19799341766dac00->m_frame.f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    // Tried code:
    tmp_name_name_1 = const_str_plain_pkg_resources;
    tmp_globals_name_1 = (PyObject *)moduledict_pytz;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_resource_stream_tuple;
    tmp_level_name_1 = const_int_0;
    frame_6a944847f75d6c8b19799341766dac00->m_frame.f_lineno = 101;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_resource_stream );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    assert( var_resource_stream == NULL );
    var_resource_stream = tmp_assign_source_8;

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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_6a944847f75d6c8b19799341766dac00, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_6a944847f75d6c8b19799341766dac00, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
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
    tmp_assign_source_9 = Py_None;
    assert( var_resource_stream == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_resource_stream = tmp_assign_source_9;

    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 100;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6a944847f75d6c8b19799341766dac00->m_frame) frame_6a944847f75d6c8b19799341766dac00->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_4;
    branch_end_4:;
    goto try_end_3;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_3_open_resource );
    return NULL;
    // End of try:
    try_end_2:;
    tmp_compare_left_3 = var_resource_stream;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resource_stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_3 = var_resource_stream;

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resource_stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = const_str_plain_pytz;
    tmp_left_name_2 = const_str_digest_49712a922b4bc4d3e185bc350ead7bfd;
    tmp_right_name_2 = par_name;

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_6a944847f75d6c8b19799341766dac00->m_frame.f_lineno = 106;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_5:;
    branch_no_3:;
    branch_end_2:;
    tmp_open_filename_1 = var_filename;

    if ( tmp_open_filename_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_open_mode_1 = const_str_plain_rb;
    tmp_return_value = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_6a944847f75d6c8b19799341766dac00 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_6a944847f75d6c8b19799341766dac00 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_6a944847f75d6c8b19799341766dac00 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6a944847f75d6c8b19799341766dac00, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6a944847f75d6c8b19799341766dac00->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6a944847f75d6c8b19799341766dac00, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6a944847f75d6c8b19799341766dac00,
        type_description_1,
        par_name,
        var_name_parts,
        var_part,
        var_zoneinfo_dir,
        var_filename,
        var_resource_stream
    );


    // Release cached frame.
    if ( frame_6a944847f75d6c8b19799341766dac00 == cache_frame_6a944847f75d6c8b19799341766dac00 )
    {
        Py_DECREF( frame_6a944847f75d6c8b19799341766dac00 );
    }
    cache_frame_6a944847f75d6c8b19799341766dac00 = NULL;

    assertFrameObject( frame_6a944847f75d6c8b19799341766dac00 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_3_open_resource );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_name_parts );
    var_name_parts = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    Py_XDECREF( var_zoneinfo_dir );
    var_zoneinfo_dir = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_resource_stream );
    var_resource_stream = NULL;

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

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_name_parts );
    var_name_parts = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    Py_XDECREF( var_zoneinfo_dir );
    var_zoneinfo_dir = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_resource_stream );
    var_resource_stream = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_3_open_resource );
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


static PyObject *impl_pytz$$$function_4_resource_exists( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f5638f218c4f7cabc106e77c59780861 = NULL;

    struct Nuitka_FrameObject *frame_f5638f218c4f7cabc106e77c59780861;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f5638f218c4f7cabc106e77c59780861, codeobj_f5638f218c4f7cabc106e77c59780861, module_pytz, sizeof(void *) );
    frame_f5638f218c4f7cabc106e77c59780861 = cache_frame_f5638f218c4f7cabc106e77c59780861;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f5638f218c4f7cabc106e77c59780861 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f5638f218c4f7cabc106e77c59780861 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_open_resource );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_open_resource );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "open_resource" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "o";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_name;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_f5638f218c4f7cabc106e77c59780861->m_frame.f_lineno = 113;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    frame_f5638f218c4f7cabc106e77c59780861->m_frame.f_lineno = 113;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_f5638f218c4f7cabc106e77c59780861, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_f5638f218c4f7cabc106e77c59780861, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_IOError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 112;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f5638f218c4f7cabc106e77c59780861->m_frame) frame_f5638f218c4f7cabc106e77c59780861->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_3;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_4_resource_exists );
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

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f5638f218c4f7cabc106e77c59780861 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_f5638f218c4f7cabc106e77c59780861 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f5638f218c4f7cabc106e77c59780861 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f5638f218c4f7cabc106e77c59780861, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f5638f218c4f7cabc106e77c59780861->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f5638f218c4f7cabc106e77c59780861, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f5638f218c4f7cabc106e77c59780861,
        type_description_1,
        par_name
    );


    // Release cached frame.
    if ( frame_f5638f218c4f7cabc106e77c59780861 == cache_frame_f5638f218c4f7cabc106e77c59780861 )
    {
        Py_DECREF( frame_f5638f218c4f7cabc106e77c59780861 );
    }
    cache_frame_f5638f218c4f7cabc106e77c59780861 = NULL;

    assertFrameObject( frame_f5638f218c4f7cabc106e77c59780861 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_4_resource_exists );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_name );
    par_name = NULL;

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

    Py_XDECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_4_resource_exists );
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


static PyObject *impl_pytz$$$function_5_timezone( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_zone = python_pars[ 0 ];
    PyObject *var_fp = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_Eq_1;
    int tmp_cmp_In_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0d1ba57d9db40726577b9cbca78e3e03 = NULL;

    struct Nuitka_FrameObject *frame_0d1ba57d9db40726577b9cbca78e3e03;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0d1ba57d9db40726577b9cbca78e3e03, codeobj_0d1ba57d9db40726577b9cbca78e3e03, module_pytz, sizeof(void *)+sizeof(void *) );
    frame_0d1ba57d9db40726577b9cbca78e3e03 = cache_frame_0d1ba57d9db40726577b9cbca78e3e03;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0d1ba57d9db40726577b9cbca78e3e03 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0d1ba57d9db40726577b9cbca78e3e03 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_zone;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_0d1ba57d9db40726577b9cbca78e3e03->m_frame.f_lineno = 173;
    tmp_compare_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_UTC;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 173;
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
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_utc );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utc );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "utc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ascii );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ascii );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ascii" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_zone;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    frame_0d1ba57d9db40726577b9cbca78e3e03->m_frame.f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_zone;
        par_zone = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_0d1ba57d9db40726577b9cbca78e3e03, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_0d1ba57d9db40726577b9cbca78e3e03, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_UnicodeEncodeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "oo";
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_UnknownTimeZoneError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnknownTimeZoneError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UnknownTimeZoneError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_2 = par_zone;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }

    frame_0d1ba57d9db40726577b9cbca78e3e03->m_frame.f_lineno = 180;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 180;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto try_except_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 176;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0d1ba57d9db40726577b9cbca78e3e03->m_frame) frame_0d1ba57d9db40726577b9cbca78e3e03->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_5_timezone );
    return NULL;
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
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__unmunge_zone );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unmunge_zone );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unmunge_zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_zone;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_0d1ba57d9db40726577b9cbca78e3e03->m_frame.f_lineno = 182;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_zone;
        par_zone = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_compare_left_3 = par_zone;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__tzinfo_cache );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__tzinfo_cache );
    }

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_tzinfo_cache" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_compare_left_4 = par_zone;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones_set );

    if (unlikely( tmp_compare_right_4 == NULL ))
    {
        tmp_compare_right_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_all_timezones_set );
    }

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "all_timezones_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
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
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_open_resource );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_open_resource );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "open_resource" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_zone;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_0d1ba57d9db40726577b9cbca78e3e03->m_frame.f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_fp == NULL );
    var_fp = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_build_tzinfo );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_build_tzinfo );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "build_tzinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_5 = par_zone;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_6 = var_fp;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_0d1ba57d9db40726577b9cbca78e3e03->m_frame.f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__tzinfo_cache );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__tzinfo_cache );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_tzinfo_cache" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    tmp_ass_subscript_1 = par_zone;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    goto try_end_2;
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

    // Preserve existing published exception.
    exception_preserved_type_2 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_0d1ba57d9db40726577b9cbca78e3e03, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_0d1ba57d9db40726577b9cbca78e3e03, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_called_instance_2 = var_fp;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "oo";
        goto try_except_handler_5;
    }

    frame_0d1ba57d9db40726577b9cbca78e3e03->m_frame.f_lineno = 189;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "oo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 186;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0d1ba57d9db40726577b9cbca78e3e03->m_frame) frame_0d1ba57d9db40726577b9cbca78e3e03->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_5_timezone );
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    tmp_called_instance_3 = var_fp;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_0d1ba57d9db40726577b9cbca78e3e03->m_frame.f_lineno = 189;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_4;
    branch_no_4:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_UnknownTimeZoneError );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnknownTimeZoneError );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UnknownTimeZoneError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_zone;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_0d1ba57d9db40726577b9cbca78e3e03->m_frame.f_lineno = 191;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 191;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_end_4:;
    branch_no_3:;
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__tzinfo_cache );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__tzinfo_cache );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_tzinfo_cache" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = par_zone;

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0d1ba57d9db40726577b9cbca78e3e03 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0d1ba57d9db40726577b9cbca78e3e03 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0d1ba57d9db40726577b9cbca78e3e03 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0d1ba57d9db40726577b9cbca78e3e03, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0d1ba57d9db40726577b9cbca78e3e03->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0d1ba57d9db40726577b9cbca78e3e03, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0d1ba57d9db40726577b9cbca78e3e03,
        type_description_1,
        par_zone,
        var_fp
    );


    // Release cached frame.
    if ( frame_0d1ba57d9db40726577b9cbca78e3e03 == cache_frame_0d1ba57d9db40726577b9cbca78e3e03 )
    {
        Py_DECREF( frame_0d1ba57d9db40726577b9cbca78e3e03 );
    }
    cache_frame_0d1ba57d9db40726577b9cbca78e3e03 = NULL;

    assertFrameObject( frame_0d1ba57d9db40726577b9cbca78e3e03 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_5_timezone );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_zone );
    par_zone = NULL;

    Py_XDECREF( var_fp );
    var_fp = NULL;

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

    Py_XDECREF( par_zone );
    par_zone = NULL;

    Py_XDECREF( var_fp );
    var_fp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_5_timezone );
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


static PyObject *impl_pytz$$$function_6__unmunge_zone( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_zone = python_pars[ 0 ];
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_94805af7abe367121b2a025b351aa7a6 = NULL;

    struct Nuitka_FrameObject *frame_94805af7abe367121b2a025b351aa7a6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_94805af7abe367121b2a025b351aa7a6, codeobj_94805af7abe367121b2a025b351aa7a6, module_pytz, sizeof(void *) );
    frame_94805af7abe367121b2a025b351aa7a6 = cache_frame_94805af7abe367121b2a025b351aa7a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_94805af7abe367121b2a025b351aa7a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_94805af7abe367121b2a025b351aa7a6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_2 = par_zone;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_94805af7abe367121b2a025b351aa7a6->m_frame.f_lineno = 198;
    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_plain__plus__str_chr_43_tuple, 0 ) );

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_94805af7abe367121b2a025b351aa7a6->m_frame.f_lineno = 198;
    tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_plain__minus__str_chr_45_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94805af7abe367121b2a025b351aa7a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_94805af7abe367121b2a025b351aa7a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94805af7abe367121b2a025b351aa7a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94805af7abe367121b2a025b351aa7a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94805af7abe367121b2a025b351aa7a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94805af7abe367121b2a025b351aa7a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_94805af7abe367121b2a025b351aa7a6,
        type_description_1,
        par_zone
    );


    // Release cached frame.
    if ( frame_94805af7abe367121b2a025b351aa7a6 == cache_frame_94805af7abe367121b2a025b351aa7a6 )
    {
        Py_DECREF( frame_94805af7abe367121b2a025b351aa7a6 );
    }
    cache_frame_94805af7abe367121b2a025b351aa7a6 = NULL;

    assertFrameObject( frame_94805af7abe367121b2a025b351aa7a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_6__unmunge_zone );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_zone );
    par_zone = NULL;

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

    Py_XDECREF( par_zone );
    par_zone = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_6__unmunge_zone );
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


static PyObject *impl_pytz$$$function_7_fromutc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_object_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_type_name_1;
    static struct Nuitka_FrameObject *cache_frame_ea466f546215223d2a12db5f6d9cc480 = NULL;

    struct Nuitka_FrameObject *frame_ea466f546215223d2a12db5f6d9cc480;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ea466f546215223d2a12db5f6d9cc480, codeobj_ea466f546215223d2a12db5f6d9cc480, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ea466f546215223d2a12db5f6d9cc480 = cache_frame_ea466f546215223d2a12db5f6d9cc480;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ea466f546215223d2a12db5f6d9cc480 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ea466f546215223d2a12db5f6d9cc480 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_dt;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tzinfo );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "ooN";
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
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_localize );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_dt;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }

    frame_ea466f546215223d2a12db5f6d9cc480->m_frame.f_lineno = 219;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_utc );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utc );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "utc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }

    tmp_type_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_type_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    tmp_object_name_1 = par_self;

    if ( tmp_object_name_1 == NULL )
    {
        Py_DECREF( tmp_type_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    Py_DECREF( tmp_type_name_1 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_fromutc );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_dt;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }

    frame_ea466f546215223d2a12db5f6d9cc480->m_frame.f_lineno = 220;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ea466f546215223d2a12db5f6d9cc480 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ea466f546215223d2a12db5f6d9cc480 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ea466f546215223d2a12db5f6d9cc480 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ea466f546215223d2a12db5f6d9cc480, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ea466f546215223d2a12db5f6d9cc480->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ea466f546215223d2a12db5f6d9cc480, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ea466f546215223d2a12db5f6d9cc480,
        type_description_1,
        par_self,
        par_dt,
        NULL
    );


    // Release cached frame.
    if ( frame_ea466f546215223d2a12db5f6d9cc480 == cache_frame_ea466f546215223d2a12db5f6d9cc480 )
    {
        Py_DECREF( frame_ea466f546215223d2a12db5f6d9cc480 );
    }
    cache_frame_ea466f546215223d2a12db5f6d9cc480 = NULL;

    assertFrameObject( frame_ea466f546215223d2a12db5f6d9cc480 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_7_fromutc );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_7_fromutc );
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


static PyObject *impl_pytz$$$function_8_utcoffset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_e103b51103db53c1555451b8a9ea29a6 = NULL;

    struct Nuitka_FrameObject *frame_e103b51103db53c1555451b8a9ea29a6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e103b51103db53c1555451b8a9ea29a6, codeobj_e103b51103db53c1555451b8a9ea29a6, module_pytz, sizeof(void *)+sizeof(void *) );
    frame_e103b51103db53c1555451b8a9ea29a6 = cache_frame_e103b51103db53c1555451b8a9ea29a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e103b51103db53c1555451b8a9ea29a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e103b51103db53c1555451b8a9ea29a6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ZERO );

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

        exception_lineno = 223;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e103b51103db53c1555451b8a9ea29a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e103b51103db53c1555451b8a9ea29a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e103b51103db53c1555451b8a9ea29a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e103b51103db53c1555451b8a9ea29a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e103b51103db53c1555451b8a9ea29a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e103b51103db53c1555451b8a9ea29a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e103b51103db53c1555451b8a9ea29a6,
        type_description_1,
        par_self,
        par_dt
    );


    // Release cached frame.
    if ( frame_e103b51103db53c1555451b8a9ea29a6 == cache_frame_e103b51103db53c1555451b8a9ea29a6 )
    {
        Py_DECREF( frame_e103b51103db53c1555451b8a9ea29a6 );
    }
    cache_frame_e103b51103db53c1555451b8a9ea29a6 = NULL;

    assertFrameObject( frame_e103b51103db53c1555451b8a9ea29a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_8_utcoffset );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_8_utcoffset );
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


static PyObject *impl_pytz$$$function_9_tzname( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_str_plain_UTC;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_9_tzname );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_9_tzname );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pytz$$$function_10_dst( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_59ce4f007c81110fa85f66fd5b4736a2 = NULL;

    struct Nuitka_FrameObject *frame_59ce4f007c81110fa85f66fd5b4736a2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_59ce4f007c81110fa85f66fd5b4736a2, codeobj_59ce4f007c81110fa85f66fd5b4736a2, module_pytz, sizeof(void *)+sizeof(void *) );
    frame_59ce4f007c81110fa85f66fd5b4736a2 = cache_frame_59ce4f007c81110fa85f66fd5b4736a2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_59ce4f007c81110fa85f66fd5b4736a2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_59ce4f007c81110fa85f66fd5b4736a2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ZERO );

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

        exception_lineno = 229;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59ce4f007c81110fa85f66fd5b4736a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_59ce4f007c81110fa85f66fd5b4736a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59ce4f007c81110fa85f66fd5b4736a2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_59ce4f007c81110fa85f66fd5b4736a2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_59ce4f007c81110fa85f66fd5b4736a2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_59ce4f007c81110fa85f66fd5b4736a2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_59ce4f007c81110fa85f66fd5b4736a2,
        type_description_1,
        par_self,
        par_dt
    );


    // Release cached frame.
    if ( frame_59ce4f007c81110fa85f66fd5b4736a2 == cache_frame_59ce4f007c81110fa85f66fd5b4736a2 )
    {
        Py_DECREF( frame_59ce4f007c81110fa85f66fd5b4736a2 );
    }
    cache_frame_59ce4f007c81110fa85f66fd5b4736a2 = NULL;

    assertFrameObject( frame_59ce4f007c81110fa85f66fd5b4736a2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_10_dst );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_10_dst );
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


static PyObject *impl_pytz$$$function_11___reduce__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_58849b9e4051e923d871972064cb292c = NULL;

    struct Nuitka_FrameObject *frame_58849b9e4051e923d871972064cb292c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_58849b9e4051e923d871972064cb292c, codeobj_58849b9e4051e923d871972064cb292c, module_pytz, sizeof(void *) );
    frame_58849b9e4051e923d871972064cb292c = cache_frame_58849b9e4051e923d871972064cb292c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_58849b9e4051e923d871972064cb292c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_58849b9e4051e923d871972064cb292c ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__UTC );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UTC );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_UTC" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 232;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_tuple_empty;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58849b9e4051e923d871972064cb292c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_58849b9e4051e923d871972064cb292c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58849b9e4051e923d871972064cb292c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_58849b9e4051e923d871972064cb292c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_58849b9e4051e923d871972064cb292c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_58849b9e4051e923d871972064cb292c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_58849b9e4051e923d871972064cb292c,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_58849b9e4051e923d871972064cb292c == cache_frame_58849b9e4051e923d871972064cb292c )
    {
        Py_DECREF( frame_58849b9e4051e923d871972064cb292c );
    }
    cache_frame_58849b9e4051e923d871972064cb292c = NULL;

    assertFrameObject( frame_58849b9e4051e923d871972064cb292c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_11___reduce__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_11___reduce__ );
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


static PyObject *impl_pytz$$$function_12_localize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *par_is_dst = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_3662bffd319a6a499f886fc53b2fa130 = NULL;

    struct Nuitka_FrameObject *frame_3662bffd319a6a499f886fc53b2fa130;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3662bffd319a6a499f886fc53b2fa130, codeobj_3662bffd319a6a499f886fc53b2fa130, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3662bffd319a6a499f886fc53b2fa130 = cache_frame_3662bffd319a6a499f886fc53b2fa130;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3662bffd319a6a499f886fc53b2fa130 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3662bffd319a6a499f886fc53b2fa130 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_dt;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tzinfo );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_b1bc7fe008192248e9be21d38f9c02c1;
    frame_3662bffd319a6a499f886fc53b2fa130->m_frame.f_lineno = 237;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 237;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_dt;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_replace );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_tzinfo;
    tmp_dict_value_1 = par_self;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_3662bffd319a6a499f886fc53b2fa130->m_frame.f_lineno = 238;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3662bffd319a6a499f886fc53b2fa130 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3662bffd319a6a499f886fc53b2fa130 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3662bffd319a6a499f886fc53b2fa130 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3662bffd319a6a499f886fc53b2fa130, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3662bffd319a6a499f886fc53b2fa130->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3662bffd319a6a499f886fc53b2fa130, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3662bffd319a6a499f886fc53b2fa130,
        type_description_1,
        par_self,
        par_dt,
        par_is_dst
    );


    // Release cached frame.
    if ( frame_3662bffd319a6a499f886fc53b2fa130 == cache_frame_3662bffd319a6a499f886fc53b2fa130 )
    {
        Py_DECREF( frame_3662bffd319a6a499f886fc53b2fa130 );
    }
    cache_frame_3662bffd319a6a499f886fc53b2fa130 = NULL;

    assertFrameObject( frame_3662bffd319a6a499f886fc53b2fa130 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_12_localize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_12_localize );
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


static PyObject *impl_pytz$$$function_13_normalize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_5c782390158713444233c714c8c7ed42 = NULL;

    struct Nuitka_FrameObject *frame_5c782390158713444233c714c8c7ed42;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5c782390158713444233c714c8c7ed42, codeobj_5c782390158713444233c714c8c7ed42, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5c782390158713444233c714c8c7ed42 = cache_frame_5c782390158713444233c714c8c7ed42;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5c782390158713444233c714c8c7ed42 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5c782390158713444233c714c8c7ed42 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_dt;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tzinfo );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = par_self;

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

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
    tmp_return_value = par_dt;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_dt;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 244;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tzinfo );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        type_description_1 = "ooo";
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
    tmp_make_exception_arg_1 = const_str_digest_05ebd808c21ea74523ac7072ed059560;
    frame_5c782390158713444233c714c8c7ed42->m_frame.f_lineno = 245;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 245;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_3 = par_dt;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_astimezone );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_5c782390158713444233c714c8c7ed42->m_frame.f_lineno = 246;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c782390158713444233c714c8c7ed42 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c782390158713444233c714c8c7ed42 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c782390158713444233c714c8c7ed42 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5c782390158713444233c714c8c7ed42, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5c782390158713444233c714c8c7ed42->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5c782390158713444233c714c8c7ed42, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5c782390158713444233c714c8c7ed42,
        type_description_1,
        par_self,
        par_dt,
        par_is_dst
    );


    // Release cached frame.
    if ( frame_5c782390158713444233c714c8c7ed42 == cache_frame_5c782390158713444233c714c8c7ed42 )
    {
        Py_DECREF( frame_5c782390158713444233c714c8c7ed42 );
    }
    cache_frame_5c782390158713444233c714c8c7ed42 = NULL;

    assertFrameObject( frame_5c782390158713444233c714c8c7ed42 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_13_normalize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_13_normalize );
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


static PyObject *impl_pytz$$$function_14___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = const_str_angle_UTC;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_14___repr__ );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_14___repr__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pytz$$$function_15___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = const_str_plain_UTC;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_15___str__ );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_15___str__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pytz$$$function_16__UTC( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_7d3cb6e62c315e1d487907dac93dce5b = NULL;

    struct Nuitka_FrameObject *frame_7d3cb6e62c315e1d487907dac93dce5b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_7d3cb6e62c315e1d487907dac93dce5b, codeobj_7d3cb6e62c315e1d487907dac93dce5b, module_pytz, 0 );
    frame_7d3cb6e62c315e1d487907dac93dce5b = cache_frame_7d3cb6e62c315e1d487907dac93dce5b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7d3cb6e62c315e1d487907dac93dce5b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7d3cb6e62c315e1d487907dac93dce5b ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_utc );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utc );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "utc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d3cb6e62c315e1d487907dac93dce5b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d3cb6e62c315e1d487907dac93dce5b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d3cb6e62c315e1d487907dac93dce5b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7d3cb6e62c315e1d487907dac93dce5b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7d3cb6e62c315e1d487907dac93dce5b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7d3cb6e62c315e1d487907dac93dce5b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7d3cb6e62c315e1d487907dac93dce5b,
        type_description_1
    );


    // Release cached frame.
    if ( frame_7d3cb6e62c315e1d487907dac93dce5b == cache_frame_7d3cb6e62c315e1d487907dac93dce5b )
    {
        Py_DECREF( frame_7d3cb6e62c315e1d487907dac93dce5b );
    }
    cache_frame_7d3cb6e62c315e1d487907dac93dce5b = NULL;

    assertFrameObject( frame_7d3cb6e62c315e1d487907dac93dce5b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_16__UTC );
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


static PyObject *impl_pytz$$$function_17__p( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_8aa1a500ca5d70f03910ce283cdad972 = NULL;

    struct Nuitka_FrameObject *frame_8aa1a500ca5d70f03910ce283cdad972;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8aa1a500ca5d70f03910ce283cdad972, codeobj_8aa1a500ca5d70f03910ce283cdad972, module_pytz, sizeof(void *) );
    frame_8aa1a500ca5d70f03910ce283cdad972 = cache_frame_8aa1a500ca5d70f03910ce283cdad972;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8aa1a500ca5d70f03910ce283cdad972 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8aa1a500ca5d70f03910ce283cdad972 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_unpickler );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpickler );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpickler" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 297;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_return_value = impl___internal__$$$function_4_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8aa1a500ca5d70f03910ce283cdad972 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8aa1a500ca5d70f03910ce283cdad972 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8aa1a500ca5d70f03910ce283cdad972 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8aa1a500ca5d70f03910ce283cdad972, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8aa1a500ca5d70f03910ce283cdad972->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8aa1a500ca5d70f03910ce283cdad972, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8aa1a500ca5d70f03910ce283cdad972,
        type_description_1,
        par_args
    );


    // Release cached frame.
    if ( frame_8aa1a500ca5d70f03910ce283cdad972 == cache_frame_8aa1a500ca5d70f03910ce283cdad972 )
    {
        Py_DECREF( frame_8aa1a500ca5d70f03910ce283cdad972 );
    }
    cache_frame_8aa1a500ca5d70f03910ce283cdad972 = NULL;

    assertFrameObject( frame_8aa1a500ca5d70f03910ce283cdad972 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_17__p );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_17__p );
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


static PyObject *impl_pytz$$$function_18___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_iso3166_code = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_6d6afa008c6a1796bf4cc23158cd3505 = NULL;

    struct Nuitka_FrameObject *frame_6d6afa008c6a1796bf4cc23158cd3505;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6d6afa008c6a1796bf4cc23158cd3505, codeobj_6d6afa008c6a1796bf4cc23158cd3505, module_pytz, sizeof(void *)+sizeof(void *) );
    frame_6d6afa008c6a1796bf4cc23158cd3505 = cache_frame_6d6afa008c6a1796bf4cc23158cd3505;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6d6afa008c6a1796bf4cc23158cd3505 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6d6afa008c6a1796bf4cc23158cd3505 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = par_self;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = par_iso3166_code;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d6afa008c6a1796bf4cc23158cd3505 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d6afa008c6a1796bf4cc23158cd3505 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d6afa008c6a1796bf4cc23158cd3505 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6d6afa008c6a1796bf4cc23158cd3505, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6d6afa008c6a1796bf4cc23158cd3505->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6d6afa008c6a1796bf4cc23158cd3505, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6d6afa008c6a1796bf4cc23158cd3505,
        type_description_1,
        par_self,
        par_iso3166_code
    );


    // Release cached frame.
    if ( frame_6d6afa008c6a1796bf4cc23158cd3505 == cache_frame_6d6afa008c6a1796bf4cc23158cd3505 )
    {
        Py_DECREF( frame_6d6afa008c6a1796bf4cc23158cd3505 );
    }
    cache_frame_6d6afa008c6a1796bf4cc23158cd3505 = NULL;

    assertFrameObject( frame_6d6afa008c6a1796bf4cc23158cd3505 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_18___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_iso3166_code );
    par_iso3166_code = NULL;

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

    Py_XDECREF( par_iso3166_code );
    par_iso3166_code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_18___call__ );
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


static PyObject *impl_pytz$$$function_19__fill( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_data = NULL;
    PyObject *var_zone_tab = NULL;
    PyObject *var_line = NULL;
    PyObject *var_code = NULL;
    PyObject *var_coordinates = NULL;
    PyObject *var_zone = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3e7272b207568406931821d1e6f6879c = NULL;

    struct Nuitka_FrameObject *frame_3e7272b207568406931821d1e6f6879c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_data == NULL );
    var_data = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3e7272b207568406931821d1e6f6879c, codeobj_3e7272b207568406931821d1e6f6879c, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3e7272b207568406931821d1e6f6879c = cache_frame_3e7272b207568406931821d1e6f6879c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3e7272b207568406931821d1e6f6879c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3e7272b207568406931821d1e6f6879c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_open_resource );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_open_resource );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "open_resource" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 340;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_3e7272b207568406931821d1e6f6879c->m_frame.f_lineno = 340;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_c9936f1548c11ea6c3047698538b3dca_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_zone_tab == NULL );
    var_zone_tab = tmp_assign_source_2;

    // Tried code:
    tmp_iter_arg_1 = var_zone_tab;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
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
            type_description_1 = "ooooooo";
            exception_lineno = 342;
            goto try_except_handler_3;
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
        PyObject *old = var_line;
        var_line = tmp_assign_source_5;
        Py_INCREF( var_line );
        Py_XDECREF( old );
    }

    tmp_called_instance_1 = var_line;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_3e7272b207568406931821d1e6f6879c->m_frame.f_lineno = 343;
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_d80d8945c1075596a484c18b20ab6235_tuple, 0 ) );

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = var_line;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_3e7272b207568406931821d1e6f6879c->m_frame.f_lineno = 344;
    tmp_cond_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_chr_35_tuple, 0 ) );

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 344;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
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
    goto loop_start_1;
    branch_no_1:;
    // Tried code:
    tmp_called_instance_3 = var_line;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 346;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    frame_3e7272b207568406931821d1e6f6879c->m_frame.f_lineno = 346;
    tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_none_int_pos_4_tuple, 0 ) );

    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_subscript_name_1 = const_slice_none_int_pos_3_none;
    tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


        type_description_1 = "ooooooo";
        exception_lineno = 346;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


        type_description_1 = "ooooooo";
        exception_lineno = 346;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


        type_description_1 = "ooooooo";
        exception_lineno = 346;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_3;
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_10;
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

                type_description_1 = "ooooooo";
                exception_lineno = 346;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooo";
        exception_lineno = 346;
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

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

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

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_code;
        var_code = tmp_assign_source_11;
        Py_INCREF( var_code );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = var_coordinates;
        var_coordinates = tmp_assign_source_12;
        Py_INCREF( var_coordinates );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = var_zone;
        var_zone = tmp_assign_source_13;
        Py_INCREF( var_zone );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_compare_left_1 = var_zone;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 347;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }

    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones_set );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_all_timezones_set );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "all_timezones_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 347;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
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
    goto loop_start_1;
    branch_no_2:;
    // Tried code:
    tmp_subscribed_name_2 = var_data;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 350;
        type_description_1 = "ooooooo";
        goto try_except_handler_6;
    }

    tmp_subscript_name_2 = var_code;

    if ( tmp_subscript_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "code" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 350;
        type_description_1 = "ooooooo";
        goto try_except_handler_6;
    }

    tmp_source_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        type_description_1 = "ooooooo";
        goto try_except_handler_6;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        type_description_1 = "ooooooo";
        goto try_except_handler_6;
    }
    tmp_args_element_name_1 = var_zone;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 350;
        type_description_1 = "ooooooo";
        goto try_except_handler_6;
    }

    frame_3e7272b207568406931821d1e6f6879c->m_frame.f_lineno = 350;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        type_description_1 = "ooooooo";
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_3e7272b207568406931821d1e6f6879c, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_3e7272b207568406931821d1e6f6879c, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 351;
        type_description_1 = "ooooooo";
        goto try_except_handler_7;
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
    tmp_ass_subvalue_1 = PyList_New( 1 );
    tmp_list_element_1 = var_zone;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;
        type_description_1 = "ooooooo";
        goto try_except_handler_7;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_ass_subvalue_1, 0, tmp_list_element_1 );
    tmp_ass_subscribed_1 = var_data;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;
        type_description_1 = "ooooooo";
        goto try_except_handler_7;
    }

    tmp_ass_subscript_1 = var_code;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "code" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;
        type_description_1 = "ooooooo";
        goto try_except_handler_7;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        type_description_1 = "ooooooo";
        goto try_except_handler_7;
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 349;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3e7272b207568406931821d1e6f6879c->m_frame) frame_3e7272b207568406931821d1e6f6879c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_7;
    branch_end_3:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_19__fill );
    return NULL;
    // End of try:
    try_end_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_assattr_name_1 = var_data;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 353;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
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

        exception_lineno = 353;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_data, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto try_end_6;
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

    // Preserve existing published exception.
    exception_preserved_type_2 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_3e7272b207568406931821d1e6f6879c, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_3e7272b207568406931821d1e6f6879c, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    // Tried code:
    tmp_called_instance_4 = var_zone_tab;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone_tab" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 355;
        type_description_1 = "ooooooo";
        goto try_except_handler_8;
    }

    frame_3e7272b207568406931821d1e6f6879c->m_frame.f_lineno = 355;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        type_description_1 = "ooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 341;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3e7272b207568406931821d1e6f6879c->m_frame) frame_3e7272b207568406931821d1e6f6879c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_19__fill );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_6:;
    tmp_called_instance_5 = var_zone_tab;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone_tab" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 355;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_3e7272b207568406931821d1e6f6879c->m_frame.f_lineno = 355;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 1
    RESTORE_FRAME_EXCEPTION( frame_3e7272b207568406931821d1e6f6879c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_3e7272b207568406931821d1e6f6879c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3e7272b207568406931821d1e6f6879c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3e7272b207568406931821d1e6f6879c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3e7272b207568406931821d1e6f6879c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3e7272b207568406931821d1e6f6879c,
        type_description_1,
        par_self,
        var_data,
        var_zone_tab,
        var_line,
        var_code,
        var_coordinates,
        var_zone
    );


    // Release cached frame.
    if ( frame_3e7272b207568406931821d1e6f6879c == cache_frame_3e7272b207568406931821d1e6f6879c )
    {
        Py_DECREF( frame_3e7272b207568406931821d1e6f6879c );
    }
    cache_frame_3e7272b207568406931821d1e6f6879c = NULL;

    assertFrameObject( frame_3e7272b207568406931821d1e6f6879c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_19__fill );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_zone_tab );
    var_zone_tab = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_coordinates );
    var_coordinates = NULL;

    Py_XDECREF( var_zone );
    var_zone = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_zone_tab );
    var_zone_tab = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_coordinates );
    var_coordinates = NULL;

    Py_XDECREF( var_zone );
    var_zone = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_19__fill );
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


static PyObject *impl_pytz$$$function_20__fill( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_data = NULL;
    PyObject *var_zone_tab = NULL;
    PyObject *var_line = NULL;
    PyObject *var_code = NULL;
    PyObject *var_name = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_92f9d5039d8c261edda817b96fba863e = NULL;

    struct Nuitka_FrameObject *frame_92f9d5039d8c261edda817b96fba863e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_data == NULL );
    var_data = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_92f9d5039d8c261edda817b96fba863e, codeobj_92f9d5039d8c261edda817b96fba863e, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_92f9d5039d8c261edda817b96fba863e = cache_frame_92f9d5039d8c261edda817b96fba863e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_92f9d5039d8c261edda817b96fba863e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_92f9d5039d8c261edda817b96fba863e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_open_resource );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_open_resource );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "open_resource" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 368;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_92f9d5039d8c261edda817b96fba863e->m_frame.f_lineno = 368;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_3735242e556d5ab23254722e494faf6c_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_zone_tab == NULL );
    var_zone_tab = tmp_assign_source_2;

    // Tried code:
    tmp_called_instance_1 = var_zone_tab;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_92f9d5039d8c261edda817b96fba863e->m_frame.f_lineno = 370;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_readlines );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
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
            type_description_1 = "oooooo";
            exception_lineno = 370;
            goto try_except_handler_3;
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
        PyObject *old = var_line;
        var_line = tmp_assign_source_5;
        Py_INCREF( var_line );
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = var_line;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_92f9d5039d8c261edda817b96fba863e->m_frame.f_lineno = 371;
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_d80d8945c1075596a484c18b20ab6235_tuple, 0 ) );

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_instance_3 = var_line;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_92f9d5039d8c261edda817b96fba863e->m_frame.f_lineno = 372;
    tmp_cond_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_chr_35_tuple, 0 ) );

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 372;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
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
    goto loop_start_1;
    branch_no_1:;
    // Tried code:
    tmp_called_instance_4 = var_line;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 374;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    frame_92f9d5039d8c261edda817b96fba863e->m_frame.f_lineno = 374;
    tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_none_int_pos_1_tuple, 0 ) );

    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


        type_description_1 = "oooooo";
        exception_lineno = 374;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "oooooo";
        exception_lineno = 374;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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

                type_description_1 = "oooooo";
                exception_lineno = 374;
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

        type_description_1 = "oooooo";
        exception_lineno = 374;
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

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = var_code;
        var_code = tmp_assign_source_10;
        Py_INCREF( var_code );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_11;
        Py_INCREF( var_name );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_instance_5 = var_name;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 375;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }

    frame_92f9d5039d8c261edda817b96fba863e->m_frame.f_lineno = 375;
    tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_strip );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    tmp_ass_subscribed_1 = var_data;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 375;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }

    tmp_ass_subscript_1 = var_code;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "code" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 375;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_assattr_name_1 = var_data;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 376;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
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

        exception_lineno = 376;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_data, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
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
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_92f9d5039d8c261edda817b96fba863e, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_92f9d5039d8c261edda817b96fba863e, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    tmp_called_instance_6 = var_zone_tab;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone_tab" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 378;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }

    frame_92f9d5039d8c261edda817b96fba863e->m_frame.f_lineno = 378;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 369;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_92f9d5039d8c261edda817b96fba863e->m_frame) frame_92f9d5039d8c261edda817b96fba863e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_20__fill );
    return NULL;
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
    // End of try:
    try_end_4:;
    tmp_called_instance_7 = var_zone_tab;

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone_tab" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 378;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_92f9d5039d8c261edda817b96fba863e->m_frame.f_lineno = 378;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 1
    RESTORE_FRAME_EXCEPTION( frame_92f9d5039d8c261edda817b96fba863e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_92f9d5039d8c261edda817b96fba863e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_92f9d5039d8c261edda817b96fba863e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_92f9d5039d8c261edda817b96fba863e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_92f9d5039d8c261edda817b96fba863e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_92f9d5039d8c261edda817b96fba863e,
        type_description_1,
        par_self,
        var_data,
        var_zone_tab,
        var_line,
        var_code,
        var_name
    );


    // Release cached frame.
    if ( frame_92f9d5039d8c261edda817b96fba863e == cache_frame_92f9d5039d8c261edda817b96fba863e )
    {
        Py_DECREF( frame_92f9d5039d8c261edda817b96fba863e );
    }
    cache_frame_92f9d5039d8c261edda817b96fba863e = NULL;

    assertFrameObject( frame_92f9d5039d8c261edda817b96fba863e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_20__fill );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_zone_tab );
    var_zone_tab = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_zone_tab );
    var_zone_tab = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_20__fill );
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


static PyObject *impl_pytz$$$function_21___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_minutes = python_pars[ 1 ];
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
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_ed6e7f08e784031caca1c295f74d5a4b = NULL;

    struct Nuitka_FrameObject *frame_ed6e7f08e784031caca1c295f74d5a4b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ed6e7f08e784031caca1c295f74d5a4b, codeobj_ed6e7f08e784031caca1c295f74d5a4b, module_pytz, sizeof(void *)+sizeof(void *) );
    frame_ed6e7f08e784031caca1c295f74d5a4b = cache_frame_ed6e7f08e784031caca1c295f74d5a4b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ed6e7f08e784031caca1c295f74d5a4b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ed6e7f08e784031caca1c295f74d5a4b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = par_minutes;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_ed6e7f08e784031caca1c295f74d5a4b->m_frame.f_lineno = 390;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compare_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1440;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 390;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_4e398d8cf2a8e37650e81f23aa9b58cd;
    tmp_make_exception_arg_2 = par_minutes;

    if ( tmp_make_exception_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "minutes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_ed6e7f08e784031caca1c295f74d5a4b->m_frame.f_lineno = 391;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1, tmp_make_exception_arg_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 391;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assattr_name_1 = par_minutes;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "minutes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 392;
        type_description_1 = "oo";
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

        exception_lineno = 392;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__minutes, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 393;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_timedelta );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_minutes;
    tmp_dict_value_1 = par_minutes;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "minutes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 393;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_ed6e7f08e784031caca1c295f74d5a4b->m_frame.f_lineno = 393;
    tmp_assattr_name_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
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

        exception_lineno = 393;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__offset, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 393;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed6e7f08e784031caca1c295f74d5a4b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed6e7f08e784031caca1c295f74d5a4b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ed6e7f08e784031caca1c295f74d5a4b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ed6e7f08e784031caca1c295f74d5a4b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ed6e7f08e784031caca1c295f74d5a4b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ed6e7f08e784031caca1c295f74d5a4b,
        type_description_1,
        par_self,
        par_minutes
    );


    // Release cached frame.
    if ( frame_ed6e7f08e784031caca1c295f74d5a4b == cache_frame_ed6e7f08e784031caca1c295f74d5a4b )
    {
        Py_DECREF( frame_ed6e7f08e784031caca1c295f74d5a4b );
    }
    cache_frame_ed6e7f08e784031caca1c295f74d5a4b = NULL;

    assertFrameObject( frame_ed6e7f08e784031caca1c295f74d5a4b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_21___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_minutes );
    par_minutes = NULL;

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

    Py_XDECREF( par_minutes );
    par_minutes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_21___init__ );
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


static PyObject *impl_pytz$$$function_22_utcoffset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_7d2a792c8404ec12079075d4c3428ce9 = NULL;

    struct Nuitka_FrameObject *frame_7d2a792c8404ec12079075d4c3428ce9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7d2a792c8404ec12079075d4c3428ce9, codeobj_7d2a792c8404ec12079075d4c3428ce9, module_pytz, sizeof(void *)+sizeof(void *) );
    frame_7d2a792c8404ec12079075d4c3428ce9 = cache_frame_7d2a792c8404ec12079075d4c3428ce9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7d2a792c8404ec12079075d4c3428ce9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7d2a792c8404ec12079075d4c3428ce9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__offset );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d2a792c8404ec12079075d4c3428ce9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d2a792c8404ec12079075d4c3428ce9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d2a792c8404ec12079075d4c3428ce9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7d2a792c8404ec12079075d4c3428ce9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7d2a792c8404ec12079075d4c3428ce9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7d2a792c8404ec12079075d4c3428ce9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7d2a792c8404ec12079075d4c3428ce9,
        type_description_1,
        par_self,
        par_dt
    );


    // Release cached frame.
    if ( frame_7d2a792c8404ec12079075d4c3428ce9 == cache_frame_7d2a792c8404ec12079075d4c3428ce9 )
    {
        Py_DECREF( frame_7d2a792c8404ec12079075d4c3428ce9 );
    }
    cache_frame_7d2a792c8404ec12079075d4c3428ce9 = NULL;

    assertFrameObject( frame_7d2a792c8404ec12079075d4c3428ce9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_22_utcoffset );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_22_utcoffset );
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


static PyObject *impl_pytz$$$function_23___reduce__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_8dc34895959aa79a221b91aca7db4207 = NULL;

    struct Nuitka_FrameObject *frame_8dc34895959aa79a221b91aca7db4207;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8dc34895959aa79a221b91aca7db4207, codeobj_8dc34895959aa79a221b91aca7db4207, module_pytz, sizeof(void *) );
    frame_8dc34895959aa79a221b91aca7db4207 = cache_frame_8dc34895959aa79a221b91aca7db4207;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8dc34895959aa79a221b91aca7db4207 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8dc34895959aa79a221b91aca7db4207 ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_FixedOffset );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FixedOffset );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FixedOffset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 399;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyTuple_New( 1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__minutes );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 399;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8dc34895959aa79a221b91aca7db4207 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8dc34895959aa79a221b91aca7db4207 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8dc34895959aa79a221b91aca7db4207 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8dc34895959aa79a221b91aca7db4207, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8dc34895959aa79a221b91aca7db4207->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8dc34895959aa79a221b91aca7db4207, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8dc34895959aa79a221b91aca7db4207,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_8dc34895959aa79a221b91aca7db4207 == cache_frame_8dc34895959aa79a221b91aca7db4207 )
    {
        Py_DECREF( frame_8dc34895959aa79a221b91aca7db4207 );
    }
    cache_frame_8dc34895959aa79a221b91aca7db4207 = NULL;

    assertFrameObject( frame_8dc34895959aa79a221b91aca7db4207 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_23___reduce__ );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_23___reduce__ );
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


static PyObject *impl_pytz$$$function_24_dst( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_c297704597bf1c3ccb8f5973d2d948cb = NULL;

    struct Nuitka_FrameObject *frame_c297704597bf1c3ccb8f5973d2d948cb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c297704597bf1c3ccb8f5973d2d948cb, codeobj_c297704597bf1c3ccb8f5973d2d948cb, module_pytz, sizeof(void *)+sizeof(void *) );
    frame_c297704597bf1c3ccb8f5973d2d948cb = cache_frame_c297704597bf1c3ccb8f5973d2d948cb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c297704597bf1c3ccb8f5973d2d948cb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c297704597bf1c3ccb8f5973d2d948cb ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ZERO );

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

        exception_lineno = 402;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c297704597bf1c3ccb8f5973d2d948cb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c297704597bf1c3ccb8f5973d2d948cb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c297704597bf1c3ccb8f5973d2d948cb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c297704597bf1c3ccb8f5973d2d948cb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c297704597bf1c3ccb8f5973d2d948cb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c297704597bf1c3ccb8f5973d2d948cb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c297704597bf1c3ccb8f5973d2d948cb,
        type_description_1,
        par_self,
        par_dt
    );


    // Release cached frame.
    if ( frame_c297704597bf1c3ccb8f5973d2d948cb == cache_frame_c297704597bf1c3ccb8f5973d2d948cb )
    {
        Py_DECREF( frame_c297704597bf1c3ccb8f5973d2d948cb );
    }
    cache_frame_c297704597bf1c3ccb8f5973d2d948cb = NULL;

    assertFrameObject( frame_c297704597bf1c3ccb8f5973d2d948cb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_24_dst );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_24_dst );
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


static PyObject *impl_pytz$$$function_25_tzname( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_25_tzname );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_25_tzname );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pytz$$$function_26___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_11efce511210f717fdd15bb64377ee06 = NULL;

    struct Nuitka_FrameObject *frame_11efce511210f717fdd15bb64377ee06;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_11efce511210f717fdd15bb64377ee06, codeobj_11efce511210f717fdd15bb64377ee06, module_pytz, sizeof(void *) );
    frame_11efce511210f717fdd15bb64377ee06 = cache_frame_11efce511210f717fdd15bb64377ee06;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_11efce511210f717fdd15bb64377ee06 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_11efce511210f717fdd15bb64377ee06 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_4116d603cf18d622a3a96438c3ed8247;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__minutes );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 408;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 408;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11efce511210f717fdd15bb64377ee06 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_11efce511210f717fdd15bb64377ee06 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11efce511210f717fdd15bb64377ee06 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_11efce511210f717fdd15bb64377ee06, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_11efce511210f717fdd15bb64377ee06->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_11efce511210f717fdd15bb64377ee06, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_11efce511210f717fdd15bb64377ee06,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_11efce511210f717fdd15bb64377ee06 == cache_frame_11efce511210f717fdd15bb64377ee06 )
    {
        Py_DECREF( frame_11efce511210f717fdd15bb64377ee06 );
    }
    cache_frame_11efce511210f717fdd15bb64377ee06 = NULL;

    assertFrameObject( frame_11efce511210f717fdd15bb64377ee06 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_26___repr__ );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_26___repr__ );
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


static PyObject *impl_pytz$$$function_27_localize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *par_is_dst = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_18afbe579375b2f097653cd917aec15e = NULL;

    struct Nuitka_FrameObject *frame_18afbe579375b2f097653cd917aec15e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_18afbe579375b2f097653cd917aec15e, codeobj_18afbe579375b2f097653cd917aec15e, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_18afbe579375b2f097653cd917aec15e = cache_frame_18afbe579375b2f097653cd917aec15e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_18afbe579375b2f097653cd917aec15e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_18afbe579375b2f097653cd917aec15e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_dt;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tzinfo );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 412;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_b1bc7fe008192248e9be21d38f9c02c1;
    frame_18afbe579375b2f097653cd917aec15e->m_frame.f_lineno = 413;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 413;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_dt;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 414;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_replace );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_tzinfo;
    tmp_dict_value_1 = par_self;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
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

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_18afbe579375b2f097653cd917aec15e->m_frame.f_lineno = 414;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_18afbe579375b2f097653cd917aec15e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_18afbe579375b2f097653cd917aec15e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_18afbe579375b2f097653cd917aec15e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_18afbe579375b2f097653cd917aec15e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_18afbe579375b2f097653cd917aec15e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_18afbe579375b2f097653cd917aec15e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_18afbe579375b2f097653cd917aec15e,
        type_description_1,
        par_self,
        par_dt,
        par_is_dst
    );


    // Release cached frame.
    if ( frame_18afbe579375b2f097653cd917aec15e == cache_frame_18afbe579375b2f097653cd917aec15e )
    {
        Py_DECREF( frame_18afbe579375b2f097653cd917aec15e );
    }
    cache_frame_18afbe579375b2f097653cd917aec15e = NULL;

    assertFrameObject( frame_18afbe579375b2f097653cd917aec15e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_27_localize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_27_localize );
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


static PyObject *impl_pytz$$$function_28_normalize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_25cec1c9cb9d01938e477c2282089be3 = NULL;

    struct Nuitka_FrameObject *frame_25cec1c9cb9d01938e477c2282089be3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_25cec1c9cb9d01938e477c2282089be3, codeobj_25cec1c9cb9d01938e477c2282089be3, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_25cec1c9cb9d01938e477c2282089be3 = cache_frame_25cec1c9cb9d01938e477c2282089be3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_25cec1c9cb9d01938e477c2282089be3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_25cec1c9cb9d01938e477c2282089be3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_dt;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tzinfo );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = par_self;

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
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
    tmp_return_value = par_dt;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 419;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_dt;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 420;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tzinfo );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        type_description_1 = "ooo";
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
    tmp_make_exception_arg_1 = const_str_digest_05ebd808c21ea74523ac7072ed059560;
    frame_25cec1c9cb9d01938e477c2282089be3->m_frame.f_lineno = 421;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 421;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_3 = par_dt;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 422;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_astimezone );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 422;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_25cec1c9cb9d01938e477c2282089be3->m_frame.f_lineno = 422;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25cec1c9cb9d01938e477c2282089be3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_25cec1c9cb9d01938e477c2282089be3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25cec1c9cb9d01938e477c2282089be3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_25cec1c9cb9d01938e477c2282089be3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_25cec1c9cb9d01938e477c2282089be3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_25cec1c9cb9d01938e477c2282089be3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_25cec1c9cb9d01938e477c2282089be3,
        type_description_1,
        par_self,
        par_dt,
        par_is_dst
    );


    // Release cached frame.
    if ( frame_25cec1c9cb9d01938e477c2282089be3 == cache_frame_25cec1c9cb9d01938e477c2282089be3 )
    {
        Py_DECREF( frame_25cec1c9cb9d01938e477c2282089be3 );
    }
    cache_frame_25cec1c9cb9d01938e477c2282089be3 = NULL;

    assertFrameObject( frame_25cec1c9cb9d01938e477c2282089be3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_28_normalize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_28_normalize );
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


static PyObject *impl_pytz$$$function_29_FixedOffset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_offset = python_pars[ 0 ];
    PyObject *par__tzinfos = python_pars[ 1 ];
    PyObject *var_info = NULL;
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_3d6d0c7ac0dc7358c8d379894690a89a = NULL;

    struct Nuitka_FrameObject *frame_3d6d0c7ac0dc7358c8d379894690a89a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3d6d0c7ac0dc7358c8d379894690a89a, codeobj_3d6d0c7ac0dc7358c8d379894690a89a, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3d6d0c7ac0dc7358c8d379894690a89a = cache_frame_3d6d0c7ac0dc7358c8d379894690a89a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3d6d0c7ac0dc7358c8d379894690a89a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3d6d0c7ac0dc7358c8d379894690a89a ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_offset;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 478;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_UTC );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UTC );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UTC" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 479;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par__tzinfos;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_tzinfos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 481;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 481;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_offset;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 481;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3d6d0c7ac0dc7358c8d379894690a89a->m_frame.f_lineno = 481;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 481;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_info == NULL );
    var_info = tmp_assign_source_1;

    tmp_compare_left_2 = var_info;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_2 = par__tzinfos;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_tzinfos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 487;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_setdefault );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 487;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_offset;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 487;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__FixedOffset );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__FixedOffset );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_FixedOffset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 487;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_offset;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 487;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3d6d0c7ac0dc7358c8d379894690a89a->m_frame.f_lineno = 487;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 487;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_3d6d0c7ac0dc7358c8d379894690a89a->m_frame.f_lineno = 487;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 487;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_info;
        var_info = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_return_value = var_info;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 489;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d6d0c7ac0dc7358c8d379894690a89a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d6d0c7ac0dc7358c8d379894690a89a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d6d0c7ac0dc7358c8d379894690a89a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3d6d0c7ac0dc7358c8d379894690a89a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3d6d0c7ac0dc7358c8d379894690a89a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3d6d0c7ac0dc7358c8d379894690a89a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3d6d0c7ac0dc7358c8d379894690a89a,
        type_description_1,
        par_offset,
        par__tzinfos,
        var_info
    );


    // Release cached frame.
    if ( frame_3d6d0c7ac0dc7358c8d379894690a89a == cache_frame_3d6d0c7ac0dc7358c8d379894690a89a )
    {
        Py_DECREF( frame_3d6d0c7ac0dc7358c8d379894690a89a );
    }
    cache_frame_3d6d0c7ac0dc7358c8d379894690a89a = NULL;

    assertFrameObject( frame_3d6d0c7ac0dc7358c8d379894690a89a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_29_FixedOffset );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_offset );
    par_offset = NULL;

    Py_XDECREF( par__tzinfos );
    par__tzinfos = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

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

    Py_XDECREF( par__tzinfos );
    par__tzinfos = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_29_FixedOffset );
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


static PyObject *impl_pytz$$$function_30__test( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_doctest = NULL;
    PyObject *var_os = NULL;
    PyObject *var_sys = NULL;
    PyObject *var_pytz = NULL;
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
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_93a66a04422dfc334639fbe578bf6962 = NULL;

    struct Nuitka_FrameObject *frame_93a66a04422dfc334639fbe578bf6962;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_93a66a04422dfc334639fbe578bf6962, codeobj_93a66a04422dfc334639fbe578bf6962, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_93a66a04422dfc334639fbe578bf6962 = cache_frame_93a66a04422dfc334639fbe578bf6962;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_93a66a04422dfc334639fbe578bf6962 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_93a66a04422dfc334639fbe578bf6962 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_plain_doctest;
    tmp_globals_name_1 = (PyObject *)moduledict_pytz;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_93a66a04422dfc334639fbe578bf6962->m_frame.f_lineno = 495;
    tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 495;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_doctest == NULL );
    var_doctest = tmp_assign_source_1;

    tmp_name_name_2 = const_str_plain_os;
    tmp_globals_name_2 = (PyObject *)moduledict_pytz;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_93a66a04422dfc334639fbe578bf6962->m_frame.f_lineno = 495;
    tmp_assign_source_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 495;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_os == NULL );
    var_os = tmp_assign_source_2;

    tmp_name_name_3 = const_str_plain_sys;
    tmp_globals_name_3 = (PyObject *)moduledict_pytz;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_93a66a04422dfc334639fbe578bf6962->m_frame.f_lineno = 495;
    tmp_assign_source_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    assert( tmp_assign_source_3 != NULL );
    assert( var_sys == NULL );
    var_sys = tmp_assign_source_3;

    tmp_source_name_2 = var_sys;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 496;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_insert );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 496;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_int_0;
    tmp_source_name_3 = var_os;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 496;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pardir );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 496;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_93a66a04422dfc334639fbe578bf6962->m_frame.f_lineno = 496;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 496;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_name_name_4 = const_str_plain_pytz;
    tmp_globals_name_4 = (PyObject *)moduledict_pytz;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_93a66a04422dfc334639fbe578bf6962->m_frame.f_lineno = 497;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 497;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_pytz == NULL );
    var_pytz = tmp_assign_source_4;

    tmp_source_name_4 = var_doctest;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "doctest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 498;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_testmod );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 498;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_pytz;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pytz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 498;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_93a66a04422dfc334639fbe578bf6962->m_frame.f_lineno = 498;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 498;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93a66a04422dfc334639fbe578bf6962 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_93a66a04422dfc334639fbe578bf6962 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93a66a04422dfc334639fbe578bf6962 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_93a66a04422dfc334639fbe578bf6962, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_93a66a04422dfc334639fbe578bf6962->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_93a66a04422dfc334639fbe578bf6962, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_93a66a04422dfc334639fbe578bf6962,
        type_description_1,
        var_doctest,
        var_os,
        var_sys,
        var_pytz
    );


    // Release cached frame.
    if ( frame_93a66a04422dfc334639fbe578bf6962 == cache_frame_93a66a04422dfc334639fbe578bf6962 )
    {
        Py_DECREF( frame_93a66a04422dfc334639fbe578bf6962 );
    }
    cache_frame_93a66a04422dfc334639fbe578bf6962 = NULL;

    assertFrameObject( frame_93a66a04422dfc334639fbe578bf6962 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_30__test );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_doctest );
    var_doctest = NULL;

    Py_XDECREF( var_os );
    var_os = NULL;

    Py_XDECREF( var_sys );
    var_sys = NULL;

    Py_XDECREF( var_pytz );
    var_pytz = NULL;

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

    Py_XDECREF( var_doctest );
    var_doctest = NULL;

    Py_XDECREF( var_os );
    var_os = NULL;

    Py_XDECREF( var_sys );
    var_sys = NULL;

    Py_XDECREF( var_pytz );
    var_pytz = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_30__test );
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
struct pytz$$$genexpr_1_genexpr_locals {
    PyObject *var_tz
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_next_source_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *pytz$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void pytz$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_tz = NULL;
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_next_source_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_2fb86dec8736b60a32d3213809914b77, module_pytz, sizeof(void *)+sizeof(void *) );
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
            exception_lineno = 1097;
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
        PyObject *old = var_tz;
        var_tz = tmp_assign_source_2;
        Py_INCREF( var_tz );
        Py_XDECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_resource_exists );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resource_exists );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "resource_exists" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1097;
        type_description_1 = "No";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_tz;

    CHECK_OBJECT( tmp_args_element_name_1 );
    generator->m_frame->m_frame.f_lineno = 1097;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1097;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1097;
        type_description_1 = "No";
        goto try_except_handler_2;
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
    tmp_expression_name_1 = var_tz;

    if ( tmp_expression_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1097;
        type_description_1 = "No";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_expression_name_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1097;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1097;
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
            var_tz
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

    Py_XDECREF( var_tz );
    var_tz = NULL;

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

    Py_XDECREF( var_tz );
    var_tz = NULL;


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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct pytz$$$genexpr_2_genexpr_locals {
    PyObject *var_tz
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
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_next_source_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *pytz$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void pytz$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_tz = NULL;
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
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_next_source_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_3e62b3de0a7c2fdda5880bc1d9fa7377, module_pytz, sizeof(void *)+sizeof(void *) );
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
            exception_lineno = 1541;
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
        PyObject *old = var_tz;
        var_tz = tmp_assign_source_2;
        Py_INCREF( var_tz );
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_tz;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_all_timezones );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "all_timezones" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1541;
        type_description_1 = "No";
        goto try_except_handler_2;
    }

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
    tmp_expression_name_1 = var_tz;

    if ( tmp_expression_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1541;
        type_description_1 = "No";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_expression_name_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1541;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1541;
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
            var_tz
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

    Py_XDECREF( var_tz );
    var_tz = NULL;

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

    Py_XDECREF( var_tz );
    var_tz = NULL;


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



static PyObject *MAKE_FUNCTION_pytz$$$function_10_dst(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_10_dst,
        const_str_plain_dst,
#if PYTHON_VERSION >= 330
        const_str_digest_52ef8f9a22d97ac6b8eb9687a0e2f1c3,
#endif
        codeobj_59ce4f007c81110fa85f66fd5b4736a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_11___reduce__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_11___reduce__,
        const_str_plain___reduce__,
#if PYTHON_VERSION >= 330
        const_str_digest_64abce0daf65cf11df497763b2422a8e,
#endif
        codeobj_58849b9e4051e923d871972064cb292c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_12_localize( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_12_localize,
        const_str_plain_localize,
#if PYTHON_VERSION >= 330
        const_str_digest_84cb20f0560c44bf7323c66541aaa539,
#endif
        codeobj_3662bffd319a6a499f886fc53b2fa130,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        const_str_digest_785982eb38344f1637ddf8c4ec0b18f1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_13_normalize( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_13_normalize,
        const_str_plain_normalize,
#if PYTHON_VERSION >= 330
        const_str_digest_c93acf6b434d55ddecef50534819d47b,
#endif
        codeobj_5c782390158713444233c714c8c7ed42,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        const_str_digest_a16445c449d3b93d873704f8853b5f01,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_14___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_14___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        const_str_digest_3fa3ebc1a4c5914c87c94acceb6311f5,
#endif
        codeobj_760e6abd5113e93e6a2e9a973355afdc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_15___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_15___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        const_str_digest_474f3cb26417a0b447aabbea02146a81,
#endif
        codeobj_eadee738e71442ecf5f8b50e9b801c8a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_16__UTC(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_16__UTC,
        const_str_plain__UTC,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7d3cb6e62c315e1d487907dac93dce5b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        const_str_digest_062d6592abaa96cae3da6e635394d6e6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_17__p(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_17__p,
        const_str_plain__p,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8aa1a500ca5d70f03910ce283cdad972,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        const_str_digest_7da72749e596baad4f32ab2c7d5af7cd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_18___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_18___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        const_str_digest_03b55b7fb007d622534dd1e32a9aab46,
#endif
        codeobj_6d6afa008c6a1796bf4cc23158cd3505,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        const_str_digest_e3ca0a2a96ff88561f8696f750ba750f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_19__fill(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_19__fill,
        const_str_plain__fill,
#if PYTHON_VERSION >= 330
        const_str_digest_f99045ecb05074b2b58d62365c36390b,
#endif
        codeobj_3e7272b207568406931821d1e6f6879c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_1_ascii(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_1_ascii,
        const_str_plain_ascii,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e1c02cc1df6639aa4aee25ffccb8c18a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        const_str_digest_40b1ef956ad859b053615f6025f8f897,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_20__fill(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_20__fill,
        const_str_plain__fill,
#if PYTHON_VERSION >= 330
        const_str_digest_2720e4cb749c0c6448b10643c93169ae,
#endif
        codeobj_92f9d5039d8c261edda817b96fba863e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_21___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_21___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_6a5f3c6db876837a53c30c7562c81da7,
#endif
        codeobj_ed6e7f08e784031caca1c295f74d5a4b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_22_utcoffset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_22_utcoffset,
        const_str_plain_utcoffset,
#if PYTHON_VERSION >= 330
        const_str_digest_8b99c616c864c1da0516542db12c66b8,
#endif
        codeobj_7d2a792c8404ec12079075d4c3428ce9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_23___reduce__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_23___reduce__,
        const_str_plain___reduce__,
#if PYTHON_VERSION >= 330
        const_str_digest_3b8615855cee11321175eddec500de7a,
#endif
        codeobj_8dc34895959aa79a221b91aca7db4207,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_24_dst(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_24_dst,
        const_str_plain_dst,
#if PYTHON_VERSION >= 330
        const_str_digest_5a54c8ba187e0241681447f3d9e10a0e,
#endif
        codeobj_c297704597bf1c3ccb8f5973d2d948cb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_25_tzname(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_25_tzname,
        const_str_plain_tzname,
#if PYTHON_VERSION >= 330
        const_str_digest_b245bb5820494867ad638f0cd3dab22b,
#endif
        codeobj_8d5563c2ad334e4e5356abe113fbea2d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_26___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_26___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        const_str_digest_3f309a6fa057172df842d7906d83291f,
#endif
        codeobj_11efce511210f717fdd15bb64377ee06,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_27_localize( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_27_localize,
        const_str_plain_localize,
#if PYTHON_VERSION >= 330
        const_str_digest_36f5c34230ac745520fc175f80e9d8b6,
#endif
        codeobj_18afbe579375b2f097653cd917aec15e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        const_str_digest_785982eb38344f1637ddf8c4ec0b18f1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_28_normalize( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_28_normalize,
        const_str_plain_normalize,
#if PYTHON_VERSION >= 330
        const_str_digest_6c2bdf6908d6e8bceb61fef9c7d5ed7c,
#endif
        codeobj_25cec1c9cb9d01938e477c2282089be3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        const_str_digest_a16445c449d3b93d873704f8853b5f01,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_29_FixedOffset( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_29_FixedOffset,
        const_str_plain_FixedOffset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3d6d0c7ac0dc7358c8d379894690a89a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        const_str_digest_aefecf5ce296f5bb141b49fdd803dd45,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_2_ascii(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_2_ascii,
        const_str_plain_ascii,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4f4f148e3ac63f4f7d2a14df63a2f8e2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        const_str_digest_1e4c2b75c9f1db6a400788e38232d291,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_30__test(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_30__test,
        const_str_plain__test,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_93a66a04422dfc334639fbe578bf6962,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_3_open_resource(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_3_open_resource,
        const_str_plain_open_resource,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6a944847f75d6c8b19799341766dac00,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        const_str_digest_c7b4fb5b2cd86da580837312828ea772,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_4_resource_exists(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_4_resource_exists,
        const_str_plain_resource_exists,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f5638f218c4f7cabc106e77c59780861,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        const_str_digest_cbd04be0bd0fcacf5820968e4828185d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_5_timezone(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_5_timezone,
        const_str_plain_timezone,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0d1ba57d9db40726577b9cbca78e3e03,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        const_str_digest_28f8b1be0eec2c3927237dee79de4e1e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_6__unmunge_zone(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_6__unmunge_zone,
        const_str_plain__unmunge_zone,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_94805af7abe367121b2a025b351aa7a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        const_str_digest_d7cca9e411e72c3aa12aef9e50149884,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_7_fromutc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_7_fromutc,
        const_str_plain_fromutc,
#if PYTHON_VERSION >= 330
        const_str_digest_47ce2e6888a56bafc1f83969795c931a,
#endif
        codeobj_ea466f546215223d2a12db5f6d9cc480,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_8_utcoffset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_8_utcoffset,
        const_str_plain_utcoffset,
#if PYTHON_VERSION >= 330
        const_str_digest_e8e88b2e956a7bdb0e7f5c20e09d37a3,
#endif
        codeobj_e103b51103db53c1555451b8a9ea29a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_9_tzname(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_9_tzname,
        const_str_plain_tzname,
#if PYTHON_VERSION >= 330
        const_str_digest_4f6b8640a25bf7332f7083aadeee7f2a,
#endif
        codeobj_e5bfbe8f41375ff2032102e6b9dab0a5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pytz =
{
    PyModuleDef_HEAD_INIT,
    "pytz",   /* m_name */
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

MOD_INIT_DECL( pytz )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pytz );
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
    puts("pytz: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pytz: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpytz" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pytz = Py_InitModule4(
        "pytz",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pytz = PyModule_Create( &mdef_pytz );
#endif

    moduledict_pytz = MODULE_DICT( module_pytz );

    CHECK_OBJECT( module_pytz );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_pytz, module_pytz );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var_zone = NULL;
    PyObject *outline_0_var__utcoffset = NULL;
    PyObject *outline_0_var__dst = NULL;
    PyObject *outline_0_var__tzname = NULL;
    PyObject *outline_0_var_fromutc = NULL;
    PyObject *outline_0_var_utcoffset = NULL;
    PyObject *outline_0_var_tzname = NULL;
    PyObject *outline_0_var_dst = NULL;
    PyObject *outline_0_var___reduce__ = NULL;
    PyObject *outline_0_var_localize = NULL;
    PyObject *outline_0_var_normalize = NULL;
    PyObject *outline_0_var___repr__ = NULL;
    PyObject *outline_0_var___str__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_1_var___qualname__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var___doc__ = NULL;
    PyObject *outline_1_var___call__ = NULL;
    PyObject *outline_1_var__fill = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_2_var___qualname__ = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var___doc__ = NULL;
    PyObject *outline_2_var__fill = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_3_var___qualname__ = NULL;
    PyObject *outline_3_var___module__ = NULL;
    PyObject *outline_3_var_zone = NULL;
    PyObject *outline_3_var___init__ = NULL;
    PyObject *outline_3_var_utcoffset = NULL;
    PyObject *outline_3_var___reduce__ = NULL;
    PyObject *outline_3_var_dst = NULL;
    PyObject *outline_3_var_tzname = NULL;
    PyObject *outline_3_var___repr__ = NULL;
    PyObject *outline_3_var_localize = NULL;
    PyObject *outline_3_var_normalize = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
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
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
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
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
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
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
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
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_kw_name_9;
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
    PyObject *tmp_list_element_1;
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
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
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
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
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
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3d453df4146e12869f9f0dc30e47572c_2 = NULL;

    struct Nuitka_FrameObject *frame_3d453df4146e12869f9f0dc30e47572c_2;

    struct Nuitka_FrameObject *frame_65d1665d06f14b38f67fd1302ccacc2d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_2 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_3 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_4 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = const_str_digest_fc1c4881636a98bdccfe1a5abb52784f;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_65d1665d06f14b38f67fd1302ccacc2d = MAKE_MODULE_FRAME( codeobj_65d1665d06f14b38f67fd1302ccacc2d, module_pytz );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_65d1665d06f14b38f67fd1302ccacc2d );
    assert( Py_REFCNT( frame_65d1665d06f14b38f67fd1302ccacc2d ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 2 );
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_source_name_1 = PyObject_GetAttr( module, const_str_plain_path );
        }
        else
        {
            tmp_source_name_1 = NULL;
        }
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dirname );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = module_filename_obj;
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_called_instance_1 = PyObject_GetAttr( module, const_str_plain_environ );
        }
        else
        {
            tmp_called_instance_1 = NULL;
        }
    }

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_4b124e02e19baae2eb5b80093a978540_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("importlib._bootstrap");
        if (likely( module != NULL ))
        {
            tmp_called_name_2 = PyObject_GetAttr( module, const_str_plain_ModuleSpec );
        }
        else
        {
            tmp_called_name_2 = NULL;
        }
    }

    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_str_plain_pytz;
    tmp_args_element_name_3 = metapath_based_loader;
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_plain_pytz;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_plain_2017c;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_OLSON_VERSION, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_531956cdcb366feb85be920d7cf253bf;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_VERSION, tmp_assign_source_9 );
    tmp_assign_source_10 = const_str_digest_531956cdcb366feb85be920d7cf253bf;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_10 );
    tmp_assign_source_11 = const_str_plain_2017c;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_OLSEN_VERSION, tmp_assign_source_11 );
    tmp_assign_source_12 = LIST_COPY( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_pytz;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 26;
    tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( tmp_assign_source_13 != NULL );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_13 );
    tmp_name_name_2 = const_str_plain_datetime;
    tmp_globals_name_2 = (PyObject *)moduledict_pytz;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 26;
    tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_14 );
    tmp_name_name_3 = const_str_digest_e399ba4554180f37de594a6743234f17;
    tmp_globals_name_3 = (PyObject *)moduledict_pytz;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 26;
    tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_15 );
    tmp_name_name_4 = const_str_plain_gettext;
    tmp_globals_name_4 = (PyObject *)moduledict_pytz;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 26;
    tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_gettext, tmp_assign_source_16 );
    tmp_name_name_5 = const_str_digest_c3c7bf3c5a4a733fe62b7f4b6ed9a9ea;
    tmp_globals_name_5 = (PyObject *)moduledict_pytz;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_AmbiguousTimeError_tuple;
    tmp_level_name_5 = const_int_0;
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 28;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_AmbiguousTimeError );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_AmbiguousTimeError, tmp_assign_source_17 );
    tmp_name_name_6 = const_str_digest_c3c7bf3c5a4a733fe62b7f4b6ed9a9ea;
    tmp_globals_name_6 = (PyObject *)moduledict_pytz;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_InvalidTimeError_tuple;
    tmp_level_name_6 = const_int_0;
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 29;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_InvalidTimeError );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_InvalidTimeError, tmp_assign_source_18 );
    tmp_name_name_7 = const_str_digest_c3c7bf3c5a4a733fe62b7f4b6ed9a9ea;
    tmp_globals_name_7 = (PyObject *)moduledict_pytz;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_NonExistentTimeError_tuple;
    tmp_level_name_7 = const_int_0;
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 30;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_NonExistentTimeError );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_NonExistentTimeError, tmp_assign_source_19 );
    tmp_name_name_8 = const_str_digest_c3c7bf3c5a4a733fe62b7f4b6ed9a9ea;
    tmp_globals_name_8 = (PyObject *)moduledict_pytz;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_UnknownTimeZoneError_tuple;
    tmp_level_name_8 = const_int_0;
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 31;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_UnknownTimeZoneError );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_UnknownTimeZoneError, tmp_assign_source_20 );
    tmp_name_name_9 = const_str_digest_6f6ed120385c30c5ae275bbd94d26244;
    tmp_globals_name_9 = (PyObject *)moduledict_pytz;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_LazyDict_str_plain_LazyList_str_plain_LazySet_tuple;
    tmp_level_name_9 = const_int_0;
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 32;
    tmp_assign_source_21 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_21;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_LazyDict );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazyDict, tmp_assign_source_22 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_LazyList );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazyList, tmp_assign_source_23 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_LazySet );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazySet, tmp_assign_source_24 );
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

    tmp_name_name_10 = const_str_digest_5f18f2c6586a4ad10d7b44ad223b9240;
    tmp_globals_name_10 = (PyObject *)moduledict_pytz;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_unpickler_tuple;
    tmp_level_name_10 = const_int_0;
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 33;
    tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_unpickler );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_unpickler, tmp_assign_source_25 );
    tmp_name_name_11 = const_str_digest_8fba0ec9be0c4ed486d17847c03a428a;
    tmp_globals_name_11 = (PyObject *)moduledict_pytz;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_build_tzinfo_str_plain__byte_string_tuple;
    tmp_level_name_11 = const_int_0;
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 34;
    tmp_assign_source_26 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_26;

    // Tried code:
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_build_tzinfo );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_build_tzinfo, tmp_assign_source_27 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain__byte_string );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__byte_string, tmp_assign_source_28 );
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

    tmp_assign_source_29 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_29 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_29;

    // Tried code:
    // Tried code:
    tmp_unused = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_unused == NULL ))
    {
        tmp_unused = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_unused == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;

        goto try_except_handler_4;
    }

    goto try_end_3;
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

    tmp_assign_source_30 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_30;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_65d1665d06f14b38f67fd1302ccacc2d, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_65d1665d06f14b38f67fd1302ccacc2d, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_NameError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_5;
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
    tmp_assign_source_31 = (PyObject *)&PyUnicode_Type;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_unicode, tmp_assign_source_31 );
    tmp_assign_source_32 = MAKE_FUNCTION_pytz$$$function_1_ascii(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ascii, tmp_assign_source_32 );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 37;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame) frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_5;
    branch_end_1:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_3:;
    goto try_end_5;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    tmp_compare_left_2 = tmp_try_except_1__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_33 = MAKE_FUNCTION_pytz$$$function_2_ascii(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ascii, tmp_assign_source_33 );
    branch_no_2:;
    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    tmp_assign_source_34 = MAKE_FUNCTION_pytz$$$function_3_open_resource(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_open_resource, tmp_assign_source_34 );
    tmp_assign_source_35 = MAKE_FUNCTION_pytz$$$function_4_resource_exists(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_resource_exists, tmp_assign_source_35 );
    tmp_assign_source_36 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__tzinfo_cache, tmp_assign_source_36 );
    tmp_assign_source_37 = MAKE_FUNCTION_pytz$$$function_5_timezone(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_timezone, tmp_assign_source_37 );
    tmp_assign_source_38 = MAKE_FUNCTION_pytz$$$function_6__unmunge_zone(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__unmunge_zone, tmp_assign_source_38 );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_datetime );

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

        exception_lineno = 201;

        goto frame_exception_exit_1;
    }

    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 201;
    tmp_assign_source_39 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_timedelta, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ZERO, tmp_assign_source_39 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;

        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_timedelta );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;

        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_e2952c9492316513fb6e1b78814fb058 );
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 202;
    tmp_assign_source_40 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_HOUR, tmp_assign_source_40 );
    // Tried code:
    tmp_assign_source_41 = PyTuple_New( 1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_41 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;

        goto try_except_handler_6;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_tzinfo );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_41 );

        exception_lineno = 205;

        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_assign_source_41, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_41;

    tmp_assign_source_42 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_42;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
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


        exception_lineno = 205;

        goto try_except_handler_6;
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


        exception_lineno = 205;

        goto try_except_handler_6;
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


        exception_lineno = 205;

        goto try_except_handler_6;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;

        goto try_except_handler_6;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_43 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 205;

        goto try_except_handler_6;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_43;

    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
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
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;

        goto try_except_handler_6;
    }
    branch_no_3:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;

        goto try_except_handler_6;
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
    tmp_source_name_4 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;

        goto try_except_handler_6;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_UTC;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 205;
    tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;

        goto try_except_handler_6;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_44 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_44;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_46 = const_str_plain_pytz;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_46 );
    outline_0_var___module__ = tmp_assign_source_46;

    tmp_assign_source_47 = const_str_digest_d9377d9886e98c27cec2d5edcf37c120;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_47 );
    outline_0_var___doc__ = tmp_assign_source_47;

    tmp_assign_source_48 = const_str_plain_UTC;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_48 );
    outline_0_var___qualname__ = tmp_assign_source_48;

    tmp_assign_source_49 = const_str_plain_UTC;
    assert( outline_0_var_zone == NULL );
    Py_INCREF( tmp_assign_source_49 );
    outline_0_var_zone = tmp_assign_source_49;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3d453df4146e12869f9f0dc30e47572c_2, codeobj_3d453df4146e12869f9f0dc30e47572c, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3d453df4146e12869f9f0dc30e47572c_2 = cache_frame_3d453df4146e12869f9f0dc30e47572c_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3d453df4146e12869f9f0dc30e47572c_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3d453df4146e12869f9f0dc30e47572c_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_50 = PyDict_GetItem( locals_dict_1, const_str_plain_ZERO );

    if ( tmp_assign_source_50 == NULL )
    {
        tmp_assign_source_50 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ZERO );

        if (unlikely( tmp_assign_source_50 == NULL ))
        {
            tmp_assign_source_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ZERO );
        }

        if ( tmp_assign_source_50 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ZERO" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 213;
            type_description_2 = "NooooNNNNNNNNNNNN";
            goto frame_exception_exit_2;
        }

    }

    assert( outline_0_var__utcoffset == NULL );
    Py_INCREF( tmp_assign_source_50 );
    outline_0_var__utcoffset = tmp_assign_source_50;

    tmp_assign_source_51 = PyDict_GetItem( locals_dict_1, const_str_plain_ZERO );

    if ( tmp_assign_source_51 == NULL )
    {
        tmp_assign_source_51 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ZERO );

        if (unlikely( tmp_assign_source_51 == NULL ))
        {
            tmp_assign_source_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ZERO );
        }

        if ( tmp_assign_source_51 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ZERO" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 214;
            type_description_2 = "NoooooNNNNNNNNNNN";
            goto frame_exception_exit_2;
        }

    }

    assert( outline_0_var__dst == NULL );
    Py_INCREF( tmp_assign_source_51 );
    outline_0_var__dst = tmp_assign_source_51;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d453df4146e12869f9f0dc30e47572c_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d453df4146e12869f9f0dc30e47572c_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3d453df4146e12869f9f0dc30e47572c_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3d453df4146e12869f9f0dc30e47572c_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3d453df4146e12869f9f0dc30e47572c_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3d453df4146e12869f9f0dc30e47572c_2,
        type_description_2,
        NULL,
        outline_0_var___qualname__,
        outline_0_var___module__,
        outline_0_var___doc__,
        outline_0_var_zone,
        outline_0_var__utcoffset,
        outline_0_var__dst,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    );


    // Release cached frame.
    if ( frame_3d453df4146e12869f9f0dc30e47572c_2 == cache_frame_3d453df4146e12869f9f0dc30e47572c_2 )
    {
        Py_DECREF( frame_3d453df4146e12869f9f0dc30e47572c_2 );
    }
    cache_frame_3d453df4146e12869f9f0dc30e47572c_2 = NULL;

    assertFrameObject( frame_3d453df4146e12869f9f0dc30e47572c_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_7;
    skip_nested_handling_1:;
    tmp_assign_source_52 = outline_0_var_zone;

    CHECK_OBJECT( tmp_assign_source_52 );
    assert( outline_0_var__tzname == NULL );
    Py_INCREF( tmp_assign_source_52 );
    outline_0_var__tzname = tmp_assign_source_52;

    tmp_assign_source_53 = MAKE_FUNCTION_pytz$$$function_7_fromutc(  );
    assert( outline_0_var_fromutc == NULL );
    outline_0_var_fromutc = tmp_assign_source_53;

    tmp_assign_source_54 = MAKE_FUNCTION_pytz$$$function_8_utcoffset(  );
    assert( outline_0_var_utcoffset == NULL );
    outline_0_var_utcoffset = tmp_assign_source_54;

    tmp_assign_source_55 = MAKE_FUNCTION_pytz$$$function_9_tzname(  );
    assert( outline_0_var_tzname == NULL );
    outline_0_var_tzname = tmp_assign_source_55;

    tmp_assign_source_56 = MAKE_FUNCTION_pytz$$$function_10_dst(  );
    assert( outline_0_var_dst == NULL );
    outline_0_var_dst = tmp_assign_source_56;

    tmp_assign_source_57 = MAKE_FUNCTION_pytz$$$function_11___reduce__(  );
    assert( outline_0_var___reduce__ == NULL );
    outline_0_var___reduce__ = tmp_assign_source_57;

    tmp_defaults_1 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_58 = MAKE_FUNCTION_pytz$$$function_12_localize( tmp_defaults_1 );
    assert( outline_0_var_localize == NULL );
    outline_0_var_localize = tmp_assign_source_58;

    tmp_defaults_2 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_59 = MAKE_FUNCTION_pytz$$$function_13_normalize( tmp_defaults_2 );
    assert( outline_0_var_normalize == NULL );
    outline_0_var_normalize = tmp_assign_source_59;

    tmp_assign_source_60 = MAKE_FUNCTION_pytz$$$function_14___repr__(  );
    assert( outline_0_var___repr__ == NULL );
    outline_0_var___repr__ = tmp_assign_source_60;

    tmp_assign_source_61 = MAKE_FUNCTION_pytz$$$function_15___str__(  );
    assert( outline_0_var___str__ == NULL );
    outline_0_var___str__ = tmp_assign_source_61;

    tmp_called_name_5 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_3 = const_str_plain_UTC;
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

        exception_lineno = 205;

        goto try_except_handler_7;
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

        exception_lineno = 205;

        goto try_except_handler_7;
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

        exception_lineno = 205;

        goto try_except_handler_7;
    }
    if ( outline_0_var_zone != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_zone,
            outline_0_var_zone
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_zone
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_zone
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

        exception_lineno = 205;

        goto try_except_handler_7;
    }
    if ( outline_0_var__utcoffset != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain__utcoffset,
            outline_0_var__utcoffset
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain__utcoffset
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain__utcoffset
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

        exception_lineno = 205;

        goto try_except_handler_7;
    }
    if ( outline_0_var__dst != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain__dst,
            outline_0_var__dst
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain__dst
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain__dst
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

        exception_lineno = 205;

        goto try_except_handler_7;
    }
    if ( outline_0_var__tzname != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain__tzname,
            outline_0_var__tzname
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain__tzname
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain__tzname
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

        exception_lineno = 205;

        goto try_except_handler_7;
    }
    if ( outline_0_var_fromutc != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_fromutc,
            outline_0_var_fromutc
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_fromutc
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_fromutc
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

        exception_lineno = 205;

        goto try_except_handler_7;
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

        exception_lineno = 205;

        goto try_except_handler_7;
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

        exception_lineno = 205;

        goto try_except_handler_7;
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

        exception_lineno = 205;

        goto try_except_handler_7;
    }
    if ( outline_0_var___reduce__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___reduce__,
            outline_0_var___reduce__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___reduce__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain___reduce__
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

        exception_lineno = 205;

        goto try_except_handler_7;
    }
    if ( outline_0_var_localize != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_localize,
            outline_0_var_localize
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_localize
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_localize
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

        exception_lineno = 205;

        goto try_except_handler_7;
    }
    if ( outline_0_var_normalize != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_normalize,
            outline_0_var_normalize
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_normalize
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_normalize
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

        exception_lineno = 205;

        goto try_except_handler_7;
    }
    if ( outline_0_var___repr__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___repr__,
            outline_0_var___repr__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___repr__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain___repr__
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

        exception_lineno = 205;

        goto try_except_handler_7;
    }
    if ( outline_0_var___str__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___str__,
            outline_0_var___str__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___str__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain___str__
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

        exception_lineno = 205;

        goto try_except_handler_7;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 205;
    tmp_assign_source_62 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;

        goto try_except_handler_7;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_62;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var_zone );
    outline_0_var_zone = NULL;

    Py_XDECREF( outline_0_var__utcoffset );
    outline_0_var__utcoffset = NULL;

    Py_XDECREF( outline_0_var__dst );
    outline_0_var__dst = NULL;

    Py_XDECREF( outline_0_var__tzname );
    outline_0_var__tzname = NULL;

    Py_XDECREF( outline_0_var_fromutc );
    outline_0_var_fromutc = NULL;

    Py_XDECREF( outline_0_var_utcoffset );
    outline_0_var_utcoffset = NULL;

    Py_XDECREF( outline_0_var_tzname );
    outline_0_var_tzname = NULL;

    Py_XDECREF( outline_0_var_dst );
    outline_0_var_dst = NULL;

    Py_XDECREF( outline_0_var___reduce__ );
    outline_0_var___reduce__ = NULL;

    Py_XDECREF( outline_0_var_localize );
    outline_0_var_localize = NULL;

    Py_XDECREF( outline_0_var_normalize );
    outline_0_var_normalize = NULL;

    Py_XDECREF( outline_0_var___repr__ );
    outline_0_var___repr__ = NULL;

    Py_XDECREF( outline_0_var___str__ );
    outline_0_var___str__ = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var_zone );
    outline_0_var_zone = NULL;

    Py_XDECREF( outline_0_var__utcoffset );
    outline_0_var__utcoffset = NULL;

    Py_XDECREF( outline_0_var__dst );
    outline_0_var__dst = NULL;

    Py_XDECREF( outline_0_var__tzname );
    outline_0_var__tzname = NULL;

    Py_XDECREF( outline_0_var_fromutc );
    outline_0_var_fromutc = NULL;

    Py_XDECREF( outline_0_var_utcoffset );
    outline_0_var_utcoffset = NULL;

    Py_XDECREF( outline_0_var_tzname );
    outline_0_var_tzname = NULL;

    Py_XDECREF( outline_0_var_dst );
    outline_0_var_dst = NULL;

    Py_XDECREF( outline_0_var___reduce__ );
    outline_0_var___reduce__ = NULL;

    Py_XDECREF( outline_0_var_localize );
    outline_0_var_localize = NULL;

    Py_XDECREF( outline_0_var_normalize );
    outline_0_var_normalize = NULL;

    Py_XDECREF( outline_0_var___repr__ );
    outline_0_var___repr__ = NULL;

    Py_XDECREF( outline_0_var___str__ );
    outline_0_var___str__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 205;
    goto try_except_handler_6;
    outline_result_1:;
    tmp_assign_source_45 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_UTC, tmp_assign_source_45 );
    goto try_end_6;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Tried code:
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_UTC );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UTC );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UTC" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 255;

        goto try_except_handler_8;
    }

    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 255;
    tmp_assign_source_63 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;

        goto try_except_handler_8;
    }
    assert( tmp_assign_unpack_1__assign_source == NULL );
    tmp_assign_unpack_1__assign_source = tmp_assign_source_63;

    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    tmp_assign_source_64 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_64 );
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_UTC, tmp_assign_source_64 );
    tmp_assign_source_65 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_65 );
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_utc, tmp_assign_source_65 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    tmp_assign_source_66 = MAKE_FUNCTION_pytz$$$function_16__UTC(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__UTC, tmp_assign_source_66 );
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__UTC );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UTC );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_UTC" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 288;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___safe_for_unpickling__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_67 = MAKE_FUNCTION_pytz$$$function_17__p(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__p, tmp_assign_source_67 );
    tmp_assattr_name_2 = Py_True;
    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__p );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__p );
    }

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 298;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain___safe_for_unpickling__, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;

        goto frame_exception_exit_1;
    }
    // Tried code:
    tmp_assign_source_68 = PyTuple_New( 1 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazyDict );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LazyDict );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_68 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LazyDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 302;

        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_68, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_68;

    tmp_assign_source_69 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_69;

    tmp_compare_left_5 = const_str_plain_metaclass;
    tmp_compare_right_5 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
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


        exception_lineno = 302;

        goto try_except_handler_9;
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


        exception_lineno = 302;

        goto try_except_handler_9;
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


        exception_lineno = 302;

        goto try_except_handler_9;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_9;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_70 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 302;

        goto try_except_handler_9;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_70;

    tmp_compare_left_6 = const_str_plain_metaclass;
    tmp_compare_right_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_9;
    }
    branch_no_4:;
    tmp_hasattr_source_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_2 );
    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_9;
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
    tmp_source_name_5 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_9;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_5 = const_str_plain__CountryTimezoneDict;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 302;
    tmp_assign_source_71 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_9;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_71 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_71;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_2);
    locals_dict_2 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_73 = const_str_plain_pytz;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_73 );
    outline_1_var___module__ = tmp_assign_source_73;

    tmp_assign_source_74 = const_str_digest_b14139c8eeddedc0051aa77095084277;
    assert( outline_1_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_74 );
    outline_1_var___doc__ = tmp_assign_source_74;

    tmp_assign_source_75 = const_str_plain__CountryTimezoneDict;
    assert( outline_1_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_75 );
    outline_1_var___qualname__ = tmp_assign_source_75;

    tmp_assign_source_76 = MAKE_FUNCTION_pytz$$$function_18___call__(  );
    assert( outline_1_var___call__ == NULL );
    outline_1_var___call__ = tmp_assign_source_76;

    tmp_assign_source_77 = MAKE_FUNCTION_pytz$$$function_19__fill(  );
    assert( outline_1_var__fill == NULL );
    outline_1_var__fill = tmp_assign_source_77;

    // Tried code:
    tmp_called_name_8 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_args_name_4 = PyTuple_New( 3 );
    tmp_tuple_element_6 = const_str_plain__CountryTimezoneDict;
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

        exception_lineno = 302;

        goto try_except_handler_10;
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

        exception_lineno = 302;

        goto try_except_handler_10;
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

        exception_lineno = 302;

        goto try_except_handler_10;
    }
    if ( outline_1_var___call__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain___call__,
            outline_1_var___call__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain___call__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
                const_str_plain___call__
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

        exception_lineno = 302;

        goto try_except_handler_10;
    }
    if ( outline_1_var__fill != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain__fill,
            outline_1_var__fill
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain__fill
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
                const_str_plain__fill
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

        exception_lineno = 302;

        goto try_except_handler_10;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
    tmp_kw_name_5 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 302;
    tmp_assign_source_78 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_5 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_10;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_78;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    Py_XDECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    Py_XDECREF( outline_1_var___call__ );
    outline_1_var___call__ = NULL;

    Py_XDECREF( outline_1_var__fill );
    outline_1_var__fill = NULL;

    goto outline_result_2;
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

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    Py_XDECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    Py_XDECREF( outline_1_var___call__ );
    outline_1_var___call__ = NULL;

    Py_XDECREF( outline_1_var__fill );
    outline_1_var__fill = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 302;
    goto try_except_handler_9;
    outline_result_2:;
    tmp_assign_source_72 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__CountryTimezoneDict, tmp_assign_source_72 );
    goto try_end_8;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__CountryTimezoneDict );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__CountryTimezoneDict );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_CountryTimezoneDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;

        goto frame_exception_exit_1;
    }

    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 357;
    tmp_assign_source_79 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_country_timezones, tmp_assign_source_79 );
    // Tried code:
    tmp_assign_source_80 = PyTuple_New( 1 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazyDict );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LazyDict );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_80 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LazyDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 360;

        goto try_except_handler_11;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_80, 0, tmp_tuple_element_7 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_80;

    tmp_assign_source_81 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_81;

    tmp_compare_left_7 = const_str_plain_metaclass;
    tmp_compare_right_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_7 );
    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
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


        exception_lineno = 360;

        goto try_except_handler_11;
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


        exception_lineno = 360;

        goto try_except_handler_11;
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


        exception_lineno = 360;

        goto try_except_handler_11;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;

        goto try_except_handler_11;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_82 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_3 );

        exception_lineno = 360;

        goto try_except_handler_11;
    }
    Py_DECREF( tmp_metaclass_name_3 );
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_82;

    tmp_compare_left_8 = const_str_plain_metaclass;
    tmp_compare_right_8 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_8 );
    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;

        goto try_except_handler_11;
    }
    branch_no_5:;
    tmp_hasattr_source_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_3 );
    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;

        goto try_except_handler_11;
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
    tmp_source_name_6 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;

        goto try_except_handler_11;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_8 = const_str_plain__CountryNameDict;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_8 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_8 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 360;
    tmp_assign_source_83 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_5, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;

        goto try_except_handler_11;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_83 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_83;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_3);
    locals_dict_3 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_85 = const_str_plain_pytz;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_85 );
    outline_2_var___module__ = tmp_assign_source_85;

    tmp_assign_source_86 = const_str_digest_bb3f1eb0ff65804a6d288f0fbc2640e3;
    assert( outline_2_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_86 );
    outline_2_var___doc__ = tmp_assign_source_86;

    tmp_assign_source_87 = const_str_plain__CountryNameDict;
    assert( outline_2_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_87 );
    outline_2_var___qualname__ = tmp_assign_source_87;

    tmp_assign_source_88 = MAKE_FUNCTION_pytz$$$function_20__fill(  );
    assert( outline_2_var__fill == NULL );
    outline_2_var__fill = tmp_assign_source_88;

    // Tried code:
    tmp_called_name_11 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_11 );
    tmp_args_name_6 = PyTuple_New( 3 );
    tmp_tuple_element_9 = const_str_plain__CountryNameDict;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_9 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_9 );
    tmp_tuple_element_9 = locals_dict_3;
    Py_INCREF( tmp_tuple_element_9 );
    if ( outline_2_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_9,
            const_str_plain___qualname__,
            outline_2_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_9,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_9,
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
        Py_DECREF( tmp_tuple_element_9 );

        exception_lineno = 360;

        goto try_except_handler_12;
    }
    if ( outline_2_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_9,
            const_str_plain___module__,
            outline_2_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_9,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_9,
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
        Py_DECREF( tmp_tuple_element_9 );

        exception_lineno = 360;

        goto try_except_handler_12;
    }
    if ( outline_2_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_9,
            const_str_plain___doc__,
            outline_2_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_9,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_9,
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
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_9 );

        exception_lineno = 360;

        goto try_except_handler_12;
    }
    if ( outline_2_var__fill != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_9,
            const_str_plain__fill,
            outline_2_var__fill
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_9,
            const_str_plain__fill
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_9,
                const_str_plain__fill
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
        Py_DECREF( tmp_tuple_element_9 );

        exception_lineno = 360;

        goto try_except_handler_12;
    }
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_9 );
    tmp_kw_name_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 360;
    tmp_assign_source_89 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_6, tmp_kw_name_7 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;

        goto try_except_handler_12;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_89;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    Py_XDECREF( outline_2_var___qualname__ );
    outline_2_var___qualname__ = NULL;

    Py_XDECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    Py_XDECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    Py_XDECREF( outline_2_var__fill );
    outline_2_var__fill = NULL;

    goto outline_result_3;
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

    Py_XDECREF( outline_2_var___qualname__ );
    outline_2_var___qualname__ = NULL;

    Py_XDECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    Py_XDECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    Py_XDECREF( outline_2_var__fill );
    outline_2_var__fill = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 360;
    goto try_except_handler_11;
    outline_result_3:;
    tmp_assign_source_84 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__CountryNameDict, tmp_assign_source_84 );
    goto try_end_9;
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

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__CountryNameDict );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__CountryNameDict );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_CountryNameDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;

        goto frame_exception_exit_1;
    }

    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 380;
    tmp_assign_source_90 = CALL_FUNCTION_NO_ARGS( tmp_called_name_12 );
    if ( tmp_assign_source_90 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_country_names, tmp_assign_source_90 );
    // Tried code:
    tmp_assign_source_91 = PyTuple_New( 1 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_91 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;

        goto try_except_handler_13;
    }

    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_tzinfo );
    if ( tmp_tuple_element_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_91 );

        exception_lineno = 385;

        goto try_except_handler_13;
    }
    PyTuple_SET_ITEM( tmp_assign_source_91, 0, tmp_tuple_element_10 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_91;

    tmp_assign_source_92 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_92;

    tmp_compare_left_9 = const_str_plain_metaclass;
    tmp_compare_right_9 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_9 );
    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
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


        exception_lineno = 385;

        goto try_except_handler_13;
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


        exception_lineno = 385;

        goto try_except_handler_13;
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


        exception_lineno = 385;

        goto try_except_handler_13;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;

        goto try_except_handler_13;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_bases_name_4 );
    tmp_assign_source_93 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_4 );

        exception_lineno = 385;

        goto try_except_handler_13;
    }
    Py_DECREF( tmp_metaclass_name_4 );
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_93;

    tmp_compare_left_10 = const_str_plain_metaclass;
    tmp_compare_right_10 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_10 );
    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_8 == -1) );
    if ( tmp_cmp_In_8 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;

        goto try_except_handler_13;
    }
    branch_no_6:;
    tmp_hasattr_source_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_4 );
    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;

        goto try_except_handler_13;
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
    tmp_source_name_8 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;

        goto try_except_handler_13;
    }
    tmp_args_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_11 = const_str_plain__FixedOffset;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_11 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_11 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 385;
    tmp_assign_source_94 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_7, tmp_kw_name_8 );
    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_94 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;

        goto try_except_handler_13;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_94 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_94;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_4);
    locals_dict_4 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_96 = const_str_plain_pytz;
    assert( outline_3_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_96 );
    outline_3_var___module__ = tmp_assign_source_96;

    tmp_assign_source_97 = const_str_plain__FixedOffset;
    assert( outline_3_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_97 );
    outline_3_var___qualname__ = tmp_assign_source_97;

    tmp_assign_source_98 = Py_None;
    assert( outline_3_var_zone == NULL );
    Py_INCREF( tmp_assign_source_98 );
    outline_3_var_zone = tmp_assign_source_98;

    tmp_assign_source_99 = MAKE_FUNCTION_pytz$$$function_21___init__(  );
    assert( outline_3_var___init__ == NULL );
    outline_3_var___init__ = tmp_assign_source_99;

    tmp_assign_source_100 = MAKE_FUNCTION_pytz$$$function_22_utcoffset(  );
    assert( outline_3_var_utcoffset == NULL );
    outline_3_var_utcoffset = tmp_assign_source_100;

    tmp_assign_source_101 = MAKE_FUNCTION_pytz$$$function_23___reduce__(  );
    assert( outline_3_var___reduce__ == NULL );
    outline_3_var___reduce__ = tmp_assign_source_101;

    tmp_assign_source_102 = MAKE_FUNCTION_pytz$$$function_24_dst(  );
    assert( outline_3_var_dst == NULL );
    outline_3_var_dst = tmp_assign_source_102;

    tmp_assign_source_103 = MAKE_FUNCTION_pytz$$$function_25_tzname(  );
    assert( outline_3_var_tzname == NULL );
    outline_3_var_tzname = tmp_assign_source_103;

    tmp_assign_source_104 = MAKE_FUNCTION_pytz$$$function_26___repr__(  );
    assert( outline_3_var___repr__ == NULL );
    outline_3_var___repr__ = tmp_assign_source_104;

    tmp_defaults_3 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_105 = MAKE_FUNCTION_pytz$$$function_27_localize( tmp_defaults_3 );
    assert( outline_3_var_localize == NULL );
    outline_3_var_localize = tmp_assign_source_105;

    tmp_defaults_4 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_106 = MAKE_FUNCTION_pytz$$$function_28_normalize( tmp_defaults_4 );
    assert( outline_3_var_normalize == NULL );
    outline_3_var_normalize = tmp_assign_source_106;

    // Tried code:
    tmp_called_name_14 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_14 );
    tmp_args_name_8 = PyTuple_New( 3 );
    tmp_tuple_element_12 = const_str_plain__FixedOffset;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_12 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_12 );
    tmp_tuple_element_12 = locals_dict_4;
    Py_INCREF( tmp_tuple_element_12 );
    if ( outline_3_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_12,
            const_str_plain___qualname__,
            outline_3_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_12,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_12,
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
        Py_DECREF( tmp_tuple_element_12 );

        exception_lineno = 385;

        goto try_except_handler_14;
    }
    if ( outline_3_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_12,
            const_str_plain___module__,
            outline_3_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_12,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_12,
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
        Py_DECREF( tmp_tuple_element_12 );

        exception_lineno = 385;

        goto try_except_handler_14;
    }
    if ( outline_3_var_zone != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_12,
            const_str_plain_zone,
            outline_3_var_zone
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_12,
            const_str_plain_zone
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_12,
                const_str_plain_zone
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
        Py_DECREF( tmp_tuple_element_12 );

        exception_lineno = 385;

        goto try_except_handler_14;
    }
    if ( outline_3_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_12,
            const_str_plain___init__,
            outline_3_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_12,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_12,
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
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_tuple_element_12 );

        exception_lineno = 385;

        goto try_except_handler_14;
    }
    if ( outline_3_var_utcoffset != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_12,
            const_str_plain_utcoffset,
            outline_3_var_utcoffset
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_12,
            const_str_plain_utcoffset
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_12,
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
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_tuple_element_12 );

        exception_lineno = 385;

        goto try_except_handler_14;
    }
    if ( outline_3_var___reduce__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_12,
            const_str_plain___reduce__,
            outline_3_var___reduce__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_12,
            const_str_plain___reduce__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_12,
                const_str_plain___reduce__
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
        Py_DECREF( tmp_tuple_element_12 );

        exception_lineno = 385;

        goto try_except_handler_14;
    }
    if ( outline_3_var_dst != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_12,
            const_str_plain_dst,
            outline_3_var_dst
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_12,
            const_str_plain_dst
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_12,
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
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_tuple_element_12 );

        exception_lineno = 385;

        goto try_except_handler_14;
    }
    if ( outline_3_var_tzname != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_12,
            const_str_plain_tzname,
            outline_3_var_tzname
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_12,
            const_str_plain_tzname
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_12,
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
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_tuple_element_12 );

        exception_lineno = 385;

        goto try_except_handler_14;
    }
    if ( outline_3_var___repr__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_12,
            const_str_plain___repr__,
            outline_3_var___repr__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_12,
            const_str_plain___repr__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_12,
                const_str_plain___repr__
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
        Py_DECREF( tmp_tuple_element_12 );

        exception_lineno = 385;

        goto try_except_handler_14;
    }
    if ( outline_3_var_localize != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_12,
            const_str_plain_localize,
            outline_3_var_localize
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_12,
            const_str_plain_localize
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_12,
                const_str_plain_localize
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
        Py_DECREF( tmp_tuple_element_12 );

        exception_lineno = 385;

        goto try_except_handler_14;
    }
    if ( outline_3_var_normalize != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_12,
            const_str_plain_normalize,
            outline_3_var_normalize
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_12,
            const_str_plain_normalize
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_12,
                const_str_plain_normalize
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
        Py_DECREF( tmp_tuple_element_12 );

        exception_lineno = 385;

        goto try_except_handler_14;
    }
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_12 );
    tmp_kw_name_9 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 385;
    tmp_assign_source_107 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_8, tmp_kw_name_9 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_107 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;

        goto try_except_handler_14;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_107;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    Py_XDECREF( outline_3_var___qualname__ );
    outline_3_var___qualname__ = NULL;

    Py_XDECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    Py_XDECREF( outline_3_var_zone );
    outline_3_var_zone = NULL;

    Py_XDECREF( outline_3_var___init__ );
    outline_3_var___init__ = NULL;

    Py_XDECREF( outline_3_var_utcoffset );
    outline_3_var_utcoffset = NULL;

    Py_XDECREF( outline_3_var___reduce__ );
    outline_3_var___reduce__ = NULL;

    Py_XDECREF( outline_3_var_dst );
    outline_3_var_dst = NULL;

    Py_XDECREF( outline_3_var_tzname );
    outline_3_var_tzname = NULL;

    Py_XDECREF( outline_3_var___repr__ );
    outline_3_var___repr__ = NULL;

    Py_XDECREF( outline_3_var_localize );
    outline_3_var_localize = NULL;

    Py_XDECREF( outline_3_var_normalize );
    outline_3_var_normalize = NULL;

    goto outline_result_4;
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

    Py_XDECREF( outline_3_var___qualname__ );
    outline_3_var___qualname__ = NULL;

    Py_XDECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    Py_XDECREF( outline_3_var_zone );
    outline_3_var_zone = NULL;

    Py_XDECREF( outline_3_var___init__ );
    outline_3_var___init__ = NULL;

    Py_XDECREF( outline_3_var_utcoffset );
    outline_3_var_utcoffset = NULL;

    Py_XDECREF( outline_3_var___reduce__ );
    outline_3_var___reduce__ = NULL;

    Py_XDECREF( outline_3_var_dst );
    outline_3_var_dst = NULL;

    Py_XDECREF( outline_3_var_tzname );
    outline_3_var_tzname = NULL;

    Py_XDECREF( outline_3_var___repr__ );
    outline_3_var___repr__ = NULL;

    Py_XDECREF( outline_3_var_localize );
    outline_3_var_localize = NULL;

    Py_XDECREF( outline_3_var_normalize );
    outline_3_var_normalize = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 385;
    goto try_except_handler_13;
    outline_result_4:;
    tmp_assign_source_95 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__FixedOffset, tmp_assign_source_95 );
    goto try_end_10;
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

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    tmp_defaults_5 = PyTuple_New( 1 );
    tmp_tuple_element_13 = PyDict_New();
    PyTuple_SET_ITEM( tmp_defaults_5, 0, tmp_tuple_element_13 );
    tmp_assign_source_108 = MAKE_FUNCTION_pytz$$$function_29_FixedOffset( tmp_defaults_5 );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_FixedOffset, tmp_assign_source_108 );
    tmp_assattr_name_3 = Py_True;
    tmp_assattr_target_3 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_FixedOffset );

    if (unlikely( tmp_assattr_target_3 == NULL ))
    {
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FixedOffset );
    }

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FixedOffset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 491;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain___safe_for_unpickling__, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 491;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_109 = MAKE_FUNCTION_pytz$$$function_30__test(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__test, tmp_assign_source_109 );
    tmp_assign_source_110 = LIST_COPY( const_list_f651e864a03e431905982f1cddccd457_list );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones, tmp_assign_source_110 );
    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazyList );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LazyList );
    }

    if ( tmp_called_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LazyList" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1096;

        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones );

    if (unlikely( tmp_iter_arg_1 == NULL ))
    {
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_all_timezones );
    }

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "all_timezones" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1097;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_112 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1097;

        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_112;

    // Tried code:
    tmp_outline_return_value_5 = Nuitka_Generator_New(
        pytz$$$genexpr_1_genexpr_context,
        module_pytz,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_angle_genexpr,
#endif
        codeobj_2fb86dec8736b60a32d3213809914b77,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_5)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_5 ) >= 1 ); 


    goto try_return_handler_15;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    goto outline_result_5;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    outline_result_5:;
    tmp_args_element_name_4 = tmp_outline_return_value_5;
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 1096;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_111 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_111 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1096;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones, tmp_assign_source_111 );
    tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazySet );

    if (unlikely( tmp_called_name_16 == NULL ))
    {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LazySet );
    }

    if ( tmp_called_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LazySet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1099;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_all_timezones );
    }

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "all_timezones" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1099;

        goto frame_exception_exit_1;
    }

    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 1099;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_113 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    if ( tmp_assign_source_113 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1099;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones_set, tmp_assign_source_113 );
    tmp_assign_source_114 = LIST_COPY( const_list_e442bdbf8df831c1de739ae7e7e12872_list );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_common_timezones, tmp_assign_source_114 );
    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazyList );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LazyList );
    }

    if ( tmp_called_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LazyList" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1540;

        goto frame_exception_exit_1;
    }

    tmp_iter_arg_2 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_common_timezones );

    if (unlikely( tmp_iter_arg_2 == NULL ))
    {
        tmp_iter_arg_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_common_timezones );
    }

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "common_timezones" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1541;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_116 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_116 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1541;

        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_2__$0 == NULL );
    tmp_genexpr_2__$0 = tmp_assign_source_116;

    // Tried code:
    tmp_outline_return_value_6 = Nuitka_Generator_New(
        pytz$$$genexpr_2_genexpr_context,
        module_pytz,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_angle_genexpr,
#endif
        codeobj_3e62b3de0a7c2fdda5880bc1d9fa7377,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_6)->m_closure[0] = PyCell_NEW0( tmp_genexpr_2__$0 );
    assert( Py_SIZE( tmp_outline_return_value_6 ) >= 1 ); 


    goto try_return_handler_16;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
    Py_DECREF( tmp_genexpr_2__$0 );
    tmp_genexpr_2__$0 = NULL;

    goto outline_result_6;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
    Py_DECREF( tmp_genexpr_2__$0 );
    tmp_genexpr_2__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    outline_result_6:;
    tmp_args_element_name_6 = tmp_outline_return_value_6;
    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 1540;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_115 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1540;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_common_timezones, tmp_assign_source_115 );
    tmp_called_name_18 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazySet );

    if (unlikely( tmp_called_name_18 == NULL ))
    {
        tmp_called_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LazySet );
    }

    if ( tmp_called_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LazySet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1543;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_common_timezones );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_common_timezones );
    }

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "common_timezones" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1543;

        goto frame_exception_exit_1;
    }

    frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame.f_lineno = 1543;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_117 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    if ( tmp_assign_source_117 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1543;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_common_timezones_set, tmp_assign_source_117 );

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_65d1665d06f14b38f67fd1302ccacc2d );
#endif
    popFrameStack();

    assertFrameObject( frame_65d1665d06f14b38f67fd1302ccacc2d );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_65d1665d06f14b38f67fd1302ccacc2d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_65d1665d06f14b38f67fd1302ccacc2d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_65d1665d06f14b38f67fd1302ccacc2d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_65d1665d06f14b38f67fd1302ccacc2d, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    return MOD_RETURN_VALUE( module_pytz );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
