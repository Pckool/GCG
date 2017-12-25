/* Generated code for Python source for module 'django.core.checks.security.base'
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

/* The _module_django$core$checks$security$base is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$core$checks$security$base;
PyDictObject *moduledict_django$core$checks$security$base;

/* The module constants used, if any. */
static PyObject *const_str_digest_20801b82382b1dde7e4d0feb677b3612;
extern PyObject *const_str_plain_ALLOWED_HOSTS;
static PyObject *const_tuple_str_digest_4cffa6a369135c01ba8c7bb0482dd97f_tuple;
static PyObject *const_str_digest_6a7498e907ab8c5fff33632bae59f432;
static PyObject *const_dict_74929e49d2f4d4c21e69cf1771e2db66;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_str_digest_e36d8d3a23670e3052fc598695f30d71_tuple;
extern PyObject *const_str_plain_Warning;
extern PyObject *const_tuple_str_plain_Tags_str_plain_Warning_str_plain_register_tuple;
extern PyObject *const_str_plain_Tags;
static PyObject *const_tuple_str_digest_4237da244be6c8d828f8a3da42b25b30_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_check_ssl_redirect;
static PyObject *const_str_plain_W002;
static PyObject *const_dict_a905da2815b7740e51bab6e7f6522e54;
static PyObject *const_str_digest_ab4520fbf4eb24060f8886a2de079c79;
static PyObject *const_str_plain_check_sts_preload;
static PyObject *const_str_plain_check_xss_filter;
static PyObject *const_str_digest_48dacfc64e26230411af350c1754d4f1;
extern PyObject *const_str_plain_SECURE_HSTS_INCLUDE_SUBDOMAINS;
extern PyObject *const_str_plain_id;
extern PyObject *const_str_plain_SECRET_KEY;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_SECURE_CONTENT_TYPE_NOSNIFF;
static PyObject *const_str_plain_check_xframe_deny;
static PyObject *const_str_plain_check_sts_include_subdomains;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_digest_b742d48a59f126ed32118ce778718dd8;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_924b9dc95be9214a82f3e9d369ff4ceb;
extern PyObject *const_str_plain___package__;
static PyObject *const_dict_1cbb81a7567d35b6bdfcba829a4f7929;
static PyObject *const_str_plain__security_middleware;
extern PyObject *const_str_plain_deploy;
static PyObject *const_str_plain_W021;
static PyObject *const_str_digest_a694631f93c1d2d61d3b39cbb4463c8a;
static PyObject *const_str_digest_824144969bc14370c422413debb8fdf6;
static PyObject *const_str_plain_check_debug;
static PyObject *const_str_digest_ab73ad9709c6ca656e4c2275ca13e390;
static PyObject *const_str_plain_check_content_type_nosniff;
extern PyObject *const_str_plain_security;
static PyObject *const_str_plain_check_allowed_hosts;
extern PyObject *const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
extern PyObject *const_str_plain_SECURE_BROWSER_XSS_FILTER;
static PyObject *const_str_digest_e6e5751d28e657481619a166057b331d;
extern PyObject *const_str_plain_app_configs;
static PyObject *const_str_digest_2dc0a18837ebe333fcf32eb0a64a72eb;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_d07d3ef1d520fb6ab19021ac149791b4;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_digest_89b340e339315c7d557a2532585f7ace;
static PyObject *const_str_digest_569c39936742b8164f82fae0b8c6cff9;
static PyObject *const_str_plain_DENY;
static PyObject *const_str_digest_f9646b55116122d1a2f196bfc1a3d07f;
static PyObject *const_tuple_str_digest_cd805ae109c7554a6af0215c586ecd08_tuple;
static PyObject *const_dict_8011c5b17088d5cc7d705346ed74628a;
extern PyObject *const_str_plain_ModuleSpec;
static PyObject *const_str_plain_check_secret_key;
extern PyObject *const_tuple_c8503e600e1ca26c6c0bd42a51b5b00b_tuple;
static PyObject *const_dict_f60bac2c76bb9a94eb6ccfcbef6493c3;
static PyObject *const_str_digest_4e28248c3854540deee05b49e5d6c7b5;
static PyObject *const_tuple_str_digest_ab4520fbf4eb24060f8886a2de079c79_tuple;
extern PyObject *const_str_plain_X_FRAME_OPTIONS;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_min_length;
extern PyObject *const_tuple_str_plain_settings_tuple;
extern PyObject *const_str_plain_register;
static PyObject *const_dict_26a0e100ef37cdac206bb021d7bf21c3;
extern PyObject *const_dict_0a577841e91ac947852937086ce5c4d4;
extern PyObject *const_tuple_str_plain_patch_middleware_message_tuple;
static PyObject *const_str_plain_check_xframe_options_middleware;
extern PyObject *const_str_plain_SECURE_HSTS_PRELOAD;
extern PyObject *const_str_plain_SECURE_SSL_REDIRECT;
extern PyObject *const_str_plain_SECURE_HSTS_SECONDS;
static PyObject *const_str_plain_check_security_middleware;
static PyObject *const_str_plain_W004;
static PyObject *const_str_digest_e36d8d3a23670e3052fc598695f30d71;
static PyObject *const_str_plain_SECRET_KEY_MIN_UNIQUE_CHARACTERS;
static PyObject *const_tuple_str_digest_1392b40047d1271b2001df94b25ce7c5_tuple;
static PyObject *const_str_digest_5728aef245c7b19e32e9923571be8935;
static PyObject *const_str_plain_W005;
extern PyObject *const_str_plain_settings;
static PyObject *const_str_plain_check_sts;
static PyObject *const_str_plain_W008;
static PyObject *const_str_digest_eaeabcb1d8b219b0629e4bd4ab1591fa;
extern PyObject *const_int_pos_50;
static PyObject *const_tuple_str_digest_efbdd61836acaebed935756d8a99cb99_tuple;
extern PyObject *const_str_plain_patch_middleware_message;
static PyObject *const_str_plain_W001;
static PyObject *const_str_digest_299428b01b127a3460074c4f087d9e5f;
static PyObject *const_str_plain_min_unique_chars;
static PyObject *const_str_digest_4237da244be6c8d828f8a3da42b25b30;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_W019;
static PyObject *const_str_digest_635082f5a1c9e7be2aa90540d81b893f;
static PyObject *const_str_plain_SECRET_KEY_MIN_LENGTH;
static PyObject *const_str_plain_W006;
static PyObject *const_str_plain__xframe_middleware;
extern PyObject *const_str_plain_MIDDLEWARE;
static PyObject *const_tuple_str_digest_89b340e339315c7d557a2532585f7ace_tuple;
static PyObject *const_tuple_str_digest_5728aef245c7b19e32e9923571be8935_tuple;
static PyObject *const_dict_0bcb603ccec271caa3b93727d48b215b;
static PyObject *const_str_digest_da4ed4e036067159c5fd945db088f682;
static PyObject *const_dict_535ed0ea547d084276ec78d0a087b010;
extern PyObject *const_tuple_str_plain_app_configs_str_plain_kwargs_tuple;
static PyObject *const_str_digest_efbdd61836acaebed935756d8a99cb99;
static PyObject *const_str_digest_f446229719b46e2bbeb39974a8211bf9;
static PyObject *const_str_digest_1392b40047d1271b2001df94b25ce7c5;
static PyObject *const_dict_48585f2aceb6814a0a8b65d7c2722be5;
static PyObject *const_dict_9b2e10439b62f820911bf5c021f07b66;
extern PyObject *const_str_plain_MIDDLEWARE_CLASSES;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_DEBUG;
static PyObject *const_str_plain_W007;
static PyObject *const_str_digest_1a3c22ee7308f57fed648b2f8e631a7d;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_W020;
static PyObject *const_tuple_str_digest_1a3c22ee7308f57fed648b2f8e631a7d_tuple;
static PyObject *const_dict_38f122ec689b6fb15beeed6557e3098d;
static PyObject *const_str_digest_cbc854303f083c206d528b1953635659;
static PyObject *const_tuple_str_digest_f446229719b46e2bbeb39974a8211bf9_tuple;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_W018;
extern PyObject *const_str_plain_passed_check;
static PyObject *const_str_digest_cd805ae109c7554a6af0215c586ecd08;
static PyObject *const_str_digest_4cffa6a369135c01ba8c7bb0482dd97f;
static PyObject *const_dict_c9b350854759402fecd9744355679669;
static PyObject *const_str_plain_W009;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_20801b82382b1dde7e4d0feb677b3612 = UNSTREAM_STRING( &constant_bin[ 766511 ], 13, 0 );
    const_tuple_str_digest_4cffa6a369135c01ba8c7bb0482dd97f_tuple = PyTuple_New( 1 );
    const_str_digest_4cffa6a369135c01ba8c7bb0482dd97f = UNSTREAM_STRING( &constant_bin[ 766524 ], 220, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_4cffa6a369135c01ba8c7bb0482dd97f_tuple, 0, const_str_digest_4cffa6a369135c01ba8c7bb0482dd97f ); Py_INCREF( const_str_digest_4cffa6a369135c01ba8c7bb0482dd97f );
    const_str_digest_6a7498e907ab8c5fff33632bae59f432 = UNSTREAM_STRING( &constant_bin[ 766744 ], 13, 0 );
    const_dict_74929e49d2f4d4c21e69cf1771e2db66 = _PyDict_NewPresized( 1 );
    const_str_digest_cbc854303f083c206d528b1953635659 = UNSTREAM_STRING( &constant_bin[ 766757 ], 13, 0 );
    PyDict_SetItem( const_dict_74929e49d2f4d4c21e69cf1771e2db66, const_str_plain_id, const_str_digest_cbc854303f083c206d528b1953635659 );
    assert( PyDict_Size( const_dict_74929e49d2f4d4c21e69cf1771e2db66 ) == 1 );
    const_tuple_str_digest_e36d8d3a23670e3052fc598695f30d71_tuple = PyTuple_New( 1 );
    const_str_digest_e36d8d3a23670e3052fc598695f30d71 = UNSTREAM_STRING( &constant_bin[ 766770 ], 251, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_e36d8d3a23670e3052fc598695f30d71_tuple, 0, const_str_digest_e36d8d3a23670e3052fc598695f30d71 ); Py_INCREF( const_str_digest_e36d8d3a23670e3052fc598695f30d71 );
    const_tuple_str_digest_4237da244be6c8d828f8a3da42b25b30_tuple = PyTuple_New( 1 );
    const_str_digest_4237da244be6c8d828f8a3da42b25b30 = UNSTREAM_STRING( &constant_bin[ 767021 ], 300, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_4237da244be6c8d828f8a3da42b25b30_tuple, 0, const_str_digest_4237da244be6c8d828f8a3da42b25b30 ); Py_INCREF( const_str_digest_4237da244be6c8d828f8a3da42b25b30 );
    const_str_plain_check_ssl_redirect = UNSTREAM_STRING( &constant_bin[ 767321 ], 18, 1 );
    const_str_plain_W002 = UNSTREAM_STRING( &constant_bin[ 767339 ], 4, 1 );
    const_dict_a905da2815b7740e51bab6e7f6522e54 = _PyDict_NewPresized( 1 );
    const_str_digest_da4ed4e036067159c5fd945db088f682 = UNSTREAM_STRING( &constant_bin[ 767343 ], 13, 0 );
    PyDict_SetItem( const_dict_a905da2815b7740e51bab6e7f6522e54, const_str_plain_id, const_str_digest_da4ed4e036067159c5fd945db088f682 );
    assert( PyDict_Size( const_dict_a905da2815b7740e51bab6e7f6522e54 ) == 1 );
    const_str_digest_ab4520fbf4eb24060f8886a2de079c79 = UNSTREAM_STRING( &constant_bin[ 767356 ], 307, 0 );
    const_str_plain_check_sts_preload = UNSTREAM_STRING( &constant_bin[ 767663 ], 17, 1 );
    const_str_plain_check_xss_filter = UNSTREAM_STRING( &constant_bin[ 767680 ], 16, 1 );
    const_str_digest_48dacfc64e26230411af350c1754d4f1 = UNSTREAM_STRING( &constant_bin[ 767696 ], 13, 0 );
    const_str_plain_check_xframe_deny = UNSTREAM_STRING( &constant_bin[ 767709 ], 17, 1 );
    const_str_plain_check_sts_include_subdomains = UNSTREAM_STRING( &constant_bin[ 767726 ], 28, 1 );
    const_str_digest_924b9dc95be9214a82f3e9d369ff4ceb = UNSTREAM_STRING( &constant_bin[ 767373 ], 54, 0 );
    const_dict_1cbb81a7567d35b6bdfcba829a4f7929 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_1cbb81a7567d35b6bdfcba829a4f7929, const_str_plain_id, const_str_digest_6a7498e907ab8c5fff33632bae59f432 );
    assert( PyDict_Size( const_dict_1cbb81a7567d35b6bdfcba829a4f7929 ) == 1 );
    const_str_plain__security_middleware = UNSTREAM_STRING( &constant_bin[ 767754 ], 20, 1 );
    const_str_plain_W021 = UNSTREAM_STRING( &constant_bin[ 766753 ], 4, 1 );
    const_str_digest_a694631f93c1d2d61d3b39cbb4463c8a = UNSTREAM_STRING( &constant_bin[ 767774 ], 41, 0 );
    const_str_digest_824144969bc14370c422413debb8fdf6 = UNSTREAM_STRING( &constant_bin[ 767815 ], 35, 0 );
    const_str_plain_check_debug = UNSTREAM_STRING( &constant_bin[ 767850 ], 11, 1 );
    const_str_digest_ab73ad9709c6ca656e4c2275ca13e390 = UNSTREAM_STRING( &constant_bin[ 767861 ], 13, 0 );
    const_str_plain_check_content_type_nosniff = UNSTREAM_STRING( &constant_bin[ 767874 ], 26, 1 );
    const_str_plain_check_allowed_hosts = UNSTREAM_STRING( &constant_bin[ 767900 ], 19, 1 );
    const_str_digest_e6e5751d28e657481619a166057b331d = UNSTREAM_STRING( &constant_bin[ 767919 ], 13, 0 );
    const_str_digest_2dc0a18837ebe333fcf32eb0a64a72eb = UNSTREAM_STRING( &constant_bin[ 767932 ], 13, 0 );
    const_str_digest_89b340e339315c7d557a2532585f7ace = UNSTREAM_STRING( &constant_bin[ 767945 ], 52, 0 );
    const_str_digest_569c39936742b8164f82fae0b8c6cff9 = UNSTREAM_STRING( &constant_bin[ 767997 ], 13, 0 );
    const_str_plain_DENY = UNSTREAM_STRING( &constant_bin[ 768010 ], 4, 1 );
    const_str_digest_f9646b55116122d1a2f196bfc1a3d07f = UNSTREAM_STRING( &constant_bin[ 768014 ], 13, 0 );
    const_tuple_str_digest_cd805ae109c7554a6af0215c586ecd08_tuple = PyTuple_New( 1 );
    const_str_digest_cd805ae109c7554a6af0215c586ecd08 = UNSTREAM_STRING( &constant_bin[ 768027 ], 252, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_cd805ae109c7554a6af0215c586ecd08_tuple, 0, const_str_digest_cd805ae109c7554a6af0215c586ecd08 ); Py_INCREF( const_str_digest_cd805ae109c7554a6af0215c586ecd08 );
    const_dict_8011c5b17088d5cc7d705346ed74628a = _PyDict_NewPresized( 1 );
    const_str_digest_299428b01b127a3460074c4f087d9e5f = UNSTREAM_STRING( &constant_bin[ 768279 ], 13, 0 );
    PyDict_SetItem( const_dict_8011c5b17088d5cc7d705346ed74628a, const_str_plain_id, const_str_digest_299428b01b127a3460074c4f087d9e5f );
    assert( PyDict_Size( const_dict_8011c5b17088d5cc7d705346ed74628a ) == 1 );
    const_str_plain_check_secret_key = UNSTREAM_STRING( &constant_bin[ 768292 ], 16, 1 );
    const_dict_f60bac2c76bb9a94eb6ccfcbef6493c3 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_f60bac2c76bb9a94eb6ccfcbef6493c3, const_str_plain_id, const_str_digest_ab73ad9709c6ca656e4c2275ca13e390 );
    assert( PyDict_Size( const_dict_f60bac2c76bb9a94eb6ccfcbef6493c3 ) == 1 );
    const_str_digest_4e28248c3854540deee05b49e5d6c7b5 = UNSTREAM_STRING( &constant_bin[ 768308 ], 13, 0 );
    const_tuple_str_digest_ab4520fbf4eb24060f8886a2de079c79_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_ab4520fbf4eb24060f8886a2de079c79_tuple, 0, const_str_digest_ab4520fbf4eb24060f8886a2de079c79 ); Py_INCREF( const_str_digest_ab4520fbf4eb24060f8886a2de079c79 );
    const_dict_26a0e100ef37cdac206bb021d7bf21c3 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_26a0e100ef37cdac206bb021d7bf21c3, const_str_plain_id, const_str_digest_4e28248c3854540deee05b49e5d6c7b5 );
    assert( PyDict_Size( const_dict_26a0e100ef37cdac206bb021d7bf21c3 ) == 1 );
    const_str_plain_check_xframe_options_middleware = UNSTREAM_STRING( &constant_bin[ 768321 ], 31, 1 );
    const_str_plain_check_security_middleware = UNSTREAM_STRING( &constant_bin[ 768352 ], 25, 1 );
    const_str_plain_W004 = UNSTREAM_STRING( &constant_bin[ 768288 ], 4, 1 );
    const_str_plain_SECRET_KEY_MIN_UNIQUE_CHARACTERS = UNSTREAM_STRING( &constant_bin[ 768377 ], 32, 1 );
    const_tuple_str_digest_1392b40047d1271b2001df94b25ce7c5_tuple = PyTuple_New( 1 );
    const_str_digest_1392b40047d1271b2001df94b25ce7c5 = UNSTREAM_STRING( &constant_bin[ 768409 ], 130, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_1392b40047d1271b2001df94b25ce7c5_tuple, 0, const_str_digest_1392b40047d1271b2001df94b25ce7c5 ); Py_INCREF( const_str_digest_1392b40047d1271b2001df94b25ce7c5 );
    const_str_digest_5728aef245c7b19e32e9923571be8935 = UNSTREAM_STRING( &constant_bin[ 768539 ], 279, 0 );
    const_str_plain_W005 = UNSTREAM_STRING( &constant_bin[ 768006 ], 4, 1 );
    const_str_plain_check_sts = UNSTREAM_STRING( &constant_bin[ 767663 ], 9, 1 );
    const_str_plain_W008 = UNSTREAM_STRING( &constant_bin[ 767705 ], 4, 1 );
    const_str_digest_eaeabcb1d8b219b0629e4bd4ab1591fa = UNSTREAM_STRING( &constant_bin[ 768818 ], 238, 0 );
    const_tuple_str_digest_efbdd61836acaebed935756d8a99cb99_tuple = PyTuple_New( 1 );
    const_str_digest_efbdd61836acaebed935756d8a99cb99 = UNSTREAM_STRING( &constant_bin[ 769056 ], 264, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_efbdd61836acaebed935756d8a99cb99_tuple, 0, const_str_digest_efbdd61836acaebed935756d8a99cb99 ); Py_INCREF( const_str_digest_efbdd61836acaebed935756d8a99cb99 );
    const_str_plain_W001 = UNSTREAM_STRING( &constant_bin[ 762393 ], 4, 1 );
    const_str_plain_min_unique_chars = UNSTREAM_STRING( &constant_bin[ 768889 ], 16, 1 );
    const_str_plain_W019 = UNSTREAM_STRING( &constant_bin[ 767941 ], 4, 1 );
    const_str_digest_635082f5a1c9e7be2aa90540d81b893f = UNSTREAM_STRING( &constant_bin[ 766541 ], 45, 0 );
    const_str_plain_SECRET_KEY_MIN_LENGTH = UNSTREAM_STRING( &constant_bin[ 769320 ], 21, 1 );
    const_str_plain_W006 = UNSTREAM_STRING( &constant_bin[ 767352 ], 4, 1 );
    const_str_plain__xframe_middleware = UNSTREAM_STRING( &constant_bin[ 769341 ], 18, 1 );
    const_tuple_str_digest_89b340e339315c7d557a2532585f7ace_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_89b340e339315c7d557a2532585f7ace_tuple, 0, const_str_digest_89b340e339315c7d557a2532585f7ace ); Py_INCREF( const_str_digest_89b340e339315c7d557a2532585f7ace );
    const_tuple_str_digest_5728aef245c7b19e32e9923571be8935_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_5728aef245c7b19e32e9923571be8935_tuple, 0, const_str_digest_5728aef245c7b19e32e9923571be8935 ); Py_INCREF( const_str_digest_5728aef245c7b19e32e9923571be8935 );
    const_dict_0bcb603ccec271caa3b93727d48b215b = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_0bcb603ccec271caa3b93727d48b215b, const_str_plain_id, const_str_digest_2dc0a18837ebe333fcf32eb0a64a72eb );
    assert( PyDict_Size( const_dict_0bcb603ccec271caa3b93727d48b215b ) == 1 );
    const_dict_535ed0ea547d084276ec78d0a087b010 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_535ed0ea547d084276ec78d0a087b010, const_str_plain_id, const_str_digest_f9646b55116122d1a2f196bfc1a3d07f );
    assert( PyDict_Size( const_dict_535ed0ea547d084276ec78d0a087b010 ) == 1 );
    const_str_digest_f446229719b46e2bbeb39974a8211bf9 = UNSTREAM_STRING( &constant_bin[ 769359 ], 46, 0 );
    const_dict_48585f2aceb6814a0a8b65d7c2722be5 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_48585f2aceb6814a0a8b65d7c2722be5, const_str_plain_id, const_str_digest_48dacfc64e26230411af350c1754d4f1 );
    assert( PyDict_Size( const_dict_48585f2aceb6814a0a8b65d7c2722be5 ) == 1 );
    const_dict_9b2e10439b62f820911bf5c021f07b66 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_9b2e10439b62f820911bf5c021f07b66, const_str_plain_id, const_str_digest_569c39936742b8164f82fae0b8c6cff9 );
    assert( PyDict_Size( const_dict_9b2e10439b62f820911bf5c021f07b66 ) == 1 );
    const_str_plain_W007 = UNSTREAM_STRING( &constant_bin[ 766520 ], 4, 1 );
    const_str_digest_1a3c22ee7308f57fed648b2f8e631a7d = UNSTREAM_STRING( &constant_bin[ 769405 ], 285, 0 );
    const_str_plain_W020 = UNSTREAM_STRING( &constant_bin[ 768317 ], 4, 1 );
    const_tuple_str_digest_1a3c22ee7308f57fed648b2f8e631a7d_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_1a3c22ee7308f57fed648b2f8e631a7d_tuple, 0, const_str_digest_1a3c22ee7308f57fed648b2f8e631a7d ); Py_INCREF( const_str_digest_1a3c22ee7308f57fed648b2f8e631a7d );
    const_dict_38f122ec689b6fb15beeed6557e3098d = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_38f122ec689b6fb15beeed6557e3098d, const_str_plain_id, const_str_digest_20801b82382b1dde7e4d0feb677b3612 );
    assert( PyDict_Size( const_dict_38f122ec689b6fb15beeed6557e3098d ) == 1 );
    const_tuple_str_digest_f446229719b46e2bbeb39974a8211bf9_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_f446229719b46e2bbeb39974a8211bf9_tuple, 0, const_str_digest_f446229719b46e2bbeb39974a8211bf9 ); Py_INCREF( const_str_digest_f446229719b46e2bbeb39974a8211bf9 );
    const_str_plain_W018 = UNSTREAM_STRING( &constant_bin[ 767928 ], 4, 1 );
    const_dict_c9b350854759402fecd9744355679669 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_c9b350854759402fecd9744355679669, const_str_plain_id, const_str_digest_e6e5751d28e657481619a166057b331d );
    assert( PyDict_Size( const_dict_c9b350854759402fecd9744355679669 ) == 1 );
    const_str_plain_W009 = UNSTREAM_STRING( &constant_bin[ 766766 ], 4, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$core$checks$security$base( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1988d8402dfec17c31cf39b3b6696f65;
static PyCodeObject *codeobj_003d7c52d04bd2532cb65bae75cc9f1c;
static PyCodeObject *codeobj_e57585014c2d71113fbcfa86141c8f35;
static PyCodeObject *codeobj_b4eb0bb59ede038895c255e5bac97577;
static PyCodeObject *codeobj_4662e6aed0a233cf9d1ac88acbcc68c7;
static PyCodeObject *codeobj_6ff3f7b5bcf4eb1b75c54871d84d76f4;
static PyCodeObject *codeobj_9348d92837c3f11e802dac5660bded94;
static PyCodeObject *codeobj_6049a9b3528d39af86674a634947672b;
static PyCodeObject *codeobj_da3804abc9400e91f654206e0280da49;
static PyCodeObject *codeobj_731d7207a302d30c4091dfb474c0da41;
static PyCodeObject *codeobj_ee1ed6b262be6cee0df3dce146f74232;
static PyCodeObject *codeobj_d074a79f464c0be7e7e685f5b84cbae1;
static PyCodeObject *codeobj_1663b6645b3c62168cb2e815e15f3904;
static PyCodeObject *codeobj_544cacf3f9e75717084777db4df44d0f;
static PyCodeObject *codeobj_6ea219b4fe90b506c8805b510440e54e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_824144969bc14370c422413debb8fdf6 );
    codeobj_1988d8402dfec17c31cf39b3b6696f65 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_a694631f93c1d2d61d3b39cbb4463c8a, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_003d7c52d04bd2532cb65bae75cc9f1c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__security_middleware, 111, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e57585014c2d71113fbcfa86141c8f35 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__xframe_middleware, 116, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b4eb0bb59ede038895c255e5bac97577 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_allowed_hosts, 211, const_tuple_str_plain_app_configs_str_plain_kwargs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_4662e6aed0a233cf9d1ac88acbcc68c7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_content_type_nosniff, 159, const_tuple_c8503e600e1ca26c6c0bd42a51b5b00b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_6ff3f7b5bcf4eb1b75c54871d84d76f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_debug, 196, const_tuple_c8503e600e1ca26c6c0bd42a51b5b00b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_9348d92837c3f11e802dac5660bded94 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_secret_key, 186, const_tuple_c8503e600e1ca26c6c0bd42a51b5b00b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_6049a9b3528d39af86674a634947672b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_security_middleware, 121, const_tuple_c8503e600e1ca26c6c0bd42a51b5b00b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_da3804abc9400e91f654206e0280da49 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_ssl_redirect, 177, const_tuple_c8503e600e1ca26c6c0bd42a51b5b00b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_731d7207a302d30c4091dfb474c0da41 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_sts, 133, const_tuple_c8503e600e1ca26c6c0bd42a51b5b00b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_ee1ed6b262be6cee0df3dce146f74232 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_sts_include_subdomains, 139, const_tuple_c8503e600e1ca26c6c0bd42a51b5b00b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_d074a79f464c0be7e7e685f5b84cbae1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_sts_preload, 149, const_tuple_c8503e600e1ca26c6c0bd42a51b5b00b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_1663b6645b3c62168cb2e815e15f3904 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_xframe_deny, 202, const_tuple_c8503e600e1ca26c6c0bd42a51b5b00b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_544cacf3f9e75717084777db4df44d0f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_xframe_options_middleware, 127, const_tuple_c8503e600e1ca26c6c0bd42a51b5b00b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_6ea219b4fe90b506c8805b510440e54e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_xss_filter, 168, const_tuple_c8503e600e1ca26c6c0bd42a51b5b00b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_10_check_ssl_redirect(  );


static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_11_check_secret_key(  );


static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_12_check_debug(  );


static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_13_check_xframe_deny(  );


static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_14_check_allowed_hosts(  );


static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_1__security_middleware(  );


static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_2__xframe_middleware(  );


static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_3_check_security_middleware(  );


static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_4_check_xframe_options_middleware(  );


static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_5_check_sts(  );


static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_6_check_sts_include_subdomains(  );


static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_7_check_sts_preload(  );


static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_8_check_content_type_nosniff(  );


static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_9_check_xss_filter(  );


// The module function definitions.
static PyObject *impl_django$core$checks$security$base$$$function_1__security_middleware( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_003d7c52d04bd2532cb65bae75cc9f1c = NULL;

    struct Nuitka_FrameObject *frame_003d7c52d04bd2532cb65bae75cc9f1c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_003d7c52d04bd2532cb65bae75cc9f1c, codeobj_003d7c52d04bd2532cb65bae75cc9f1c, module_django$core$checks$security$base, 0 );
    frame_003d7c52d04bd2532cb65bae75cc9f1c = cache_frame_003d7c52d04bd2532cb65bae75cc9f1c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_003d7c52d04bd2532cb65bae75cc9f1c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_003d7c52d04bd2532cb65bae75cc9f1c ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = const_str_digest_635082f5a1c9e7be2aa90540d81b893f;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 112;

        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_MIDDLEWARE_CLASSES );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;

        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;

        goto frame_exception_exit_1;
    }
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 113;

        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MIDDLEWARE );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 113;

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
    tmp_compexpr_left_2 = const_str_digest_635082f5a1c9e7be2aa90540d81b893f;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 113;

        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_MIDDLEWARE );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
    tmp_or_right_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_or_right_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_return_value = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_return_value = tmp_or_left_value_1;
    or_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_003d7c52d04bd2532cb65bae75cc9f1c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_003d7c52d04bd2532cb65bae75cc9f1c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_003d7c52d04bd2532cb65bae75cc9f1c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_003d7c52d04bd2532cb65bae75cc9f1c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_003d7c52d04bd2532cb65bae75cc9f1c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_003d7c52d04bd2532cb65bae75cc9f1c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_003d7c52d04bd2532cb65bae75cc9f1c,
        type_description_1
    );


    // Release cached frame.
    if ( frame_003d7c52d04bd2532cb65bae75cc9f1c == cache_frame_003d7c52d04bd2532cb65bae75cc9f1c )
    {
        Py_DECREF( frame_003d7c52d04bd2532cb65bae75cc9f1c );
    }
    cache_frame_003d7c52d04bd2532cb65bae75cc9f1c = NULL;

    assertFrameObject( frame_003d7c52d04bd2532cb65bae75cc9f1c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_1__security_middleware );
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


static PyObject *impl_django$core$checks$security$base$$$function_2__xframe_middleware( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_e57585014c2d71113fbcfa86141c8f35 = NULL;

    struct Nuitka_FrameObject *frame_e57585014c2d71113fbcfa86141c8f35;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_e57585014c2d71113fbcfa86141c8f35, codeobj_e57585014c2d71113fbcfa86141c8f35, module_django$core$checks$security$base, 0 );
    frame_e57585014c2d71113fbcfa86141c8f35 = cache_frame_e57585014c2d71113fbcfa86141c8f35;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e57585014c2d71113fbcfa86141c8f35 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e57585014c2d71113fbcfa86141c8f35 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = const_str_digest_924b9dc95be9214a82f3e9d369ff4ceb;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 117;

        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_MIDDLEWARE_CLASSES );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;

        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;

        goto frame_exception_exit_1;
    }
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 118;

        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MIDDLEWARE );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 118;

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
    tmp_compexpr_left_2 = const_str_digest_924b9dc95be9214a82f3e9d369ff4ceb;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 118;

        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_MIDDLEWARE );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;

        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
    tmp_or_right_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_or_right_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_return_value = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_return_value = tmp_or_left_value_1;
    or_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e57585014c2d71113fbcfa86141c8f35 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e57585014c2d71113fbcfa86141c8f35 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e57585014c2d71113fbcfa86141c8f35 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e57585014c2d71113fbcfa86141c8f35, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e57585014c2d71113fbcfa86141c8f35->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e57585014c2d71113fbcfa86141c8f35, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e57585014c2d71113fbcfa86141c8f35,
        type_description_1
    );


    // Release cached frame.
    if ( frame_e57585014c2d71113fbcfa86141c8f35 == cache_frame_e57585014c2d71113fbcfa86141c8f35 )
    {
        Py_DECREF( frame_e57585014c2d71113fbcfa86141c8f35 );
    }
    cache_frame_e57585014c2d71113fbcfa86141c8f35 = NULL;

    assertFrameObject( frame_e57585014c2d71113fbcfa86141c8f35 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_2__xframe_middleware );
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


static PyObject *impl_django$core$checks$security$base$$$function_3_check_security_middleware( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_passed_check = NULL;
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
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_6049a9b3528d39af86674a634947672b = NULL;

    struct Nuitka_FrameObject *frame_6049a9b3528d39af86674a634947672b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6049a9b3528d39af86674a634947672b, codeobj_6049a9b3528d39af86674a634947672b, module_django$core$checks$security$base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6049a9b3528d39af86674a634947672b = cache_frame_6049a9b3528d39af86674a634947672b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6049a9b3528d39af86674a634947672b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6049a9b3528d39af86674a634947672b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain__security_middleware );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__security_middleware );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_security_middleware" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_6049a9b3528d39af86674a634947672b->m_frame.f_lineno = 123;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_passed_check == NULL );
    var_passed_check = tmp_assign_source_1;

    tmp_cond_value_1 = var_passed_check;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_return_value = PyList_New( 0 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_patch_middleware_message );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_patch_middleware_message );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "patch_middleware_message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W001 );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_W001 );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "W001" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_6049a9b3528d39af86674a634947672b->m_frame.f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 124;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6049a9b3528d39af86674a634947672b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6049a9b3528d39af86674a634947672b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6049a9b3528d39af86674a634947672b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6049a9b3528d39af86674a634947672b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6049a9b3528d39af86674a634947672b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6049a9b3528d39af86674a634947672b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6049a9b3528d39af86674a634947672b,
        type_description_1,
        par_app_configs,
        par_kwargs,
        var_passed_check
    );


    // Release cached frame.
    if ( frame_6049a9b3528d39af86674a634947672b == cache_frame_6049a9b3528d39af86674a634947672b )
    {
        Py_DECREF( frame_6049a9b3528d39af86674a634947672b );
    }
    cache_frame_6049a9b3528d39af86674a634947672b = NULL;

    assertFrameObject( frame_6049a9b3528d39af86674a634947672b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_3_check_security_middleware );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

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

    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_3_check_security_middleware );
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


static PyObject *impl_django$core$checks$security$base$$$function_4_check_xframe_options_middleware( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_passed_check = NULL;
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
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_544cacf3f9e75717084777db4df44d0f = NULL;

    struct Nuitka_FrameObject *frame_544cacf3f9e75717084777db4df44d0f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_544cacf3f9e75717084777db4df44d0f, codeobj_544cacf3f9e75717084777db4df44d0f, module_django$core$checks$security$base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_544cacf3f9e75717084777db4df44d0f = cache_frame_544cacf3f9e75717084777db4df44d0f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_544cacf3f9e75717084777db4df44d0f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_544cacf3f9e75717084777db4df44d0f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain__xframe_middleware );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__xframe_middleware );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_xframe_middleware" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_544cacf3f9e75717084777db4df44d0f->m_frame.f_lineno = 129;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_passed_check == NULL );
    var_passed_check = tmp_assign_source_1;

    tmp_cond_value_1 = var_passed_check;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_return_value = PyList_New( 0 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_patch_middleware_message );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_patch_middleware_message );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "patch_middleware_message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W002 );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_W002 );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "W002" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_544cacf3f9e75717084777db4df44d0f->m_frame.f_lineno = 130;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 130;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_544cacf3f9e75717084777db4df44d0f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_544cacf3f9e75717084777db4df44d0f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_544cacf3f9e75717084777db4df44d0f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_544cacf3f9e75717084777db4df44d0f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_544cacf3f9e75717084777db4df44d0f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_544cacf3f9e75717084777db4df44d0f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_544cacf3f9e75717084777db4df44d0f,
        type_description_1,
        par_app_configs,
        par_kwargs,
        var_passed_check
    );


    // Release cached frame.
    if ( frame_544cacf3f9e75717084777db4df44d0f == cache_frame_544cacf3f9e75717084777db4df44d0f )
    {
        Py_DECREF( frame_544cacf3f9e75717084777db4df44d0f );
    }
    cache_frame_544cacf3f9e75717084777db4df44d0f = NULL;

    assertFrameObject( frame_544cacf3f9e75717084777db4df44d0f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_4_check_xframe_options_middleware );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

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

    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_4_check_xframe_options_middleware );
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


static PyObject *impl_django$core$checks$security$base$$$function_5_check_sts( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_passed_check = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_731d7207a302d30c4091dfb474c0da41 = NULL;

    struct Nuitka_FrameObject *frame_731d7207a302d30c4091dfb474c0da41;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_731d7207a302d30c4091dfb474c0da41, codeobj_731d7207a302d30c4091dfb474c0da41, module_django$core$checks$security$base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_731d7207a302d30c4091dfb474c0da41 = cache_frame_731d7207a302d30c4091dfb474c0da41;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_731d7207a302d30c4091dfb474c0da41 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_731d7207a302d30c4091dfb474c0da41 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain__security_middleware );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__security_middleware );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_security_middleware" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_731d7207a302d30c4091dfb474c0da41->m_frame.f_lineno = 135;
    tmp_operand_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooo";
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 135;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SECURE_HSTS_SECONDS );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_passed_check == NULL );
    var_passed_check = tmp_assign_source_1;

    tmp_cond_value_1 = var_passed_check;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_return_value = PyList_New( 0 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W004 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_W004 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "W004" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_731d7207a302d30c4091dfb474c0da41 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_731d7207a302d30c4091dfb474c0da41 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_731d7207a302d30c4091dfb474c0da41 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_731d7207a302d30c4091dfb474c0da41, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_731d7207a302d30c4091dfb474c0da41->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_731d7207a302d30c4091dfb474c0da41, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_731d7207a302d30c4091dfb474c0da41,
        type_description_1,
        par_app_configs,
        par_kwargs,
        var_passed_check
    );


    // Release cached frame.
    if ( frame_731d7207a302d30c4091dfb474c0da41 == cache_frame_731d7207a302d30c4091dfb474c0da41 )
    {
        Py_DECREF( frame_731d7207a302d30c4091dfb474c0da41 );
    }
    cache_frame_731d7207a302d30c4091dfb474c0da41 = NULL;

    assertFrameObject( frame_731d7207a302d30c4091dfb474c0da41 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_5_check_sts );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

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

    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_5_check_sts );
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


static PyObject *impl_django$core$checks$security$base$$$function_6_check_sts_include_subdomains( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_passed_check = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_ee1ed6b262be6cee0df3dce146f74232 = NULL;

    struct Nuitka_FrameObject *frame_ee1ed6b262be6cee0df3dce146f74232;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ee1ed6b262be6cee0df3dce146f74232, codeobj_ee1ed6b262be6cee0df3dce146f74232, module_django$core$checks$security$base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ee1ed6b262be6cee0df3dce146f74232 = cache_frame_ee1ed6b262be6cee0df3dce146f74232;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ee1ed6b262be6cee0df3dce146f74232 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ee1ed6b262be6cee0df3dce146f74232 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain__security_middleware );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__security_middleware );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_security_middleware" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_ee1ed6b262be6cee0df3dce146f74232->m_frame.f_lineno = 142;
    tmp_operand_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooo";
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 143;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SECURE_HSTS_SECONDS );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooo";
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 144;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SECURE_HSTS_INCLUDE_SUBDOMAINS );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_True;
    tmp_or_right_value_2 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_or_right_value_1 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_or_right_value_1 = tmp_or_left_value_2;
    or_end_2:;
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_passed_check == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_passed_check = tmp_assign_source_1;

    tmp_cond_value_1 = var_passed_check;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_return_value = PyList_New( 0 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W005 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_W005 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "W005" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee1ed6b262be6cee0df3dce146f74232 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee1ed6b262be6cee0df3dce146f74232 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee1ed6b262be6cee0df3dce146f74232 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ee1ed6b262be6cee0df3dce146f74232, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ee1ed6b262be6cee0df3dce146f74232->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ee1ed6b262be6cee0df3dce146f74232, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ee1ed6b262be6cee0df3dce146f74232,
        type_description_1,
        par_app_configs,
        par_kwargs,
        var_passed_check
    );


    // Release cached frame.
    if ( frame_ee1ed6b262be6cee0df3dce146f74232 == cache_frame_ee1ed6b262be6cee0df3dce146f74232 )
    {
        Py_DECREF( frame_ee1ed6b262be6cee0df3dce146f74232 );
    }
    cache_frame_ee1ed6b262be6cee0df3dce146f74232 = NULL;

    assertFrameObject( frame_ee1ed6b262be6cee0df3dce146f74232 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_6_check_sts_include_subdomains );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

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

    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_6_check_sts_include_subdomains );
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


static PyObject *impl_django$core$checks$security$base$$$function_7_check_sts_preload( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_passed_check = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_d074a79f464c0be7e7e685f5b84cbae1 = NULL;

    struct Nuitka_FrameObject *frame_d074a79f464c0be7e7e685f5b84cbae1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d074a79f464c0be7e7e685f5b84cbae1, codeobj_d074a79f464c0be7e7e685f5b84cbae1, module_django$core$checks$security$base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d074a79f464c0be7e7e685f5b84cbae1 = cache_frame_d074a79f464c0be7e7e685f5b84cbae1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d074a79f464c0be7e7e685f5b84cbae1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d074a79f464c0be7e7e685f5b84cbae1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain__security_middleware );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__security_middleware );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_security_middleware" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_d074a79f464c0be7e7e685f5b84cbae1->m_frame.f_lineno = 152;
    tmp_operand_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "ooo";
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 153;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SECURE_HSTS_SECONDS );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "ooo";
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 154;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SECURE_HSTS_PRELOAD );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_True;
    tmp_or_right_value_2 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_or_right_value_1 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_or_right_value_1 = tmp_or_left_value_2;
    or_end_2:;
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_passed_check == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_passed_check = tmp_assign_source_1;

    tmp_cond_value_1 = var_passed_check;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_return_value = PyList_New( 0 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W021 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_W021 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "W021" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d074a79f464c0be7e7e685f5b84cbae1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d074a79f464c0be7e7e685f5b84cbae1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d074a79f464c0be7e7e685f5b84cbae1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d074a79f464c0be7e7e685f5b84cbae1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d074a79f464c0be7e7e685f5b84cbae1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d074a79f464c0be7e7e685f5b84cbae1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d074a79f464c0be7e7e685f5b84cbae1,
        type_description_1,
        par_app_configs,
        par_kwargs,
        var_passed_check
    );


    // Release cached frame.
    if ( frame_d074a79f464c0be7e7e685f5b84cbae1 == cache_frame_d074a79f464c0be7e7e685f5b84cbae1 )
    {
        Py_DECREF( frame_d074a79f464c0be7e7e685f5b84cbae1 );
    }
    cache_frame_d074a79f464c0be7e7e685f5b84cbae1 = NULL;

    assertFrameObject( frame_d074a79f464c0be7e7e685f5b84cbae1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_7_check_sts_preload );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

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

    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_7_check_sts_preload );
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


static PyObject *impl_django$core$checks$security$base$$$function_8_check_content_type_nosniff( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_passed_check = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_4662e6aed0a233cf9d1ac88acbcc68c7 = NULL;

    struct Nuitka_FrameObject *frame_4662e6aed0a233cf9d1ac88acbcc68c7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4662e6aed0a233cf9d1ac88acbcc68c7, codeobj_4662e6aed0a233cf9d1ac88acbcc68c7, module_django$core$checks$security$base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4662e6aed0a233cf9d1ac88acbcc68c7 = cache_frame_4662e6aed0a233cf9d1ac88acbcc68c7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4662e6aed0a233cf9d1ac88acbcc68c7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4662e6aed0a233cf9d1ac88acbcc68c7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain__security_middleware );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__security_middleware );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_security_middleware" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_4662e6aed0a233cf9d1ac88acbcc68c7->m_frame.f_lineno = 162;
    tmp_operand_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooo";
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 163;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SECURE_CONTENT_TYPE_NOSNIFF );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_True;
    tmp_or_right_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_passed_check == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_passed_check = tmp_assign_source_1;

    tmp_cond_value_1 = var_passed_check;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_return_value = PyList_New( 0 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W006 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_W006 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "W006" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4662e6aed0a233cf9d1ac88acbcc68c7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4662e6aed0a233cf9d1ac88acbcc68c7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4662e6aed0a233cf9d1ac88acbcc68c7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4662e6aed0a233cf9d1ac88acbcc68c7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4662e6aed0a233cf9d1ac88acbcc68c7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4662e6aed0a233cf9d1ac88acbcc68c7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4662e6aed0a233cf9d1ac88acbcc68c7,
        type_description_1,
        par_app_configs,
        par_kwargs,
        var_passed_check
    );


    // Release cached frame.
    if ( frame_4662e6aed0a233cf9d1ac88acbcc68c7 == cache_frame_4662e6aed0a233cf9d1ac88acbcc68c7 )
    {
        Py_DECREF( frame_4662e6aed0a233cf9d1ac88acbcc68c7 );
    }
    cache_frame_4662e6aed0a233cf9d1ac88acbcc68c7 = NULL;

    assertFrameObject( frame_4662e6aed0a233cf9d1ac88acbcc68c7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_8_check_content_type_nosniff );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

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

    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_8_check_content_type_nosniff );
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


static PyObject *impl_django$core$checks$security$base$$$function_9_check_xss_filter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_passed_check = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_6ea219b4fe90b506c8805b510440e54e = NULL;

    struct Nuitka_FrameObject *frame_6ea219b4fe90b506c8805b510440e54e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6ea219b4fe90b506c8805b510440e54e, codeobj_6ea219b4fe90b506c8805b510440e54e, module_django$core$checks$security$base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6ea219b4fe90b506c8805b510440e54e = cache_frame_6ea219b4fe90b506c8805b510440e54e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6ea219b4fe90b506c8805b510440e54e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6ea219b4fe90b506c8805b510440e54e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain__security_middleware );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__security_middleware );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_security_middleware" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_6ea219b4fe90b506c8805b510440e54e->m_frame.f_lineno = 171;
    tmp_operand_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "ooo";
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 172;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SECURE_BROWSER_XSS_FILTER );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_True;
    tmp_or_right_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_passed_check == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_passed_check = tmp_assign_source_1;

    tmp_cond_value_1 = var_passed_check;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_return_value = PyList_New( 0 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W007 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_W007 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "W007" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ea219b4fe90b506c8805b510440e54e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ea219b4fe90b506c8805b510440e54e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ea219b4fe90b506c8805b510440e54e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6ea219b4fe90b506c8805b510440e54e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6ea219b4fe90b506c8805b510440e54e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6ea219b4fe90b506c8805b510440e54e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6ea219b4fe90b506c8805b510440e54e,
        type_description_1,
        par_app_configs,
        par_kwargs,
        var_passed_check
    );


    // Release cached frame.
    if ( frame_6ea219b4fe90b506c8805b510440e54e == cache_frame_6ea219b4fe90b506c8805b510440e54e )
    {
        Py_DECREF( frame_6ea219b4fe90b506c8805b510440e54e );
    }
    cache_frame_6ea219b4fe90b506c8805b510440e54e = NULL;

    assertFrameObject( frame_6ea219b4fe90b506c8805b510440e54e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_9_check_xss_filter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

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

    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_9_check_xss_filter );
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


static PyObject *impl_django$core$checks$security$base$$$function_10_check_ssl_redirect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_passed_check = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_da3804abc9400e91f654206e0280da49 = NULL;

    struct Nuitka_FrameObject *frame_da3804abc9400e91f654206e0280da49;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_da3804abc9400e91f654206e0280da49, codeobj_da3804abc9400e91f654206e0280da49, module_django$core$checks$security$base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_da3804abc9400e91f654206e0280da49 = cache_frame_da3804abc9400e91f654206e0280da49;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_da3804abc9400e91f654206e0280da49 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_da3804abc9400e91f654206e0280da49 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain__security_middleware );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__security_middleware );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_security_middleware" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_da3804abc9400e91f654206e0280da49->m_frame.f_lineno = 180;
    tmp_operand_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooo";
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 181;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SECURE_SSL_REDIRECT );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_True;
    tmp_or_right_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_passed_check == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_passed_check = tmp_assign_source_1;

    tmp_cond_value_1 = var_passed_check;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_return_value = PyList_New( 0 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W008 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_W008 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "W008" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_da3804abc9400e91f654206e0280da49 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_da3804abc9400e91f654206e0280da49 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_da3804abc9400e91f654206e0280da49 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_da3804abc9400e91f654206e0280da49, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_da3804abc9400e91f654206e0280da49->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_da3804abc9400e91f654206e0280da49, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_da3804abc9400e91f654206e0280da49,
        type_description_1,
        par_app_configs,
        par_kwargs,
        var_passed_check
    );


    // Release cached frame.
    if ( frame_da3804abc9400e91f654206e0280da49 == cache_frame_da3804abc9400e91f654206e0280da49 )
    {
        Py_DECREF( frame_da3804abc9400e91f654206e0280da49 );
    }
    cache_frame_da3804abc9400e91f654206e0280da49 = NULL;

    assertFrameObject( frame_da3804abc9400e91f654206e0280da49 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_10_check_ssl_redirect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

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

    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_10_check_ssl_redirect );
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


static PyObject *impl_django$core$checks$security$base$$$function_11_check_secret_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_passed_check = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_set_arg_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_9348d92837c3f11e802dac5660bded94 = NULL;

    struct Nuitka_FrameObject *frame_9348d92837c3f11e802dac5660bded94;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9348d92837c3f11e802dac5660bded94, codeobj_9348d92837c3f11e802dac5660bded94, module_django$core$checks$security$base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9348d92837c3f11e802dac5660bded94 = cache_frame_9348d92837c3f11e802dac5660bded94;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9348d92837c3f11e802dac5660bded94 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9348d92837c3f11e802dac5660bded94 ) == 2 ); // Frame stack

    // Framed code:
    tmp_getattr_target_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_getattr_target_1 == NULL ))
    {
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain_SECRET_KEY;
    tmp_getattr_default_1 = Py_None;
    tmp_and_left_value_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 191;
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_set_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SECRET_KEY );
    if ( tmp_set_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_1 = PySet_New( tmp_set_arg_1 );
    Py_DECREF( tmp_set_arg_1 );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_SECRET_KEY_MIN_UNIQUE_CHARACTERS );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECRET_KEY_MIN_UNIQUE_CHARACTERS );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SECRET_KEY_MIN_UNIQUE_CHARACTERS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_2 = RICH_COMPARE_GE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 191;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 191;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SECRET_KEY );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_SECRET_KEY_MIN_LENGTH );

    if (unlikely( tmp_compexpr_right_2 == NULL ))
    {
        tmp_compexpr_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECRET_KEY_MIN_LENGTH );
    }

    if ( tmp_compexpr_right_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SECRET_KEY_MIN_LENGTH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_2 = RICH_COMPARE_GE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_assign_source_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_assign_source_1 = tmp_and_left_value_1;
    and_end_1:;
    assert( var_passed_check == NULL );
    var_passed_check = tmp_assign_source_1;

    tmp_cond_value_1 = var_passed_check;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_return_value = PyList_New( 0 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W009 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_W009 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "W009" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9348d92837c3f11e802dac5660bded94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9348d92837c3f11e802dac5660bded94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9348d92837c3f11e802dac5660bded94 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9348d92837c3f11e802dac5660bded94, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9348d92837c3f11e802dac5660bded94->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9348d92837c3f11e802dac5660bded94, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9348d92837c3f11e802dac5660bded94,
        type_description_1,
        par_app_configs,
        par_kwargs,
        var_passed_check
    );


    // Release cached frame.
    if ( frame_9348d92837c3f11e802dac5660bded94 == cache_frame_9348d92837c3f11e802dac5660bded94 )
    {
        Py_DECREF( frame_9348d92837c3f11e802dac5660bded94 );
    }
    cache_frame_9348d92837c3f11e802dac5660bded94 = NULL;

    assertFrameObject( frame_9348d92837c3f11e802dac5660bded94 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_11_check_secret_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

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

    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_11_check_secret_key );
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


static PyObject *impl_django$core$checks$security$base$$$function_12_check_debug( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_passed_check = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_6ff3f7b5bcf4eb1b75c54871d84d76f4 = NULL;

    struct Nuitka_FrameObject *frame_6ff3f7b5bcf4eb1b75c54871d84d76f4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6ff3f7b5bcf4eb1b75c54871d84d76f4, codeobj_6ff3f7b5bcf4eb1b75c54871d84d76f4, module_django$core$checks$security$base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6ff3f7b5bcf4eb1b75c54871d84d76f4 = cache_frame_6ff3f7b5bcf4eb1b75c54871d84d76f4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6ff3f7b5bcf4eb1b75c54871d84d76f4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6ff3f7b5bcf4eb1b75c54871d84d76f4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 198;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DEBUG );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_passed_check == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_passed_check = tmp_assign_source_1;

    tmp_cond_value_1 = var_passed_check;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_return_value = PyList_New( 0 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W018 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_W018 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "W018" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ff3f7b5bcf4eb1b75c54871d84d76f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ff3f7b5bcf4eb1b75c54871d84d76f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ff3f7b5bcf4eb1b75c54871d84d76f4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6ff3f7b5bcf4eb1b75c54871d84d76f4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6ff3f7b5bcf4eb1b75c54871d84d76f4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6ff3f7b5bcf4eb1b75c54871d84d76f4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6ff3f7b5bcf4eb1b75c54871d84d76f4,
        type_description_1,
        par_app_configs,
        par_kwargs,
        var_passed_check
    );


    // Release cached frame.
    if ( frame_6ff3f7b5bcf4eb1b75c54871d84d76f4 == cache_frame_6ff3f7b5bcf4eb1b75c54871d84d76f4 )
    {
        Py_DECREF( frame_6ff3f7b5bcf4eb1b75c54871d84d76f4 );
    }
    cache_frame_6ff3f7b5bcf4eb1b75c54871d84d76f4 = NULL;

    assertFrameObject( frame_6ff3f7b5bcf4eb1b75c54871d84d76f4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_12_check_debug );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

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

    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_12_check_debug );
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


static PyObject *impl_django$core$checks$security$base$$$function_13_check_xframe_deny( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_passed_check = NULL;
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
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_1663b6645b3c62168cb2e815e15f3904 = NULL;

    struct Nuitka_FrameObject *frame_1663b6645b3c62168cb2e815e15f3904;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1663b6645b3c62168cb2e815e15f3904, codeobj_1663b6645b3c62168cb2e815e15f3904, module_django$core$checks$security$base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1663b6645b3c62168cb2e815e15f3904 = cache_frame_1663b6645b3c62168cb2e815e15f3904;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1663b6645b3c62168cb2e815e15f3904 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1663b6645b3c62168cb2e815e15f3904 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain__xframe_middleware );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__xframe_middleware );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_xframe_middleware" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_1663b6645b3c62168cb2e815e15f3904->m_frame.f_lineno = 205;
    tmp_operand_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "ooo";
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 206;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_X_FRAME_OPTIONS );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_str_plain_DENY;
    tmp_or_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_passed_check == NULL );
    var_passed_check = tmp_assign_source_1;

    tmp_cond_value_1 = var_passed_check;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_return_value = PyList_New( 0 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_patch_middleware_message );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_patch_middleware_message );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "patch_middleware_message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W019 );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_W019 );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "W019" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_1663b6645b3c62168cb2e815e15f3904->m_frame.f_lineno = 208;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1663b6645b3c62168cb2e815e15f3904 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1663b6645b3c62168cb2e815e15f3904 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1663b6645b3c62168cb2e815e15f3904 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1663b6645b3c62168cb2e815e15f3904, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1663b6645b3c62168cb2e815e15f3904->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1663b6645b3c62168cb2e815e15f3904, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1663b6645b3c62168cb2e815e15f3904,
        type_description_1,
        par_app_configs,
        par_kwargs,
        var_passed_check
    );


    // Release cached frame.
    if ( frame_1663b6645b3c62168cb2e815e15f3904 == cache_frame_1663b6645b3c62168cb2e815e15f3904 )
    {
        Py_DECREF( frame_1663b6645b3c62168cb2e815e15f3904 );
    }
    cache_frame_1663b6645b3c62168cb2e815e15f3904 = NULL;

    assertFrameObject( frame_1663b6645b3c62168cb2e815e15f3904 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_13_check_xframe_deny );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

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

    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_13_check_xframe_deny );
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


static PyObject *impl_django$core$checks$security$base$$$function_14_check_allowed_hosts( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_b4eb0bb59ede038895c255e5bac97577 = NULL;

    struct Nuitka_FrameObject *frame_b4eb0bb59ede038895c255e5bac97577;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b4eb0bb59ede038895c255e5bac97577, codeobj_b4eb0bb59ede038895c255e5bac97577, module_django$core$checks$security$base, sizeof(void *)+sizeof(void *) );
    frame_b4eb0bb59ede038895c255e5bac97577 = cache_frame_b4eb0bb59ede038895c255e5bac97577;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b4eb0bb59ede038895c255e5bac97577 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b4eb0bb59ede038895c255e5bac97577 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 213;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ALLOWED_HOSTS );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 213;
        type_description_1 = "oo";
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
    tmp_return_value = PyList_New( 0 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W020 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_W020 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "W020" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 213;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4eb0bb59ede038895c255e5bac97577 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4eb0bb59ede038895c255e5bac97577 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4eb0bb59ede038895c255e5bac97577 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b4eb0bb59ede038895c255e5bac97577, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b4eb0bb59ede038895c255e5bac97577->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b4eb0bb59ede038895c255e5bac97577, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b4eb0bb59ede038895c255e5bac97577,
        type_description_1,
        par_app_configs,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_b4eb0bb59ede038895c255e5bac97577 == cache_frame_b4eb0bb59ede038895c255e5bac97577 )
    {
        Py_DECREF( frame_b4eb0bb59ede038895c255e5bac97577 );
    }
    cache_frame_b4eb0bb59ede038895c255e5bac97577 = NULL;

    assertFrameObject( frame_b4eb0bb59ede038895c255e5bac97577 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_14_check_allowed_hosts );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

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

    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$base$$$function_14_check_allowed_hosts );
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



static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_10_check_ssl_redirect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$base$$$function_10_check_ssl_redirect,
        const_str_plain_check_ssl_redirect,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_da3804abc9400e91f654206e0280da49,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_11_check_secret_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$base$$$function_11_check_secret_key,
        const_str_plain_check_secret_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9348d92837c3f11e802dac5660bded94,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_12_check_debug(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$base$$$function_12_check_debug,
        const_str_plain_check_debug,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6ff3f7b5bcf4eb1b75c54871d84d76f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_13_check_xframe_deny(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$base$$$function_13_check_xframe_deny,
        const_str_plain_check_xframe_deny,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1663b6645b3c62168cb2e815e15f3904,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_14_check_allowed_hosts(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$base$$$function_14_check_allowed_hosts,
        const_str_plain_check_allowed_hosts,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b4eb0bb59ede038895c255e5bac97577,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_1__security_middleware(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$base$$$function_1__security_middleware,
        const_str_plain__security_middleware,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_003d7c52d04bd2532cb65bae75cc9f1c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_2__xframe_middleware(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$base$$$function_2__xframe_middleware,
        const_str_plain__xframe_middleware,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e57585014c2d71113fbcfa86141c8f35,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_3_check_security_middleware(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$base$$$function_3_check_security_middleware,
        const_str_plain_check_security_middleware,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6049a9b3528d39af86674a634947672b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_4_check_xframe_options_middleware(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$base$$$function_4_check_xframe_options_middleware,
        const_str_plain_check_xframe_options_middleware,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_544cacf3f9e75717084777db4df44d0f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_5_check_sts(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$base$$$function_5_check_sts,
        const_str_plain_check_sts,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_731d7207a302d30c4091dfb474c0da41,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_6_check_sts_include_subdomains(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$base$$$function_6_check_sts_include_subdomains,
        const_str_plain_check_sts_include_subdomains,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ee1ed6b262be6cee0df3dce146f74232,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_7_check_sts_preload(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$base$$$function_7_check_sts_preload,
        const_str_plain_check_sts_preload,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d074a79f464c0be7e7e685f5b84cbae1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_8_check_content_type_nosniff(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$base$$$function_8_check_content_type_nosniff,
        const_str_plain_check_content_type_nosniff,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4662e6aed0a233cf9d1ac88acbcc68c7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$checks$security$base$$$function_9_check_xss_filter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$base$$$function_9_check_xss_filter,
        const_str_plain_check_xss_filter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6ea219b4fe90b506c8805b510440e54e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$core$checks$security$base =
{
    PyModuleDef_HEAD_INIT,
    "django.core.checks.security.base",   /* m_name */
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

MOD_INIT_DECL( django$core$checks$security$base )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$core$checks$security$base );
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
    puts("django.core.checks.security.base: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.core.checks.security.base: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$core$checks$security$base" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$core$checks$security$base = Py_InitModule4(
        "django.core.checks.security.base",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$core$checks$security$base = PyModule_Create( &mdef_django$core$checks$security$base );
#endif

    moduledict_django$core$checks$security$base = MODULE_DICT( module_django$core$checks$security$base );

    CHECK_OBJECT( module_django$core$checks$security$base );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b742d48a59f126ed32118ce778718dd8, module_django$core$checks$security$base );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    int tmp_res;
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
    struct Nuitka_FrameObject *frame_1988d8402dfec17c31cf39b3b6696f65;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_1988d8402dfec17c31cf39b3b6696f65 = MAKE_MODULE_FRAME( codeobj_1988d8402dfec17c31cf39b3b6696f65, module_django$core$checks$security$base );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1988d8402dfec17c31cf39b3b6696f65 );
    assert( Py_REFCNT( frame_1988d8402dfec17c31cf39b3b6696f65 ) == 2 );

    // Framed code:
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_b742d48a59f126ed32118ce778718dd8;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_d07d3ef1d520fb6ab19021ac149791b4;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
    tmp_globals_name_1 = (PyObject *)moduledict_django$core$checks$security$base;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_settings_tuple;
    tmp_level_name_1 = const_int_0;
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_settings );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_settings, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_empty;
    tmp_globals_name_2 = (PyObject *)moduledict_django$core$checks$security$base;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_Tags_str_plain_Warning_str_plain_register_tuple;
    tmp_level_name_2 = const_int_pos_2;
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 3;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Tags );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Tags, tmp_assign_source_9 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Warning );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Warning, tmp_assign_source_10 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_register );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_register, tmp_assign_source_11 );
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

    tmp_name_name_3 = const_str_plain_utils;
    tmp_globals_name_3 = (PyObject *)moduledict_django$core$checks$security$base;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_patch_middleware_message_tuple;
    tmp_level_name_3 = const_int_pos_2;
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 4;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_patch_middleware_message );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_patch_middleware_message, tmp_assign_source_12 );
    tmp_assign_source_13 = const_int_pos_50;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_SECRET_KEY_MIN_LENGTH, tmp_assign_source_13 );
    tmp_assign_source_14 = const_int_pos_5;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_SECRET_KEY_MIN_UNIQUE_CHARACTERS, tmp_assign_source_14 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 9;

        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = const_tuple_str_digest_4cffa6a369135c01ba8c7bb0482dd97f_tuple;
    tmp_kw_name_1 = PyDict_Copy( const_dict_535ed0ea547d084276ec78d0a087b010 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 9;
    tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W001, tmp_assign_source_15 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;

        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = const_tuple_str_digest_ab4520fbf4eb24060f8886a2de079c79_tuple;
    tmp_kw_name_2 = PyDict_Copy( const_dict_f60bac2c76bb9a94eb6ccfcbef6493c3 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 18;
    tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W002, tmp_assign_source_16 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;

        goto frame_exception_exit_1;
    }

    tmp_args_name_3 = const_tuple_str_digest_4237da244be6c8d828f8a3da42b25b30_tuple;
    tmp_kw_name_3 = PyDict_Copy( const_dict_8011c5b17088d5cc7d705346ed74628a );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 28;
    tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W004, tmp_assign_source_17 );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;

        goto frame_exception_exit_1;
    }

    tmp_args_name_4 = const_tuple_str_digest_1a3c22ee7308f57fed648b2f8e631a7d_tuple;
    tmp_kw_name_4 = PyDict_Copy( const_dict_9b2e10439b62f820911bf5c021f07b66 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 37;
    tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W005, tmp_assign_source_18 );
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;

        goto frame_exception_exit_1;
    }

    tmp_args_name_5 = const_tuple_str_digest_e36d8d3a23670e3052fc598695f30d71_tuple;
    tmp_kw_name_5 = PyDict_Copy( const_dict_a905da2815b7740e51bab6e7f6522e54 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 46;
    tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W006, tmp_assign_source_19 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;

        goto frame_exception_exit_1;
    }

    tmp_args_name_6 = const_tuple_str_digest_cd805ae109c7554a6af0215c586ecd08_tuple;
    tmp_kw_name_6 = PyDict_Copy( const_dict_38f122ec689b6fb15beeed6557e3098d );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 55;
    tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_kw_name_6 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W007, tmp_assign_source_20 );
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;

        goto frame_exception_exit_1;
    }

    tmp_args_name_7 = const_tuple_str_digest_efbdd61836acaebed935756d8a99cb99_tuple;
    tmp_kw_name_7 = PyDict_Copy( const_dict_48585f2aceb6814a0a8b65d7c2722be5 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 64;
    tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_kw_name_7 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W008, tmp_assign_source_21 );
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;

        goto frame_exception_exit_1;
    }

    tmp_args_name_8 = PyTuple_New( 1 );
    tmp_left_name_1 = const_str_digest_eaeabcb1d8b219b0629e4bd4ab1591fa;
    tmp_right_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_min_length;
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_SECRET_KEY_MIN_LENGTH );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECRET_KEY_MIN_LENGTH );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SECRET_KEY_MIN_LENGTH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_min_unique_chars;
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_SECRET_KEY_MIN_UNIQUE_CHARACTERS );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SECRET_KEY_MIN_UNIQUE_CHARACTERS );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SECRET_KEY_MIN_UNIQUE_CHARACTERS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_tuple_element_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_8 );

        exception_lineno = 74;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_1 );
    tmp_kw_name_8 = PyDict_Copy( const_dict_74929e49d2f4d4c21e69cf1771e2db66 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 73;
    tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    Py_DECREF( tmp_kw_name_8 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W009, tmp_assign_source_22 );
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;

        goto frame_exception_exit_1;
    }

    tmp_args_name_9 = const_tuple_str_digest_89b340e339315c7d557a2532585f7ace_tuple;
    tmp_kw_name_9 = PyDict_Copy( const_dict_c9b350854759402fecd9744355679669 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 84;
    tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_kw_name_9 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W018, tmp_assign_source_23 );
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;

        goto frame_exception_exit_1;
    }

    tmp_args_name_10 = const_tuple_str_digest_5728aef245c7b19e32e9923571be8935_tuple;
    tmp_kw_name_10 = PyDict_Copy( const_dict_0bcb603ccec271caa3b93727d48b215b );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 89;
    tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_kw_name_10 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W019, tmp_assign_source_24 );
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;

        goto frame_exception_exit_1;
    }

    tmp_args_name_11 = const_tuple_str_digest_f446229719b46e2bbeb39974a8211bf9_tuple;
    tmp_kw_name_11 = PyDict_Copy( const_dict_26a0e100ef37cdac206bb021d7bf21c3 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 99;
    tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_kw_name_11 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W020, tmp_assign_source_25 );
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;

        goto frame_exception_exit_1;
    }

    tmp_args_name_12 = const_tuple_str_digest_1392b40047d1271b2001df94b25ce7c5_tuple;
    tmp_kw_name_12 = PyDict_Copy( const_dict_1cbb81a7567d35b6bdfcba829a4f7929 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 104;
    tmp_assign_source_26 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_kw_name_12 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_W021, tmp_assign_source_26 );
    tmp_assign_source_27 = MAKE_FUNCTION_django$core$checks$security$base$$$function_1__security_middleware(  );
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain__security_middleware, tmp_assign_source_27 );
    tmp_assign_source_28 = MAKE_FUNCTION_django$core$checks$security$base$$$function_2__xframe_middleware(  );
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain__xframe_middleware, tmp_assign_source_28 );
    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;

        goto frame_exception_exit_1;
    }

    tmp_args_name_13 = PyTuple_New( 1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_args_name_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_security );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_13 );

        exception_lineno = 121;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_2 );
    tmp_kw_name_13 = PyDict_Copy( const_dict_0a577841e91ac947852937086ce5c4d4 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 121;
    tmp_called_name_14 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_args_name_13 );
    Py_DECREF( tmp_kw_name_13 );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = MAKE_FUNCTION_django$core$checks$security$base$$$function_3_check_security_middleware(  );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_check_security_middleware, tmp_assign_source_29 );
    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;

        goto frame_exception_exit_1;
    }

    tmp_args_name_14 = PyTuple_New( 1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_args_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_security );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_14 );

        exception_lineno = 127;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_3 );
    tmp_kw_name_14 = PyDict_Copy( const_dict_0a577841e91ac947852937086ce5c4d4 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 127;
    tmp_called_name_16 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_14, tmp_kw_name_14 );
    Py_DECREF( tmp_args_name_14 );
    Py_DECREF( tmp_kw_name_14 );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = MAKE_FUNCTION_django$core$checks$security$base$$$function_4_check_xframe_options_middleware(  );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 127;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_check_xframe_options_middleware, tmp_assign_source_30 );
    tmp_called_name_19 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_19 == NULL ))
    {
        tmp_called_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;

        goto frame_exception_exit_1;
    }

    tmp_args_name_15 = PyTuple_New( 1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_args_name_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_security );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_15 );

        exception_lineno = 133;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_15, 0, tmp_tuple_element_4 );
    tmp_kw_name_15 = PyDict_Copy( const_dict_0a577841e91ac947852937086ce5c4d4 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 133;
    tmp_called_name_18 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_15, tmp_kw_name_15 );
    Py_DECREF( tmp_args_name_15 );
    Py_DECREF( tmp_kw_name_15 );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = MAKE_FUNCTION_django$core$checks$security$base$$$function_5_check_sts(  );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_check_sts, tmp_assign_source_31 );
    tmp_called_name_21 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_21 == NULL ))
    {
        tmp_called_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;

        goto frame_exception_exit_1;
    }

    tmp_args_name_16 = PyTuple_New( 1 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_args_name_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_security );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_16 );

        exception_lineno = 139;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_16, 0, tmp_tuple_element_5 );
    tmp_kw_name_16 = PyDict_Copy( const_dict_0a577841e91ac947852937086ce5c4d4 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 139;
    tmp_called_name_20 = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_16, tmp_kw_name_16 );
    Py_DECREF( tmp_args_name_16 );
    Py_DECREF( tmp_kw_name_16 );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = MAKE_FUNCTION_django$core$checks$security$base$$$function_6_check_sts_include_subdomains(  );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 139;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_check_sts_include_subdomains, tmp_assign_source_32 );
    tmp_called_name_23 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_23 == NULL ))
    {
        tmp_called_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;

        goto frame_exception_exit_1;
    }

    tmp_args_name_17 = PyTuple_New( 1 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_args_name_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_security );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_17 );

        exception_lineno = 149;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_17, 0, tmp_tuple_element_6 );
    tmp_kw_name_17 = PyDict_Copy( const_dict_0a577841e91ac947852937086ce5c4d4 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 149;
    tmp_called_name_22 = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_17, tmp_kw_name_17 );
    Py_DECREF( tmp_args_name_17 );
    Py_DECREF( tmp_kw_name_17 );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = MAKE_FUNCTION_django$core$checks$security$base$$$function_7_check_sts_preload(  );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_check_sts_preload, tmp_assign_source_33 );
    tmp_called_name_25 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_25 == NULL ))
    {
        tmp_called_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;

        goto frame_exception_exit_1;
    }

    tmp_args_name_18 = PyTuple_New( 1 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_args_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_security );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_18 );

        exception_lineno = 159;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_18, 0, tmp_tuple_element_7 );
    tmp_kw_name_18 = PyDict_Copy( const_dict_0a577841e91ac947852937086ce5c4d4 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 159;
    tmp_called_name_24 = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_18, tmp_kw_name_18 );
    Py_DECREF( tmp_args_name_18 );
    Py_DECREF( tmp_kw_name_18 );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = MAKE_FUNCTION_django$core$checks$security$base$$$function_8_check_content_type_nosniff(  );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 159;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_called_name_24 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_check_content_type_nosniff, tmp_assign_source_34 );
    tmp_called_name_27 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_27 == NULL ))
    {
        tmp_called_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;

        goto frame_exception_exit_1;
    }

    tmp_args_name_19 = PyTuple_New( 1 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_args_name_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_security );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_19 );

        exception_lineno = 168;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_19, 0, tmp_tuple_element_8 );
    tmp_kw_name_19 = PyDict_Copy( const_dict_0a577841e91ac947852937086ce5c4d4 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 168;
    tmp_called_name_26 = CALL_FUNCTION( tmp_called_name_27, tmp_args_name_19, tmp_kw_name_19 );
    Py_DECREF( tmp_args_name_19 );
    Py_DECREF( tmp_kw_name_19 );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = MAKE_FUNCTION_django$core$checks$security$base$$$function_9_check_xss_filter(  );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_check_xss_filter, tmp_assign_source_35 );
    tmp_called_name_29 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_29 == NULL ))
    {
        tmp_called_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;

        goto frame_exception_exit_1;
    }

    tmp_args_name_20 = PyTuple_New( 1 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_args_name_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_security );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_20 );

        exception_lineno = 177;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_20, 0, tmp_tuple_element_9 );
    tmp_kw_name_20 = PyDict_Copy( const_dict_0a577841e91ac947852937086ce5c4d4 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 177;
    tmp_called_name_28 = CALL_FUNCTION( tmp_called_name_29, tmp_args_name_20, tmp_kw_name_20 );
    Py_DECREF( tmp_args_name_20 );
    Py_DECREF( tmp_kw_name_20 );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_10 = MAKE_FUNCTION_django$core$checks$security$base$$$function_10_check_ssl_redirect(  );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
    }

    Py_DECREF( tmp_called_name_28 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_check_ssl_redirect, tmp_assign_source_36 );
    tmp_called_name_31 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_31 == NULL ))
    {
        tmp_called_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;

        goto frame_exception_exit_1;
    }

    tmp_args_name_21 = PyTuple_New( 1 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_args_name_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_security );
    if ( tmp_tuple_element_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_21 );

        exception_lineno = 186;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_21, 0, tmp_tuple_element_10 );
    tmp_kw_name_21 = PyDict_Copy( const_dict_0a577841e91ac947852937086ce5c4d4 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 186;
    tmp_called_name_30 = CALL_FUNCTION( tmp_called_name_31, tmp_args_name_21, tmp_kw_name_21 );
    Py_DECREF( tmp_args_name_21 );
    Py_DECREF( tmp_kw_name_21 );
    if ( tmp_called_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = MAKE_FUNCTION_django$core$checks$security$base$$$function_11_check_secret_key(  );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 186;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_called_name_30 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_check_secret_key, tmp_assign_source_37 );
    tmp_called_name_33 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_33 == NULL ))
    {
        tmp_called_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;

        goto frame_exception_exit_1;
    }

    tmp_args_name_22 = PyTuple_New( 1 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_args_name_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_security );
    if ( tmp_tuple_element_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_22 );

        exception_lineno = 196;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_22, 0, tmp_tuple_element_11 );
    tmp_kw_name_22 = PyDict_Copy( const_dict_0a577841e91ac947852937086ce5c4d4 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 196;
    tmp_called_name_32 = CALL_FUNCTION( tmp_called_name_33, tmp_args_name_22, tmp_kw_name_22 );
    Py_DECREF( tmp_args_name_22 );
    Py_DECREF( tmp_kw_name_22 );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = MAKE_FUNCTION_django$core$checks$security$base$$$function_12_check_debug(  );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 196;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
    }

    Py_DECREF( tmp_called_name_32 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_check_debug, tmp_assign_source_38 );
    tmp_called_name_35 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_35 == NULL ))
    {
        tmp_called_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_35 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;

        goto frame_exception_exit_1;
    }

    tmp_args_name_23 = PyTuple_New( 1 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_args_name_23 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_security );
    if ( tmp_tuple_element_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_23 );

        exception_lineno = 202;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_23, 0, tmp_tuple_element_12 );
    tmp_kw_name_23 = PyDict_Copy( const_dict_0a577841e91ac947852937086ce5c4d4 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 202;
    tmp_called_name_34 = CALL_FUNCTION( tmp_called_name_35, tmp_args_name_23, tmp_kw_name_23 );
    Py_DECREF( tmp_args_name_23 );
    Py_DECREF( tmp_kw_name_23 );
    if ( tmp_called_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_13 = MAKE_FUNCTION_django$core$checks$security$base$$$function_13_check_xframe_deny(  );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 202;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
    }

    Py_DECREF( tmp_called_name_34 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_check_xframe_deny, tmp_assign_source_39 );
    tmp_called_name_37 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_37 == NULL ))
    {
        tmp_called_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_37 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;

        goto frame_exception_exit_1;
    }

    tmp_args_name_24 = PyTuple_New( 1 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_args_name_24 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_13 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_security );
    if ( tmp_tuple_element_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_24 );

        exception_lineno = 211;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_24, 0, tmp_tuple_element_13 );
    tmp_kw_name_24 = PyDict_Copy( const_dict_0a577841e91ac947852937086ce5c4d4 );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 211;
    tmp_called_name_36 = CALL_FUNCTION( tmp_called_name_37, tmp_args_name_24, tmp_kw_name_24 );
    Py_DECREF( tmp_args_name_24 );
    Py_DECREF( tmp_kw_name_24 );
    if ( tmp_called_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = MAKE_FUNCTION_django$core$checks$security$base$$$function_14_check_allowed_hosts(  );
    frame_1988d8402dfec17c31cf39b3b6696f65->m_frame.f_lineno = 211;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, call_args );
    }

    Py_DECREF( tmp_called_name_36 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$base, (Nuitka_StringObject *)const_str_plain_check_allowed_hosts, tmp_assign_source_40 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1988d8402dfec17c31cf39b3b6696f65 );
#endif
    popFrameStack();

    assertFrameObject( frame_1988d8402dfec17c31cf39b3b6696f65 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1988d8402dfec17c31cf39b3b6696f65 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1988d8402dfec17c31cf39b3b6696f65, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1988d8402dfec17c31cf39b3b6696f65->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1988d8402dfec17c31cf39b3b6696f65, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_django$core$checks$security$base );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
