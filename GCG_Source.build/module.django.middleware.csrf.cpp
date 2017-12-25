/* Generated code for Python source for module 'django.middleware.csrf'
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

/* The _module_django$middleware$csrf is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$middleware$csrf;
PyDictObject *moduledict_django$middleware$csrf;

/* The module constants used, if any. */
extern PyObject *const_str_plain_force_text;
extern PyObject *const_str_digest_8bc4877a3eddf48ed5f347a2b6e7205e;
static PyObject *const_str_digest_b958e1e0b2936b890b91605c48d6a06c;
extern PyObject *const_str_plain_CSRF_COOKIE_SECURE;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_f3886fba69a3ba9cef56e9bbb901d1c7;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_index;
static PyObject *const_dict_6017f585f9a707ce78684b24ae6ca069;
static PyObject *const_tuple_str_plain_443_str_plain_80_tuple;
extern PyObject *const_str_plain_80;
extern PyObject *const_tuple_str_plain_get_callable_tuple;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_request;
static PyObject *const_tuple_str_plain_csrfmiddlewaretoken_str_empty_tuple;
extern PyObject *const_str_digest_de1637a5b7f41dbfb385ee782c95a853;
extern PyObject *const_str_plain_string;
static PyObject *const_str_digest_a38eae683ef2022b4dcb2eb894a1c64e;
extern PyObject *const_str_plain_zip;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_META;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_pairs;
extern PyObject *const_str_plain_POST;
extern PyObject *const_str_digest_e3393b2e61653c3df2c7d436c253bbee;
extern PyObject *const_str_plain_get_random_string;
extern PyObject *const_str_plain_csrf_token;
extern PyObject *const_tuple_str_plain_urlparse_tuple;
extern PyObject *const_str_plain_get_callable;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_strings_only;
static PyObject *const_str_plain_request_csrf_token;
static PyObject *const_str_digest_2c6efca98aff1d9f2efd5ce54367e5eb;
static PyObject *const_str_digest_5be07e0d6bda773de30308a0677f7d5b;
static PyObject *const_str_plain_csrf_exempt;
static PyObject *const_str_digest_20d80ef823cf9657900c02bb6116d23a;
extern PyObject *const_str_plain_GET;
extern PyObject *const_str_plain_scheme;
static PyObject *const_str_digest_77dcfc10f8de8189341828e72dbf56e2;
static PyObject *const_str_digest_0ff5cc2a874b3bb1d1b5978e287a5f21;
static PyObject *const_tuple_42527afe28885e5bac649d21c111590b_tuple;
extern PyObject *const_tuple_str_plain_token_tuple;
extern PyObject *const_str_plain_server_port;
static PyObject *const_str_plain_cipher;
static PyObject *const_tuple_str_plain_MiddlewareMixin_tuple;
static PyObject *const_str_plain_REASON_NO_REFERER;
extern PyObject *const_str_plain_CSRF_HEADER_NAME;
static PyObject *const_tuple_f05c3409d62473bc9fc0ccad10b2a5b5_tuple;
extern PyObject *const_str_plain_httponly;
static PyObject *const_str_digest_c691b180337d4fb9d7bd4a8ec727b150;
extern PyObject *const_str_plain_join;
extern PyObject *const_tuple_str_plain_request_tuple;
static PyObject *const_str_plain_cookie_token;
extern PyObject *const_tuple_str_plain_ImproperlyConfigured_tuple;
extern PyObject *const_str_plain_get_host;
static PyObject *const_str_plain_csrf_secret;
extern PyObject *const_str_plain_set_cookie;
extern PyObject *const_str_plain_CSRF_COOKIE_DOMAIN;
extern PyObject *const_str_plain_CSRF_COOKIE_PATH;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_reason;
extern PyObject *const_int_pos_32;
static PyObject *const_str_plain_CSRF_SECRET_LENGTH;
static PyObject *const_tuple_67401562c0bbacbfdc7b0b22bbe580ca_tuple;
static PyObject *const_str_plain__set_token;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_urlparse;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain_max_age;
static PyObject *const_str_plain_csrf_cookie_needs_reset;
static PyObject *const_str_digest_1bca753c16336cf391e24ee7682baeb4;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_host;
static PyObject *const_str_plain_CSRF_COOKIE_USED;
static PyObject *const_tuple_str_plain_constant_time_compare_str_plain_get_random_string_tuple;
extern PyObject *const_str_plain_https;
extern PyObject *const_str_digest_8c6fca57f2643e855097ab3f4172b9f5;
extern PyObject *const_str_plain_chars;
static PyObject *const_str_plain_REASON_MALFORMED_REFERER;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_int_pos_403;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
static PyObject *const_str_plain__reject;
static PyObject *const_tuple_str_plain_request_csrf_token_str_plain_csrf_token_tuple;
extern PyObject *const_str_plain_CSRF_TRUSTED_ORIGINS;
extern PyObject *const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
extern PyObject *const_str_plain_CSRF_COOKIE_NAME;
static PyObject *const_tuple_str_plain_HTTP_REFERER_tuple;
extern PyObject *const_str_digest_c48c695ee87e11eee5579c73bc52a23e;
static PyObject *const_str_digest_2b8c47c507e117bdd02470c56c4ad4cc;
static PyObject *const_str_digest_6cc24a02e694b8bcf6ff738804a94705;
static PyObject *const_tuple_str_plain_request_str_plain_csrf_secret_tuple;
static PyObject *const_str_plain__compare_salted_tokens;
extern PyObject *const_str_plain_CSRF_COOKIE_HTTPONLY;
static PyObject *const_str_digest_77f4a23e1e2121fbfebc4b9c575394d6;
extern PyObject *const_str_plain_netloc;
extern PyObject *const_str_digest_dfb6e1abbed3113ee07234fdc458a320;
static PyObject *const_str_digest_5a6f6cf92042af06b7676d1893b490d2;
extern PyObject *const_str_plain_digits;
static PyObject *const_str_plain_CSRF_ALLOWED_CHARS;
extern PyObject *const_str_plain_domain;
static PyObject *const_tuple_str_plain_CSRF_COOKIE_tuple;
extern PyObject *const_str_digest_f3705ed203bc8405b0735fb4179b32a8;
static PyObject *const_str_digest_d98f24ff380f5bbebff6734138c69b29;
static PyObject *const_str_plain_csrf_processing_done;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_ascii_letters;
extern PyObject *const_str_plain_process_view;
static PyObject *const_tuple_str_digest_d8b2868832c7d98b22c3bbf3bccc471d_tuple;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_status_code;
static PyObject *const_str_digest_528c4dd96355eb6654445a236ff77f73;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_is_same_domain;
extern PyObject *const_str_plain_session;
extern PyObject *const_str_plain_errors;
static PyObject *const_str_plain_rotate_token;
static PyObject *const_str_plain_callback_args;
static PyObject *const_str_plain__sanitize_token;
static PyObject *const_str_plain_good_referer;
static PyObject *const_str_plain__CLASSES;
static PyObject *const_str_plain__csrftoken;
static PyObject *const_str_plain__unsalt_cipher_token;
static PyObject *const_str_plain_csrfmiddlewaretoken;
static PyObject *const_str_digest_13d2bf429de9b06e953d98af7a5cd3fa;
extern PyObject *const_str_digest_5ed11698e149f372a4e77ae4cd628aa6;
extern PyObject *const_str_plain_salt;
extern PyObject *const_str_plain_constant_time_compare;
extern PyObject *const_str_plain_ImproperlyConfigured;
static PyObject *const_str_plain__get_token;
extern PyObject *const_str_plain_token;
extern PyObject *const_str_plain_ModuleSpec;
static PyObject *const_str_plain_CSRF_TOKEN_LENGTH;
static PyObject *const_str_digest_19f542475a7d8557a8d173b720e32d6a;
static PyObject *const_str_plain_csrf_cookie_set;
extern PyObject *const_str_plain_TRACE;
extern PyObject *const_str_plain_COOKIES;
static PyObject *const_str_digest_e932c10134c07ef9a7ca3401f05e2cb6;
extern PyObject *const_str_plain_process_response;
extern PyObject *const_str_digest_8445a3de86be347d3bb4adc957ee409b;
extern PyObject *const_tuple_str_plain_force_text_tuple;
extern PyObject *const_int_0;
static PyObject *const_str_digest_f92fa82c40b6af299bd7a92a219433a9;
extern PyObject *const_str_digest_9b40607a55961c64eeb5675a39cb5170;
static PyObject *const_str_digest_276de122fb91f92298f7d1b3dd5d1926;
extern PyObject *const_str_plain_CSRF_FAILURE_VIEW;
static PyObject *const_tuple_905b22868b33a6f5418b5225f783c838_tuple;
static PyObject *const_str_plain__get_failure_view;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain_Cookie;
static PyObject *const_str_digest_e1c371f62d94e47bc480941d5b55cfe1;
static PyObject *const_str_plain_good_hosts;
extern PyObject *const_tuple_str_plain_settings_tuple;
extern PyObject *const_str_plain__accept;
extern PyObject *const_str_plain_extra;
extern PyObject *const_str_plain_search;
static PyObject *const_str_plain__salt_cipher_secret;
static PyObject *const_str_plain_CsrfViewMiddleware;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_warning;
static PyObject *const_tuple_1bd97af9b005aa18298f897bf1ce8383_tuple;
extern PyObject *const_str_plain_MiddlewareMixin;
extern PyObject *const_str_plain_settings;
static PyObject *const_str_plain__dont_enforce_csrf_checks;
extern PyObject *const_str_plain_callback;
extern PyObject *const_str_plain_SESSION_COOKIE_DOMAIN;
extern PyObject *const_str_plain_secret;
static PyObject *const_str_plain_REASON_BAD_REFERER;
extern PyObject *const_str_plain_process_request;
static PyObject *const_str_plain__get_new_csrf_token;
static PyObject *const_tuple_str_plain_self_str_plain_request_str_plain_csrf_token_tuple;
static PyObject *const_str_plain_REASON_INSECURE_REFERER;
static PyObject *const_str_digest_3fb2efc9383f57655c400c2bcdf87b4c;
extern PyObject *const_str_plain_HEAD;
extern PyObject *const_str_plain_443;
static PyObject *const_tuple_1e902dac3170fa673773120f80fb5491_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_get_token;
extern PyObject *const_tuple_str_plain_self_str_plain_request_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_request_str_plain_reason_tuple;
static PyObject *const_str_plain_REASON_NO_CSRF_COOKIE;
static PyObject *const_tuple_fe0479847c4acba98f8338cab675b941_tuple;
extern PyObject *const_str_plain_allowed_chars;
static PyObject *const_str_plain_REASON_BAD_TOKEN;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_str_plain_patch_vary_headers_tuple;
static PyObject *const_str_digest_d8b2868832c7d98b22c3bbf3bccc471d;
static PyObject *const_tuple_str_plain_CSRF_COOKIE_USED_false_tuple;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_patch_vary_headers;
extern PyObject *const_str_plain_CSRF_COOKIE_AGE;
extern PyObject *const_str_plain_is_secure;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_geturl;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_MIDDLEWARE;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_CSRF_USE_SESSIONS;
static PyObject *const_str_plain_HTTP_REFERER;
extern PyObject *const_str_plain_logger;
extern PyObject *const_str_plain_get_port;
extern PyObject *const_str_plain_OPTIONS;
static PyObject *const_tuple_a88b9955ce8f928eae6313d4654c2c95_tuple;
static PyObject *const_str_digest_ec31042997db393532f04d858e071e5a;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_75ce16ec324f86fa884598b8c9986b5b;
static PyObject *const_str_plain_CSRF_SESSION_KEY;
extern PyObject *const_str_plain_method;
static PyObject *const_str_digest_96395e38d8d65f90297c9cc5020fbffe;
static PyObject *const_tuple_str_plain_is_same_domain_tuple;
extern PyObject *const_str_plain_get;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_d5e75a80092adae170d52beb5a693ccb;
static PyObject *const_str_plain_CSRF_COOKIE;
extern PyObject *const_str_plain_secure;
extern PyObject *const_str_plain_logging;
extern PyObject *const_tuple_str_plain_zip_tuple;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_callback_kwargs;
extern PyObject *const_str_digest_6fed4619fa8d4c69fdb5c74f190acfee;
extern PyObject *const_tuple_str_plain_self_str_plain_request_str_plain_response_tuple;
static PyObject *const_str_plain__get_new_csrf_string;
static PyObject *const_str_digest_909cff9eccda92c6f0db6738c389a1f8;
extern PyObject *const_tuple_str_plain_Cookie_tuple;
static PyObject *const_str_plain_referer;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_b958e1e0b2936b890b91605c48d6a06c = UNSTREAM_STRING( &constant_bin[ 1094642 ], 38, 0 );
    const_str_digest_f3886fba69a3ba9cef56e9bbb901d1c7 = UNSTREAM_STRING( &constant_bin[ 1094680 ], 34, 0 );
    const_dict_6017f585f9a707ce78684b24ae6ca069 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_6017f585f9a707ce78684b24ae6ca069, const_str_plain_errors, const_str_plain_replace );
    PyDict_SetItem( const_dict_6017f585f9a707ce78684b24ae6ca069, const_str_plain_strings_only, Py_True );
    assert( PyDict_Size( const_dict_6017f585f9a707ce78684b24ae6ca069 ) == 2 );
    const_tuple_str_plain_443_str_plain_80_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_443_str_plain_80_tuple, 0, const_str_plain_443 ); Py_INCREF( const_str_plain_443 );
    PyTuple_SET_ITEM( const_tuple_str_plain_443_str_plain_80_tuple, 1, const_str_plain_80 ); Py_INCREF( const_str_plain_80 );
    const_tuple_str_plain_csrfmiddlewaretoken_str_empty_tuple = PyTuple_New( 2 );
    const_str_plain_csrfmiddlewaretoken = UNSTREAM_STRING( &constant_bin[ 1094714 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_csrfmiddlewaretoken_str_empty_tuple, 0, const_str_plain_csrfmiddlewaretoken ); Py_INCREF( const_str_plain_csrfmiddlewaretoken );
    PyTuple_SET_ITEM( const_tuple_str_plain_csrfmiddlewaretoken_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_str_digest_a38eae683ef2022b4dcb2eb894a1c64e = UNSTREAM_STRING( &constant_bin[ 1094733 ], 31, 0 );
    const_str_plain_request_csrf_token = UNSTREAM_STRING( &constant_bin[ 1094764 ], 18, 1 );
    const_str_digest_2c6efca98aff1d9f2efd5ce54367e5eb = UNSTREAM_STRING( &constant_bin[ 1094782 ], 32, 0 );
    const_str_digest_5be07e0d6bda773de30308a0677f7d5b = UNSTREAM_STRING( &constant_bin[ 1094814 ], 134, 0 );
    const_str_plain_csrf_exempt = UNSTREAM_STRING( &constant_bin[ 1094948 ], 11, 1 );
    const_str_digest_20d80ef823cf9657900c02bb6116d23a = UNSTREAM_STRING( &constant_bin[ 1094959 ], 25, 0 );
    const_str_digest_77dcfc10f8de8189341828e72dbf56e2 = UNSTREAM_STRING( &constant_bin[ 1094984 ], 35, 0 );
    const_str_digest_0ff5cc2a874b3bb1d1b5978e287a5f21 = UNSTREAM_STRING( &constant_bin[ 1095019 ], 37, 0 );
    const_tuple_42527afe28885e5bac649d21c111590b_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_42527afe28885e5bac649d21c111590b_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_42527afe28885e5bac649d21c111590b_tuple, 1, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    const_str_plain_referer = UNSTREAM_STRING( &constant_bin[ 1095056 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_42527afe28885e5bac649d21c111590b_tuple, 2, const_str_plain_referer ); Py_INCREF( const_str_plain_referer );
    const_str_plain_cipher = UNSTREAM_STRING( &constant_bin[ 1094648 ], 6, 1 );
    const_tuple_str_plain_MiddlewareMixin_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MiddlewareMixin_tuple, 0, const_str_plain_MiddlewareMixin ); Py_INCREF( const_str_plain_MiddlewareMixin );
    const_str_plain_REASON_NO_REFERER = UNSTREAM_STRING( &constant_bin[ 1095063 ], 17, 1 );
    const_tuple_f05c3409d62473bc9fc0ccad10b2a5b5_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_f05c3409d62473bc9fc0ccad10b2a5b5_tuple, 0, const_str_plain_GET ); Py_INCREF( const_str_plain_GET );
    PyTuple_SET_ITEM( const_tuple_f05c3409d62473bc9fc0ccad10b2a5b5_tuple, 1, const_str_plain_HEAD ); Py_INCREF( const_str_plain_HEAD );
    PyTuple_SET_ITEM( const_tuple_f05c3409d62473bc9fc0ccad10b2a5b5_tuple, 2, const_str_plain_OPTIONS ); Py_INCREF( const_str_plain_OPTIONS );
    PyTuple_SET_ITEM( const_tuple_f05c3409d62473bc9fc0ccad10b2a5b5_tuple, 3, const_str_plain_TRACE ); Py_INCREF( const_str_plain_TRACE );
    const_str_digest_c691b180337d4fb9d7bd4a8ec727b150 = UNSTREAM_STRING( &constant_bin[ 1095080 ], 26, 0 );
    const_str_plain_cookie_token = UNSTREAM_STRING( &constant_bin[ 1095106 ], 12, 1 );
    const_str_plain_csrf_secret = UNSTREAM_STRING( &constant_bin[ 1095118 ], 11, 1 );
    const_str_plain_CSRF_SECRET_LENGTH = UNSTREAM_STRING( &constant_bin[ 1095129 ], 18, 1 );
    const_tuple_67401562c0bbacbfdc7b0b22bbe580ca_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_67401562c0bbacbfdc7b0b22bbe580ca_tuple, 0, const_str_plain_token ); Py_INCREF( const_str_plain_token );
    PyTuple_SET_ITEM( const_tuple_67401562c0bbacbfdc7b0b22bbe580ca_tuple, 1, const_str_plain_salt ); Py_INCREF( const_str_plain_salt );
    PyTuple_SET_ITEM( const_tuple_67401562c0bbacbfdc7b0b22bbe580ca_tuple, 2, const_str_plain_chars ); Py_INCREF( const_str_plain_chars );
    PyTuple_SET_ITEM( const_tuple_67401562c0bbacbfdc7b0b22bbe580ca_tuple, 3, const_str_plain_pairs ); Py_INCREF( const_str_plain_pairs );
    PyTuple_SET_ITEM( const_tuple_67401562c0bbacbfdc7b0b22bbe580ca_tuple, 4, const_str_plain_secret ); Py_INCREF( const_str_plain_secret );
    const_str_plain__set_token = UNSTREAM_STRING( &constant_bin[ 1095147 ], 10, 1 );
    const_str_plain_csrf_cookie_needs_reset = UNSTREAM_STRING( &constant_bin[ 1095157 ], 23, 1 );
    const_str_digest_1bca753c16336cf391e24ee7682baeb4 = UNSTREAM_STRING( &constant_bin[ 1095180 ], 250, 0 );
    const_str_plain_CSRF_COOKIE_USED = UNSTREAM_STRING( &constant_bin[ 1095430 ], 16, 1 );
    const_tuple_str_plain_constant_time_compare_str_plain_get_random_string_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_constant_time_compare_str_plain_get_random_string_tuple, 0, const_str_plain_constant_time_compare ); Py_INCREF( const_str_plain_constant_time_compare );
    PyTuple_SET_ITEM( const_tuple_str_plain_constant_time_compare_str_plain_get_random_string_tuple, 1, const_str_plain_get_random_string ); Py_INCREF( const_str_plain_get_random_string );
    const_str_plain_REASON_MALFORMED_REFERER = UNSTREAM_STRING( &constant_bin[ 1095446 ], 24, 1 );
    const_str_plain__reject = UNSTREAM_STRING( &constant_bin[ 1095099 ], 7, 1 );
    const_tuple_str_plain_request_csrf_token_str_plain_csrf_token_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_request_csrf_token_str_plain_csrf_token_tuple, 0, const_str_plain_request_csrf_token ); Py_INCREF( const_str_plain_request_csrf_token );
    PyTuple_SET_ITEM( const_tuple_str_plain_request_csrf_token_str_plain_csrf_token_tuple, 1, const_str_plain_csrf_token ); Py_INCREF( const_str_plain_csrf_token );
    const_tuple_str_plain_HTTP_REFERER_tuple = PyTuple_New( 1 );
    const_str_plain_HTTP_REFERER = UNSTREAM_STRING( &constant_bin[ 1095470 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTP_REFERER_tuple, 0, const_str_plain_HTTP_REFERER ); Py_INCREF( const_str_plain_HTTP_REFERER );
    const_str_digest_2b8c47c507e117bdd02470c56c4ad4cc = UNSTREAM_STRING( &constant_bin[ 1095482 ], 146, 0 );
    const_str_digest_6cc24a02e694b8bcf6ff738804a94705 = UNSTREAM_STRING( &constant_bin[ 1095628 ], 443, 0 );
    const_tuple_str_plain_request_str_plain_csrf_secret_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_request_str_plain_csrf_secret_tuple, 0, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_str_plain_request_str_plain_csrf_secret_tuple, 1, const_str_plain_csrf_secret ); Py_INCREF( const_str_plain_csrf_secret );
    const_str_plain__compare_salted_tokens = UNSTREAM_STRING( &constant_bin[ 1096071 ], 22, 1 );
    const_str_digest_77f4a23e1e2121fbfebc4b9c575394d6 = UNSTREAM_STRING( &constant_bin[ 1096093 ], 26, 0 );
    const_str_digest_5a6f6cf92042af06b7676d1893b490d2 = UNSTREAM_STRING( &constant_bin[ 1096119 ], 67, 0 );
    const_str_plain_CSRF_ALLOWED_CHARS = UNSTREAM_STRING( &constant_bin[ 1095529 ], 18, 1 );
    const_tuple_str_plain_CSRF_COOKIE_tuple = PyTuple_New( 1 );
    const_str_plain_CSRF_COOKIE = UNSTREAM_STRING( &constant_bin[ 769907 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CSRF_COOKIE_tuple, 0, const_str_plain_CSRF_COOKIE ); Py_INCREF( const_str_plain_CSRF_COOKIE );
    const_str_digest_d98f24ff380f5bbebff6734138c69b29 = UNSTREAM_STRING( &constant_bin[ 1096186 ], 64, 0 );
    const_str_plain_csrf_processing_done = UNSTREAM_STRING( &constant_bin[ 1096250 ], 20, 1 );
    const_str_plain_ascii_letters = UNSTREAM_STRING( &constant_bin[ 1096270 ], 13, 1 );
    const_tuple_str_digest_d8b2868832c7d98b22c3bbf3bccc471d_tuple = PyTuple_New( 1 );
    const_str_digest_d8b2868832c7d98b22c3bbf3bccc471d = UNSTREAM_STRING( &constant_bin[ 1096283 ], 20, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d8b2868832c7d98b22c3bbf3bccc471d_tuple, 0, const_str_digest_d8b2868832c7d98b22c3bbf3bccc471d ); Py_INCREF( const_str_digest_d8b2868832c7d98b22c3bbf3bccc471d );
    const_str_digest_528c4dd96355eb6654445a236ff77f73 = UNSTREAM_STRING( &constant_bin[ 1096303 ], 12, 0 );
    const_str_plain_rotate_token = UNSTREAM_STRING( &constant_bin[ 1096315 ], 12, 1 );
    const_str_plain_callback_args = UNSTREAM_STRING( &constant_bin[ 1096327 ], 13, 1 );
    const_str_plain__sanitize_token = UNSTREAM_STRING( &constant_bin[ 1096340 ], 15, 1 );
    const_str_plain_good_referer = UNSTREAM_STRING( &constant_bin[ 1096355 ], 12, 1 );
    const_str_plain__CLASSES = UNSTREAM_STRING( &constant_bin[ 762143 ], 8, 1 );
    const_str_plain__csrftoken = UNSTREAM_STRING( &constant_bin[ 1096367 ], 10, 1 );
    const_str_plain__unsalt_cipher_token = UNSTREAM_STRING( &constant_bin[ 1096377 ], 20, 1 );
    const_str_digest_13d2bf429de9b06e953d98af7a5cd3fa = UNSTREAM_STRING( &constant_bin[ 1096397 ], 47, 0 );
    const_str_plain__get_token = UNSTREAM_STRING( &constant_bin[ 1096444 ], 10, 1 );
    const_str_plain_CSRF_TOKEN_LENGTH = UNSTREAM_STRING( &constant_bin[ 1096454 ], 17, 1 );
    const_str_digest_19f542475a7d8557a8d173b720e32d6a = UNSTREAM_STRING( &constant_bin[ 1096471 ], 20, 0 );
    const_str_plain_csrf_cookie_set = UNSTREAM_STRING( &constant_bin[ 1096491 ], 15, 1 );
    const_str_digest_e932c10134c07ef9a7ca3401f05e2cb6 = UNSTREAM_STRING( &constant_bin[ 1096506 ], 29, 0 );
    const_str_digest_f92fa82c40b6af299bd7a92a219433a9 = UNSTREAM_STRING( &constant_bin[ 1096535 ], 146, 0 );
    const_str_digest_276de122fb91f92298f7d1b3dd5d1926 = UNSTREAM_STRING( &constant_bin[ 1096681 ], 106, 0 );
    const_tuple_905b22868b33a6f5418b5225f783c838_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_905b22868b33a6f5418b5225f783c838_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_905b22868b33a6f5418b5225f783c838_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_905b22868b33a6f5418b5225f783c838_tuple, 2, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
    PyTuple_SET_ITEM( const_tuple_905b22868b33a6f5418b5225f783c838_tuple, 3, const_str_plain_callback_args ); Py_INCREF( const_str_plain_callback_args );
    const_str_plain_callback_kwargs = UNSTREAM_STRING( &constant_bin[ 1096787 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_905b22868b33a6f5418b5225f783c838_tuple, 4, const_str_plain_callback_kwargs ); Py_INCREF( const_str_plain_callback_kwargs );
    PyTuple_SET_ITEM( const_tuple_905b22868b33a6f5418b5225f783c838_tuple, 5, const_str_plain_referer ); Py_INCREF( const_str_plain_referer );
    PyTuple_SET_ITEM( const_tuple_905b22868b33a6f5418b5225f783c838_tuple, 6, const_str_plain_good_referer ); Py_INCREF( const_str_plain_good_referer );
    PyTuple_SET_ITEM( const_tuple_905b22868b33a6f5418b5225f783c838_tuple, 7, const_str_plain_server_port ); Py_INCREF( const_str_plain_server_port );
    const_str_plain_good_hosts = UNSTREAM_STRING( &constant_bin[ 1096802 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_905b22868b33a6f5418b5225f783c838_tuple, 8, const_str_plain_good_hosts ); Py_INCREF( const_str_plain_good_hosts );
    PyTuple_SET_ITEM( const_tuple_905b22868b33a6f5418b5225f783c838_tuple, 9, const_str_plain_reason ); Py_INCREF( const_str_plain_reason );
    PyTuple_SET_ITEM( const_tuple_905b22868b33a6f5418b5225f783c838_tuple, 10, const_str_plain_csrf_token ); Py_INCREF( const_str_plain_csrf_token );
    PyTuple_SET_ITEM( const_tuple_905b22868b33a6f5418b5225f783c838_tuple, 11, const_str_plain_request_csrf_token ); Py_INCREF( const_str_plain_request_csrf_token );
    const_str_plain__get_failure_view = UNSTREAM_STRING( &constant_bin[ 1096812 ], 17, 1 );
    const_str_digest_e1c371f62d94e47bc480941d5b55cfe1 = UNSTREAM_STRING( &constant_bin[ 1096829 ], 50, 0 );
    const_str_plain__salt_cipher_secret = UNSTREAM_STRING( &constant_bin[ 1094642 ], 19, 1 );
    const_str_plain_CsrfViewMiddleware = UNSTREAM_STRING( &constant_bin[ 769846 ], 18, 1 );
    const_tuple_1bd97af9b005aa18298f897bf1ce8383_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_1bd97af9b005aa18298f897bf1ce8383_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_1bd97af9b005aa18298f897bf1ce8383_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_1bd97af9b005aa18298f897bf1ce8383_tuple, 2, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_1bd97af9b005aa18298f897bf1ce8383_tuple, 3, const_str_plain_chars ); Py_INCREF( const_str_plain_chars );
    const_str_plain__dont_enforce_csrf_checks = UNSTREAM_STRING( &constant_bin[ 1096879 ], 25, 1 );
    const_str_plain_REASON_BAD_REFERER = UNSTREAM_STRING( &constant_bin[ 1096904 ], 18, 1 );
    const_str_plain__get_new_csrf_token = UNSTREAM_STRING( &constant_bin[ 1096922 ], 19, 1 );
    const_tuple_str_plain_self_str_plain_request_str_plain_csrf_token_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_str_plain_csrf_token_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_str_plain_csrf_token_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_str_plain_csrf_token_tuple, 2, const_str_plain_csrf_token ); Py_INCREF( const_str_plain_csrf_token );
    const_str_plain_REASON_INSECURE_REFERER = UNSTREAM_STRING( &constant_bin[ 1096941 ], 23, 1 );
    const_str_digest_3fb2efc9383f57655c400c2bcdf87b4c = UNSTREAM_STRING( &constant_bin[ 1096964 ], 18, 0 );
    const_tuple_1e902dac3170fa673773120f80fb5491_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_1e902dac3170fa673773120f80fb5491_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_1e902dac3170fa673773120f80fb5491_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_1e902dac3170fa673773120f80fb5491_tuple, 2, const_str_plain_chars ); Py_INCREF( const_str_plain_chars );
    const_tuple_str_plain_self_str_plain_request_str_plain_reason_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_str_plain_reason_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_str_plain_reason_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_str_plain_reason_tuple, 2, const_str_plain_reason ); Py_INCREF( const_str_plain_reason );
    const_str_plain_REASON_NO_CSRF_COOKIE = UNSTREAM_STRING( &constant_bin[ 1096982 ], 21, 1 );
    const_tuple_fe0479847c4acba98f8338cab675b941_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_fe0479847c4acba98f8338cab675b941_tuple, 0, const_str_plain_secret ); Py_INCREF( const_str_plain_secret );
    PyTuple_SET_ITEM( const_tuple_fe0479847c4acba98f8338cab675b941_tuple, 1, const_str_plain_salt ); Py_INCREF( const_str_plain_salt );
    PyTuple_SET_ITEM( const_tuple_fe0479847c4acba98f8338cab675b941_tuple, 2, const_str_plain_chars ); Py_INCREF( const_str_plain_chars );
    PyTuple_SET_ITEM( const_tuple_fe0479847c4acba98f8338cab675b941_tuple, 3, const_str_plain_pairs ); Py_INCREF( const_str_plain_pairs );
    PyTuple_SET_ITEM( const_tuple_fe0479847c4acba98f8338cab675b941_tuple, 4, const_str_plain_cipher ); Py_INCREF( const_str_plain_cipher );
    const_str_plain_REASON_BAD_TOKEN = UNSTREAM_STRING( &constant_bin[ 1097003 ], 16, 1 );
    const_tuple_str_plain_patch_vary_headers_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_patch_vary_headers_tuple, 0, const_str_plain_patch_vary_headers ); Py_INCREF( const_str_plain_patch_vary_headers );
    const_tuple_str_plain_CSRF_COOKIE_USED_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CSRF_COOKIE_USED_false_tuple, 0, const_str_plain_CSRF_COOKIE_USED ); Py_INCREF( const_str_plain_CSRF_COOKIE_USED );
    PyTuple_SET_ITEM( const_tuple_str_plain_CSRF_COOKIE_USED_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_tuple_a88b9955ce8f928eae6313d4654c2c95_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_a88b9955ce8f928eae6313d4654c2c95_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a88b9955ce8f928eae6313d4654c2c95_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_a88b9955ce8f928eae6313d4654c2c95_tuple, 2, const_str_plain_cookie_token ); Py_INCREF( const_str_plain_cookie_token );
    PyTuple_SET_ITEM( const_tuple_a88b9955ce8f928eae6313d4654c2c95_tuple, 3, const_str_plain_csrf_token ); Py_INCREF( const_str_plain_csrf_token );
    const_str_digest_ec31042997db393532f04d858e071e5a = UNSTREAM_STRING( &constant_bin[ 1097019 ], 57, 0 );
    const_str_digest_75ce16ec324f86fa884598b8c9986b5b = UNSTREAM_STRING( &constant_bin[ 1097076 ], 31, 0 );
    const_str_plain_CSRF_SESSION_KEY = UNSTREAM_STRING( &constant_bin[ 1097107 ], 16, 1 );
    const_str_digest_96395e38d8d65f90297c9cc5020fbffe = UNSTREAM_STRING( &constant_bin[ 1097123 ], 209, 0 );
    const_tuple_str_plain_is_same_domain_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_is_same_domain_tuple, 0, const_str_plain_is_same_domain ); Py_INCREF( const_str_plain_is_same_domain );
    const_str_digest_d5e75a80092adae170d52beb5a693ccb = UNSTREAM_STRING( &constant_bin[ 1097332 ], 29, 0 );
    const_str_plain__get_new_csrf_string = UNSTREAM_STRING( &constant_bin[ 1097361 ], 20, 1 );
    const_str_digest_909cff9eccda92c6f0db6738c389a1f8 = UNSTREAM_STRING( &constant_bin[ 1097381 ], 39, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$middleware$csrf( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c522af76b12d161a5a7def732ecf7e09;
static PyCodeObject *codeobj_c60ec3a886bcfce0c1c0f56a9e1e0525;
static PyCodeObject *codeobj_2183d0ecbab640d2e6bf04265a3bd267;
static PyCodeObject *codeobj_839f39cfd8ee6b163fc1e6898afecc90;
static PyCodeObject *codeobj_8b6ddbe05b65cb6a3925f5fb5ff2b1f1;
static PyCodeObject *codeobj_dfaa2c4bac0ee8bf6b24e6966f4b0388;
static PyCodeObject *codeobj_a41d04a516f461f8e4c73abd1fe4c890;
static PyCodeObject *codeobj_95129c0f73942d229061917f307c240f;
static PyCodeObject *codeobj_04ec3370ee83108d04c73a2b2bb8df3c;
static PyCodeObject *codeobj_9d747a879279c62001dec18ce4977171;
static PyCodeObject *codeobj_cceb81424050c3589ad7c40878f0af10;
static PyCodeObject *codeobj_a04258be7f0cac833bd593995cdad215;
static PyCodeObject *codeobj_73618c46153ca4920721ed8697e6da01;
static PyCodeObject *codeobj_406720cb4987061dca0129696b633898;
static PyCodeObject *codeobj_a48f87f8759c5bf601b176c5661842f4;
static PyCodeObject *codeobj_6df0c3ddf92d7b36989372bdcaa18b9f;
static PyCodeObject *codeobj_3e7360070656751df5d0cf192a7de208;
static PyCodeObject *codeobj_afd640035fbeb8a867233bfecc251341;
static PyCodeObject *codeobj_b3766c196237054be449b6ef1b29f9f8;
static PyCodeObject *codeobj_9698d6f83ff0811aa91b951130c2aa99;
static PyCodeObject *codeobj_0f0563beeef0433726832608fe75c9f5;
static PyCodeObject *codeobj_a2c6f4e15c75dda039f3a805ed12321d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_20d80ef823cf9657900c02bb6116d23a );
    codeobj_c522af76b12d161a5a7def732ecf7e09 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 57, const_tuple_1e902dac3170fa673773120f80fb5491_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_c60ec3a886bcfce0c1c0f56a9e1e0525 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 58, const_tuple_1bd97af9b005aa18298f897bf1ce8383_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_2183d0ecbab640d2e6bf04265a3bd267 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 71, const_tuple_1e902dac3170fa673773120f80fb5491_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_839f39cfd8ee6b163fc1e6898afecc90 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 72, const_tuple_1bd97af9b005aa18298f897bf1ce8383_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_8b6ddbe05b65cb6a3925f5fb5ff2b1f1 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 285, const_tuple_42527afe28885e5bac649d21c111590b_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_dfaa2c4bac0ee8bf6b24e6966f4b0388 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_75ce16ec324f86fa884598b8c9986b5b, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_a41d04a516f461f8e4c73abd1fe4c890 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__accept, 148, const_tuple_str_plain_self_str_plain_request_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_95129c0f73942d229061917f307c240f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compare_salted_tokens, 128, const_tuple_str_plain_request_csrf_token_str_plain_csrf_token_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_04ec3370ee83108d04c73a2b2bb8df3c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_failure_view, 39, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_9d747a879279c62001dec18ce4977171 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_new_csrf_string, 46, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_cceb81424050c3589ad7c40878f0af10 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_new_csrf_token, 76, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_a04258be7f0cac833bd593995cdad215 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_token, 165, const_tuple_a88b9955ce8f928eae6313d4654c2c95_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_73618c46153ca4920721ed8697e6da01 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__reject, 155, const_tuple_str_plain_self_str_plain_request_str_plain_reason_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_406720cb4987061dca0129696b633898 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__salt_cipher_secret, 50, const_tuple_fe0479847c4acba98f8338cab675b941_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_a48f87f8759c5bf601b176c5661842f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sanitize_token, 111, const_tuple_str_plain_token_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_6df0c3ddf92d7b36989372bdcaa18b9f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__set_token, 188, const_tuple_str_plain_self_str_plain_request_str_plain_response_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_3e7360070656751df5d0cf192a7de208 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unsalt_cipher_token, 62, const_tuple_67401562c0bbacbfdc7b0b22bbe580ca_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_afd640035fbeb8a867233bfecc251341 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_token, 80, const_tuple_str_plain_request_str_plain_csrf_secret_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_b3766c196237054be449b6ef1b29f9f8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_process_request, 204, const_tuple_str_plain_self_str_plain_request_str_plain_csrf_token_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_9698d6f83ff0811aa91b951130c2aa99 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_process_response, 320, const_tuple_str_plain_self_str_plain_request_str_plain_response_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_0f0563beeef0433726832608fe75c9f5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_process_view, 210, const_tuple_905b22868b33a6f5418b5225f783c838_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_a2c6f4e15c75dda039f3a805ed12321d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rotate_token, 99, const_tuple_str_plain_request_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_3_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_3_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_3_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_3_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$middleware$csrf$$$function_15_process_view$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void django$middleware$csrf$$$function_15_process_view$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_10__accept(  );


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_11__reject(  );


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_12__get_token(  );


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_13__set_token(  );


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_14_process_request(  );


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_15_process_view(  );


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_16_process_response(  );


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_1__get_failure_view(  );


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_2__get_new_csrf_string(  );


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_3__salt_cipher_secret(  );


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_4__unsalt_cipher_token(  );


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_5__get_new_csrf_token(  );


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_6_get_token(  );


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_7_rotate_token(  );


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_8__sanitize_token(  );


static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_9__compare_salted_tokens(  );


// The module function definitions.
static PyObject *impl_django$middleware$csrf$$$function_1__get_failure_view( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_04ec3370ee83108d04c73a2b2bb8df3c = NULL;

    struct Nuitka_FrameObject *frame_04ec3370ee83108d04c73a2b2bb8df3c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_04ec3370ee83108d04c73a2b2bb8df3c, codeobj_04ec3370ee83108d04c73a2b2bb8df3c, module_django$middleware$csrf, 0 );
    frame_04ec3370ee83108d04c73a2b2bb8df3c = cache_frame_04ec3370ee83108d04c73a2b2bb8df3c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_04ec3370ee83108d04c73a2b2bb8df3c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_04ec3370ee83108d04c73a2b2bb8df3c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_get_callable );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_callable );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_callable" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;

        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 43;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CSRF_FAILURE_VIEW );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    frame_04ec3370ee83108d04c73a2b2bb8df3c->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_04ec3370ee83108d04c73a2b2bb8df3c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_04ec3370ee83108d04c73a2b2bb8df3c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_04ec3370ee83108d04c73a2b2bb8df3c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_04ec3370ee83108d04c73a2b2bb8df3c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_04ec3370ee83108d04c73a2b2bb8df3c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_04ec3370ee83108d04c73a2b2bb8df3c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_04ec3370ee83108d04c73a2b2bb8df3c,
        type_description_1
    );


    // Release cached frame.
    if ( frame_04ec3370ee83108d04c73a2b2bb8df3c == cache_frame_04ec3370ee83108d04c73a2b2bb8df3c )
    {
        Py_DECREF( frame_04ec3370ee83108d04c73a2b2bb8df3c );
    }
    cache_frame_04ec3370ee83108d04c73a2b2bb8df3c = NULL;

    assertFrameObject( frame_04ec3370ee83108d04c73a2b2bb8df3c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_1__get_failure_view );
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


static PyObject *impl_django$middleware$csrf$$$function_2__get_new_csrf_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_9d747a879279c62001dec18ce4977171 = NULL;

    struct Nuitka_FrameObject *frame_9d747a879279c62001dec18ce4977171;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_9d747a879279c62001dec18ce4977171, codeobj_9d747a879279c62001dec18ce4977171, module_django$middleware$csrf, 0 );
    frame_9d747a879279c62001dec18ce4977171 = cache_frame_9d747a879279c62001dec18ce4977171;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9d747a879279c62001dec18ce4977171 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9d747a879279c62001dec18ce4977171 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_get_random_string );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_random_string );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_random_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CSRF_SECRET_LENGTH );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CSRF_SECRET_LENGTH );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CSRF_SECRET_LENGTH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_allowed_chars;
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CSRF_ALLOWED_CHARS );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CSRF_ALLOWED_CHARS );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CSRF_ALLOWED_CHARS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_9d747a879279c62001dec18ce4977171->m_frame.f_lineno = 47;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d747a879279c62001dec18ce4977171 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d747a879279c62001dec18ce4977171 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d747a879279c62001dec18ce4977171 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d747a879279c62001dec18ce4977171, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d747a879279c62001dec18ce4977171->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d747a879279c62001dec18ce4977171, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9d747a879279c62001dec18ce4977171,
        type_description_1
    );


    // Release cached frame.
    if ( frame_9d747a879279c62001dec18ce4977171 == cache_frame_9d747a879279c62001dec18ce4977171 )
    {
        Py_DECREF( frame_9d747a879279c62001dec18ce4977171 );
    }
    cache_frame_9d747a879279c62001dec18ce4977171 = NULL;

    assertFrameObject( frame_9d747a879279c62001dec18ce4977171 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_2__get_new_csrf_string );
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


static PyObject *impl_django$middleware$csrf$$$function_3__salt_cipher_secret( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_secret = python_pars[ 0 ];
    PyObject *var_salt = NULL;
    struct Nuitka_CellObject *var_chars = PyCell_EMPTY();
    PyObject *var_pairs = NULL;
    PyObject *var_cipher = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_genexpr_3__$0 = NULL;
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
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_406720cb4987061dca0129696b633898 = NULL;

    struct Nuitka_FrameObject *frame_406720cb4987061dca0129696b633898;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_406720cb4987061dca0129696b633898, codeobj_406720cb4987061dca0129696b633898, module_django$middleware$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_406720cb4987061dca0129696b633898 = cache_frame_406720cb4987061dca0129696b633898;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_406720cb4987061dca0129696b633898 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_406720cb4987061dca0129696b633898 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__get_new_csrf_string );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_new_csrf_string );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_new_csrf_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }

    frame_406720cb4987061dca0129696b633898->m_frame.f_lineno = 55;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }
    assert( var_salt == NULL );
    var_salt = tmp_assign_source_1;

    tmp_assign_source_2 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CSRF_ALLOWED_CHARS );

    if (unlikely( tmp_assign_source_2 == NULL ))
    {
        tmp_assign_source_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CSRF_ALLOWED_CHARS );
    }

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CSRF_ALLOWED_CHARS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = PyCell_GET( var_chars );
        PyCell_SET( var_chars, tmp_assign_source_2 );
        Py_INCREF( tmp_assign_source_2 );
        Py_XDECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_zip );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zip );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = par_secret;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "secret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_4;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_1_genexpr_context,
        module_django$middleware$csrf,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_b958e1e0b2936b890b91605c48d6a06c,
#endif
        codeobj_c522af76b12d161a5a7def732ecf7e09,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = var_chars;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[1] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 2 ); 


    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_3__salt_cipher_secret );
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
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_3__salt_cipher_secret );
    return NULL;
    outline_result_1:;
    tmp_args_element_name_1 = tmp_outline_return_value_1;
    tmp_iter_arg_2 = var_salt;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "salt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_2__$0 == NULL );
    tmp_genexpr_2__$0 = tmp_assign_source_5;

    // Tried code:
    tmp_outline_return_value_2 = Nuitka_Generator_New(
        django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_2_genexpr_context,
        module_django$middleware$csrf,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_b958e1e0b2936b890b91605c48d6a06c,
#endif
        codeobj_c522af76b12d161a5a7def732ecf7e09,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_2)->m_closure[0] = var_chars;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_2)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_2)->m_closure[1] = PyCell_NEW0( tmp_genexpr_2__$0 );
    assert( Py_SIZE( tmp_outline_return_value_2 ) >= 2 ); 


    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_3__salt_cipher_secret );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
    Py_DECREF( tmp_genexpr_2__$0 );
    tmp_genexpr_2__$0 = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
    Py_DECREF( tmp_genexpr_2__$0 );
    tmp_genexpr_2__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_3__salt_cipher_secret );
    return NULL;
    outline_result_2:;
    tmp_args_element_name_2 = tmp_outline_return_value_2;
    frame_406720cb4987061dca0129696b633898->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }
    assert( var_pairs == NULL );
    var_pairs = tmp_assign_source_3;

    tmp_source_name_1 = const_str_empty;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( tmp_called_name_3 != NULL );
    tmp_iter_arg_3 = var_pairs;

    CHECK_OBJECT( tmp_iter_arg_3 );
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_3__$0 == NULL );
    tmp_genexpr_3__$0 = tmp_assign_source_7;

    // Tried code:
    tmp_outline_return_value_3 = Nuitka_Generator_New(
        django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_3_genexpr_context,
        module_django$middleware$csrf,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_b958e1e0b2936b890b91605c48d6a06c,
#endif
        codeobj_c60ec3a886bcfce0c1c0f56a9e1e0525,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_3)->m_closure[0] = var_chars;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_3)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_3)->m_closure[1] = PyCell_NEW0( tmp_genexpr_3__$0 );
    assert( Py_SIZE( tmp_outline_return_value_3 ) >= 2 ); 


    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_3__salt_cipher_secret );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_3__$0 );
    Py_DECREF( tmp_genexpr_3__$0 );
    tmp_genexpr_3__$0 = NULL;

    goto outline_result_3;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_3__$0 );
    Py_DECREF( tmp_genexpr_3__$0 );
    tmp_genexpr_3__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_3__salt_cipher_secret );
    return NULL;
    outline_result_3:;
    tmp_args_element_name_3 = tmp_outline_return_value_3;
    frame_406720cb4987061dca0129696b633898->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }
    assert( var_cipher == NULL );
    var_cipher = tmp_assign_source_6;

    tmp_left_name_1 = var_salt;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "salt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = var_cipher;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_406720cb4987061dca0129696b633898 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_406720cb4987061dca0129696b633898 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_406720cb4987061dca0129696b633898 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_406720cb4987061dca0129696b633898, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_406720cb4987061dca0129696b633898->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_406720cb4987061dca0129696b633898, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_406720cb4987061dca0129696b633898,
        type_description_1,
        par_secret,
        var_salt,
        var_chars,
        var_pairs,
        var_cipher
    );


    // Release cached frame.
    if ( frame_406720cb4987061dca0129696b633898 == cache_frame_406720cb4987061dca0129696b633898 )
    {
        Py_DECREF( frame_406720cb4987061dca0129696b633898 );
    }
    cache_frame_406720cb4987061dca0129696b633898 = NULL;

    assertFrameObject( frame_406720cb4987061dca0129696b633898 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_3__salt_cipher_secret );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_secret );
    par_secret = NULL;

    Py_XDECREF( var_salt );
    var_salt = NULL;

    CHECK_OBJECT( (PyObject *)var_chars );
    Py_DECREF( var_chars );
    var_chars = NULL;

    Py_XDECREF( var_pairs );
    var_pairs = NULL;

    Py_XDECREF( var_cipher );
    var_cipher = NULL;

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

    Py_XDECREF( par_secret );
    par_secret = NULL;

    Py_XDECREF( var_salt );
    var_salt = NULL;

    CHECK_OBJECT( (PyObject *)var_chars );
    Py_DECREF( var_chars );
    var_chars = NULL;

    Py_XDECREF( var_pairs );
    var_pairs = NULL;

    Py_XDECREF( var_cipher );
    var_cipher = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_3__salt_cipher_secret );
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
struct django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_1_genexpr_locals {
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
static PyObject *django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
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
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_c522af76b12d161a5a7def732ecf7e09, module_django$middleware$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
            exception_lineno = 57;
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

    if ( generator->m_closure[0] == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "chars" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_index );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = var_x;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    generator->m_frame->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
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
            var_x,
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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_2_genexpr_locals {
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
static PyObject *django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator )
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
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_c522af76b12d161a5a7def732ecf7e09, module_django$middleware$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
            exception_lineno = 57;
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

    if ( generator->m_closure[0] == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "chars" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_index );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = var_x;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    generator->m_frame->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
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
            var_x,
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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_3_genexpr_locals {
    PyObject *var_x
    PyObject *var_y
    PyObject *tmp_iter_value_0
    PyObject *tmp_tuple_unpack_1__element_1
    PyObject *tmp_tuple_unpack_1__element_2
    PyObject *tmp_tuple_unpack_1__source_iter
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_3_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void django$middleware$csrf$$$function_3__salt_cipher_secret$$$genexpr_3_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_c60ec3a886bcfce0c1c0f56a9e1e0525, module_django$middleware$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
            type_description_1 = "Nooc";
            exception_lineno = 58;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_1 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "Nooc";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


        type_description_1 = "Nooc";
        exception_lineno = 58;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "Nooc";
        exception_lineno = 58;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                type_description_1 = "Nooc";
                exception_lineno = 58;
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

        type_description_1 = "Nooc";
        exception_lineno = 58;
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

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_5;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_y;
        var_y = tmp_assign_source_6;
        Py_INCREF( var_y );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    if ( generator->m_closure[0] == NULL )
    {
        tmp_subscribed_name_1 = NULL;
    }
    else
    {
        tmp_subscribed_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "chars" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "Nooc";
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

        exception_lineno = 58;
        type_description_1 = "Nooc";
        goto try_except_handler_2;
    }

    tmp_right_name_1 = var_y;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "Nooc";
        goto try_except_handler_2;
    }

    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "Nooc";
        goto try_except_handler_2;
    }
    if ( generator->m_closure[0] == NULL )
    {
        tmp_len_arg_1 = NULL;
    }
    else
    {
        tmp_len_arg_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_len_arg_1 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "chars" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "Nooc";
        goto try_except_handler_2;
    }

    tmp_right_name_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 58;
        type_description_1 = "Nooc";
        goto try_except_handler_2;
    }
    tmp_subscript_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_subscript_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "Nooc";
        goto try_except_handler_2;
    }
    tmp_expression_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "Nooc";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "Nooc";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "Nooc";
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

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

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
            var_x,
            var_y,
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

    goto try_end_4;
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

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;


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


static PyObject *impl_django$middleware$csrf$$$function_4__unsalt_cipher_token( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_token = python_pars[ 0 ];
    PyObject *var_salt = NULL;
    struct Nuitka_CellObject *var_chars = PyCell_EMPTY();
    PyObject *var_pairs = NULL;
    PyObject *var_secret = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_genexpr_3__$0 = NULL;
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
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
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
    static struct Nuitka_FrameObject *cache_frame_3e7360070656751df5d0cf192a7de208 = NULL;

    struct Nuitka_FrameObject *frame_3e7360070656751df5d0cf192a7de208;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3e7360070656751df5d0cf192a7de208, codeobj_3e7360070656751df5d0cf192a7de208, module_django$middleware$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3e7360070656751df5d0cf192a7de208 = cache_frame_3e7360070656751df5d0cf192a7de208;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3e7360070656751df5d0cf192a7de208 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3e7360070656751df5d0cf192a7de208 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = par_token;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_start_name_1 = Py_None;
    tmp_stop_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CSRF_SECRET_LENGTH );

    if (unlikely( tmp_stop_name_1 == NULL ))
    {
        tmp_stop_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CSRF_SECRET_LENGTH );
    }

    if ( tmp_stop_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CSRF_SECRET_LENGTH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }

    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    assert( tmp_subscript_name_1 != NULL );
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }
    assert( var_salt == NULL );
    var_salt = tmp_assign_source_1;

    tmp_subscribed_name_2 = par_token;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_2 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CSRF_SECRET_LENGTH );

    if (unlikely( tmp_start_name_2 == NULL ))
    {
        tmp_start_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CSRF_SECRET_LENGTH );
    }

    if ( tmp_start_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CSRF_SECRET_LENGTH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }

    tmp_stop_name_2 = Py_None;
    tmp_step_name_2 = Py_None;
    tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
    assert( tmp_subscript_name_2 != NULL );
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscript_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_token;
        par_token = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CSRF_ALLOWED_CHARS );

    if (unlikely( tmp_assign_source_3 == NULL ))
    {
        tmp_assign_source_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CSRF_ALLOWED_CHARS );
    }

    if ( tmp_assign_source_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CSRF_ALLOWED_CHARS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = PyCell_GET( var_chars );
        PyCell_SET( var_chars, tmp_assign_source_3 );
        Py_INCREF( tmp_assign_source_3 );
        Py_XDECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_zip );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zip );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = par_token;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_5;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_1_genexpr_context,
        module_django$middleware$csrf,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_909cff9eccda92c6f0db6738c389a1f8,
#endif
        codeobj_2183d0ecbab640d2e6bf04265a3bd267,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = var_chars;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[1] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 2 ); 


    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_4__unsalt_cipher_token );
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
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_4__unsalt_cipher_token );
    return NULL;
    outline_result_1:;
    tmp_args_element_name_1 = tmp_outline_return_value_1;
    tmp_iter_arg_2 = var_salt;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "salt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_2__$0 == NULL );
    tmp_genexpr_2__$0 = tmp_assign_source_6;

    // Tried code:
    tmp_outline_return_value_2 = Nuitka_Generator_New(
        django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_2_genexpr_context,
        module_django$middleware$csrf,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_909cff9eccda92c6f0db6738c389a1f8,
#endif
        codeobj_2183d0ecbab640d2e6bf04265a3bd267,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_2)->m_closure[0] = var_chars;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_2)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_2)->m_closure[1] = PyCell_NEW0( tmp_genexpr_2__$0 );
    assert( Py_SIZE( tmp_outline_return_value_2 ) >= 2 ); 


    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_4__unsalt_cipher_token );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
    Py_DECREF( tmp_genexpr_2__$0 );
    tmp_genexpr_2__$0 = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
    Py_DECREF( tmp_genexpr_2__$0 );
    tmp_genexpr_2__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_4__unsalt_cipher_token );
    return NULL;
    outline_result_2:;
    tmp_args_element_name_2 = tmp_outline_return_value_2;
    frame_3e7360070656751df5d0cf192a7de208->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }
    assert( var_pairs == NULL );
    var_pairs = tmp_assign_source_4;

    tmp_source_name_1 = const_str_empty;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( tmp_called_name_2 != NULL );
    tmp_iter_arg_3 = var_pairs;

    CHECK_OBJECT( tmp_iter_arg_3 );
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_3__$0 == NULL );
    tmp_genexpr_3__$0 = tmp_assign_source_8;

    // Tried code:
    tmp_outline_return_value_3 = Nuitka_Generator_New(
        django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_3_genexpr_context,
        module_django$middleware$csrf,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_909cff9eccda92c6f0db6738c389a1f8,
#endif
        codeobj_839f39cfd8ee6b163fc1e6898afecc90,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_3)->m_closure[0] = var_chars;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_3)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_3)->m_closure[1] = PyCell_NEW0( tmp_genexpr_3__$0 );
    assert( Py_SIZE( tmp_outline_return_value_3 ) >= 2 ); 


    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_4__unsalt_cipher_token );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_3__$0 );
    Py_DECREF( tmp_genexpr_3__$0 );
    tmp_genexpr_3__$0 = NULL;

    goto outline_result_3;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_3__$0 );
    Py_DECREF( tmp_genexpr_3__$0 );
    tmp_genexpr_3__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_4__unsalt_cipher_token );
    return NULL;
    outline_result_3:;
    tmp_args_element_name_3 = tmp_outline_return_value_3;
    frame_3e7360070656751df5d0cf192a7de208->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oocoo";
        goto frame_exception_exit_1;
    }
    assert( var_secret == NULL );
    var_secret = tmp_assign_source_7;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_3e7360070656751df5d0cf192a7de208 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3e7360070656751df5d0cf192a7de208 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3e7360070656751df5d0cf192a7de208, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3e7360070656751df5d0cf192a7de208->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3e7360070656751df5d0cf192a7de208, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3e7360070656751df5d0cf192a7de208,
        type_description_1,
        par_token,
        var_salt,
        var_chars,
        var_pairs,
        var_secret
    );


    // Release cached frame.
    if ( frame_3e7360070656751df5d0cf192a7de208 == cache_frame_3e7360070656751df5d0cf192a7de208 )
    {
        Py_DECREF( frame_3e7360070656751df5d0cf192a7de208 );
    }
    cache_frame_3e7360070656751df5d0cf192a7de208 = NULL;

    assertFrameObject( frame_3e7360070656751df5d0cf192a7de208 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_secret;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_4__unsalt_cipher_token );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_token );
    par_token = NULL;

    Py_XDECREF( var_salt );
    var_salt = NULL;

    CHECK_OBJECT( (PyObject *)var_chars );
    Py_DECREF( var_chars );
    var_chars = NULL;

    Py_XDECREF( var_pairs );
    var_pairs = NULL;

    Py_XDECREF( var_secret );
    var_secret = NULL;

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

    Py_XDECREF( par_token );
    par_token = NULL;

    Py_XDECREF( var_salt );
    var_salt = NULL;

    CHECK_OBJECT( (PyObject *)var_chars );
    Py_DECREF( var_chars );
    var_chars = NULL;

    Py_XDECREF( var_pairs );
    var_pairs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_4__unsalt_cipher_token );
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
struct django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_1_genexpr_locals {
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
static PyObject *django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
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
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_2183d0ecbab640d2e6bf04265a3bd267, module_django$middleware$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
            exception_lineno = 71;
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

    if ( generator->m_closure[0] == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "chars" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_index );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = var_x;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    generator->m_frame->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
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
            var_x,
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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_2_genexpr_locals {
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
static PyObject *django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator )
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
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_2183d0ecbab640d2e6bf04265a3bd267, module_django$middleware$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
            exception_lineno = 71;
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

    if ( generator->m_closure[0] == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "chars" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_index );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = var_x;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    generator->m_frame->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
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
            var_x,
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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_3_genexpr_locals {
    PyObject *var_x
    PyObject *var_y
    PyObject *tmp_iter_value_0
    PyObject *tmp_tuple_unpack_1__element_1
    PyObject *tmp_tuple_unpack_1__element_2
    PyObject *tmp_tuple_unpack_1__source_iter
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_3_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void django$middleware$csrf$$$function_4__unsalt_cipher_token$$$genexpr_3_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_839f39cfd8ee6b163fc1e6898afecc90, module_django$middleware$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
            type_description_1 = "Nooc";
            exception_lineno = 72;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_1 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "Nooc";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


        type_description_1 = "Nooc";
        exception_lineno = 72;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "Nooc";
        exception_lineno = 72;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                type_description_1 = "Nooc";
                exception_lineno = 72;
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

        type_description_1 = "Nooc";
        exception_lineno = 72;
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

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_5;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_y;
        var_y = tmp_assign_source_6;
        Py_INCREF( var_y );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    if ( generator->m_closure[0] == NULL )
    {
        tmp_subscribed_name_1 = NULL;
    }
    else
    {
        tmp_subscribed_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "chars" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "Nooc";
        goto try_except_handler_2;
    }

    tmp_left_name_1 = var_x;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "Nooc";
        goto try_except_handler_2;
    }

    tmp_right_name_1 = var_y;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "Nooc";
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_subscript_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "Nooc";
        goto try_except_handler_2;
    }
    tmp_expression_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "Nooc";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "Nooc";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "Nooc";
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

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

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
            var_x,
            var_y,
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

    goto try_end_4;
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

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;


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


static PyObject *impl_django$middleware$csrf$$$function_5__get_new_csrf_token( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_cceb81424050c3589ad7c40878f0af10 = NULL;

    struct Nuitka_FrameObject *frame_cceb81424050c3589ad7c40878f0af10;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_cceb81424050c3589ad7c40878f0af10, codeobj_cceb81424050c3589ad7c40878f0af10, module_django$middleware$csrf, 0 );
    frame_cceb81424050c3589ad7c40878f0af10 = cache_frame_cceb81424050c3589ad7c40878f0af10;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cceb81424050c3589ad7c40878f0af10 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cceb81424050c3589ad7c40878f0af10 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__salt_cipher_secret );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__salt_cipher_secret );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_salt_cipher_secret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;

        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__get_new_csrf_string );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_new_csrf_string );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_new_csrf_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;

        goto frame_exception_exit_1;
    }

    frame_cceb81424050c3589ad7c40878f0af10->m_frame.f_lineno = 77;
    tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto frame_exception_exit_1;
    }
    frame_cceb81424050c3589ad7c40878f0af10->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cceb81424050c3589ad7c40878f0af10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cceb81424050c3589ad7c40878f0af10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cceb81424050c3589ad7c40878f0af10 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cceb81424050c3589ad7c40878f0af10, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cceb81424050c3589ad7c40878f0af10->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cceb81424050c3589ad7c40878f0af10, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cceb81424050c3589ad7c40878f0af10,
        type_description_1
    );


    // Release cached frame.
    if ( frame_cceb81424050c3589ad7c40878f0af10 == cache_frame_cceb81424050c3589ad7c40878f0af10 )
    {
        Py_DECREF( frame_cceb81424050c3589ad7c40878f0af10 );
    }
    cache_frame_cceb81424050c3589ad7c40878f0af10 = NULL;

    assertFrameObject( frame_cceb81424050c3589ad7c40878f0af10 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_5__get_new_csrf_token );
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


static PyObject *impl_django$middleware$csrf$$$function_6_get_token( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_request = python_pars[ 0 ];
    PyObject *var_csrf_secret = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_afd640035fbeb8a867233bfecc251341 = NULL;

    struct Nuitka_FrameObject *frame_afd640035fbeb8a867233bfecc251341;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_afd640035fbeb8a867233bfecc251341, codeobj_afd640035fbeb8a867233bfecc251341, module_django$middleware$csrf, sizeof(void *)+sizeof(void *) );
    frame_afd640035fbeb8a867233bfecc251341 = cache_frame_afd640035fbeb8a867233bfecc251341;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_afd640035fbeb8a867233bfecc251341 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_afd640035fbeb8a867233bfecc251341 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = const_str_plain_CSRF_COOKIE;
    tmp_source_name_1 = par_request;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_META );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__get_new_csrf_string );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_new_csrf_string );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_new_csrf_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_afd640035fbeb8a867233bfecc251341->m_frame.f_lineno = 91;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_csrf_secret == NULL );
    var_csrf_secret = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__salt_cipher_secret );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__salt_cipher_secret );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_salt_cipher_secret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_csrf_secret;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_afd640035fbeb8a867233bfecc251341->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_request;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_META );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = const_str_plain_CSRF_COOKIE;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__unsalt_cipher_token );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unsalt_cipher_token );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unsalt_cipher_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_request;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_META );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_CSRF_COOKIE;
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_afd640035fbeb8a867233bfecc251341->m_frame.f_lineno = 94;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_csrf_secret == NULL );
    var_csrf_secret = tmp_assign_source_2;

    branch_end_1:;
    tmp_ass_subvalue_2 = Py_True;
    tmp_source_name_4 = par_request;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_META );
    if ( tmp_ass_subscribed_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_2 = const_str_plain_CSRF_COOKIE_USED;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscribed_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__salt_cipher_secret );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__salt_cipher_secret );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_salt_cipher_secret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_csrf_secret;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "csrf_secret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_afd640035fbeb8a867233bfecc251341->m_frame.f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afd640035fbeb8a867233bfecc251341 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_afd640035fbeb8a867233bfecc251341 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afd640035fbeb8a867233bfecc251341 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_afd640035fbeb8a867233bfecc251341, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_afd640035fbeb8a867233bfecc251341->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_afd640035fbeb8a867233bfecc251341, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_afd640035fbeb8a867233bfecc251341,
        type_description_1,
        par_request,
        var_csrf_secret
    );


    // Release cached frame.
    if ( frame_afd640035fbeb8a867233bfecc251341 == cache_frame_afd640035fbeb8a867233bfecc251341 )
    {
        Py_DECREF( frame_afd640035fbeb8a867233bfecc251341 );
    }
    cache_frame_afd640035fbeb8a867233bfecc251341 = NULL;

    assertFrameObject( frame_afd640035fbeb8a867233bfecc251341 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_6_get_token );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_csrf_secret );
    var_csrf_secret = NULL;

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

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_csrf_secret );
    var_csrf_secret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_6_get_token );
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


static PyObject *impl_django$middleware$csrf$$$function_7_rotate_token( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_request = python_pars[ 0 ];
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a2c6f4e15c75dda039f3a805ed12321d = NULL;

    struct Nuitka_FrameObject *frame_a2c6f4e15c75dda039f3a805ed12321d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a2c6f4e15c75dda039f3a805ed12321d, codeobj_a2c6f4e15c75dda039f3a805ed12321d, module_django$middleware$csrf, sizeof(void *) );
    frame_a2c6f4e15c75dda039f3a805ed12321d = cache_frame_a2c6f4e15c75dda039f3a805ed12321d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a2c6f4e15c75dda039f3a805ed12321d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a2c6f4e15c75dda039f3a805ed12321d ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_request;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_META );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_update );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_CSRF_COOKIE_USED;
    tmp_dict_value_1 = Py_True;
    tmp_res = PyDict_SetItem( tmp_args_element_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_CSRF_COOKIE;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__get_new_csrf_token );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_new_csrf_token );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_new_csrf_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_a2c6f4e15c75dda039f3a805ed12321d->m_frame.f_lineno = 106;
    tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 106;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_args_element_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_a2c6f4e15c75dda039f3a805ed12321d->m_frame.f_lineno = 104;
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


        exception_lineno = 104;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_request;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_csrf_cookie_needs_reset, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2c6f4e15c75dda039f3a805ed12321d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2c6f4e15c75dda039f3a805ed12321d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a2c6f4e15c75dda039f3a805ed12321d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a2c6f4e15c75dda039f3a805ed12321d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a2c6f4e15c75dda039f3a805ed12321d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a2c6f4e15c75dda039f3a805ed12321d,
        type_description_1,
        par_request
    );


    // Release cached frame.
    if ( frame_a2c6f4e15c75dda039f3a805ed12321d == cache_frame_a2c6f4e15c75dda039f3a805ed12321d )
    {
        Py_DECREF( frame_a2c6f4e15c75dda039f3a805ed12321d );
    }
    cache_frame_a2c6f4e15c75dda039f3a805ed12321d = NULL;

    assertFrameObject( frame_a2c6f4e15c75dda039f3a805ed12321d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_7_rotate_token );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_request );
    par_request = NULL;

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

    Py_XDECREF( par_request );
    par_request = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_7_rotate_token );
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


static PyObject *impl_django$middleware$csrf$$$function_8__sanitize_token( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_token = python_pars[ 0 ];
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
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_a48f87f8759c5bf601b176c5661842f4 = NULL;

    struct Nuitka_FrameObject *frame_a48f87f8759c5bf601b176c5661842f4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a48f87f8759c5bf601b176c5661842f4, codeobj_a48f87f8759c5bf601b176c5661842f4, module_django$middleware$csrf, sizeof(void *) );
    frame_a48f87f8759c5bf601b176c5661842f4 = cache_frame_a48f87f8759c5bf601b176c5661842f4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a48f87f8759c5bf601b176c5661842f4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a48f87f8759c5bf601b176c5661842f4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_search );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_528c4dd96355eb6654445a236ff77f73;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_force_text );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_text );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_text" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_token;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_a48f87f8759c5bf601b176c5661842f4->m_frame.f_lineno = 113;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 113;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_a48f87f8759c5bf601b176c5661842f4->m_frame.f_lineno = 113;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 113;
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
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__get_new_csrf_token );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_new_csrf_token );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_new_csrf_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_a48f87f8759c5bf601b176c5661842f4->m_frame.f_lineno = 114;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_len_arg_1 = par_token;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CSRF_TOKEN_LENGTH );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CSRF_TOKEN_LENGTH );
    }

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CSRF_TOKEN_LENGTH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 115;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = par_token;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_len_arg_2 = par_token;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CSRF_SECRET_LENGTH );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CSRF_SECRET_LENGTH );
    }

    if ( tmp_compare_right_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CSRF_SECRET_LENGTH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 117;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__salt_cipher_secret );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__salt_cipher_secret );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_salt_cipher_secret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_token;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_a48f87f8759c5bf601b176c5661842f4->m_frame.f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_3:;
    branch_end_2:;
    branch_end_1:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__get_new_csrf_token );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_new_csrf_token );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_new_csrf_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_a48f87f8759c5bf601b176c5661842f4->m_frame.f_lineno = 125;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a48f87f8759c5bf601b176c5661842f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a48f87f8759c5bf601b176c5661842f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a48f87f8759c5bf601b176c5661842f4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a48f87f8759c5bf601b176c5661842f4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a48f87f8759c5bf601b176c5661842f4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a48f87f8759c5bf601b176c5661842f4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a48f87f8759c5bf601b176c5661842f4,
        type_description_1,
        par_token
    );


    // Release cached frame.
    if ( frame_a48f87f8759c5bf601b176c5661842f4 == cache_frame_a48f87f8759c5bf601b176c5661842f4 )
    {
        Py_DECREF( frame_a48f87f8759c5bf601b176c5661842f4 );
    }
    cache_frame_a48f87f8759c5bf601b176c5661842f4 = NULL;

    assertFrameObject( frame_a48f87f8759c5bf601b176c5661842f4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_8__sanitize_token );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_token );
    par_token = NULL;

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

    Py_XDECREF( par_token );
    par_token = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_8__sanitize_token );
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


static PyObject *impl_django$middleware$csrf$$$function_9__compare_salted_tokens( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_request_csrf_token = python_pars[ 0 ];
    PyObject *par_csrf_token = python_pars[ 1 ];
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
    static struct Nuitka_FrameObject *cache_frame_95129c0f73942d229061917f307c240f = NULL;

    struct Nuitka_FrameObject *frame_95129c0f73942d229061917f307c240f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_95129c0f73942d229061917f307c240f, codeobj_95129c0f73942d229061917f307c240f, module_django$middleware$csrf, sizeof(void *)+sizeof(void *) );
    frame_95129c0f73942d229061917f307c240f = cache_frame_95129c0f73942d229061917f307c240f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_95129c0f73942d229061917f307c240f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_95129c0f73942d229061917f307c240f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_constant_time_compare );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_constant_time_compare );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "constant_time_compare" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__unsalt_cipher_token );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unsalt_cipher_token );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unsalt_cipher_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_request_csrf_token;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_95129c0f73942d229061917f307c240f->m_frame.f_lineno = 132;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__unsalt_cipher_token );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unsalt_cipher_token );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unsalt_cipher_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_csrf_token;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "csrf_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_95129c0f73942d229061917f307c240f->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 133;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_95129c0f73942d229061917f307c240f->m_frame.f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95129c0f73942d229061917f307c240f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_95129c0f73942d229061917f307c240f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95129c0f73942d229061917f307c240f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_95129c0f73942d229061917f307c240f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_95129c0f73942d229061917f307c240f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_95129c0f73942d229061917f307c240f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_95129c0f73942d229061917f307c240f,
        type_description_1,
        par_request_csrf_token,
        par_csrf_token
    );


    // Release cached frame.
    if ( frame_95129c0f73942d229061917f307c240f == cache_frame_95129c0f73942d229061917f307c240f )
    {
        Py_DECREF( frame_95129c0f73942d229061917f307c240f );
    }
    cache_frame_95129c0f73942d229061917f307c240f = NULL;

    assertFrameObject( frame_95129c0f73942d229061917f307c240f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_9__compare_salted_tokens );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_request_csrf_token );
    par_request_csrf_token = NULL;

    Py_XDECREF( par_csrf_token );
    par_csrf_token = NULL;

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

    Py_XDECREF( par_request_csrf_token );
    par_request_csrf_token = NULL;

    Py_XDECREF( par_csrf_token );
    par_csrf_token = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_9__compare_salted_tokens );
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


static PyObject *impl_django$middleware$csrf$$$function_10__accept( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
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
    static struct Nuitka_FrameObject *cache_frame_a41d04a516f461f8e4c73abd1fe4c890 = NULL;

    struct Nuitka_FrameObject *frame_a41d04a516f461f8e4c73abd1fe4c890;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a41d04a516f461f8e4c73abd1fe4c890, codeobj_a41d04a516f461f8e4c73abd1fe4c890, module_django$middleware$csrf, sizeof(void *)+sizeof(void *) );
    frame_a41d04a516f461f8e4c73abd1fe4c890 = cache_frame_a41d04a516f461f8e4c73abd1fe4c890;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a41d04a516f461f8e4c73abd1fe4c890 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a41d04a516f461f8e4c73abd1fe4c890 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_request;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_csrf_processing_done, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a41d04a516f461f8e4c73abd1fe4c890 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a41d04a516f461f8e4c73abd1fe4c890 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a41d04a516f461f8e4c73abd1fe4c890, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a41d04a516f461f8e4c73abd1fe4c890->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a41d04a516f461f8e4c73abd1fe4c890, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a41d04a516f461f8e4c73abd1fe4c890,
        type_description_1,
        par_self,
        par_request
    );


    // Release cached frame.
    if ( frame_a41d04a516f461f8e4c73abd1fe4c890 == cache_frame_a41d04a516f461f8e4c73abd1fe4c890 )
    {
        Py_DECREF( frame_a41d04a516f461f8e4c73abd1fe4c890 );
    }
    cache_frame_a41d04a516f461f8e4c73abd1fe4c890 = NULL;

    assertFrameObject( frame_a41d04a516f461f8e4c73abd1fe4c890 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_10__accept );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request );
    par_request = NULL;

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

    Py_XDECREF( par_request );
    par_request = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_10__accept );
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


static PyObject *impl_django$middleware$csrf$$$function_11__reject( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_reason = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_73618c46153ca4920721ed8697e6da01 = NULL;

    struct Nuitka_FrameObject *frame_73618c46153ca4920721ed8697e6da01;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_73618c46153ca4920721ed8697e6da01, codeobj_73618c46153ca4920721ed8697e6da01, module_django$middleware$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_73618c46153ca4920721ed8697e6da01 = cache_frame_73618c46153ca4920721ed8697e6da01;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_73618c46153ca4920721ed8697e6da01 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_73618c46153ca4920721ed8697e6da01 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_logger );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warning );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_digest_3fb2efc9383f57655c400c2bcdf87b4c;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_reason;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reason" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_source_name_2 = par_request;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 157;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_extra;
    tmp_dict_value_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_2 = const_str_plain_status_code;
    tmp_dict_value_2 = const_int_pos_403;
    tmp_res = PyDict_SetItem( tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_request;
    tmp_dict_value_3 = par_request;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_dict_value_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_73618c46153ca4920721ed8697e6da01->m_frame.f_lineno = 156;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__get_failure_view );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_failure_view );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_failure_view" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_73618c46153ca4920721ed8697e6da01->m_frame.f_lineno = 163;
    tmp_called_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_request;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_4 = const_str_plain_reason;
    tmp_dict_value_4 = par_reason;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reason" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_73618c46153ca4920721ed8697e6da01->m_frame.f_lineno = 163;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_73618c46153ca4920721ed8697e6da01 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_73618c46153ca4920721ed8697e6da01 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_73618c46153ca4920721ed8697e6da01 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_73618c46153ca4920721ed8697e6da01, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_73618c46153ca4920721ed8697e6da01->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_73618c46153ca4920721ed8697e6da01, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_73618c46153ca4920721ed8697e6da01,
        type_description_1,
        par_self,
        par_request,
        par_reason
    );


    // Release cached frame.
    if ( frame_73618c46153ca4920721ed8697e6da01 == cache_frame_73618c46153ca4920721ed8697e6da01 )
    {
        Py_DECREF( frame_73618c46153ca4920721ed8697e6da01 );
    }
    cache_frame_73618c46153ca4920721ed8697e6da01 = NULL;

    assertFrameObject( frame_73618c46153ca4920721ed8697e6da01 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_11__reject );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_reason );
    par_reason = NULL;

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

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_reason );
    par_reason = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_11__reject );
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


static PyObject *impl_django$middleware$csrf$$$function_12__get_token( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *var_cookie_token = NULL;
    PyObject *var_csrf_token = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
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
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    bool tmp_is_1;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_a04258be7f0cac833bd593995cdad215 = NULL;

    struct Nuitka_FrameObject *frame_a04258be7f0cac833bd593995cdad215;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a04258be7f0cac833bd593995cdad215, codeobj_a04258be7f0cac833bd593995cdad215, module_django$middleware$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a04258be7f0cac833bd593995cdad215 = cache_frame_a04258be7f0cac833bd593995cdad215;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a04258be7f0cac833bd593995cdad215 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a04258be7f0cac833bd593995cdad215 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 166;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CSRF_USE_SESSIONS );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 166;
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
    // Tried code:
    tmp_source_name_3 = par_request;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_session );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CSRF_SESSION_KEY );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CSRF_SESSION_KEY );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CSRF_SESSION_KEY" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_a04258be7f0cac833bd593995cdad215->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_12__get_token );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_a04258be7f0cac833bd593995cdad215, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_a04258be7f0cac833bd593995cdad215, exception_keeper_lineno_1 );
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


        exception_lineno = 169;
        type_description_1 = "oooo";
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_ImproperlyConfigured );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImproperlyConfigured );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ImproperlyConfigured" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_left_name_1 = const_str_digest_5be07e0d6bda773de30308a0677f7d5b;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_MIDDLEWARE );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    tmp_compare_right_2 = Py_None;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_is_1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_right_name_1 = const_str_plain__CLASSES;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_right_name_1 = const_str_empty;
    condexpr_end_1:;
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    frame_a04258be7f0cac833bd593995cdad215->m_frame.f_lineno = 170;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 170;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto try_except_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 167;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a04258be7f0cac833bd593995cdad215->m_frame) frame_a04258be7f0cac833bd593995cdad215->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_12__get_token );
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
    goto branch_end_1;
    branch_no_1:;
    // Tried code:
    tmp_source_name_5 = par_request;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_COOKIES );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }

    tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_CSRF_COOKIE_NAME );
    if ( tmp_subscript_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 177;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    assert( var_cookie_token == NULL );
    var_cookie_token = tmp_assign_source_1;

    goto try_end_1;
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
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_a04258be7f0cac833bd593995cdad215, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_a04258be7f0cac833bd593995cdad215, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_KeyError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_5;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 176;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a04258be7f0cac833bd593995cdad215->m_frame) frame_a04258be7f0cac833bd593995cdad215->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_5;
    branch_end_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_12__get_token );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto frame_return_exit_1;
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
    try_end_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__sanitize_token );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sanitize_token );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_sanitize_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_cookie_token;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_a04258be7f0cac833bd593995cdad215->m_frame.f_lineno = 181;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_csrf_token == NULL );
    var_csrf_token = tmp_assign_source_2;

    tmp_compare_left_4 = var_csrf_token;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = var_cookie_token;

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cookie_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_request;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_csrf_cookie_needs_reset, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_return_value = var_csrf_token;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "csrf_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a04258be7f0cac833bd593995cdad215 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_a04258be7f0cac833bd593995cdad215 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a04258be7f0cac833bd593995cdad215 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a04258be7f0cac833bd593995cdad215, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a04258be7f0cac833bd593995cdad215->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a04258be7f0cac833bd593995cdad215, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a04258be7f0cac833bd593995cdad215,
        type_description_1,
        par_self,
        par_request,
        var_cookie_token,
        var_csrf_token
    );


    // Release cached frame.
    if ( frame_a04258be7f0cac833bd593995cdad215 == cache_frame_a04258be7f0cac833bd593995cdad215 )
    {
        Py_DECREF( frame_a04258be7f0cac833bd593995cdad215 );
    }
    cache_frame_a04258be7f0cac833bd593995cdad215 = NULL;

    assertFrameObject( frame_a04258be7f0cac833bd593995cdad215 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_12__get_token );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_cookie_token );
    var_cookie_token = NULL;

    Py_XDECREF( var_csrf_token );
    var_csrf_token = NULL;

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

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_cookie_token );
    var_cookie_token = NULL;

    Py_XDECREF( var_csrf_token );
    var_csrf_token = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_12__get_token );
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


static PyObject *impl_django$middleware$csrf$$$function_13__set_token( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_response = python_pars[ 2 ];
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
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
    PyObject *tmp_kw_name_1;
    int tmp_res;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6df0c3ddf92d7b36989372bdcaa18b9f = NULL;

    struct Nuitka_FrameObject *frame_6df0c3ddf92d7b36989372bdcaa18b9f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6df0c3ddf92d7b36989372bdcaa18b9f, codeobj_6df0c3ddf92d7b36989372bdcaa18b9f, module_django$middleware$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6df0c3ddf92d7b36989372bdcaa18b9f = cache_frame_6df0c3ddf92d7b36989372bdcaa18b9f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6df0c3ddf92d7b36989372bdcaa18b9f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6df0c3ddf92d7b36989372bdcaa18b9f ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 189;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CSRF_USE_SESSIONS );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 189;
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
    tmp_source_name_2 = par_request;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_META );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_CSRF_COOKIE;
    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_request;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_session );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CSRF_SESSION_KEY );

    if (unlikely( tmp_ass_subscript_1 == NULL ))
    {
        tmp_ass_subscript_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CSRF_SESSION_KEY );
    }

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CSRF_SESSION_KEY" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_4 = par_response;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_set_cookie );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_CSRF_COOKIE_NAME );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 193;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_6 = par_request;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_META );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 194;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_str_plain_CSRF_COOKIE;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 194;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 5 );
    tmp_dict_key_1 = const_str_plain_max_age;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_CSRF_COOKIE_AGE );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 195;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_domain;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_CSRF_COOKIE_DOMAIN );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 196;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_path;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 197;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_CSRF_COOKIE_PATH );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 197;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_secure;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
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

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_CSRF_COOKIE_SECURE );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 198;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_httponly;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_CSRF_COOKIE_HTTPONLY );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 199;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    frame_6df0c3ddf92d7b36989372bdcaa18b9f->m_frame.f_lineno = 192;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_patch_vary_headers );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_patch_vary_headers );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "patch_vary_headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_response;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = const_tuple_str_plain_Cookie_tuple;
    frame_6df0c3ddf92d7b36989372bdcaa18b9f->m_frame.f_lineno = 202;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6df0c3ddf92d7b36989372bdcaa18b9f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6df0c3ddf92d7b36989372bdcaa18b9f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6df0c3ddf92d7b36989372bdcaa18b9f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6df0c3ddf92d7b36989372bdcaa18b9f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6df0c3ddf92d7b36989372bdcaa18b9f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6df0c3ddf92d7b36989372bdcaa18b9f,
        type_description_1,
        par_self,
        par_request,
        par_response
    );


    // Release cached frame.
    if ( frame_6df0c3ddf92d7b36989372bdcaa18b9f == cache_frame_6df0c3ddf92d7b36989372bdcaa18b9f )
    {
        Py_DECREF( frame_6df0c3ddf92d7b36989372bdcaa18b9f );
    }
    cache_frame_6df0c3ddf92d7b36989372bdcaa18b9f = NULL;

    assertFrameObject( frame_6df0c3ddf92d7b36989372bdcaa18b9f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_13__set_token );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_response );
    par_response = NULL;

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

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_response );
    par_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_13__set_token );
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


static PyObject *impl_django$middleware$csrf$$$function_14_process_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *var_csrf_token = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_isnot_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_b3766c196237054be449b6ef1b29f9f8 = NULL;

    struct Nuitka_FrameObject *frame_b3766c196237054be449b6ef1b29f9f8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b3766c196237054be449b6ef1b29f9f8, codeobj_b3766c196237054be449b6ef1b29f9f8, module_django$middleware$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b3766c196237054be449b6ef1b29f9f8 = cache_frame_b3766c196237054be449b6ef1b29f9f8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b3766c196237054be449b6ef1b29f9f8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b3766c196237054be449b6ef1b29f9f8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__get_token );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_request;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_b3766c196237054be449b6ef1b29f9f8->m_frame.f_lineno = 205;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_csrf_token == NULL );
    var_csrf_token = tmp_assign_source_1;

    tmp_compare_left_1 = var_csrf_token;

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
    tmp_ass_subvalue_1 = var_csrf_token;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "csrf_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_request;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_META );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = const_str_plain_CSRF_COOKIE;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3766c196237054be449b6ef1b29f9f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3766c196237054be449b6ef1b29f9f8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b3766c196237054be449b6ef1b29f9f8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b3766c196237054be449b6ef1b29f9f8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b3766c196237054be449b6ef1b29f9f8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b3766c196237054be449b6ef1b29f9f8,
        type_description_1,
        par_self,
        par_request,
        var_csrf_token
    );


    // Release cached frame.
    if ( frame_b3766c196237054be449b6ef1b29f9f8 == cache_frame_b3766c196237054be449b6ef1b29f9f8 )
    {
        Py_DECREF( frame_b3766c196237054be449b6ef1b29f9f8 );
    }
    cache_frame_b3766c196237054be449b6ef1b29f9f8 = NULL;

    assertFrameObject( frame_b3766c196237054be449b6ef1b29f9f8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_14_process_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_csrf_token );
    var_csrf_token = NULL;

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

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_csrf_token );
    var_csrf_token = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_14_process_request );
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


static PyObject *impl_django$middleware$csrf$$$function_15_process_view( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_callback = python_pars[ 2 ];
    PyObject *par_callback_args = python_pars[ 3 ];
    PyObject *par_callback_kwargs = python_pars[ 4 ];
    struct Nuitka_CellObject *var_referer = PyCell_EMPTY();
    PyObject *var_good_referer = NULL;
    PyObject *var_server_port = NULL;
    PyObject *var_good_hosts = NULL;
    PyObject *var_reason = NULL;
    PyObject *var_csrf_token = NULL;
    PyObject *var_request_csrf_token = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
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
    PyObject *tmp_args_name_1;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_In_1;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotIn_1;
    int tmp_cmp_NotIn_2;
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
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_attr_3;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_default_3;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_getattr_target_3;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_outline_return_value_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0f0563beeef0433726832608fe75c9f5 = NULL;

    struct Nuitka_FrameObject *frame_0f0563beeef0433726832608fe75c9f5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0f0563beeef0433726832608fe75c9f5, codeobj_0f0563beeef0433726832608fe75c9f5, module_django$middleware$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0f0563beeef0433726832608fe75c9f5 = cache_frame_0f0563beeef0433726832608fe75c9f5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0f0563beeef0433726832608fe75c9f5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0f0563beeef0433726832608fe75c9f5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_getattr_target_1 = par_request;

    CHECK_OBJECT( tmp_getattr_target_1 );
    tmp_getattr_attr_1 = const_str_plain_csrf_processing_done;
    tmp_getattr_default_1 = Py_False;
    tmp_cond_value_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 211;
        type_description_1 = "ooooocoooooo";
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_getattr_target_2 = par_callback;

    CHECK_OBJECT( tmp_getattr_target_2 );
    tmp_getattr_attr_2 = const_str_plain_csrf_exempt;
    tmp_getattr_default_2 = Py_False;
    tmp_cond_value_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 216;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_1 = par_request;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_method );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_tuple_f05c3409d62473bc9fc0ccad10b2a5b5_tuple;
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_getattr_target_3 = par_request;

    if ( tmp_getattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_3 = const_str_plain__dont_enforce_csrf_checks;
    tmp_getattr_default_3 = Py_False;
    tmp_cond_value_3 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 221;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__accept );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_request;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 227;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_4:;
    tmp_called_instance_1 = par_request;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 229;
    tmp_cond_value_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_is_secure );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 229;
        type_description_1 = "ooooocoooooo";
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_force_text );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_force_text );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "force_text" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_3 = par_request;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_META );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 246;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 246;
    tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_HTTP_REFERER_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 246;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_6017f585f9a707ce78684b24ae6ca069 );
    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 245;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_referer );
        PyCell_SET( var_referer, tmp_assign_source_1 );
        Py_XDECREF( old );
    }

    if ( var_referer == NULL )
    {
        tmp_compare_left_2 = NULL;
    }
    else
    {
        tmp_compare_left_2 = PyCell_GET( var_referer );
    }

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "referer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 250;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 251;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__reject );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_request;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 251;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_REASON_NO_REFERER );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_REASON_NO_REFERER );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "REASON_NO_REFERER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 251;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 251;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_6:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_urlparse );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlparse" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    if ( var_referer == NULL )
    {
        tmp_args_element_name_4 = NULL;
    }
    else
    {
        tmp_args_element_name_4 = PyCell_GET( var_referer );
    }

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "referer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_referer );
        PyCell_SET( var_referer, tmp_assign_source_2 );
        Py_XDECREF( old );
    }

    tmp_compare_left_3 = const_str_empty;
    tmp_compare_right_3 = PyTuple_New( 2 );
    if ( var_referer == NULL )
    {
        tmp_source_name_5 = NULL;
    }
    else
    {
        tmp_source_name_5 = PyCell_GET( var_referer );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_compare_right_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "referer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_scheme );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 256;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compare_right_3, 0, tmp_tuple_element_2 );
    if ( var_referer == NULL )
    {
        tmp_source_name_6 = NULL;
    }
    else
    {
        tmp_source_name_6 = PyCell_GET( var_referer );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_compare_right_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "referer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_netloc );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 256;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compare_right_3, 1, tmp_tuple_element_2 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_1 == -1) );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__reject );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_request;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_REASON_MALFORMED_REFERER );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_REASON_MALFORMED_REFERER );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "REASON_MALFORMED_REFERER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 257;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_7:;
    if ( var_referer == NULL )
    {
        tmp_source_name_8 = NULL;
    }
    else
    {
        tmp_source_name_8 = PyCell_GET( var_referer );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "referer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_scheme );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_str_plain_https;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 260;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__reject );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = par_request;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_REASON_INSECURE_REFERER );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_REASON_INSECURE_REFERER );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "REASON_INSECURE_REFERER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 261;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_8:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 268;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_CSRF_USE_SESSIONS );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 268;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 267;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_SESSION_COOKIE_DOMAIN );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_CSRF_COOKIE_DOMAIN );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    condexpr_end_1:;
    assert( var_good_referer == NULL );
    var_good_referer = tmp_assign_source_3;

    tmp_compare_left_5 = var_good_referer;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_called_instance_3 = par_request;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 272;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 272;
    tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_get_port );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    assert( var_server_port == NULL );
    var_server_port = tmp_assign_source_4;

    tmp_compare_left_6 = var_server_port;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = const_tuple_str_plain_443_str_plain_80_tuple;
    tmp_cmp_NotIn_2 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_NotIn_2 == -1) );
    if ( tmp_cmp_NotIn_2 == 0 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_1 = const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_good_referer;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "good_referer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_server_port;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
    tmp_assign_source_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_good_referer;
        var_good_referer = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    tmp_called_instance_4 = par_request;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 277;
    tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_get_host );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_good_referer;
        var_good_referer = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    branch_end_9:;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_list_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_CSRF_TRUSTED_ORIGINS );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    assert( var_good_hosts == NULL );
    var_good_hosts = tmp_assign_source_7;

    tmp_source_name_14 = var_good_hosts;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_append );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = var_good_referer;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "good_referer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 283;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_any );
    assert( tmp_called_name_8 != NULL );
    tmp_iter_arg_1 = var_good_hosts;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "good_hosts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 285;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_8;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        django$middleware$csrf$$$function_15_process_view$$$genexpr_1_genexpr_context,
        module_django$middleware$csrf,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_e1c371f62d94e47bc480941d5b55cfe1,
#endif
        codeobj_8b6ddbe05b65cb6a3925f5fb5ff2b1f1,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[1] = var_referer;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[1] );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 2 ); 


    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_15_process_view );
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
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_15_process_view );
    return NULL;
    outline_result_1:;
    tmp_args_element_name_10 = tmp_outline_return_value_1;
    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 285;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_cond_value_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 285;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_no_11;
    }
    else
    {
        goto branch_yes_11;
    }
    branch_yes_11:;
    tmp_left_name_2 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_REASON_BAD_REFERER );

    if (unlikely( tmp_left_name_2 == NULL ))
    {
        tmp_left_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_REASON_BAD_REFERER );
    }

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "REASON_BAD_REFERER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    if ( var_referer == NULL )
    {
        tmp_called_instance_5 = NULL;
    }
    else
    {
        tmp_called_instance_5 = PyCell_GET( var_referer );
    }

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "referer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 286;
    tmp_right_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_geturl );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    assert( var_reason == NULL );
    var_reason = tmp_assign_source_9;

    tmp_source_name_15 = par_self;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__reject );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = par_request;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = var_reason;

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reason" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 287;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_11:;
    branch_no_5:;
    tmp_source_name_16 = par_request;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 289;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_META );
    if ( tmp_called_instance_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 289;
    tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_CSRF_COOKIE_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    assert( var_csrf_token == NULL );
    var_csrf_token = tmp_assign_source_10;

    tmp_compare_left_7 = var_csrf_token;

    CHECK_OBJECT( tmp_compare_left_7 );
    tmp_compare_right_7 = Py_None;
    tmp_is_2 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    if ( tmp_is_2 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_17 = par_self;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__reject );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_13 = par_request;

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_REASON_NO_CSRF_COOKIE );

    if (unlikely( tmp_args_element_name_14 == NULL ))
    {
        tmp_args_element_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_REASON_NO_CSRF_COOKIE );
    }

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "REASON_NO_CSRF_COOKIE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 294;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_12:;
    tmp_assign_source_11 = const_str_empty;
    assert( var_request_csrf_token == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_request_csrf_token = tmp_assign_source_11;

    tmp_source_name_18 = par_request;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 298;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_method );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_8 = const_str_plain_POST;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 298;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_8 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    // Tried code:
    tmp_source_name_19 = par_request;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 300;
        type_description_1 = "ooooocoooooo";
        goto try_except_handler_3;
    }

    tmp_called_instance_7 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_POST );
    if ( tmp_called_instance_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "ooooocoooooo";
        goto try_except_handler_3;
    }
    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 300;
    tmp_assign_source_12 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_csrfmiddlewaretoken_str_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_7 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "ooooocoooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_request_csrf_token;
        var_request_csrf_token = tmp_assign_source_12;
        Py_XDECREF( old );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_0f0563beeef0433726832608fe75c9f5, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_0f0563beeef0433726832608fe75c9f5, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_9 = PyThreadState_GET()->exc_type;
    tmp_compare_right_9 = PyExc_IOError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "ooooocoooooo";
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_14;
    }
    else
    {
        goto branch_yes_14;
    }
    branch_yes_14:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 299;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0f0563beeef0433726832608fe75c9f5->m_frame) frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooocoooooo";
    goto try_except_handler_4;
    branch_no_14:;
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
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_15_process_view );
    return NULL;
    // End of try:
    try_end_1:;
    branch_no_13:;
    tmp_compare_left_10 = var_request_csrf_token;

    if ( tmp_compare_left_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_csrf_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 309;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_10 = const_str_empty;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_21 = par_request;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_META );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_get );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_CSRF_HEADER_NAME );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 312;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_16 = const_str_empty;
    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 312;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_request_csrf_token;
        var_request_csrf_token = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    branch_no_15:;
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__sanitize_token );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sanitize_token );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_sanitize_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 314;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_17 = var_request_csrf_token;

    if ( tmp_args_element_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_csrf_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 314;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 314;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_request_csrf_token;
        var_request_csrf_token = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__compare_salted_tokens );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compare_salted_tokens );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compare_salted_tokens" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_18 = var_request_csrf_token;

    CHECK_OBJECT( tmp_args_element_name_18 );
    tmp_args_element_name_19 = var_csrf_token;

    if ( tmp_args_element_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "csrf_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 315;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
        tmp_cond_value_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
    }

    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 315;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_no_16;
    }
    else
    {
        goto branch_yes_16;
    }
    branch_yes_16:;
    tmp_source_name_23 = par_self;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 316;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__reject );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_20 = par_request;

    if ( tmp_args_element_name_20 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 316;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_21 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_REASON_BAD_TOKEN );

    if (unlikely( tmp_args_element_name_21 == NULL ))
    {
        tmp_args_element_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_REASON_BAD_TOKEN );
    }

    if ( tmp_args_element_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "REASON_BAD_TOKEN" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 316;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 316;
    {
        PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_16:;
    branch_no_3:;
    tmp_source_name_24 = par_self;

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 318;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__accept );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_22 = par_request;

    if ( tmp_args_element_name_22 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 318;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }

    frame_0f0563beeef0433726832608fe75c9f5->m_frame.f_lineno = 318;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "ooooocoooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0f0563beeef0433726832608fe75c9f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0f0563beeef0433726832608fe75c9f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0f0563beeef0433726832608fe75c9f5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0f0563beeef0433726832608fe75c9f5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0f0563beeef0433726832608fe75c9f5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0f0563beeef0433726832608fe75c9f5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0f0563beeef0433726832608fe75c9f5,
        type_description_1,
        par_self,
        par_request,
        par_callback,
        par_callback_args,
        par_callback_kwargs,
        var_referer,
        var_good_referer,
        var_server_port,
        var_good_hosts,
        var_reason,
        var_csrf_token,
        var_request_csrf_token
    );


    // Release cached frame.
    if ( frame_0f0563beeef0433726832608fe75c9f5 == cache_frame_0f0563beeef0433726832608fe75c9f5 )
    {
        Py_DECREF( frame_0f0563beeef0433726832608fe75c9f5 );
    }
    cache_frame_0f0563beeef0433726832608fe75c9f5 = NULL;

    assertFrameObject( frame_0f0563beeef0433726832608fe75c9f5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_15_process_view );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_callback );
    par_callback = NULL;

    Py_XDECREF( par_callback_args );
    par_callback_args = NULL;

    Py_XDECREF( par_callback_kwargs );
    par_callback_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_referer );
    Py_DECREF( var_referer );
    var_referer = NULL;

    Py_XDECREF( var_good_referer );
    var_good_referer = NULL;

    Py_XDECREF( var_server_port );
    var_server_port = NULL;

    Py_XDECREF( var_good_hosts );
    var_good_hosts = NULL;

    Py_XDECREF( var_reason );
    var_reason = NULL;

    Py_XDECREF( var_csrf_token );
    var_csrf_token = NULL;

    Py_XDECREF( var_request_csrf_token );
    var_request_csrf_token = NULL;

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

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_callback );
    par_callback = NULL;

    Py_XDECREF( par_callback_args );
    par_callback_args = NULL;

    Py_XDECREF( par_callback_kwargs );
    par_callback_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_referer );
    Py_DECREF( var_referer );
    var_referer = NULL;

    Py_XDECREF( var_good_referer );
    var_good_referer = NULL;

    Py_XDECREF( var_server_port );
    var_server_port = NULL;

    Py_XDECREF( var_good_hosts );
    var_good_hosts = NULL;

    Py_XDECREF( var_reason );
    var_reason = NULL;

    Py_XDECREF( var_csrf_token );
    var_csrf_token = NULL;

    Py_XDECREF( var_request_csrf_token );
    var_request_csrf_token = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_15_process_view );
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
struct django$middleware$csrf$$$function_15_process_view$$$genexpr_1_genexpr_locals {
    PyObject *var_host
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
    PyObject *tmp_args_element_name_2;
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
static PyObject *django$middleware$csrf$$$function_15_process_view$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void django$middleware$csrf$$$function_15_process_view$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_host = NULL;
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
    PyObject *tmp_args_element_name_2;
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
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_8b6ddbe05b65cb6a3925f5fb5ff2b1f1, module_django$middleware$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
            type_description_1 = "Noc";
            exception_lineno = 285;
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
        PyObject *old = var_host;
        var_host = tmp_assign_source_2;
        Py_INCREF( var_host );
        Py_XDECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_is_same_domain );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_same_domain );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_same_domain" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 285;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    if ( generator->m_closure[1] == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "referer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 285;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_netloc );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = var_host;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 285;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    generator->m_frame->m_frame.f_lineno = 285;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
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
            var_host,
            generator->m_closure[1]
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

    Py_XDECREF( var_host );
    var_host = NULL;

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

    Py_XDECREF( var_host );
    var_host = NULL;


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


static PyObject *impl_django$middleware$csrf$$$function_16_process_response( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_response = python_pars[ 2 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9698d6f83ff0811aa91b951130c2aa99 = NULL;

    struct Nuitka_FrameObject *frame_9698d6f83ff0811aa91b951130c2aa99;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9698d6f83ff0811aa91b951130c2aa99, codeobj_9698d6f83ff0811aa91b951130c2aa99, module_django$middleware$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9698d6f83ff0811aa91b951130c2aa99 = cache_frame_9698d6f83ff0811aa91b951130c2aa99;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9698d6f83ff0811aa91b951130c2aa99 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9698d6f83ff0811aa91b951130c2aa99 ) == 2 ); // Frame stack

    // Framed code:
    tmp_getattr_target_1 = par_request;

    CHECK_OBJECT( tmp_getattr_target_1 );
    tmp_getattr_attr_1 = const_str_plain_csrf_cookie_needs_reset;
    tmp_getattr_default_1 = Py_False;
    tmp_cond_value_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 321;
        type_description_1 = "ooo";
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
    tmp_getattr_target_2 = par_response;

    if ( tmp_getattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 322;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_2 = const_str_plain_csrf_cookie_set;
    tmp_getattr_default_2 = Py_False;
    tmp_cond_value_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 322;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = par_response;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 323;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    branch_no_1:;
    tmp_source_name_1 = par_request;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 325;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_META );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_9698d6f83ff0811aa91b951130c2aa99->m_frame.f_lineno = 325;
    tmp_cond_value_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_CSRF_COOKIE_USED_false_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 325;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_return_value = par_response;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 326;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 330;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__set_token );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_request;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 330;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_response;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 330;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_9698d6f83ff0811aa91b951130c2aa99->m_frame.f_lineno = 330;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_response;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 331;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_csrf_cookie_set, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = par_response;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 332;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9698d6f83ff0811aa91b951130c2aa99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9698d6f83ff0811aa91b951130c2aa99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9698d6f83ff0811aa91b951130c2aa99 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9698d6f83ff0811aa91b951130c2aa99, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9698d6f83ff0811aa91b951130c2aa99->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9698d6f83ff0811aa91b951130c2aa99, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9698d6f83ff0811aa91b951130c2aa99,
        type_description_1,
        par_self,
        par_request,
        par_response
    );


    // Release cached frame.
    if ( frame_9698d6f83ff0811aa91b951130c2aa99 == cache_frame_9698d6f83ff0811aa91b951130c2aa99 )
    {
        Py_DECREF( frame_9698d6f83ff0811aa91b951130c2aa99 );
    }
    cache_frame_9698d6f83ff0811aa91b951130c2aa99 = NULL;

    assertFrameObject( frame_9698d6f83ff0811aa91b951130c2aa99 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_16_process_response );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_response );
    par_response = NULL;

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

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_response );
    par_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf$$$function_16_process_response );
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



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_10__accept(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_10__accept,
        const_str_plain__accept,
#if PYTHON_VERSION >= 330
        const_str_digest_77f4a23e1e2121fbfebc4b9c575394d6,
#endif
        codeobj_a41d04a516f461f8e4c73abd1fe4c890,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_11__reject(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_11__reject,
        const_str_plain__reject,
#if PYTHON_VERSION >= 330
        const_str_digest_c691b180337d4fb9d7bd4a8ec727b150,
#endif
        codeobj_73618c46153ca4920721ed8697e6da01,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_12__get_token(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_12__get_token,
        const_str_plain__get_token,
#if PYTHON_VERSION >= 330
        const_str_digest_d5e75a80092adae170d52beb5a693ccb,
#endif
        codeobj_a04258be7f0cac833bd593995cdad215,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_13__set_token(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_13__set_token,
        const_str_plain__set_token,
#if PYTHON_VERSION >= 330
        const_str_digest_e932c10134c07ef9a7ca3401f05e2cb6,
#endif
        codeobj_6df0c3ddf92d7b36989372bdcaa18b9f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_14_process_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_14_process_request,
        const_str_plain_process_request,
#if PYTHON_VERSION >= 330
        const_str_digest_f3886fba69a3ba9cef56e9bbb901d1c7,
#endif
        codeobj_b3766c196237054be449b6ef1b29f9f8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_15_process_view(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_15_process_view,
        const_str_plain_process_view,
#if PYTHON_VERSION >= 330
        const_str_digest_a38eae683ef2022b4dcb2eb894a1c64e,
#endif
        codeobj_0f0563beeef0433726832608fe75c9f5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_16_process_response(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_16_process_response,
        const_str_plain_process_response,
#if PYTHON_VERSION >= 330
        const_str_digest_77dcfc10f8de8189341828e72dbf56e2,
#endif
        codeobj_9698d6f83ff0811aa91b951130c2aa99,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_1__get_failure_view(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_1__get_failure_view,
        const_str_plain__get_failure_view,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_04ec3370ee83108d04c73a2b2bb8df3c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        const_str_digest_ec31042997db393532f04d858e071e5a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_2__get_new_csrf_string(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_2__get_new_csrf_string,
        const_str_plain__get_new_csrf_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9d747a879279c62001dec18ce4977171,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_3__salt_cipher_secret(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_3__salt_cipher_secret,
        const_str_plain__salt_cipher_secret,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_406720cb4987061dca0129696b633898,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        const_str_digest_2b8c47c507e117bdd02470c56c4ad4cc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_4__unsalt_cipher_token(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_4__unsalt_cipher_token,
        const_str_plain__unsalt_cipher_token,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3e7360070656751df5d0cf192a7de208,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        const_str_digest_96395e38d8d65f90297c9cc5020fbffe,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_5__get_new_csrf_token(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_5__get_new_csrf_token,
        const_str_plain__get_new_csrf_token,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cceb81424050c3589ad7c40878f0af10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_6_get_token(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_6_get_token,
        const_str_plain_get_token,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_afd640035fbeb8a867233bfecc251341,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        const_str_digest_6cc24a02e694b8bcf6ff738804a94705,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_7_rotate_token(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_7_rotate_token,
        const_str_plain_rotate_token,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a2c6f4e15c75dda039f3a805ed12321d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        const_str_digest_276de122fb91f92298f7d1b3dd5d1926,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_8__sanitize_token(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_8__sanitize_token,
        const_str_plain__sanitize_token,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a48f87f8759c5bf601b176c5661842f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$middleware$csrf$$$function_9__compare_salted_tokens(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$middleware$csrf$$$function_9__compare_salted_tokens,
        const_str_plain__compare_salted_tokens,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_95129c0f73942d229061917f307c240f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$middleware$csrf,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$middleware$csrf =
{
    PyModuleDef_HEAD_INIT,
    "django.middleware.csrf",   /* m_name */
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

MOD_INIT_DECL( django$middleware$csrf )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$middleware$csrf );
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
    puts("django.middleware.csrf: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.middleware.csrf: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$middleware$csrf" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$middleware$csrf = Py_InitModule4(
        "django.middleware.csrf",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$middleware$csrf = PyModule_Create( &mdef_django$middleware$csrf );
#endif

    moduledict_django$middleware$csrf = MODULE_DICT( module_django$middleware$csrf );

    CHECK_OBJECT( module_django$middleware$csrf );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_5ed11698e149f372a4e77ae4cd628aa6, module_django$middleware$csrf );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var__accept = NULL;
    PyObject *outline_0_var__reject = NULL;
    PyObject *outline_0_var__get_token = NULL;
    PyObject *outline_0_var__set_token = NULL;
    PyObject *outline_0_var_process_request = NULL;
    PyObject *outline_0_var_process_view = NULL;
    PyObject *outline_0_var_process_response = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_name_1;
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
    PyObject *tmp_fromlist_name_13;
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
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
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
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
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
    PyObject *tmp_metaclass_name_1;
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
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_type_arg_1;
    struct Nuitka_FrameObject *frame_dfaa2c4bac0ee8bf6b24e6966f4b0388;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = const_str_digest_f92fa82c40b6af299bd7a92a219433a9;
    UPDATE_STRING_DICT0( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388 = MAKE_MODULE_FRAME( codeobj_dfaa2c4bac0ee8bf6b24e6966f4b0388, module_django$middleware$csrf );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_dfaa2c4bac0ee8bf6b24e6966f4b0388 );
    assert( Py_REFCNT( frame_dfaa2c4bac0ee8bf6b24e6966f4b0388 ) == 2 );

    // Framed code:
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_5ed11698e149f372a4e77ae4cd628aa6;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_8445a3de86be347d3bb4adc957ee409b;
    UPDATE_STRING_DICT0( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 7;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_unicode_literals );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_plain_logging;
    tmp_globals_name_1 = (PyObject *)moduledict_django$middleware$csrf;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 9;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_re;
    tmp_globals_name_2 = (PyObject *)moduledict_django$middleware$csrf;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 10;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_plain_string;
    tmp_globals_name_3 = (PyObject *)moduledict_django$middleware$csrf;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 11;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_string, tmp_assign_source_10 );
    tmp_name_name_4 = const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
    tmp_globals_name_4 = (PyObject *)moduledict_django$middleware$csrf;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_settings_tuple;
    tmp_level_name_4 = const_int_0;
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 13;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_settings );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_settings, tmp_assign_source_11 );
    tmp_name_name_5 = const_str_digest_dfb6e1abbed3113ee07234fdc458a320;
    tmp_globals_name_5 = (PyObject *)moduledict_django$middleware$csrf;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_ImproperlyConfigured_tuple;
    tmp_level_name_5 = const_int_0;
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 14;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_ImproperlyConfigured );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_ImproperlyConfigured, tmp_assign_source_12 );
    tmp_name_name_6 = const_str_digest_c48c695ee87e11eee5579c73bc52a23e;
    tmp_globals_name_6 = (PyObject *)moduledict_django$middleware$csrf;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_get_callable_tuple;
    tmp_level_name_6 = const_int_0;
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 15;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_get_callable );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_get_callable, tmp_assign_source_13 );
    tmp_name_name_7 = const_str_digest_8c6fca57f2643e855097ab3f4172b9f5;
    tmp_globals_name_7 = (PyObject *)moduledict_django$middleware$csrf;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_patch_vary_headers_tuple;
    tmp_level_name_7 = const_int_0;
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 16;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_patch_vary_headers );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_patch_vary_headers, tmp_assign_source_14 );
    tmp_name_name_8 = const_str_digest_9b40607a55961c64eeb5675a39cb5170;
    tmp_globals_name_8 = (PyObject *)moduledict_django$middleware$csrf;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_constant_time_compare_str_plain_get_random_string_tuple;
    tmp_level_name_8 = const_int_0;
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 17;
    tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_15;

    // Tried code:
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_constant_time_compare );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_constant_time_compare, tmp_assign_source_16 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_get_random_string );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_get_random_string, tmp_assign_source_17 );
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

    tmp_name_name_9 = const_str_digest_f3705ed203bc8405b0735fb4179b32a8;
    tmp_globals_name_9 = (PyObject *)moduledict_django$middleware$csrf;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_MiddlewareMixin_tuple;
    tmp_level_name_9 = const_int_0;
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 18;
    tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_MiddlewareMixin );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_MiddlewareMixin, tmp_assign_source_18 );
    tmp_name_name_10 = const_str_digest_e3393b2e61653c3df2c7d436c253bbee;
    tmp_globals_name_10 = (PyObject *)moduledict_django$middleware$csrf;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_force_text_tuple;
    tmp_level_name_10 = const_int_0;
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 19;
    tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_force_text );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_force_text, tmp_assign_source_19 );
    tmp_name_name_11 = const_str_digest_de1637a5b7f41dbfb385ee782c95a853;
    tmp_globals_name_11 = (PyObject *)moduledict_django$middleware$csrf;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_is_same_domain_tuple;
    tmp_level_name_11 = const_int_0;
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 20;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_is_same_domain );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_is_same_domain, tmp_assign_source_20 );
    tmp_name_name_12 = const_str_digest_6fed4619fa8d4c69fdb5c74f190acfee;
    tmp_globals_name_12 = (PyObject *)moduledict_django$middleware$csrf;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_str_plain_zip_tuple;
    tmp_level_name_12 = const_int_0;
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 21;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_zip );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_zip, tmp_assign_source_21 );
    tmp_name_name_13 = const_str_digest_8bc4877a3eddf48ed5f347a2b6e7205e;
    tmp_globals_name_13 = (PyObject *)moduledict_django$middleware$csrf;
    tmp_locals_name_13 = Py_None;
    tmp_fromlist_name_13 = const_tuple_str_plain_urlparse_tuple;
    tmp_level_name_13 = const_int_0;
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 22;
    tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_urlparse );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_22 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;

        goto frame_exception_exit_1;
    }

    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 24;
    tmp_assign_source_23 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_d8b2868832c7d98b22c3bbf3bccc471d_tuple, 0 ) );

    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_logger, tmp_assign_source_23 );
    tmp_assign_source_24 = const_str_digest_0ff5cc2a874b3bb1d1b5978e287a5f21;
    UPDATE_STRING_DICT0( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_REASON_NO_REFERER, tmp_assign_source_24 );
    tmp_assign_source_25 = const_str_digest_d98f24ff380f5bbebff6734138c69b29;
    UPDATE_STRING_DICT0( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_REASON_BAD_REFERER, tmp_assign_source_25 );
    tmp_assign_source_26 = const_str_digest_19f542475a7d8557a8d173b720e32d6a;
    UPDATE_STRING_DICT0( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_REASON_NO_CSRF_COOKIE, tmp_assign_source_26 );
    tmp_assign_source_27 = const_str_digest_2c6efca98aff1d9f2efd5ce54367e5eb;
    UPDATE_STRING_DICT0( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_REASON_BAD_TOKEN, tmp_assign_source_27 );
    tmp_assign_source_28 = const_str_digest_13d2bf429de9b06e953d98af7a5cd3fa;
    UPDATE_STRING_DICT0( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_REASON_MALFORMED_REFERER, tmp_assign_source_28 );
    tmp_assign_source_29 = const_str_digest_5a6f6cf92042af06b7676d1893b490d2;
    UPDATE_STRING_DICT0( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_REASON_INSECURE_REFERER, tmp_assign_source_29 );
    tmp_assign_source_30 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CSRF_SECRET_LENGTH, tmp_assign_source_30 );
    tmp_left_name_1 = const_int_pos_2;
    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CSRF_SECRET_LENGTH );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CSRF_SECRET_LENGTH );
    }

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CSRF_SECRET_LENGTH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_31 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CSRF_TOKEN_LENGTH, tmp_assign_source_31 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_string );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;

        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ascii_letters );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_string );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;

        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_digits );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_32 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CSRF_ALLOWED_CHARS, tmp_assign_source_32 );
    tmp_assign_source_33 = const_str_plain__csrftoken;
    UPDATE_STRING_DICT0( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CSRF_SESSION_KEY, tmp_assign_source_33 );
    tmp_assign_source_34 = MAKE_FUNCTION_django$middleware$csrf$$$function_1__get_failure_view(  );
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__get_failure_view, tmp_assign_source_34 );
    tmp_assign_source_35 = MAKE_FUNCTION_django$middleware$csrf$$$function_2__get_new_csrf_string(  );
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__get_new_csrf_string, tmp_assign_source_35 );
    tmp_assign_source_36 = MAKE_FUNCTION_django$middleware$csrf$$$function_3__salt_cipher_secret(  );
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__salt_cipher_secret, tmp_assign_source_36 );
    tmp_assign_source_37 = MAKE_FUNCTION_django$middleware$csrf$$$function_4__unsalt_cipher_token(  );
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__unsalt_cipher_token, tmp_assign_source_37 );
    tmp_assign_source_38 = MAKE_FUNCTION_django$middleware$csrf$$$function_5__get_new_csrf_token(  );
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__get_new_csrf_token, tmp_assign_source_38 );
    tmp_assign_source_39 = MAKE_FUNCTION_django$middleware$csrf$$$function_6_get_token(  );
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_get_token, tmp_assign_source_39 );
    tmp_assign_source_40 = MAKE_FUNCTION_django$middleware$csrf$$$function_7_rotate_token(  );
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_rotate_token, tmp_assign_source_40 );
    tmp_assign_source_41 = MAKE_FUNCTION_django$middleware$csrf$$$function_8__sanitize_token(  );
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__sanitize_token, tmp_assign_source_41 );
    tmp_assign_source_42 = MAKE_FUNCTION_django$middleware$csrf$$$function_9__compare_salted_tokens(  );
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain__compare_salted_tokens, tmp_assign_source_42 );
    // Tried code:
    tmp_assign_source_43 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_MiddlewareMixin );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MiddlewareMixin );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MiddlewareMixin" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;

        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_43, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_43;

    tmp_assign_source_44 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_44;

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


        exception_lineno = 137;

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


        exception_lineno = 137;

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


        exception_lineno = 137;

        goto try_except_handler_2;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

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
    tmp_assign_source_45 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 137;

        goto try_except_handler_2;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_45;

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


        exception_lineno = 137;

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


        exception_lineno = 137;

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
    tmp_source_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_CsrfViewMiddleware;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 137;
    tmp_assign_source_46 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_2;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_46 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_46;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_48 = const_str_digest_5ed11698e149f372a4e77ae4cd628aa6;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_48 );
    outline_0_var___module__ = tmp_assign_source_48;

    tmp_assign_source_49 = const_str_digest_1bca753c16336cf391e24ee7682baeb4;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_49 );
    outline_0_var___doc__ = tmp_assign_source_49;

    tmp_assign_source_50 = const_str_plain_CsrfViewMiddleware;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_50 );
    outline_0_var___qualname__ = tmp_assign_source_50;

    tmp_assign_source_51 = MAKE_FUNCTION_django$middleware$csrf$$$function_10__accept(  );
    assert( outline_0_var__accept == NULL );
    outline_0_var__accept = tmp_assign_source_51;

    tmp_assign_source_52 = MAKE_FUNCTION_django$middleware$csrf$$$function_11__reject(  );
    assert( outline_0_var__reject == NULL );
    outline_0_var__reject = tmp_assign_source_52;

    tmp_assign_source_53 = MAKE_FUNCTION_django$middleware$csrf$$$function_12__get_token(  );
    assert( outline_0_var__get_token == NULL );
    outline_0_var__get_token = tmp_assign_source_53;

    tmp_assign_source_54 = MAKE_FUNCTION_django$middleware$csrf$$$function_13__set_token(  );
    assert( outline_0_var__set_token == NULL );
    outline_0_var__set_token = tmp_assign_source_54;

    tmp_assign_source_55 = MAKE_FUNCTION_django$middleware$csrf$$$function_14_process_request(  );
    assert( outline_0_var_process_request == NULL );
    outline_0_var_process_request = tmp_assign_source_55;

    tmp_assign_source_56 = MAKE_FUNCTION_django$middleware$csrf$$$function_15_process_view(  );
    assert( outline_0_var_process_view == NULL );
    outline_0_var_process_view = tmp_assign_source_56;

    tmp_assign_source_57 = MAKE_FUNCTION_django$middleware$csrf$$$function_16_process_response(  );
    assert( outline_0_var_process_response == NULL );
    outline_0_var_process_response = tmp_assign_source_57;

    // Tried code:
    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_3 = const_str_plain_CsrfViewMiddleware;
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

        exception_lineno = 137;

        goto try_except_handler_3;
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

        exception_lineno = 137;

        goto try_except_handler_3;
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

        exception_lineno = 137;

        goto try_except_handler_3;
    }
    if ( outline_0_var__accept != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain__accept,
            outline_0_var__accept
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain__accept
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain__accept
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

        exception_lineno = 137;

        goto try_except_handler_3;
    }
    if ( outline_0_var__reject != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain__reject,
            outline_0_var__reject
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain__reject
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain__reject
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

        exception_lineno = 137;

        goto try_except_handler_3;
    }
    if ( outline_0_var__get_token != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain__get_token,
            outline_0_var__get_token
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain__get_token
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain__get_token
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

        exception_lineno = 137;

        goto try_except_handler_3;
    }
    if ( outline_0_var__set_token != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain__set_token,
            outline_0_var__set_token
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain__set_token
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain__set_token
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

        exception_lineno = 137;

        goto try_except_handler_3;
    }
    if ( outline_0_var_process_request != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_process_request,
            outline_0_var_process_request
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_process_request
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_process_request
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

        exception_lineno = 137;

        goto try_except_handler_3;
    }
    if ( outline_0_var_process_view != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_process_view,
            outline_0_var_process_view
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_process_view
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_process_view
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

        exception_lineno = 137;

        goto try_except_handler_3;
    }
    if ( outline_0_var_process_response != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_process_response,
            outline_0_var_process_response
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_process_response
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_process_response
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

        exception_lineno = 137;

        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame.f_lineno = 137;
    tmp_assign_source_58 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_58;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf );
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

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var__accept );
    outline_0_var__accept = NULL;

    Py_XDECREF( outline_0_var__reject );
    outline_0_var__reject = NULL;

    Py_XDECREF( outline_0_var__get_token );
    outline_0_var__get_token = NULL;

    Py_XDECREF( outline_0_var__set_token );
    outline_0_var__set_token = NULL;

    Py_XDECREF( outline_0_var_process_request );
    outline_0_var_process_request = NULL;

    Py_XDECREF( outline_0_var_process_view );
    outline_0_var_process_view = NULL;

    Py_XDECREF( outline_0_var_process_response );
    outline_0_var_process_response = NULL;

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

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var__accept );
    outline_0_var__accept = NULL;

    Py_XDECREF( outline_0_var__reject );
    outline_0_var__reject = NULL;

    Py_XDECREF( outline_0_var__get_token );
    outline_0_var__get_token = NULL;

    Py_XDECREF( outline_0_var__set_token );
    outline_0_var__set_token = NULL;

    Py_XDECREF( outline_0_var_process_request );
    outline_0_var_process_request = NULL;

    Py_XDECREF( outline_0_var_process_view );
    outline_0_var_process_view = NULL;

    Py_XDECREF( outline_0_var_process_response );
    outline_0_var_process_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$middleware$csrf );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 137;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_47 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_django$middleware$csrf, (Nuitka_StringObject *)const_str_plain_CsrfViewMiddleware, tmp_assign_source_47 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfaa2c4bac0ee8bf6b24e6966f4b0388 );
#endif
    popFrameStack();

    assertFrameObject( frame_dfaa2c4bac0ee8bf6b24e6966f4b0388 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfaa2c4bac0ee8bf6b24e6966f4b0388 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dfaa2c4bac0ee8bf6b24e6966f4b0388, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dfaa2c4bac0ee8bf6b24e6966f4b0388->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dfaa2c4bac0ee8bf6b24e6966f4b0388, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;


    return MOD_RETURN_VALUE( module_django$middleware$csrf );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
