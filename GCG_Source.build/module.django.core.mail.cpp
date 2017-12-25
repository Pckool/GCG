/* Generated code for Python source for module 'django.core.mail'
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

/* The _module_django$core$mail is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$core$mail;
PyDictObject *moduledict_django$core$mail;

/* The module constants used, if any. */
extern PyObject *const_str_plain_MANAGERS;
static PyObject *const_str_plain_send_mass_mail;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_sender;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_d434fa92832494458af57a18e30eeae3;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_import_string;
static PyObject *const_tuple_5bc1bc8adf0bed8c300dc21a6ec2bfdc_tuple;
extern PyObject *const_str_angle_listcontraction;
static PyObject *const_tuple_788da1634d847913dacb66f7ef2950fd_tuple;
extern PyObject *const_str_plain_SERVER_EMAIL;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_EMAIL_BACKEND;
extern PyObject *const_str_plain_send_messages;
extern PyObject *const_tuple_c15243b3ba68498da186d5d65ae367ca_tuple;
extern PyObject *const_tuple_str_plain_import_string_tuple;
static PyObject *const_str_digest_17c95fc00e2fa035a4a7e4fe917d63bb;
static PyObject *const_tuple_3b4fee64c2046286743ce267a464bc3b_tuple;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_messages;
static PyObject *const_str_plain_NUITKA_PACKAGE_django_core_mail;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_EmailMessage;
static PyObject *const_str_digest_dcd9259d193a76e79fad54e9e1350333;
static PyObject *const_tuple_str_plain_DNS_NAME_str_plain_CachedDnsName_tuple;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_get_connection;
static PyObject *const_str_digest_3bc9cd3436adbed05aeee30a149a984b;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_digest_690178e17eae3581689f22974cc26edf;
extern PyObject *const_tuple_none_false_tuple;
static PyObject *const_str_digest_ccaf478ca9df72f2a24652f04baa4957;
extern PyObject *const_str_plain_SafeMIMEMultipart;
static PyObject *const_list_2a56c87d4d1b4ea30b58df6b484f8201_list;
extern PyObject *const_str_digest_d76462298f66c95b4d3ee22e9427a916;
extern PyObject *const_str_plain_make_msgid;
extern PyObject *const_str_plain_DNS_NAME;
extern PyObject *const_str_plain_path;
static PyObject *const_str_plain_auth_password;
extern PyObject *const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
static PyObject *const_tuple_false_none_none_tuple;
extern PyObject *const_str_plain_message;
static PyObject *const_str_plain_auth_user;
extern PyObject *const_str_plain_SafeMIMEText;
extern PyObject *const_str_digest_aee0d40e09f76fd339276e187b4cadfd;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_EMAIL_SUBJECT_PREFIX;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_username;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_attach_alternative;
extern PyObject *const_tuple_b868c6b0937f28ff9b15f6cc52ff2098_tuple;
extern PyObject *const_str_plain_send;
static PyObject *const_tuple_false_none_none_none_none_tuple;
extern PyObject *const_str_plain_send_mail;
static PyObject *const_str_plain_recipient_list;
extern PyObject *const_str_plain_mail;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain_DEFAULT_ATTACHMENT_MIME_TYPE;
extern PyObject *const_str_plain_recipient;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_connection;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_kwds;
extern PyObject *const_str_plain_CachedDnsName;
extern PyObject *const_tuple_str_plain_settings_tuple;
extern PyObject *const_str_plain_from_email;
extern PyObject *const_str_plain_subject;
extern PyObject *const_str_plain_ADMINS;
extern PyObject *const_str_digest_1572198cb22a44b444ca284ab3fb285b;
static PyObject *const_str_digest_7b409349ae9bcff87319817b7154920c;
static PyObject *const_str_plain_mail_managers;
extern PyObject *const_str_plain_fail_silently;
static PyObject *const_str_digest_234b289f937c6961c780f32ea2f04b3f;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django_core;
static PyObject *const_tuple_6eea4ff2571fe6b4c070f34967da81ba_tuple;
extern PyObject *const_str_plain_settings;
static PyObject *const_str_digest_361587de2a9b7265a8610c25a42e22b5;
extern PyObject *const_str_plain_mail_admins;
extern PyObject *const_str_plain_BadHeaderError;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_daae6d9876cd0712c83b7035415ef6dd;
extern PyObject *const_str_plain_password;
extern PyObject *const_str_plain_html_message;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_c2e983d69a0e4e24b6d4859f17466298_tuple;
extern PyObject *const_str_plain_backend;
extern PyObject *const_str_plain_forbid_multi_line_headers;
static PyObject *const_tuple_4e68671053c42ca53246bff32e1352cb_tuple;
static PyObject *const_tuple_75a15e879c7a8bd34659463d4ddb0ad9_tuple;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django;
extern PyObject *const_str_digest_5f972e9cea97219805947b4127aeae11;
extern PyObject *const_tuple_str_plain_a_tuple;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_3f07db178fdeee72a253dae658423338;
extern PyObject *const_str_plain_EmailMultiAlternatives;
static PyObject *const_tuple_false_none_none_none_tuple;
extern PyObject *const_str_plain_klass;
static PyObject *const_str_plain_datatuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_send_mass_mail = UNSTREAM_STRING( &constant_bin[ 790682 ], 14, 1 );
    const_tuple_5bc1bc8adf0bed8c300dc21a6ec2bfdc_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_5bc1bc8adf0bed8c300dc21a6ec2bfdc_tuple, 0, const_str_plain_DEFAULT_ATTACHMENT_MIME_TYPE ); Py_INCREF( const_str_plain_DEFAULT_ATTACHMENT_MIME_TYPE );
    PyTuple_SET_ITEM( const_tuple_5bc1bc8adf0bed8c300dc21a6ec2bfdc_tuple, 1, const_str_plain_BadHeaderError ); Py_INCREF( const_str_plain_BadHeaderError );
    PyTuple_SET_ITEM( const_tuple_5bc1bc8adf0bed8c300dc21a6ec2bfdc_tuple, 2, const_str_plain_EmailMessage ); Py_INCREF( const_str_plain_EmailMessage );
    PyTuple_SET_ITEM( const_tuple_5bc1bc8adf0bed8c300dc21a6ec2bfdc_tuple, 3, const_str_plain_EmailMultiAlternatives ); Py_INCREF( const_str_plain_EmailMultiAlternatives );
    PyTuple_SET_ITEM( const_tuple_5bc1bc8adf0bed8c300dc21a6ec2bfdc_tuple, 4, const_str_plain_SafeMIMEMultipart ); Py_INCREF( const_str_plain_SafeMIMEMultipart );
    PyTuple_SET_ITEM( const_tuple_5bc1bc8adf0bed8c300dc21a6ec2bfdc_tuple, 5, const_str_plain_SafeMIMEText ); Py_INCREF( const_str_plain_SafeMIMEText );
    PyTuple_SET_ITEM( const_tuple_5bc1bc8adf0bed8c300dc21a6ec2bfdc_tuple, 6, const_str_plain_forbid_multi_line_headers ); Py_INCREF( const_str_plain_forbid_multi_line_headers );
    PyTuple_SET_ITEM( const_tuple_5bc1bc8adf0bed8c300dc21a6ec2bfdc_tuple, 7, const_str_plain_make_msgid ); Py_INCREF( const_str_plain_make_msgid );
    const_tuple_788da1634d847913dacb66f7ef2950fd_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_788da1634d847913dacb66f7ef2950fd_tuple, 0, const_str_plain_subject ); Py_INCREF( const_str_plain_subject );
    PyTuple_SET_ITEM( const_tuple_788da1634d847913dacb66f7ef2950fd_tuple, 1, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_788da1634d847913dacb66f7ef2950fd_tuple, 2, const_str_plain_from_email ); Py_INCREF( const_str_plain_from_email );
    const_str_plain_recipient_list = UNSTREAM_STRING( &constant_bin[ 790696 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_788da1634d847913dacb66f7ef2950fd_tuple, 3, const_str_plain_recipient_list ); Py_INCREF( const_str_plain_recipient_list );
    PyTuple_SET_ITEM( const_tuple_788da1634d847913dacb66f7ef2950fd_tuple, 4, const_str_plain_fail_silently ); Py_INCREF( const_str_plain_fail_silently );
    const_str_plain_auth_user = UNSTREAM_STRING( &constant_bin[ 790710 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_788da1634d847913dacb66f7ef2950fd_tuple, 5, const_str_plain_auth_user ); Py_INCREF( const_str_plain_auth_user );
    const_str_plain_auth_password = UNSTREAM_STRING( &constant_bin[ 790719 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_788da1634d847913dacb66f7ef2950fd_tuple, 6, const_str_plain_auth_password ); Py_INCREF( const_str_plain_auth_password );
    PyTuple_SET_ITEM( const_tuple_788da1634d847913dacb66f7ef2950fd_tuple, 7, const_str_plain_connection ); Py_INCREF( const_str_plain_connection );
    PyTuple_SET_ITEM( const_tuple_788da1634d847913dacb66f7ef2950fd_tuple, 8, const_str_plain_html_message ); Py_INCREF( const_str_plain_html_message );
    PyTuple_SET_ITEM( const_tuple_788da1634d847913dacb66f7ef2950fd_tuple, 9, const_str_plain_mail ); Py_INCREF( const_str_plain_mail );
    const_str_digest_17c95fc00e2fa035a4a7e4fe917d63bb = UNSTREAM_STRING( &constant_bin[ 790732 ], 28, 0 );
    const_tuple_3b4fee64c2046286743ce267a464bc3b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_3b4fee64c2046286743ce267a464bc3b_tuple, 0, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyTuple_SET_ITEM( const_tuple_3b4fee64c2046286743ce267a464bc3b_tuple, 1, const_str_plain_fail_silently ); Py_INCREF( const_str_plain_fail_silently );
    PyTuple_SET_ITEM( const_tuple_3b4fee64c2046286743ce267a464bc3b_tuple, 2, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    PyTuple_SET_ITEM( const_tuple_3b4fee64c2046286743ce267a464bc3b_tuple, 3, const_str_plain_klass ); Py_INCREF( const_str_plain_klass );
    const_str_plain_NUITKA_PACKAGE_django_core_mail = UNSTREAM_STRING( &constant_bin[ 790760 ], 31, 1 );
    const_str_digest_dcd9259d193a76e79fad54e9e1350333 = UNSTREAM_STRING( &constant_bin[ 790791 ], 222, 0 );
    const_tuple_str_plain_DNS_NAME_str_plain_CachedDnsName_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DNS_NAME_str_plain_CachedDnsName_tuple, 0, const_str_plain_DNS_NAME ); Py_INCREF( const_str_plain_DNS_NAME );
    PyTuple_SET_ITEM( const_tuple_str_plain_DNS_NAME_str_plain_CachedDnsName_tuple, 1, const_str_plain_CachedDnsName ); Py_INCREF( const_str_plain_CachedDnsName );
    const_str_digest_3bc9cd3436adbed05aeee30a149a984b = UNSTREAM_STRING( &constant_bin[ 790739 ], 9, 0 );
    const_str_digest_ccaf478ca9df72f2a24652f04baa4957 = UNSTREAM_STRING( &constant_bin[ 791013 ], 25, 0 );
    const_list_2a56c87d4d1b4ea30b58df6b484f8201_list = PyList_New( 15 );
    PyList_SET_ITEM( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list, 0, const_str_plain_CachedDnsName ); Py_INCREF( const_str_plain_CachedDnsName );
    PyList_SET_ITEM( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list, 1, const_str_plain_DNS_NAME ); Py_INCREF( const_str_plain_DNS_NAME );
    PyList_SET_ITEM( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list, 2, const_str_plain_EmailMessage ); Py_INCREF( const_str_plain_EmailMessage );
    PyList_SET_ITEM( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list, 3, const_str_plain_EmailMultiAlternatives ); Py_INCREF( const_str_plain_EmailMultiAlternatives );
    PyList_SET_ITEM( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list, 4, const_str_plain_SafeMIMEText ); Py_INCREF( const_str_plain_SafeMIMEText );
    PyList_SET_ITEM( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list, 5, const_str_plain_SafeMIMEMultipart ); Py_INCREF( const_str_plain_SafeMIMEMultipart );
    PyList_SET_ITEM( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list, 6, const_str_plain_DEFAULT_ATTACHMENT_MIME_TYPE ); Py_INCREF( const_str_plain_DEFAULT_ATTACHMENT_MIME_TYPE );
    PyList_SET_ITEM( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list, 7, const_str_plain_make_msgid ); Py_INCREF( const_str_plain_make_msgid );
    PyList_SET_ITEM( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list, 8, const_str_plain_BadHeaderError ); Py_INCREF( const_str_plain_BadHeaderError );
    PyList_SET_ITEM( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list, 9, const_str_plain_forbid_multi_line_headers ); Py_INCREF( const_str_plain_forbid_multi_line_headers );
    PyList_SET_ITEM( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list, 10, const_str_plain_get_connection ); Py_INCREF( const_str_plain_get_connection );
    PyList_SET_ITEM( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list, 11, const_str_plain_send_mail ); Py_INCREF( const_str_plain_send_mail );
    PyList_SET_ITEM( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list, 12, const_str_plain_send_mass_mail ); Py_INCREF( const_str_plain_send_mass_mail );
    PyList_SET_ITEM( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list, 13, const_str_plain_mail_admins ); Py_INCREF( const_str_plain_mail_admins );
    const_str_plain_mail_managers = UNSTREAM_STRING( &constant_bin[ 791038 ], 13, 1 );
    PyList_SET_ITEM( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list, 14, const_str_plain_mail_managers ); Py_INCREF( const_str_plain_mail_managers );
    const_tuple_false_none_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_false_none_none_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_tuple_false_none_none_none_none_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_none_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    const_str_digest_7b409349ae9bcff87319817b7154920c = UNSTREAM_STRING( &constant_bin[ 791051 ], 569, 0 );
    const_str_digest_234b289f937c6961c780f32ea2f04b3f = UNSTREAM_STRING( &constant_bin[ 791620 ], 26, 0 );
    const_tuple_6eea4ff2571fe6b4c070f34967da81ba_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_6eea4ff2571fe6b4c070f34967da81ba_tuple, 0, const_str_plain_subject ); Py_INCREF( const_str_plain_subject );
    PyTuple_SET_ITEM( const_tuple_6eea4ff2571fe6b4c070f34967da81ba_tuple, 1, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_6eea4ff2571fe6b4c070f34967da81ba_tuple, 2, const_str_plain_sender ); Py_INCREF( const_str_plain_sender );
    PyTuple_SET_ITEM( const_tuple_6eea4ff2571fe6b4c070f34967da81ba_tuple, 3, const_str_plain_recipient ); Py_INCREF( const_str_plain_recipient );
    const_str_plain_datatuple = UNSTREAM_STRING( &constant_bin[ 791064 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_6eea4ff2571fe6b4c070f34967da81ba_tuple, 4, const_str_plain_datatuple ); Py_INCREF( const_str_plain_datatuple );
    PyTuple_SET_ITEM( const_tuple_6eea4ff2571fe6b4c070f34967da81ba_tuple, 5, const_str_plain_connection ); Py_INCREF( const_str_plain_connection );
    const_str_digest_361587de2a9b7265a8610c25a42e22b5 = UNSTREAM_STRING( &constant_bin[ 791646 ], 433, 0 );
    const_str_digest_daae6d9876cd0712c83b7035415ef6dd = UNSTREAM_STRING( &constant_bin[ 792079 ], 68, 0 );
    const_tuple_c2e983d69a0e4e24b6d4859f17466298_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_c2e983d69a0e4e24b6d4859f17466298_tuple, 0, const_str_plain_datatuple ); Py_INCREF( const_str_plain_datatuple );
    PyTuple_SET_ITEM( const_tuple_c2e983d69a0e4e24b6d4859f17466298_tuple, 1, const_str_plain_fail_silently ); Py_INCREF( const_str_plain_fail_silently );
    PyTuple_SET_ITEM( const_tuple_c2e983d69a0e4e24b6d4859f17466298_tuple, 2, const_str_plain_auth_user ); Py_INCREF( const_str_plain_auth_user );
    PyTuple_SET_ITEM( const_tuple_c2e983d69a0e4e24b6d4859f17466298_tuple, 3, const_str_plain_auth_password ); Py_INCREF( const_str_plain_auth_password );
    PyTuple_SET_ITEM( const_tuple_c2e983d69a0e4e24b6d4859f17466298_tuple, 4, const_str_plain_connection ); Py_INCREF( const_str_plain_connection );
    PyTuple_SET_ITEM( const_tuple_c2e983d69a0e4e24b6d4859f17466298_tuple, 5, const_str_plain_messages ); Py_INCREF( const_str_plain_messages );
    const_tuple_4e68671053c42ca53246bff32e1352cb_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_4e68671053c42ca53246bff32e1352cb_tuple, 0, const_str_plain_subject ); Py_INCREF( const_str_plain_subject );
    PyTuple_SET_ITEM( const_tuple_4e68671053c42ca53246bff32e1352cb_tuple, 1, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_4e68671053c42ca53246bff32e1352cb_tuple, 2, const_str_plain_fail_silently ); Py_INCREF( const_str_plain_fail_silently );
    PyTuple_SET_ITEM( const_tuple_4e68671053c42ca53246bff32e1352cb_tuple, 3, const_str_plain_connection ); Py_INCREF( const_str_plain_connection );
    PyTuple_SET_ITEM( const_tuple_4e68671053c42ca53246bff32e1352cb_tuple, 4, const_str_plain_html_message ); Py_INCREF( const_str_plain_html_message );
    PyTuple_SET_ITEM( const_tuple_4e68671053c42ca53246bff32e1352cb_tuple, 5, const_str_plain_mail ); Py_INCREF( const_str_plain_mail );
    const_tuple_75a15e879c7a8bd34659463d4ddb0ad9_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_75a15e879c7a8bd34659463d4ddb0ad9_tuple, 0, const_str_plain_NUITKA_PACKAGE_django_core_mail ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_django_core_mail );
    PyTuple_SET_ITEM( const_tuple_75a15e879c7a8bd34659463d4ddb0ad9_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_str_digest_3f07db178fdeee72a253dae658423338 = UNSTREAM_STRING( &constant_bin[ 792147 ], 64, 0 );
    const_tuple_false_none_none_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$core$mail( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_511a530df6fb7b210e19e3f73001044f;
static PyCodeObject *codeobj_640ccb64c145fa6c4f28093fc71d23ea;
static PyCodeObject *codeobj_65b05b6a0873b6b3ab5a6d198716577e;
static PyCodeObject *codeobj_53e53520558709b487bf2d0ddb5e2347;
static PyCodeObject *codeobj_face192665c41b1d3945cbf1913f54a4;
static PyCodeObject *codeobj_69337f3a07aa8f8d6dbfef3ec162d3a3;
static PyCodeObject *codeobj_cc13755fb2b4acdcd7f6f7d182ab7a34;
static PyCodeObject *codeobj_d5b66ec9cfc93e1f58efb95eff9f6083;
static PyCodeObject *codeobj_5c792633ed03c3d658263f44aa2b1415;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_17c95fc00e2fa035a4a7e4fe917d63bb );
    codeobj_511a530df6fb7b210e19e3f73001044f = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 85, const_tuple_6eea4ff2571fe6b4c070f34967da81ba_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_640ccb64c145fa6c4f28093fc71d23ea = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 98, const_tuple_str_plain_a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_65b05b6a0873b6b3ab5a6d198716577e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 113, const_tuple_str_plain_a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_53e53520558709b487bf2d0ddb5e2347 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ccaf478ca9df72f2a24652f04baa4957, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_face192665c41b1d3945cbf1913f54a4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_connection, 28, const_tuple_3b4fee64c2046286743ce267a464bc3b_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_69337f3a07aa8f8d6dbfef3ec162d3a3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mail_admins, 91, const_tuple_4e68671053c42ca53246bff32e1352cb_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_cc13755fb2b4acdcd7f6f7d182ab7a34 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mail_managers, 106, const_tuple_4e68671053c42ca53246bff32e1352cb_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_d5b66ec9cfc93e1f58efb95eff9f6083 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send_mail, 40, const_tuple_788da1634d847913dacb66f7ef2950fd_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_5c792633ed03c3d658263f44aa2b1415 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send_mass_mail, 65, const_tuple_c2e983d69a0e4e24b6d4859f17466298_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_10_complex_call_helper_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_django$core$mail$$$function_1_get_connection( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$core$mail$$$function_2_send_mail( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$core$mail$$$function_3_send_mass_mail( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$core$mail$$$function_4_mail_admins( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$core$mail$$$function_5_mail_managers( PyObject *defaults );


// The module function definitions.
static PyObject *impl_django$core$mail$$$function_1_get_connection( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[ 0 ];
    PyObject *par_fail_silently = python_pars[ 1 ];
    PyObject *par_kwds = python_pars[ 2 ];
    PyObject *var_klass = NULL;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_face192665c41b1d3945cbf1913f54a4 = NULL;

    struct Nuitka_FrameObject *frame_face192665c41b1d3945cbf1913f54a4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_face192665c41b1d3945cbf1913f54a4, codeobj_face192665c41b1d3945cbf1913f54a4, module_django$core$mail, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_face192665c41b1d3945cbf1913f54a4 = cache_frame_face192665c41b1d3945cbf1913f54a4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_face192665c41b1d3945cbf1913f54a4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_face192665c41b1d3945cbf1913f54a4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_import_string );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_import_string );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "import_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = par_backend;

    CHECK_OBJECT( tmp_or_left_value_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 36;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_EMAIL_BACKEND );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_args_element_name_1 = tmp_or_left_value_1;
    or_end_1:;
    frame_face192665c41b1d3945cbf1913f54a4->m_frame.f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_klass == NULL );
    var_klass = tmp_assign_source_1;

    tmp_dircall_arg1_1 = var_klass;

    CHECK_OBJECT( tmp_dircall_arg1_1 );
    tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_fail_silently;
    tmp_dict_value_1 = par_fail_silently;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fail_silently" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = par_kwds;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwds" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_10_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_face192665c41b1d3945cbf1913f54a4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_face192665c41b1d3945cbf1913f54a4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_face192665c41b1d3945cbf1913f54a4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_face192665c41b1d3945cbf1913f54a4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_face192665c41b1d3945cbf1913f54a4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_face192665c41b1d3945cbf1913f54a4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_face192665c41b1d3945cbf1913f54a4,
        type_description_1,
        par_backend,
        par_fail_silently,
        par_kwds,
        var_klass
    );


    // Release cached frame.
    if ( frame_face192665c41b1d3945cbf1913f54a4 == cache_frame_face192665c41b1d3945cbf1913f54a4 )
    {
        Py_DECREF( frame_face192665c41b1d3945cbf1913f54a4 );
    }
    cache_frame_face192665c41b1d3945cbf1913f54a4 = NULL;

    assertFrameObject( frame_face192665c41b1d3945cbf1913f54a4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_1_get_connection );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_backend );
    par_backend = NULL;

    Py_XDECREF( par_fail_silently );
    par_fail_silently = NULL;

    Py_XDECREF( par_kwds );
    par_kwds = NULL;

    Py_XDECREF( var_klass );
    var_klass = NULL;

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

    Py_XDECREF( par_backend );
    par_backend = NULL;

    Py_XDECREF( par_fail_silently );
    par_fail_silently = NULL;

    Py_XDECREF( par_kwds );
    par_kwds = NULL;

    Py_XDECREF( var_klass );
    var_klass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_1_get_connection );
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


static PyObject *impl_django$core$mail$$$function_2_send_mail( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_subject = python_pars[ 0 ];
    PyObject *par_message = python_pars[ 1 ];
    PyObject *par_from_email = python_pars[ 2 ];
    PyObject *par_recipient_list = python_pars[ 3 ];
    PyObject *par_fail_silently = python_pars[ 4 ];
    PyObject *par_auth_user = python_pars[ 5 ];
    PyObject *par_auth_password = python_pars[ 6 ];
    PyObject *par_connection = python_pars[ 7 ];
    PyObject *par_html_message = python_pars[ 8 ];
    PyObject *var_mail = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
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
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d5b66ec9cfc93e1f58efb95eff9f6083 = NULL;

    struct Nuitka_FrameObject *frame_d5b66ec9cfc93e1f58efb95eff9f6083;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d5b66ec9cfc93e1f58efb95eff9f6083, codeobj_d5b66ec9cfc93e1f58efb95eff9f6083, module_django$core$mail, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d5b66ec9cfc93e1f58efb95eff9f6083 = cache_frame_d5b66ec9cfc93e1f58efb95eff9f6083;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d5b66ec9cfc93e1f58efb95eff9f6083 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d5b66ec9cfc93e1f58efb95eff9f6083 ) == 2 ); // Frame stack

    // Framed code:
    tmp_or_left_value_1 = par_connection;

    CHECK_OBJECT( tmp_or_left_value_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oooooooooo";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_get_connection );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_connection );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_key_1 = const_str_plain_username;
    tmp_dict_value_1 = par_auth_user;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_password;
    tmp_dict_value_2 = par_auth_password;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_fail_silently;
    tmp_dict_value_3 = par_fail_silently;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_d5b66ec9cfc93e1f58efb95eff9f6083->m_frame.f_lineno = 53;
    tmp_or_right_value_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    {
        PyObject *old = par_connection;
        par_connection = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_EmailMultiAlternatives );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EmailMultiAlternatives );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EmailMultiAlternatives" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 4 );
    tmp_tuple_element_1 = par_subject;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "subject" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_message;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_from_email;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "from_email" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_recipient_list;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "recipient_list" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 3, tmp_tuple_element_1 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_4 = const_str_plain_connection;
    tmp_dict_value_4 = par_connection;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_d5b66ec9cfc93e1f58efb95eff9f6083->m_frame.f_lineno = 58;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_mail == NULL );
    var_mail = tmp_assign_source_2;

    tmp_cond_value_1 = par_html_message;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "html_message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
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
    tmp_source_name_1 = var_mail;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_attach_alternative );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_html_message;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "html_message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = const_str_digest_aee0d40e09f76fd339276e187b4cadfd;
    frame_d5b66ec9cfc93e1f58efb95eff9f6083->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_called_instance_1 = var_mail;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mail" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_d5b66ec9cfc93e1f58efb95eff9f6083->m_frame.f_lineno = 62;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_send );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5b66ec9cfc93e1f58efb95eff9f6083 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5b66ec9cfc93e1f58efb95eff9f6083 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5b66ec9cfc93e1f58efb95eff9f6083 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d5b66ec9cfc93e1f58efb95eff9f6083, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d5b66ec9cfc93e1f58efb95eff9f6083->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d5b66ec9cfc93e1f58efb95eff9f6083, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d5b66ec9cfc93e1f58efb95eff9f6083,
        type_description_1,
        par_subject,
        par_message,
        par_from_email,
        par_recipient_list,
        par_fail_silently,
        par_auth_user,
        par_auth_password,
        par_connection,
        par_html_message,
        var_mail
    );


    // Release cached frame.
    if ( frame_d5b66ec9cfc93e1f58efb95eff9f6083 == cache_frame_d5b66ec9cfc93e1f58efb95eff9f6083 )
    {
        Py_DECREF( frame_d5b66ec9cfc93e1f58efb95eff9f6083 );
    }
    cache_frame_d5b66ec9cfc93e1f58efb95eff9f6083 = NULL;

    assertFrameObject( frame_d5b66ec9cfc93e1f58efb95eff9f6083 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_2_send_mail );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_subject );
    par_subject = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

    Py_XDECREF( par_from_email );
    par_from_email = NULL;

    Py_XDECREF( par_recipient_list );
    par_recipient_list = NULL;

    Py_XDECREF( par_fail_silently );
    par_fail_silently = NULL;

    Py_XDECREF( par_auth_user );
    par_auth_user = NULL;

    Py_XDECREF( par_auth_password );
    par_auth_password = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( par_html_message );
    par_html_message = NULL;

    Py_XDECREF( var_mail );
    var_mail = NULL;

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

    Py_XDECREF( par_subject );
    par_subject = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

    Py_XDECREF( par_from_email );
    par_from_email = NULL;

    Py_XDECREF( par_recipient_list );
    par_recipient_list = NULL;

    Py_XDECREF( par_fail_silently );
    par_fail_silently = NULL;

    Py_XDECREF( par_auth_user );
    par_auth_user = NULL;

    Py_XDECREF( par_auth_password );
    par_auth_password = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( par_html_message );
    par_html_message = NULL;

    Py_XDECREF( var_mail );
    var_mail = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_2_send_mail );
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


static PyObject *impl_django$core$mail$$$function_3_send_mass_mail( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_datatuple = python_pars[ 0 ];
    PyObject *par_fail_silently = python_pars[ 1 ];
    PyObject *par_auth_user = python_pars[ 2 ];
    PyObject *par_auth_password = python_pars[ 3 ];
    PyObject *par_connection = python_pars[ 4 ];
    PyObject *var_messages = NULL;
    PyObject *outline_0_var_subject = NULL;
    PyObject *outline_0_var_message = NULL;
    PyObject *outline_0_var_sender = NULL;
    PyObject *outline_0_var_recipient = NULL;
    PyObject *tmp_listcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcontraction$tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_listcontraction$tuple_unpack_1__element_4 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
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
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    static struct Nuitka_FrameObject *cache_frame_511a530df6fb7b210e19e3f73001044f_2 = NULL;

    struct Nuitka_FrameObject *frame_511a530df6fb7b210e19e3f73001044f_2;

    static struct Nuitka_FrameObject *cache_frame_5c792633ed03c3d658263f44aa2b1415 = NULL;

    struct Nuitka_FrameObject *frame_5c792633ed03c3d658263f44aa2b1415;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5c792633ed03c3d658263f44aa2b1415, codeobj_5c792633ed03c3d658263f44aa2b1415, module_django$core$mail, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5c792633ed03c3d658263f44aa2b1415 = cache_frame_5c792633ed03c3d658263f44aa2b1415;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5c792633ed03c3d658263f44aa2b1415 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5c792633ed03c3d658263f44aa2b1415 ) == 2 ); // Frame stack

    // Framed code:
    tmp_or_left_value_1 = par_connection;

    CHECK_OBJECT( tmp_or_left_value_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_get_connection );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_connection );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_key_1 = const_str_plain_username;
    tmp_dict_value_1 = par_auth_user;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_password;
    tmp_dict_value_2 = par_auth_password;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_fail_silently;
    tmp_dict_value_3 = par_fail_silently;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_5c792633ed03c3d658263f44aa2b1415->m_frame.f_lineno = 79;
    tmp_or_right_value_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    {
        PyObject *old = par_connection;
        par_connection = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_1 = par_datatuple;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "datatuple" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( tmp_listcontraction_1__$0 == NULL );
    tmp_listcontraction_1__$0 = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( tmp_listcontraction_1__contraction == NULL );
    tmp_listcontraction_1__contraction = tmp_assign_source_4;

    MAKE_OR_REUSE_FRAME( cache_frame_511a530df6fb7b210e19e3f73001044f_2, codeobj_511a530df6fb7b210e19e3f73001044f, module_django$core$mail, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_511a530df6fb7b210e19e3f73001044f_2 = cache_frame_511a530df6fb7b210e19e3f73001044f_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_511a530df6fb7b210e19e3f73001044f_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_511a530df6fb7b210e19e3f73001044f_2 ) == 2 ); // Frame stack

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
            type_description_2 = "oooooo";
            exception_lineno = 85;
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


        exception_lineno = 85;
        type_description_2 = "oooooo";
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
    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0, 4 );
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


        type_description_2 = "oooooo";
        exception_lineno = 85;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_listcontraction$tuple_unpack_1__element_1;
        tmp_listcontraction$tuple_unpack_1__element_1 = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_listcontraction$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1, 4 );
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


        type_description_2 = "oooooo";
        exception_lineno = 85;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_listcontraction$tuple_unpack_1__element_2;
        tmp_listcontraction$tuple_unpack_1__element_2 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_listcontraction$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_3, 2, 4 );
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


        type_description_2 = "oooooo";
        exception_lineno = 85;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_listcontraction$tuple_unpack_1__element_3;
        tmp_listcontraction$tuple_unpack_1__element_3 = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_listcontraction$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_4, 3, 4 );
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


        type_description_2 = "oooooo";
        exception_lineno = 85;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_listcontraction$tuple_unpack_1__element_4;
        tmp_listcontraction$tuple_unpack_1__element_4 = tmp_assign_source_10;
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

                type_description_2 = "oooooo";
                exception_lineno = 85;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "oooooo";
        exception_lineno = 85;
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

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_3 );
    tmp_listcontraction$tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_4 );
    tmp_listcontraction$tuple_unpack_1__element_4 = NULL;

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

    tmp_assign_source_11 = tmp_listcontraction$tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = outline_0_var_subject;
        outline_0_var_subject = tmp_assign_source_11;
        Py_INCREF( outline_0_var_subject );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_1 );
    tmp_listcontraction$tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_12 = tmp_listcontraction$tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = outline_0_var_message;
        outline_0_var_message = tmp_assign_source_12;
        Py_INCREF( outline_0_var_message );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_2 );
    tmp_listcontraction$tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_13 = tmp_listcontraction$tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = outline_0_var_sender;
        outline_0_var_sender = tmp_assign_source_13;
        Py_INCREF( outline_0_var_sender );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_3 );
    tmp_listcontraction$tuple_unpack_1__element_3 = NULL;

    tmp_assign_source_14 = tmp_listcontraction$tuple_unpack_1__element_4;

    CHECK_OBJECT( tmp_assign_source_14 );
    {
        PyObject *old = outline_0_var_recipient;
        outline_0_var_recipient = tmp_assign_source_14;
        Py_INCREF( outline_0_var_recipient );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_4 );
    tmp_listcontraction$tuple_unpack_1__element_4 = NULL;

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_1 );
    tmp_listcontraction$tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_2 );
    tmp_listcontraction$tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_3 );
    tmp_listcontraction$tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_4 );
    tmp_listcontraction$tuple_unpack_1__element_4 = NULL;

    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_EmailMessage );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EmailMessage );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EmailMessage" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_2 = "oooooo";
        goto try_except_handler_3;
    }

    tmp_args_name_1 = PyTuple_New( 4 );
    tmp_tuple_element_1 = outline_0_var_subject;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "subject" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_2 = "oooooo";
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = outline_0_var_message;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_2 = "oooooo";
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = outline_0_var_sender;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sender" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_2 = "oooooo";
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = outline_0_var_recipient;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "recipient" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_2 = "oooooo";
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 3, tmp_tuple_element_1 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_4 = const_str_plain_connection;
    tmp_dict_value_4 = par_connection;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_2 = "oooooo";
        goto try_except_handler_3;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_511a530df6fb7b210e19e3f73001044f_2->m_frame.f_lineno = 85;
    tmp_append_value_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_2 = "oooooo";
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_2 = "oooooo";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_2 = "oooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_3_send_mass_mail );
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
    RESTORE_FRAME_EXCEPTION( frame_511a530df6fb7b210e19e3f73001044f_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_511a530df6fb7b210e19e3f73001044f_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_511a530df6fb7b210e19e3f73001044f_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_511a530df6fb7b210e19e3f73001044f_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_511a530df6fb7b210e19e3f73001044f_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_511a530df6fb7b210e19e3f73001044f_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_511a530df6fb7b210e19e3f73001044f_2,
        type_description_2,
        outline_0_var_subject,
        outline_0_var_message,
        outline_0_var_sender,
        outline_0_var_recipient,
        par_datatuple,
        par_connection
    );


    // Release cached frame.
    if ( frame_511a530df6fb7b210e19e3f73001044f_2 == cache_frame_511a530df6fb7b210e19e3f73001044f_2 )
    {
        Py_DECREF( frame_511a530df6fb7b210e19e3f73001044f_2 );
    }
    cache_frame_511a530df6fb7b210e19e3f73001044f_2 = NULL;

    assertFrameObject( frame_511a530df6fb7b210e19e3f73001044f_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oooooo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_3_send_mass_mail );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_subject );
    outline_0_var_subject = NULL;

    Py_XDECREF( outline_0_var_message );
    outline_0_var_message = NULL;

    Py_XDECREF( outline_0_var_sender );
    outline_0_var_sender = NULL;

    Py_XDECREF( outline_0_var_recipient );
    outline_0_var_recipient = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var_subject );
    outline_0_var_subject = NULL;

    Py_XDECREF( outline_0_var_message );
    outline_0_var_message = NULL;

    Py_XDECREF( outline_0_var_sender );
    outline_0_var_sender = NULL;

    Py_XDECREF( outline_0_var_recipient );
    outline_0_var_recipient = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_3_send_mass_mail );
    return NULL;
    outline_exception_1:;
    exception_lineno = 85;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_assign_source_2 = tmp_outline_return_value_1;
    assert( var_messages == NULL );
    var_messages = tmp_assign_source_2;

    tmp_source_name_1 = par_connection;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_send_messages );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_messages;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "messages" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_5c792633ed03c3d658263f44aa2b1415->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c792633ed03c3d658263f44aa2b1415 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c792633ed03c3d658263f44aa2b1415 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c792633ed03c3d658263f44aa2b1415 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5c792633ed03c3d658263f44aa2b1415, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5c792633ed03c3d658263f44aa2b1415->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5c792633ed03c3d658263f44aa2b1415, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5c792633ed03c3d658263f44aa2b1415,
        type_description_1,
        par_datatuple,
        par_fail_silently,
        par_auth_user,
        par_auth_password,
        par_connection,
        var_messages
    );


    // Release cached frame.
    if ( frame_5c792633ed03c3d658263f44aa2b1415 == cache_frame_5c792633ed03c3d658263f44aa2b1415 )
    {
        Py_DECREF( frame_5c792633ed03c3d658263f44aa2b1415 );
    }
    cache_frame_5c792633ed03c3d658263f44aa2b1415 = NULL;

    assertFrameObject( frame_5c792633ed03c3d658263f44aa2b1415 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_3_send_mass_mail );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_datatuple );
    par_datatuple = NULL;

    Py_XDECREF( par_fail_silently );
    par_fail_silently = NULL;

    Py_XDECREF( par_auth_user );
    par_auth_user = NULL;

    Py_XDECREF( par_auth_password );
    par_auth_password = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( var_messages );
    var_messages = NULL;

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

    Py_XDECREF( par_datatuple );
    par_datatuple = NULL;

    Py_XDECREF( par_fail_silently );
    par_fail_silently = NULL;

    Py_XDECREF( par_auth_user );
    par_auth_user = NULL;

    Py_XDECREF( par_auth_password );
    par_auth_password = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( var_messages );
    var_messages = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_3_send_mass_mail );
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


static PyObject *impl_django$core$mail$$$function_4_mail_admins( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_subject = python_pars[ 0 ];
    PyObject *par_message = python_pars[ 1 ];
    PyObject *par_fail_silently = python_pars[ 2 ];
    PyObject *par_connection = python_pars[ 3 ];
    PyObject *par_html_message = python_pars[ 4 ];
    PyObject *var_mail = NULL;
    PyObject *outline_0_var_a = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_640ccb64c145fa6c4f28093fc71d23ea_2 = NULL;

    struct Nuitka_FrameObject *frame_640ccb64c145fa6c4f28093fc71d23ea_2;

    static struct Nuitka_FrameObject *cache_frame_69337f3a07aa8f8d6dbfef3ec162d3a3 = NULL;

    struct Nuitka_FrameObject *frame_69337f3a07aa8f8d6dbfef3ec162d3a3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_69337f3a07aa8f8d6dbfef3ec162d3a3, codeobj_69337f3a07aa8f8d6dbfef3ec162d3a3, module_django$core$mail, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_69337f3a07aa8f8d6dbfef3ec162d3a3 = cache_frame_69337f3a07aa8f8d6dbfef3ec162d3a3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_69337f3a07aa8f8d6dbfef3ec162d3a3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_69337f3a07aa8f8d6dbfef3ec162d3a3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ADMINS );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 94;
        type_description_1 = "oooooo";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_EmailMultiAlternatives );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EmailMultiAlternatives );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EmailMultiAlternatives" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 4 );
    tmp_left_name_1 = const_str_digest_d76462298f66c95b4d3ee22e9427a916;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EMAIL_SUBJECT_PREFIX );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 97;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_subject;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "subject" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 97;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_message;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SERVER_EMAIL );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 98;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    // Tried code:
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 98;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ADMINS );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( tmp_listcontraction_1__$0 == NULL );
    tmp_listcontraction_1__$0 = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_listcontraction_1__contraction == NULL );
    tmp_listcontraction_1__contraction = tmp_assign_source_3;

    MAKE_OR_REUSE_FRAME( cache_frame_640ccb64c145fa6c4f28093fc71d23ea_2, codeobj_640ccb64c145fa6c4f28093fc71d23ea, module_django$core$mail, sizeof(void *) );
    frame_640ccb64c145fa6c4f28093fc71d23ea_2 = cache_frame_640ccb64c145fa6c4f28093fc71d23ea_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_640ccb64c145fa6c4f28093fc71d23ea_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_640ccb64c145fa6c4f28093fc71d23ea_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_listcontraction_1__$0;

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
            type_description_2 = "o";
            exception_lineno = 98;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_listcontraction_1__iter_value_0;
        tmp_listcontraction_1__iter_value_0 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_listcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = outline_0_var_a;
        outline_0_var_a = tmp_assign_source_5;
        Py_INCREF( outline_0_var_a );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_subscribed_name_1 = outline_0_var_a;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_append_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_4_mail_admins );
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
    RESTORE_FRAME_EXCEPTION( frame_640ccb64c145fa6c4f28093fc71d23ea_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_640ccb64c145fa6c4f28093fc71d23ea_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_640ccb64c145fa6c4f28093fc71d23ea_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_640ccb64c145fa6c4f28093fc71d23ea_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_640ccb64c145fa6c4f28093fc71d23ea_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_640ccb64c145fa6c4f28093fc71d23ea_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_640ccb64c145fa6c4f28093fc71d23ea_2,
        type_description_2,
        outline_0_var_a
    );


    // Release cached frame.
    if ( frame_640ccb64c145fa6c4f28093fc71d23ea_2 == cache_frame_640ccb64c145fa6c4f28093fc71d23ea_2 )
    {
        Py_DECREF( frame_640ccb64c145fa6c4f28093fc71d23ea_2 );
    }
    cache_frame_640ccb64c145fa6c4f28093fc71d23ea_2 = NULL;

    assertFrameObject( frame_640ccb64c145fa6c4f28093fc71d23ea_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oooooo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_4_mail_admins );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_a );
    outline_0_var_a = NULL;

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

    Py_XDECREF( outline_0_var_a );
    outline_0_var_a = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_4_mail_admins );
    return NULL;
    outline_exception_1:;
    exception_lineno = 98;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_tuple_element_1 = tmp_outline_return_value_1;
    PyTuple_SET_ITEM( tmp_args_name_1, 3, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_connection;
    tmp_dict_value_1 = par_connection;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_69337f3a07aa8f8d6dbfef3ec162d3a3->m_frame.f_lineno = 96;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_mail == NULL );
    var_mail = tmp_assign_source_1;

    tmp_cond_value_2 = par_html_message;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "html_message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
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
    tmp_source_name_5 = var_mail;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_attach_alternative );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_html_message;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "html_message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = const_str_digest_aee0d40e09f76fd339276e187b4cadfd;
    frame_69337f3a07aa8f8d6dbfef3ec162d3a3->m_frame.f_lineno = 102;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_source_name_6 = var_mail;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mail" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_send );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_2 = const_str_plain_fail_silently;
    tmp_dict_value_2 = par_fail_silently;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fail_silently" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_69337f3a07aa8f8d6dbfef3ec162d3a3->m_frame.f_lineno = 103;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_69337f3a07aa8f8d6dbfef3ec162d3a3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_69337f3a07aa8f8d6dbfef3ec162d3a3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_69337f3a07aa8f8d6dbfef3ec162d3a3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_69337f3a07aa8f8d6dbfef3ec162d3a3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_69337f3a07aa8f8d6dbfef3ec162d3a3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_69337f3a07aa8f8d6dbfef3ec162d3a3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_69337f3a07aa8f8d6dbfef3ec162d3a3,
        type_description_1,
        par_subject,
        par_message,
        par_fail_silently,
        par_connection,
        par_html_message,
        var_mail
    );


    // Release cached frame.
    if ( frame_69337f3a07aa8f8d6dbfef3ec162d3a3 == cache_frame_69337f3a07aa8f8d6dbfef3ec162d3a3 )
    {
        Py_DECREF( frame_69337f3a07aa8f8d6dbfef3ec162d3a3 );
    }
    cache_frame_69337f3a07aa8f8d6dbfef3ec162d3a3 = NULL;

    assertFrameObject( frame_69337f3a07aa8f8d6dbfef3ec162d3a3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_4_mail_admins );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_subject );
    par_subject = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

    Py_XDECREF( par_fail_silently );
    par_fail_silently = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( par_html_message );
    par_html_message = NULL;

    Py_XDECREF( var_mail );
    var_mail = NULL;

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

    Py_XDECREF( par_subject );
    par_subject = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

    Py_XDECREF( par_fail_silently );
    par_fail_silently = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( par_html_message );
    par_html_message = NULL;

    Py_XDECREF( var_mail );
    var_mail = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_4_mail_admins );
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


static PyObject *impl_django$core$mail$$$function_5_mail_managers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_subject = python_pars[ 0 ];
    PyObject *par_message = python_pars[ 1 ];
    PyObject *par_fail_silently = python_pars[ 2 ];
    PyObject *par_connection = python_pars[ 3 ];
    PyObject *par_html_message = python_pars[ 4 ];
    PyObject *var_mail = NULL;
    PyObject *outline_0_var_a = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_65b05b6a0873b6b3ab5a6d198716577e_2 = NULL;

    struct Nuitka_FrameObject *frame_65b05b6a0873b6b3ab5a6d198716577e_2;

    static struct Nuitka_FrameObject *cache_frame_cc13755fb2b4acdcd7f6f7d182ab7a34 = NULL;

    struct Nuitka_FrameObject *frame_cc13755fb2b4acdcd7f6f7d182ab7a34;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cc13755fb2b4acdcd7f6f7d182ab7a34, codeobj_cc13755fb2b4acdcd7f6f7d182ab7a34, module_django$core$mail, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cc13755fb2b4acdcd7f6f7d182ab7a34 = cache_frame_cc13755fb2b4acdcd7f6f7d182ab7a34;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cc13755fb2b4acdcd7f6f7d182ab7a34 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cc13755fb2b4acdcd7f6f7d182ab7a34 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 109;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_MANAGERS );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 109;
        type_description_1 = "oooooo";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_EmailMultiAlternatives );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EmailMultiAlternatives );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EmailMultiAlternatives" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 4 );
    tmp_left_name_1 = const_str_digest_d76462298f66c95b4d3ee22e9427a916;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EMAIL_SUBJECT_PREFIX );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 112;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_subject;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "subject" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 112;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_message;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SERVER_EMAIL );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 113;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    // Tried code:
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 113;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_MANAGERS );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( tmp_listcontraction_1__$0 == NULL );
    tmp_listcontraction_1__$0 = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_listcontraction_1__contraction == NULL );
    tmp_listcontraction_1__contraction = tmp_assign_source_3;

    MAKE_OR_REUSE_FRAME( cache_frame_65b05b6a0873b6b3ab5a6d198716577e_2, codeobj_65b05b6a0873b6b3ab5a6d198716577e, module_django$core$mail, sizeof(void *) );
    frame_65b05b6a0873b6b3ab5a6d198716577e_2 = cache_frame_65b05b6a0873b6b3ab5a6d198716577e_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_65b05b6a0873b6b3ab5a6d198716577e_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_65b05b6a0873b6b3ab5a6d198716577e_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_listcontraction_1__$0;

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
            type_description_2 = "o";
            exception_lineno = 113;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_listcontraction_1__iter_value_0;
        tmp_listcontraction_1__iter_value_0 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_listcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = outline_0_var_a;
        outline_0_var_a = tmp_assign_source_5;
        Py_INCREF( outline_0_var_a );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_subscribed_name_1 = outline_0_var_a;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_append_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_5_mail_managers );
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
    RESTORE_FRAME_EXCEPTION( frame_65b05b6a0873b6b3ab5a6d198716577e_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_65b05b6a0873b6b3ab5a6d198716577e_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_65b05b6a0873b6b3ab5a6d198716577e_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_65b05b6a0873b6b3ab5a6d198716577e_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_65b05b6a0873b6b3ab5a6d198716577e_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_65b05b6a0873b6b3ab5a6d198716577e_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_65b05b6a0873b6b3ab5a6d198716577e_2,
        type_description_2,
        outline_0_var_a
    );


    // Release cached frame.
    if ( frame_65b05b6a0873b6b3ab5a6d198716577e_2 == cache_frame_65b05b6a0873b6b3ab5a6d198716577e_2 )
    {
        Py_DECREF( frame_65b05b6a0873b6b3ab5a6d198716577e_2 );
    }
    cache_frame_65b05b6a0873b6b3ab5a6d198716577e_2 = NULL;

    assertFrameObject( frame_65b05b6a0873b6b3ab5a6d198716577e_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oooooo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_5_mail_managers );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_a );
    outline_0_var_a = NULL;

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

    Py_XDECREF( outline_0_var_a );
    outline_0_var_a = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_5_mail_managers );
    return NULL;
    outline_exception_1:;
    exception_lineno = 113;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_tuple_element_1 = tmp_outline_return_value_1;
    PyTuple_SET_ITEM( tmp_args_name_1, 3, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_connection;
    tmp_dict_value_1 = par_connection;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_cc13755fb2b4acdcd7f6f7d182ab7a34->m_frame.f_lineno = 111;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_mail == NULL );
    var_mail = tmp_assign_source_1;

    tmp_cond_value_2 = par_html_message;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "html_message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
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
    tmp_source_name_5 = var_mail;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_attach_alternative );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_html_message;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "html_message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = const_str_digest_aee0d40e09f76fd339276e187b4cadfd;
    frame_cc13755fb2b4acdcd7f6f7d182ab7a34->m_frame.f_lineno = 117;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_source_name_6 = var_mail;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mail" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_send );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_2 = const_str_plain_fail_silently;
    tmp_dict_value_2 = par_fail_silently;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fail_silently" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_cc13755fb2b4acdcd7f6f7d182ab7a34->m_frame.f_lineno = 118;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc13755fb2b4acdcd7f6f7d182ab7a34 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc13755fb2b4acdcd7f6f7d182ab7a34 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc13755fb2b4acdcd7f6f7d182ab7a34 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cc13755fb2b4acdcd7f6f7d182ab7a34, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cc13755fb2b4acdcd7f6f7d182ab7a34->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cc13755fb2b4acdcd7f6f7d182ab7a34, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cc13755fb2b4acdcd7f6f7d182ab7a34,
        type_description_1,
        par_subject,
        par_message,
        par_fail_silently,
        par_connection,
        par_html_message,
        var_mail
    );


    // Release cached frame.
    if ( frame_cc13755fb2b4acdcd7f6f7d182ab7a34 == cache_frame_cc13755fb2b4acdcd7f6f7d182ab7a34 )
    {
        Py_DECREF( frame_cc13755fb2b4acdcd7f6f7d182ab7a34 );
    }
    cache_frame_cc13755fb2b4acdcd7f6f7d182ab7a34 = NULL;

    assertFrameObject( frame_cc13755fb2b4acdcd7f6f7d182ab7a34 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_5_mail_managers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_subject );
    par_subject = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

    Py_XDECREF( par_fail_silently );
    par_fail_silently = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( par_html_message );
    par_html_message = NULL;

    Py_XDECREF( var_mail );
    var_mail = NULL;

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

    Py_XDECREF( par_subject );
    par_subject = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

    Py_XDECREF( par_fail_silently );
    par_fail_silently = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( par_html_message );
    par_html_message = NULL;

    Py_XDECREF( var_mail );
    var_mail = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$mail$$$function_5_mail_managers );
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



static PyObject *MAKE_FUNCTION_django$core$mail$$$function_1_get_connection( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$mail$$$function_1_get_connection,
        const_str_plain_get_connection,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_face192665c41b1d3945cbf1913f54a4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$mail,
        const_str_digest_dcd9259d193a76e79fad54e9e1350333,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$mail$$$function_2_send_mail( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$mail$$$function_2_send_mail,
        const_str_plain_send_mail,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d5b66ec9cfc93e1f58efb95eff9f6083,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$mail,
        const_str_digest_361587de2a9b7265a8610c25a42e22b5,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$mail$$$function_3_send_mass_mail( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$mail$$$function_3_send_mass_mail,
        const_str_plain_send_mass_mail,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5c792633ed03c3d658263f44aa2b1415,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$mail,
        const_str_digest_7b409349ae9bcff87319817b7154920c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$mail$$$function_4_mail_admins( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$mail$$$function_4_mail_admins,
        const_str_plain_mail_admins,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_69337f3a07aa8f8d6dbfef3ec162d3a3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$mail,
        const_str_digest_3f07db178fdeee72a253dae658423338,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$mail$$$function_5_mail_managers( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$mail$$$function_5_mail_managers,
        const_str_plain_mail_managers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cc13755fb2b4acdcd7f6f7d182ab7a34,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$mail,
        const_str_digest_daae6d9876cd0712c83b7035415ef6dd,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$core$mail =
{
    PyModuleDef_HEAD_INIT,
    "django.core.mail",   /* m_name */
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

MOD_INIT_DECL( django$core$mail )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$core$mail );
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
    puts("django.core.mail: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.core.mail: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$core$mail" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$core$mail = Py_InitModule4(
        "django.core.mail",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$core$mail = PyModule_Create( &mdef_django$core$mail );
#endif

    moduledict_django$core$mail = MODULE_DICT( module_django$core$mail );

    CHECK_OBJECT( module_django$core$mail );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d434fa92832494458af57a18e30eeae3, module_django$core$mail );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
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
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    struct Nuitka_FrameObject *frame_53e53520558709b487bf2d0ddb5e2347;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_234b289f937c6961c780f32ea2f04b3f;
    UPDATE_STRING_DICT0( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_53e53520558709b487bf2d0ddb5e2347 = MAKE_MODULE_FRAME( codeobj_53e53520558709b487bf2d0ddb5e2347, module_django$core$mail );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_53e53520558709b487bf2d0ddb5e2347 );
    assert( Py_REFCNT( frame_53e53520558709b487bf2d0ddb5e2347 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 4 );
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 1;
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
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 1;
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
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_source_name_2 = PyObject_GetAttr( module, const_str_plain_path );
        }
        else
        {
            tmp_source_name_2 = NULL;
        }
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 1;
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
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 1;
    tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_c15243b3ba68498da186d5d65ae367ca_tuple, 0 ) );

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_digest_3bc9cd3436adbed05aeee30a149a984b;
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_source_name_3 = PyObject_GetAttr( module, const_str_plain_path );
        }
        else
        {
            tmp_source_name_3 = NULL;
        }
    }

    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_called_instance_2 = PyObject_GetAttr( module, const_str_plain_environ );
        }
        else
        {
            tmp_called_instance_2 = NULL;
        }
    }

    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 1;
    tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_b868c6b0937f28ff9b15f6cc52ff2098_tuple, 0 ) );

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_str_plain_mail;
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_called_instance_3 = PyObject_GetAttr( module, const_str_plain_environ );
        }
        else
        {
            tmp_called_instance_3 = NULL;
        }
    }

    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_75a15e879c7a8bd34659463d4ddb0ad9_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 3, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("importlib._bootstrap");
        if (likely( module != NULL ))
        {
            tmp_called_name_4 = PyObject_GetAttr( module, const_str_plain_ModuleSpec );
        }
        else
        {
            tmp_called_name_4 = NULL;
        }
    }

    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = const_str_digest_d434fa92832494458af57a18e30eeae3;
    tmp_args_element_name_7 = metapath_based_loader;
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_d434fa92832494458af57a18e30eeae3;
    UPDATE_STRING_DICT0( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 4;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_unicode_literals );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_8 );
    tmp_name_name_1 = const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
    tmp_globals_name_1 = (PyObject *)moduledict_django$core$mail;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_settings_tuple;
    tmp_level_name_1 = const_int_0;
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 6;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_settings );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_settings, tmp_assign_source_9 );
    tmp_name_name_2 = const_str_digest_1572198cb22a44b444ca284ab3fb285b;
    tmp_globals_name_2 = (PyObject *)moduledict_django$core$mail;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_5bc1bc8adf0bed8c300dc21a6ec2bfdc_tuple;
    tmp_level_name_2 = const_int_0;
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 11;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_10;

    // Tried code:
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_DEFAULT_ATTACHMENT_MIME_TYPE );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_DEFAULT_ATTACHMENT_MIME_TYPE, tmp_assign_source_11 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_BadHeaderError );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_BadHeaderError, tmp_assign_source_12 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_EmailMessage );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_EmailMessage, tmp_assign_source_13 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_EmailMultiAlternatives );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_EmailMultiAlternatives, tmp_assign_source_14 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_SafeMIMEMultipart );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_SafeMIMEMultipart, tmp_assign_source_15 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_SafeMIMEText );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_SafeMIMEText, tmp_assign_source_16 );
    tmp_import_name_from_9 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_forbid_multi_line_headers );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_forbid_multi_line_headers, tmp_assign_source_17 );
    tmp_import_name_from_10 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_make_msgid );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_make_msgid, tmp_assign_source_18 );
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

    tmp_name_name_3 = const_str_digest_5f972e9cea97219805947b4127aeae11;
    tmp_globals_name_3 = (PyObject *)moduledict_django$core$mail;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_DNS_NAME_str_plain_CachedDnsName_tuple;
    tmp_level_name_3 = const_int_0;
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 16;
    tmp_assign_source_19 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_19;

    // Tried code:
    tmp_import_name_from_11 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_DNS_NAME );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_DNS_NAME, tmp_assign_source_20 );
    tmp_import_name_from_12 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_CachedDnsName );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_CachedDnsName, tmp_assign_source_21 );
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

    tmp_name_name_4 = const_str_digest_690178e17eae3581689f22974cc26edf;
    tmp_globals_name_4 = (PyObject *)moduledict_django$core$mail;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_import_string_tuple;
    tmp_level_name_4 = const_int_0;
    frame_53e53520558709b487bf2d0ddb5e2347->m_frame.f_lineno = 17;
    tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_import_string );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_import_string, tmp_assign_source_22 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_53e53520558709b487bf2d0ddb5e2347 );
#endif
    popFrameStack();

    assertFrameObject( frame_53e53520558709b487bf2d0ddb5e2347 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_53e53520558709b487bf2d0ddb5e2347 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_53e53520558709b487bf2d0ddb5e2347, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_53e53520558709b487bf2d0ddb5e2347->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_53e53520558709b487bf2d0ddb5e2347, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_23 = LIST_COPY( const_list_2a56c87d4d1b4ea30b58df6b484f8201_list );
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_23 );
    tmp_defaults_1 = const_tuple_none_false_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_24 = MAKE_FUNCTION_django$core$mail$$$function_1_get_connection( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_get_connection, tmp_assign_source_24 );
    tmp_defaults_2 = const_tuple_false_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_25 = MAKE_FUNCTION_django$core$mail$$$function_2_send_mail( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_send_mail, tmp_assign_source_25 );
    tmp_defaults_3 = const_tuple_false_none_none_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_26 = MAKE_FUNCTION_django$core$mail$$$function_3_send_mass_mail( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_send_mass_mail, tmp_assign_source_26 );
    tmp_defaults_4 = const_tuple_false_none_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_27 = MAKE_FUNCTION_django$core$mail$$$function_4_mail_admins( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_mail_admins, tmp_assign_source_27 );
    tmp_defaults_5 = const_tuple_false_none_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_assign_source_28 = MAKE_FUNCTION_django$core$mail$$$function_5_mail_managers( tmp_defaults_5 );
    UPDATE_STRING_DICT1( moduledict_django$core$mail, (Nuitka_StringObject *)const_str_plain_mail_managers, tmp_assign_source_28 );

    return MOD_RETURN_VALUE( module_django$core$mail );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
