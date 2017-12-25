/* Generated code for Python source for module 'django.utils.translation.trans_null'
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

/* The _module_django$utils$translation$trans_null is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$utils$translation$trans_null;
PyDictObject *moduledict_django$utils$translation$trans_null;

/* The module constants used, if any. */
extern PyObject *const_str_plain_force_text;
extern PyObject *const_str_plain_LANGUAGES_BIDI;
extern PyObject *const_str_plain_npgettext;
extern PyObject *const_str_plain_get_language_from_path;
extern PyObject *const_str_plain_check_path;
extern PyObject *const_str_plain_ngettext_lazy;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_request;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_get_language_bidi;
extern PyObject *const_str_plain_gettext_noop;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_singular;
extern PyObject *const_str_plain_plural;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_language_str_plain_p_tuple;
extern PyObject *const_str_plain_LANGUAGE_CODE;
extern PyObject *const_str_plain_language;
extern PyObject *const_str_digest_e3393b2e61653c3df2c7d436c253bbee;
extern PyObject *const_str_plain_ungettext;
extern PyObject *const_tuple_str_plain_force_text_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ngettext;
extern PyObject *const_str_plain_gettext;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_chr_45;
extern PyObject *const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
extern PyObject *const_str_plain_gettext_lazy;
extern PyObject *const_tuple_str_plain_settings_tuple;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_deactivate;
extern PyObject *const_str_plain_ugettext;
extern PyObject *const_str_plain_to_locale;
extern PyObject *const_tuple_str_plain_message_tuple;
extern PyObject *const_str_plain_context;
extern PyObject *const_str_plain_deactivate_all;
static PyObject *const_str_digest_3961368ee82825a280f6042cb412c3a3;
extern PyObject *const_tuple_str_chr_45_tuple;
extern PyObject *const_tuple_str_plain_request_str_plain_check_path_tuple;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_check_for_language;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get_language_from_request;
extern PyObject *const_tuple_b00034d1d175ebf58eff4f8fc3e1bd77_tuple;
extern PyObject *const_str_plain_activate;
extern PyObject *const_str_plain_settings;
extern PyObject *const_tuple_str_plain_singular_str_plain_plural_str_plain_number_tuple;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_tuple_str_plain_request_tuple;
extern PyObject *const_tuple_str_plain_context_str_plain_message_tuple;
extern PyObject *const_str_plain_find;
extern PyObject *const_str_digest_cd342f2524b448df63e7f67ee363fe83;
extern PyObject *const_str_plain_get_language;
static PyObject *const_str_digest_fe08cda0fe0f262e827cc886199b65bb;
static PyObject *const_str_digest_2c6ce407c4268bf35cc6cb63821d3e96;
extern PyObject *const_str_plain_number;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_pgettext;
extern PyObject *const_str_plain__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_language_str_plain_p_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_language_str_plain_p_tuple, 0, const_str_plain_language ); Py_INCREF( const_str_plain_language );
    PyTuple_SET_ITEM( const_tuple_str_plain_language_str_plain_p_tuple, 1, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_str_digest_3961368ee82825a280f6042cb412c3a3 = UNSTREAM_STRING( &constant_bin[ 1217520 ], 38, 0 );
    const_str_digest_fe08cda0fe0f262e827cc886199b65bb = UNSTREAM_STRING( &constant_bin[ 1217558 ], 35, 0 );
    const_str_digest_2c6ce407c4268bf35cc6cb63821d3e96 = UNSTREAM_STRING( &constant_bin[ 1217593 ], 44, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$utils$translation$trans_null( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_943f2f4ff022bb4a2cf490251f4bd998;
static PyCodeObject *codeobj_58f166eaa179bdaef9d1d534eac61080;
static PyCodeObject *codeobj_2043731e642859c715e42f73d21f1cab;
static PyCodeObject *codeobj_02ed0e71f63a785a28fa417edf979b8d;
static PyCodeObject *codeobj_a80dcf78e078f75858851fe1b879c6a5;
static PyCodeObject *codeobj_43b3eaf06a543eb4c37ca23396428897;
static PyCodeObject *codeobj_34118ffd1fb951f252f3efcc61d67aab;
static PyCodeObject *codeobj_89a08a64509e20ff25f18c5150b134fd;
static PyCodeObject *codeobj_318a038c2501b9df394530121deca91b;
static PyCodeObject *codeobj_fabae8231d0c3c7cc397a5e483f5022e;
static PyCodeObject *codeobj_b3483ac63bcc520ec0343b8cba69ebae;
static PyCodeObject *codeobj_114e0b73b22237dbdea2b59af5a50c65;
static PyCodeObject *codeobj_6d1dfc988426694b307a1623ac52b817;
static PyCodeObject *codeobj_e8f100872c45ae490fae04afe30d539c;
static PyCodeObject *codeobj_9c599837aa390ff47135de66b3b26e1e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_3961368ee82825a280f6042cb412c3a3 );
    codeobj_943f2f4ff022bb4a2cf490251f4bd998 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2c6ce407c4268bf35cc6cb63821d3e96, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_58f166eaa179bdaef9d1d534eac61080 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_activate, 30, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2043731e642859c715e42f73d21f1cab = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_for_language, 49, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_02ed0e71f63a785a28fa417edf979b8d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deactivate, 34, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a80dcf78e078f75858851fe1b879c6a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_language, 41, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_43b3eaf06a543eb4c37ca23396428897 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_language_bidi, 45, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_34118ffd1fb951f252f3efcc61d67aab = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_language_from_path, 76, const_tuple_str_plain_request_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_89a08a64509e20ff25f18c5150b134fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_language_from_request, 72, const_tuple_str_plain_request_str_plain_check_path_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_318a038c2501b9df394530121deca91b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_gettext, 53, const_tuple_str_plain_message_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fabae8231d0c3c7cc397a5e483f5022e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ngettext, 9, const_tuple_str_plain_singular_str_plain_plural_str_plain_number_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b3483ac63bcc520ec0343b8cba69ebae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_npgettext, 26, const_tuple_b00034d1d175ebf58eff4f8fc3e1bd77_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_114e0b73b22237dbdea2b59af5a50c65 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pgettext, 22, const_tuple_str_plain_context_str_plain_message_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6d1dfc988426694b307a1623ac52b817 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_to_locale, 64, const_tuple_str_plain_language_str_plain_p_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e8f100872c45ae490fae04afe30d539c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ugettext, 57, const_tuple_str_plain_message_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9c599837aa390ff47135de66b3b26e1e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ungettext, 18, const_tuple_str_plain_singular_str_plain_plural_str_plain_number_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_10_gettext(  );


static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_11_ugettext(  );


static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_12_to_locale(  );


static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_13_get_language_from_request( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_14_get_language_from_path(  );


static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_1_ngettext(  );


static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_2_ungettext(  );


static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_3_pgettext(  );


static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_4_npgettext(  );


static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_5_activate(  );


static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_6_deactivate(  );


static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_7_get_language(  );


static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_8_get_language_bidi(  );


static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_9_check_for_language(  );


// The module function definitions.
static PyObject *impl_django$utils$translation$trans_null$$$function_1_ngettext( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_singular = python_pars[ 0 ];
    PyObject *par_plural = python_pars[ 1 ];
    PyObject *par_number = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_fabae8231d0c3c7cc397a5e483f5022e = NULL;

    struct Nuitka_FrameObject *frame_fabae8231d0c3c7cc397a5e483f5022e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fabae8231d0c3c7cc397a5e483f5022e, codeobj_fabae8231d0c3c7cc397a5e483f5022e, module_django$utils$translation$trans_null, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fabae8231d0c3c7cc397a5e483f5022e = cache_frame_fabae8231d0c3c7cc397a5e483f5022e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fabae8231d0c3c7cc397a5e483f5022e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fabae8231d0c3c7cc397a5e483f5022e ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_number;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
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
    tmp_return_value = par_singular;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "singular" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 11;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_return_value = par_plural;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "plural" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 12;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fabae8231d0c3c7cc397a5e483f5022e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fabae8231d0c3c7cc397a5e483f5022e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fabae8231d0c3c7cc397a5e483f5022e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fabae8231d0c3c7cc397a5e483f5022e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fabae8231d0c3c7cc397a5e483f5022e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fabae8231d0c3c7cc397a5e483f5022e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fabae8231d0c3c7cc397a5e483f5022e,
        type_description_1,
        par_singular,
        par_plural,
        par_number
    );


    // Release cached frame.
    if ( frame_fabae8231d0c3c7cc397a5e483f5022e == cache_frame_fabae8231d0c3c7cc397a5e483f5022e )
    {
        Py_DECREF( frame_fabae8231d0c3c7cc397a5e483f5022e );
    }
    cache_frame_fabae8231d0c3c7cc397a5e483f5022e = NULL;

    assertFrameObject( frame_fabae8231d0c3c7cc397a5e483f5022e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_1_ngettext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_singular );
    par_singular = NULL;

    Py_XDECREF( par_plural );
    par_plural = NULL;

    Py_XDECREF( par_number );
    par_number = NULL;

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

    Py_XDECREF( par_singular );
    par_singular = NULL;

    Py_XDECREF( par_plural );
    par_plural = NULL;

    Py_XDECREF( par_number );
    par_number = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_1_ngettext );
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


static PyObject *impl_django$utils$translation$trans_null$$$function_2_ungettext( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_singular = python_pars[ 0 ];
    PyObject *par_plural = python_pars[ 1 ];
    PyObject *par_number = python_pars[ 2 ];
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_9c599837aa390ff47135de66b3b26e1e = NULL;

    struct Nuitka_FrameObject *frame_9c599837aa390ff47135de66b3b26e1e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9c599837aa390ff47135de66b3b26e1e, codeobj_9c599837aa390ff47135de66b3b26e1e, module_django$utils$translation$trans_null, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9c599837aa390ff47135de66b3b26e1e = cache_frame_9c599837aa390ff47135de66b3b26e1e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9c599837aa390ff47135de66b3b26e1e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9c599837aa390ff47135de66b3b26e1e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_force_text );

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

        exception_lineno = 19;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_ngettext );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ngettext );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ngettext" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_singular;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_plural;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_number;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_9c599837aa390ff47135de66b3b26e1e->m_frame.f_lineno = 19;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_9c599837aa390ff47135de66b3b26e1e->m_frame.f_lineno = 19;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c599837aa390ff47135de66b3b26e1e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c599837aa390ff47135de66b3b26e1e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c599837aa390ff47135de66b3b26e1e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9c599837aa390ff47135de66b3b26e1e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9c599837aa390ff47135de66b3b26e1e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9c599837aa390ff47135de66b3b26e1e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9c599837aa390ff47135de66b3b26e1e,
        type_description_1,
        par_singular,
        par_plural,
        par_number
    );


    // Release cached frame.
    if ( frame_9c599837aa390ff47135de66b3b26e1e == cache_frame_9c599837aa390ff47135de66b3b26e1e )
    {
        Py_DECREF( frame_9c599837aa390ff47135de66b3b26e1e );
    }
    cache_frame_9c599837aa390ff47135de66b3b26e1e = NULL;

    assertFrameObject( frame_9c599837aa390ff47135de66b3b26e1e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_2_ungettext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_singular );
    par_singular = NULL;

    Py_XDECREF( par_plural );
    par_plural = NULL;

    Py_XDECREF( par_number );
    par_number = NULL;

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

    Py_XDECREF( par_singular );
    par_singular = NULL;

    Py_XDECREF( par_plural );
    par_plural = NULL;

    Py_XDECREF( par_number );
    par_number = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_2_ungettext );
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


static PyObject *impl_django$utils$translation$trans_null$$$function_3_pgettext( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_context = python_pars[ 0 ];
    PyObject *par_message = python_pars[ 1 ];
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_114e0b73b22237dbdea2b59af5a50c65 = NULL;

    struct Nuitka_FrameObject *frame_114e0b73b22237dbdea2b59af5a50c65;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_114e0b73b22237dbdea2b59af5a50c65, codeobj_114e0b73b22237dbdea2b59af5a50c65, module_django$utils$translation$trans_null, sizeof(void *)+sizeof(void *) );
    frame_114e0b73b22237dbdea2b59af5a50c65 = cache_frame_114e0b73b22237dbdea2b59af5a50c65;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_114e0b73b22237dbdea2b59af5a50c65 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_114e0b73b22237dbdea2b59af5a50c65 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_ugettext );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ugettext );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ugettext" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_message;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_114e0b73b22237dbdea2b59af5a50c65->m_frame.f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_114e0b73b22237dbdea2b59af5a50c65 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_114e0b73b22237dbdea2b59af5a50c65 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_114e0b73b22237dbdea2b59af5a50c65 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_114e0b73b22237dbdea2b59af5a50c65, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_114e0b73b22237dbdea2b59af5a50c65->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_114e0b73b22237dbdea2b59af5a50c65, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_114e0b73b22237dbdea2b59af5a50c65,
        type_description_1,
        par_context,
        par_message
    );


    // Release cached frame.
    if ( frame_114e0b73b22237dbdea2b59af5a50c65 == cache_frame_114e0b73b22237dbdea2b59af5a50c65 )
    {
        Py_DECREF( frame_114e0b73b22237dbdea2b59af5a50c65 );
    }
    cache_frame_114e0b73b22237dbdea2b59af5a50c65 = NULL;

    assertFrameObject( frame_114e0b73b22237dbdea2b59af5a50c65 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_3_pgettext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

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

    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_3_pgettext );
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


static PyObject *impl_django$utils$translation$trans_null$$$function_4_npgettext( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_context = python_pars[ 0 ];
    PyObject *par_singular = python_pars[ 1 ];
    PyObject *par_plural = python_pars[ 2 ];
    PyObject *par_number = python_pars[ 3 ];
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_b3483ac63bcc520ec0343b8cba69ebae = NULL;

    struct Nuitka_FrameObject *frame_b3483ac63bcc520ec0343b8cba69ebae;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b3483ac63bcc520ec0343b8cba69ebae, codeobj_b3483ac63bcc520ec0343b8cba69ebae, module_django$utils$translation$trans_null, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b3483ac63bcc520ec0343b8cba69ebae = cache_frame_b3483ac63bcc520ec0343b8cba69ebae;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b3483ac63bcc520ec0343b8cba69ebae );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b3483ac63bcc520ec0343b8cba69ebae ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_ungettext );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ungettext );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ungettext" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_singular;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_plural;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_number;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_b3483ac63bcc520ec0343b8cba69ebae->m_frame.f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3483ac63bcc520ec0343b8cba69ebae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3483ac63bcc520ec0343b8cba69ebae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3483ac63bcc520ec0343b8cba69ebae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b3483ac63bcc520ec0343b8cba69ebae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b3483ac63bcc520ec0343b8cba69ebae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b3483ac63bcc520ec0343b8cba69ebae, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b3483ac63bcc520ec0343b8cba69ebae,
        type_description_1,
        par_context,
        par_singular,
        par_plural,
        par_number
    );


    // Release cached frame.
    if ( frame_b3483ac63bcc520ec0343b8cba69ebae == cache_frame_b3483ac63bcc520ec0343b8cba69ebae )
    {
        Py_DECREF( frame_b3483ac63bcc520ec0343b8cba69ebae );
    }
    cache_frame_b3483ac63bcc520ec0343b8cba69ebae = NULL;

    assertFrameObject( frame_b3483ac63bcc520ec0343b8cba69ebae );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_4_npgettext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( par_singular );
    par_singular = NULL;

    Py_XDECREF( par_plural );
    par_plural = NULL;

    Py_XDECREF( par_number );
    par_number = NULL;

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

    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( par_singular );
    par_singular = NULL;

    Py_XDECREF( par_plural );
    par_plural = NULL;

    Py_XDECREF( par_number );
    par_number = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_4_npgettext );
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


static PyObject *impl_django$utils$translation$trans_null$$$function_5_activate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_5_activate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_5_activate );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$utils$translation$trans_null$$$function_6_deactivate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_6_deactivate );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$utils$translation$trans_null$$$function_7_get_language( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_a80dcf78e078f75858851fe1b879c6a5 = NULL;

    struct Nuitka_FrameObject *frame_a80dcf78e078f75858851fe1b879c6a5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_a80dcf78e078f75858851fe1b879c6a5, codeobj_a80dcf78e078f75858851fe1b879c6a5, module_django$utils$translation$trans_null, 0 );
    frame_a80dcf78e078f75858851fe1b879c6a5 = cache_frame_a80dcf78e078f75858851fe1b879c6a5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a80dcf78e078f75858851fe1b879c6a5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a80dcf78e078f75858851fe1b879c6a5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 42;

        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_LANGUAGE_CODE );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a80dcf78e078f75858851fe1b879c6a5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a80dcf78e078f75858851fe1b879c6a5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a80dcf78e078f75858851fe1b879c6a5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a80dcf78e078f75858851fe1b879c6a5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a80dcf78e078f75858851fe1b879c6a5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a80dcf78e078f75858851fe1b879c6a5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a80dcf78e078f75858851fe1b879c6a5,
        type_description_1
    );


    // Release cached frame.
    if ( frame_a80dcf78e078f75858851fe1b879c6a5 == cache_frame_a80dcf78e078f75858851fe1b879c6a5 )
    {
        Py_DECREF( frame_a80dcf78e078f75858851fe1b879c6a5 );
    }
    cache_frame_a80dcf78e078f75858851fe1b879c6a5 = NULL;

    assertFrameObject( frame_a80dcf78e078f75858851fe1b879c6a5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_7_get_language );
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


static PyObject *impl_django$utils$translation$trans_null$$$function_8_get_language_bidi( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_43b3eaf06a543eb4c37ca23396428897 = NULL;

    struct Nuitka_FrameObject *frame_43b3eaf06a543eb4c37ca23396428897;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_43b3eaf06a543eb4c37ca23396428897, codeobj_43b3eaf06a543eb4c37ca23396428897, module_django$utils$translation$trans_null, 0 );
    frame_43b3eaf06a543eb4c37ca23396428897 = cache_frame_43b3eaf06a543eb4c37ca23396428897;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_43b3eaf06a543eb4c37ca23396428897 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_43b3eaf06a543eb4c37ca23396428897 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 46;

        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_LANGUAGE_CODE );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;

        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_LANGUAGES_BIDI );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    tmp_return_value = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_43b3eaf06a543eb4c37ca23396428897 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_43b3eaf06a543eb4c37ca23396428897 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_43b3eaf06a543eb4c37ca23396428897 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_43b3eaf06a543eb4c37ca23396428897, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_43b3eaf06a543eb4c37ca23396428897->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_43b3eaf06a543eb4c37ca23396428897, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_43b3eaf06a543eb4c37ca23396428897,
        type_description_1
    );


    // Release cached frame.
    if ( frame_43b3eaf06a543eb4c37ca23396428897 == cache_frame_43b3eaf06a543eb4c37ca23396428897 )
    {
        Py_DECREF( frame_43b3eaf06a543eb4c37ca23396428897 );
    }
    cache_frame_43b3eaf06a543eb4c37ca23396428897 = NULL;

    assertFrameObject( frame_43b3eaf06a543eb4c37ca23396428897 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_8_get_language_bidi );
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


static PyObject *impl_django$utils$translation$trans_null$$$function_9_check_for_language( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_9_check_for_language );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_9_check_for_language );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$utils$translation$trans_null$$$function_10_gettext( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_message;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_10_gettext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_10_gettext );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$utils$translation$trans_null$$$function_11_ugettext( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[ 0 ];
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_e8f100872c45ae490fae04afe30d539c = NULL;

    struct Nuitka_FrameObject *frame_e8f100872c45ae490fae04afe30d539c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e8f100872c45ae490fae04afe30d539c, codeobj_e8f100872c45ae490fae04afe30d539c, module_django$utils$translation$trans_null, sizeof(void *) );
    frame_e8f100872c45ae490fae04afe30d539c = cache_frame_e8f100872c45ae490fae04afe30d539c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e8f100872c45ae490fae04afe30d539c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e8f100872c45ae490fae04afe30d539c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_force_text );

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

        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_gettext );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gettext );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gettext" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_message;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_e8f100872c45ae490fae04afe30d539c->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_e8f100872c45ae490fae04afe30d539c->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8f100872c45ae490fae04afe30d539c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8f100872c45ae490fae04afe30d539c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8f100872c45ae490fae04afe30d539c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e8f100872c45ae490fae04afe30d539c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e8f100872c45ae490fae04afe30d539c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e8f100872c45ae490fae04afe30d539c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e8f100872c45ae490fae04afe30d539c,
        type_description_1,
        par_message
    );


    // Release cached frame.
    if ( frame_e8f100872c45ae490fae04afe30d539c == cache_frame_e8f100872c45ae490fae04afe30d539c )
    {
        Py_DECREF( frame_e8f100872c45ae490fae04afe30d539c );
    }
    cache_frame_e8f100872c45ae490fae04afe30d539c = NULL;

    assertFrameObject( frame_e8f100872c45ae490fae04afe30d539c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_11_ugettext );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_message );
    par_message = NULL;

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

    Py_XDECREF( par_message );
    par_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_11_ugettext );
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


static PyObject *impl_django$utils$translation$trans_null$$$function_12_to_locale( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_language = python_pars[ 0 ];
    PyObject *var_p = NULL;
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
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
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
    static struct Nuitka_FrameObject *cache_frame_6d1dfc988426694b307a1623ac52b817 = NULL;

    struct Nuitka_FrameObject *frame_6d1dfc988426694b307a1623ac52b817;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6d1dfc988426694b307a1623ac52b817, codeobj_6d1dfc988426694b307a1623ac52b817, module_django$utils$translation$trans_null, sizeof(void *)+sizeof(void *) );
    frame_6d1dfc988426694b307a1623ac52b817 = cache_frame_6d1dfc988426694b307a1623ac52b817;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6d1dfc988426694b307a1623ac52b817 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6d1dfc988426694b307a1623ac52b817 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_language;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_6d1dfc988426694b307a1623ac52b817->m_frame.f_lineno = 65;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_find, &PyTuple_GET_ITEM( const_tuple_str_chr_45_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_p == NULL );
    var_p = tmp_assign_source_1;

    tmp_compare_left_1 = var_p;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_subscribed_name_1 = par_language;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "language" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_1 = Py_None;
    tmp_stop_name_1 = var_p;

    if ( tmp_stop_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    assert( tmp_subscript_name_1 != NULL );
    tmp_called_instance_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_6d1dfc988426694b307a1623ac52b817->m_frame.f_lineno = 67;
    tmp_left_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_str_plain__;
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_language;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "language" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_3 = var_p;

    if ( tmp_left_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_1;
    tmp_start_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_start_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_stop_name_2 = Py_None;
    tmp_step_name_2 = Py_None;
    tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
    Py_DECREF( tmp_start_name_2 );
    assert( tmp_subscript_name_2 != NULL );
    tmp_called_instance_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscript_name_2 );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_6d1dfc988426694b307a1623ac52b817->m_frame.f_lineno = 67;
    tmp_right_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_upper );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_4 = par_language;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "language" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_6d1dfc988426694b307a1623ac52b817->m_frame.f_lineno = 69;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_lower );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d1dfc988426694b307a1623ac52b817 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d1dfc988426694b307a1623ac52b817 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d1dfc988426694b307a1623ac52b817 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6d1dfc988426694b307a1623ac52b817, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6d1dfc988426694b307a1623ac52b817->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6d1dfc988426694b307a1623ac52b817, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6d1dfc988426694b307a1623ac52b817,
        type_description_1,
        par_language,
        var_p
    );


    // Release cached frame.
    if ( frame_6d1dfc988426694b307a1623ac52b817 == cache_frame_6d1dfc988426694b307a1623ac52b817 )
    {
        Py_DECREF( frame_6d1dfc988426694b307a1623ac52b817 );
    }
    cache_frame_6d1dfc988426694b307a1623ac52b817 = NULL;

    assertFrameObject( frame_6d1dfc988426694b307a1623ac52b817 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_12_to_locale );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_language );
    par_language = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

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

    Py_XDECREF( par_language );
    par_language = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_12_to_locale );
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


static PyObject *impl_django$utils$translation$trans_null$$$function_13_get_language_from_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_request = python_pars[ 0 ];
    PyObject *par_check_path = python_pars[ 1 ];
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
    static struct Nuitka_FrameObject *cache_frame_89a08a64509e20ff25f18c5150b134fd = NULL;

    struct Nuitka_FrameObject *frame_89a08a64509e20ff25f18c5150b134fd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_89a08a64509e20ff25f18c5150b134fd, codeobj_89a08a64509e20ff25f18c5150b134fd, module_django$utils$translation$trans_null, sizeof(void *)+sizeof(void *) );
    frame_89a08a64509e20ff25f18c5150b134fd = cache_frame_89a08a64509e20ff25f18c5150b134fd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_89a08a64509e20ff25f18c5150b134fd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_89a08a64509e20ff25f18c5150b134fd ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 73;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_LANGUAGE_CODE );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89a08a64509e20ff25f18c5150b134fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_89a08a64509e20ff25f18c5150b134fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89a08a64509e20ff25f18c5150b134fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_89a08a64509e20ff25f18c5150b134fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_89a08a64509e20ff25f18c5150b134fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_89a08a64509e20ff25f18c5150b134fd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_89a08a64509e20ff25f18c5150b134fd,
        type_description_1,
        par_request,
        par_check_path
    );


    // Release cached frame.
    if ( frame_89a08a64509e20ff25f18c5150b134fd == cache_frame_89a08a64509e20ff25f18c5150b134fd )
    {
        Py_DECREF( frame_89a08a64509e20ff25f18c5150b134fd );
    }
    cache_frame_89a08a64509e20ff25f18c5150b134fd = NULL;

    assertFrameObject( frame_89a08a64509e20ff25f18c5150b134fd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_13_get_language_from_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_check_path );
    par_check_path = NULL;

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

    Py_XDECREF( par_check_path );
    par_check_path = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_13_get_language_from_request );
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


static PyObject *impl_django$utils$translation$trans_null$$$function_14_get_language_from_path( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_request = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_14_get_language_from_path );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$translation$trans_null$$$function_14_get_language_from_path );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_10_gettext(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$translation$trans_null$$$function_10_gettext,
        const_str_plain_gettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_318a038c2501b9df394530121deca91b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$translation$trans_null,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_11_ugettext(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$translation$trans_null$$$function_11_ugettext,
        const_str_plain_ugettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e8f100872c45ae490fae04afe30d539c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$translation$trans_null,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_12_to_locale(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$translation$trans_null$$$function_12_to_locale,
        const_str_plain_to_locale,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6d1dfc988426694b307a1623ac52b817,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$translation$trans_null,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_13_get_language_from_request( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$translation$trans_null$$$function_13_get_language_from_request,
        const_str_plain_get_language_from_request,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_89a08a64509e20ff25f18c5150b134fd,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$translation$trans_null,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_14_get_language_from_path(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$translation$trans_null$$$function_14_get_language_from_path,
        const_str_plain_get_language_from_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_34118ffd1fb951f252f3efcc61d67aab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$translation$trans_null,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_1_ngettext(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$translation$trans_null$$$function_1_ngettext,
        const_str_plain_ngettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fabae8231d0c3c7cc397a5e483f5022e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$translation$trans_null,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_2_ungettext(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$translation$trans_null$$$function_2_ungettext,
        const_str_plain_ungettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9c599837aa390ff47135de66b3b26e1e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$translation$trans_null,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_3_pgettext(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$translation$trans_null$$$function_3_pgettext,
        const_str_plain_pgettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_114e0b73b22237dbdea2b59af5a50c65,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$translation$trans_null,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_4_npgettext(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$translation$trans_null$$$function_4_npgettext,
        const_str_plain_npgettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b3483ac63bcc520ec0343b8cba69ebae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$translation$trans_null,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_5_activate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$translation$trans_null$$$function_5_activate,
        const_str_plain_activate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_58f166eaa179bdaef9d1d534eac61080,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$translation$trans_null,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_6_deactivate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$translation$trans_null$$$function_6_deactivate,
        const_str_plain_deactivate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_02ed0e71f63a785a28fa417edf979b8d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$translation$trans_null,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_7_get_language(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$translation$trans_null$$$function_7_get_language,
        const_str_plain_get_language,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a80dcf78e078f75858851fe1b879c6a5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$translation$trans_null,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_8_get_language_bidi(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$translation$trans_null$$$function_8_get_language_bidi,
        const_str_plain_get_language_bidi,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_43b3eaf06a543eb4c37ca23396428897,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$translation$trans_null,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$translation$trans_null$$$function_9_check_for_language(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$translation$trans_null$$$function_9_check_for_language,
        const_str_plain_check_for_language,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2043731e642859c715e42f73d21f1cab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$translation$trans_null,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$utils$translation$trans_null =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.translation.trans_null",   /* m_name */
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

MOD_INIT_DECL( django$utils$translation$trans_null )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$utils$translation$trans_null );
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
    puts("django.utils.translation.trans_null: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.utils.translation.trans_null: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$utils$translation$trans_null" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$utils$translation$trans_null = Py_InitModule4(
        "django.utils.translation.trans_null",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$utils$translation$trans_null = PyModule_Create( &mdef_django$utils$translation$trans_null );
#endif

    moduledict_django$utils$translation$trans_null = MODULE_DICT( module_django$utils$translation$trans_null );

    CHECK_OBJECT( module_django$utils$translation$trans_null );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_fe08cda0fe0f262e827cc886199b65bb, module_django$utils$translation$trans_null );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    struct Nuitka_FrameObject *frame_943f2f4ff022bb4a2cf490251f4bd998;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_943f2f4ff022bb4a2cf490251f4bd998 = MAKE_MODULE_FRAME( codeobj_943f2f4ff022bb4a2cf490251f4bd998, module_django$utils$translation$trans_null );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_943f2f4ff022bb4a2cf490251f4bd998 );
    assert( Py_REFCNT( frame_943f2f4ff022bb4a2cf490251f4bd998 ) == 2 );

    // Framed code:
    frame_943f2f4ff022bb4a2cf490251f4bd998->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_fe08cda0fe0f262e827cc886199b65bb;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_943f2f4ff022bb4a2cf490251f4bd998->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_cd342f2524b448df63e7f67ee363fe83;
    UPDATE_STRING_DICT0( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
    tmp_globals_name_1 = (PyObject *)moduledict_django$utils$translation$trans_null;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_settings_tuple;
    tmp_level_name_1 = const_int_0;
    frame_943f2f4ff022bb4a2cf490251f4bd998->m_frame.f_lineno = 5;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_settings );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_settings, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_digest_e3393b2e61653c3df2c7d436c253bbee;
    tmp_globals_name_2 = (PyObject *)moduledict_django$utils$translation$trans_null;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_force_text_tuple;
    tmp_level_name_2 = const_int_0;
    frame_943f2f4ff022bb4a2cf490251f4bd998->m_frame.f_lineno = 6;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_force_text );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_force_text, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_django$utils$translation$trans_null$$$function_1_ngettext(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_ngettext, tmp_assign_source_9 );
    tmp_assign_source_10 = GET_STRING_DICT_VALUE( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_ngettext );

    if (unlikely( tmp_assign_source_10 == NULL ))
    {
        tmp_assign_source_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ngettext );
    }

    if ( tmp_assign_source_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ngettext" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 15;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_ngettext_lazy, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_django$utils$translation$trans_null$$$function_2_ungettext(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_ungettext, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_django$utils$translation$trans_null$$$function_3_pgettext(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_pgettext, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_django$utils$translation$trans_null$$$function_4_npgettext(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_npgettext, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_django$utils$translation$trans_null$$$function_5_activate(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_activate, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_django$utils$translation$trans_null$$$function_6_deactivate(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_deactivate, tmp_assign_source_15 );
    tmp_assign_source_16 = GET_STRING_DICT_VALUE( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_deactivate );

    if (unlikely( tmp_assign_source_16 == NULL ))
    {
        tmp_assign_source_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_deactivate );
    }

    if ( tmp_assign_source_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "deactivate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_deactivate_all, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_django$utils$translation$trans_null$$$function_7_get_language(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_get_language, tmp_assign_source_17 );
    tmp_assign_source_18 = MAKE_FUNCTION_django$utils$translation$trans_null$$$function_8_get_language_bidi(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_get_language_bidi, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_django$utils$translation$trans_null$$$function_9_check_for_language(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_check_for_language, tmp_assign_source_19 );
    tmp_assign_source_20 = MAKE_FUNCTION_django$utils$translation$trans_null$$$function_10_gettext(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_gettext, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_django$utils$translation$trans_null$$$function_11_ugettext(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_ugettext, tmp_assign_source_21 );
    // Tried code:
    tmp_assign_source_22 = GET_STRING_DICT_VALUE( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_gettext );

    if (unlikely( tmp_assign_source_22 == NULL ))
    {
        tmp_assign_source_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gettext );
    }

    if ( tmp_assign_source_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gettext" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;

        goto try_except_handler_1;
    }

    assert( tmp_assign_unpack_1__assign_source == NULL );
    Py_INCREF( tmp_assign_source_22 );
    tmp_assign_unpack_1__assign_source = tmp_assign_source_22;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_943f2f4ff022bb4a2cf490251f4bd998 );
#endif
    popFrameStack();

    assertFrameObject( frame_943f2f4ff022bb4a2cf490251f4bd998 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_943f2f4ff022bb4a2cf490251f4bd998 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_943f2f4ff022bb4a2cf490251f4bd998, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_943f2f4ff022bb4a2cf490251f4bd998->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_943f2f4ff022bb4a2cf490251f4bd998, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_23 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_23 );
    UPDATE_STRING_DICT0( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_gettext_noop, tmp_assign_source_23 );
    tmp_assign_source_24 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_24 );
    UPDATE_STRING_DICT0( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_gettext_lazy, tmp_assign_source_24 );
    tmp_assign_source_25 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_25 );
    UPDATE_STRING_DICT0( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain__, tmp_assign_source_25 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    tmp_assign_source_26 = MAKE_FUNCTION_django$utils$translation$trans_null$$$function_12_to_locale(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_to_locale, tmp_assign_source_26 );
    tmp_defaults_1 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_27 = MAKE_FUNCTION_django$utils$translation$trans_null$$$function_13_get_language_from_request( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_get_language_from_request, tmp_assign_source_27 );
    tmp_assign_source_28 = MAKE_FUNCTION_django$utils$translation$trans_null$$$function_14_get_language_from_path(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$translation$trans_null, (Nuitka_StringObject *)const_str_plain_get_language_from_path, tmp_assign_source_28 );

    return MOD_RETURN_VALUE( module_django$utils$translation$trans_null );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
