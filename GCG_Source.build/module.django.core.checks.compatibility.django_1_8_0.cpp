/* Generated code for Python source for module 'django.core.checks.compatibility.django_1_8_0'
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

/* The _module_django$core$checks$compatibility$django_1_8_0 is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$core$checks$compatibility$django_1_8_0;
PyDictObject *moduledict_django$core$checks$compatibility$django_1_8_0;

/* The module constants used, if any. */
static PyObject *const_dict_5c83fd5d7026d43670fdc5c88f0428e6;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_TEMPLATES;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_digest_41372c5996a4d1c4961e11df7f2ec48f;
extern PyObject *const_str_plain_Warning;
static PyObject *const_str_plain_TEMPLATE_DEBUG;
extern PyObject *const_str_digest_445dca6cbd45aee8d57b3699ee355976;
extern PyObject *const_tuple_str_plain_Tags_str_plain_Warning_str_plain_register_tuple;
static PyObject *const_list_d950e7019871d5a1de10a1643db8548e_list;
extern PyObject *const_str_plain_Tags;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_values;
static PyObject *const_str_digest_14d5f45cd3e96b5299b81f917e1f0974;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_46404e408617b24a7aa5fda6e6fbae8c;
extern PyObject *const_int_0;
extern PyObject *const_str_angle_listcontraction;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
static PyObject *const_tuple_5ffdb21f423664b82469ea261ef25b78_tuple;
extern PyObject *const_tuple_str_plain_settings_tuple;
extern PyObject *const_str_plain_register;
static PyObject *const_tuple_str_plain_value_str_plain_values_tuple;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
extern PyObject *const_str_plain_defined;
static PyObject *const_str_plain_TEMPLATE_CONTEXT_PROCESSORS;
extern PyObject *const_str_plain_id;
extern PyObject *const_str_plain_TEMPLATE_DIRS;
extern PyObject *const_str_plain_app_configs;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_settings;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_join;
static PyObject *const_str_digest_2eafe4c1cb18c15d7e7f50341a4c4811;
static PyObject *const_str_plain_TEMPLATE_LOADERS;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_compatibility;
static PyObject *const_str_plain_check_duplicate_template_settings;
static PyObject *const_str_plain_TEMPLATE_STRING_IF_INVALID;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_1000f07c4d250c454bc8b2f057f92d80;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_dict_5c83fd5d7026d43670fdc5c88f0428e6 = _PyDict_NewPresized( 1 );
    const_str_digest_46404e408617b24a7aa5fda6e6fbae8c = UNSTREAM_STRING( &constant_bin[ 762450 ], 8, 0 );
    PyDict_SetItem( const_dict_5c83fd5d7026d43670fdc5c88f0428e6, const_str_plain_id, const_str_digest_46404e408617b24a7aa5fda6e6fbae8c );
    assert( PyDict_Size( const_dict_5c83fd5d7026d43670fdc5c88f0428e6 ) == 1 );
    const_str_plain_TEMPLATE_DEBUG = UNSTREAM_STRING( &constant_bin[ 762458 ], 14, 1 );
    const_list_d950e7019871d5a1de10a1643db8548e_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_d950e7019871d5a1de10a1643db8548e_list, 0, const_str_plain_TEMPLATE_DIRS ); Py_INCREF( const_str_plain_TEMPLATE_DIRS );
    const_str_plain_TEMPLATE_CONTEXT_PROCESSORS = UNSTREAM_STRING( &constant_bin[ 762472 ], 27, 1 );
    PyList_SET_ITEM( const_list_d950e7019871d5a1de10a1643db8548e_list, 1, const_str_plain_TEMPLATE_CONTEXT_PROCESSORS ); Py_INCREF( const_str_plain_TEMPLATE_CONTEXT_PROCESSORS );
    PyList_SET_ITEM( const_list_d950e7019871d5a1de10a1643db8548e_list, 2, const_str_plain_TEMPLATE_DEBUG ); Py_INCREF( const_str_plain_TEMPLATE_DEBUG );
    const_str_plain_TEMPLATE_LOADERS = UNSTREAM_STRING( &constant_bin[ 762499 ], 16, 1 );
    PyList_SET_ITEM( const_list_d950e7019871d5a1de10a1643db8548e_list, 3, const_str_plain_TEMPLATE_LOADERS ); Py_INCREF( const_str_plain_TEMPLATE_LOADERS );
    const_str_plain_TEMPLATE_STRING_IF_INVALID = UNSTREAM_STRING( &constant_bin[ 762515 ], 26, 1 );
    PyList_SET_ITEM( const_list_d950e7019871d5a1de10a1643db8548e_list, 4, const_str_plain_TEMPLATE_STRING_IF_INVALID ); Py_INCREF( const_str_plain_TEMPLATE_STRING_IF_INVALID );
    const_str_digest_14d5f45cd3e96b5299b81f917e1f0974 = UNSTREAM_STRING( &constant_bin[ 762541 ], 48, 0 );
    const_tuple_5ffdb21f423664b82469ea261ef25b78_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_5ffdb21f423664b82469ea261ef25b78_tuple, 0, const_str_plain_app_configs ); Py_INCREF( const_str_plain_app_configs );
    PyTuple_SET_ITEM( const_tuple_5ffdb21f423664b82469ea261ef25b78_tuple, 1, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_5ffdb21f423664b82469ea261ef25b78_tuple, 2, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    PyTuple_SET_ITEM( const_tuple_5ffdb21f423664b82469ea261ef25b78_tuple, 3, const_str_plain_defined ); Py_INCREF( const_str_plain_defined );
    const_tuple_str_plain_value_str_plain_values_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_values_tuple, 0, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_values_tuple, 1, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    const_str_digest_2eafe4c1cb18c15d7e7f50341a4c4811 = UNSTREAM_STRING( &constant_bin[ 762589 ], 54, 0 );
    const_str_plain_check_duplicate_template_settings = UNSTREAM_STRING( &constant_bin[ 762643 ], 33, 1 );
    const_str_digest_1000f07c4d250c454bc8b2f057f92d80 = UNSTREAM_STRING( &constant_bin[ 762676 ], 199, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$core$checks$compatibility$django_1_8_0( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e5f7eb92da70fccb8e928a3b79b5a849;
static PyCodeObject *codeobj_875264709cb6c380bc12a0555b0dc726;
static PyCodeObject *codeobj_c7bbb7ca5e9e547a23bf34769ad3f475;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_14d5f45cd3e96b5299b81f917e1f0974 );
    codeobj_e5f7eb92da70fccb8e928a3b79b5a849 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 18, const_tuple_str_plain_value_str_plain_values_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_875264709cb6c380bc12a0555b0dc726 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2eafe4c1cb18c15d7e7f50341a4c4811, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_c7bbb7ca5e9e547a23bf34769ad3f475 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_duplicate_template_settings, 8, const_tuple_5ffdb21f423664b82469ea261ef25b78_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_django$core$checks$compatibility$django_1_8_0$$$function_1_check_duplicate_template_settings(  );


// The module function definitions.
static PyObject *impl_django$core$checks$compatibility$django_1_8_0$$$function_1_check_duplicate_template_settings( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_values = NULL;
    PyObject *var_defined = NULL;
    PyObject *outline_0_var_value = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_e5f7eb92da70fccb8e928a3b79b5a849_2 = NULL;

    struct Nuitka_FrameObject *frame_e5f7eb92da70fccb8e928a3b79b5a849_2;

    static struct Nuitka_FrameObject *cache_frame_c7bbb7ca5e9e547a23bf34769ad3f475 = NULL;

    struct Nuitka_FrameObject *frame_c7bbb7ca5e9e547a23bf34769ad3f475;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c7bbb7ca5e9e547a23bf34769ad3f475, codeobj_c7bbb7ca5e9e547a23bf34769ad3f475, module_django$core$checks$compatibility$django_1_8_0, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c7bbb7ca5e9e547a23bf34769ad3f475 = cache_frame_c7bbb7ca5e9e547a23bf34769ad3f475;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c7bbb7ca5e9e547a23bf34769ad3f475 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c7bbb7ca5e9e547a23bf34769ad3f475 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 10;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_TEMPLATES );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 10;
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
    tmp_assign_source_1 = LIST_COPY( const_list_d950e7019871d5a1de10a1643db8548e_list );
    assert( var_values == NULL );
    var_values = tmp_assign_source_1;

    // Tried code:
    tmp_iter_arg_1 = var_values;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_listcontraction_1__$0 == NULL );
    tmp_listcontraction_1__$0 = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( tmp_listcontraction_1__contraction == NULL );
    tmp_listcontraction_1__contraction = tmp_assign_source_4;

    MAKE_OR_REUSE_FRAME( cache_frame_e5f7eb92da70fccb8e928a3b79b5a849_2, codeobj_e5f7eb92da70fccb8e928a3b79b5a849, module_django$core$checks$compatibility$django_1_8_0, sizeof(void *)+sizeof(void *) );
    frame_e5f7eb92da70fccb8e928a3b79b5a849_2 = cache_frame_e5f7eb92da70fccb8e928a3b79b5a849_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e5f7eb92da70fccb8e928a3b79b5a849_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e5f7eb92da70fccb8e928a3b79b5a849_2 ) == 2 ); // Frame stack

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
            exception_lineno = 18;
            goto try_except_handler_3;
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
        PyObject *old = outline_0_var_value;
        outline_0_var_value = tmp_assign_source_6;
        Py_INCREF( outline_0_var_value );
        Py_XDECREF( old );
    }

    tmp_getattr_target_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 18;
        type_description_2 = "oo";
        goto try_except_handler_3;
    }

    tmp_getattr_attr_1 = outline_0_var_value;

    CHECK_OBJECT( tmp_getattr_attr_1 );
    tmp_getattr_default_1 = Py_None;
    tmp_cond_value_2 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_2 = "oo";
        goto try_except_handler_3;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 18;
        type_description_2 = "oo";
        goto try_except_handler_3;
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
    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_append_value_1 = outline_0_var_value;

    CHECK_OBJECT( tmp_append_value_1 );
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_2 = "oo";
        goto try_except_handler_3;
    }
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
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
    NUITKA_CANNOT_GET_HERE( django$core$checks$compatibility$django_1_8_0$$$function_1_check_duplicate_template_settings );
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
    RESTORE_FRAME_EXCEPTION( frame_e5f7eb92da70fccb8e928a3b79b5a849_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5f7eb92da70fccb8e928a3b79b5a849_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5f7eb92da70fccb8e928a3b79b5a849_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e5f7eb92da70fccb8e928a3b79b5a849_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e5f7eb92da70fccb8e928a3b79b5a849_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e5f7eb92da70fccb8e928a3b79b5a849_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e5f7eb92da70fccb8e928a3b79b5a849_2,
        type_description_2,
        outline_0_var_value,
        var_values
    );


    // Release cached frame.
    if ( frame_e5f7eb92da70fccb8e928a3b79b5a849_2 == cache_frame_e5f7eb92da70fccb8e928a3b79b5a849_2 )
    {
        Py_DECREF( frame_e5f7eb92da70fccb8e928a3b79b5a849_2 );
    }
    cache_frame_e5f7eb92da70fccb8e928a3b79b5a849_2 = NULL;

    assertFrameObject( frame_e5f7eb92da70fccb8e928a3b79b5a849_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oooo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$compatibility$django_1_8_0$$$function_1_check_duplicate_template_settings );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_value );
    outline_0_var_value = NULL;

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

    Py_XDECREF( outline_0_var_value );
    outline_0_var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$compatibility$django_1_8_0$$$function_1_check_duplicate_template_settings );
    return NULL;
    outline_exception_1:;
    exception_lineno = 18;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_assign_source_2 = tmp_outline_return_value_1;
    assert( var_defined == NULL );
    var_defined = tmp_assign_source_2;

    tmp_cond_value_3 = var_defined;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "oooo";
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
    tmp_return_value = PyList_New( 1 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_left_name_1 = const_str_digest_1000f07c4d250c454bc8b2f057f92d80;
    tmp_called_instance_1 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
    tmp_args_element_name_1 = var_defined;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_c7bbb7ca5e9e547a23bf34769ad3f475->m_frame.f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_join, call_args );
    }

    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 24;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 21;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_5c83fd5d7026d43670fdc5c88f0428e6 );
    frame_c7bbb7ca5e9e547a23bf34769ad3f475->m_frame.f_lineno = 20;
    tmp_list_element_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 20;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    goto frame_return_exit_1;
    branch_no_3:;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7bbb7ca5e9e547a23bf34769ad3f475 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7bbb7ca5e9e547a23bf34769ad3f475 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7bbb7ca5e9e547a23bf34769ad3f475 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c7bbb7ca5e9e547a23bf34769ad3f475, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c7bbb7ca5e9e547a23bf34769ad3f475->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c7bbb7ca5e9e547a23bf34769ad3f475, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c7bbb7ca5e9e547a23bf34769ad3f475,
        type_description_1,
        par_app_configs,
        par_kwargs,
        var_values,
        var_defined
    );


    // Release cached frame.
    if ( frame_c7bbb7ca5e9e547a23bf34769ad3f475 == cache_frame_c7bbb7ca5e9e547a23bf34769ad3f475 )
    {
        Py_DECREF( frame_c7bbb7ca5e9e547a23bf34769ad3f475 );
    }
    cache_frame_c7bbb7ca5e9e547a23bf34769ad3f475 = NULL;

    assertFrameObject( frame_c7bbb7ca5e9e547a23bf34769ad3f475 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    tmp_return_value = PyList_New( 0 );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$compatibility$django_1_8_0$$$function_1_check_duplicate_template_settings );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_values );
    var_values = NULL;

    Py_XDECREF( var_defined );
    var_defined = NULL;

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

    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_values );
    var_values = NULL;

    Py_XDECREF( var_defined );
    var_defined = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$compatibility$django_1_8_0$$$function_1_check_duplicate_template_settings );
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



static PyObject *MAKE_FUNCTION_django$core$checks$compatibility$django_1_8_0$$$function_1_check_duplicate_template_settings(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$compatibility$django_1_8_0$$$function_1_check_duplicate_template_settings,
        const_str_plain_check_duplicate_template_settings,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c7bbb7ca5e9e547a23bf34769ad3f475,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$compatibility$django_1_8_0,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$core$checks$compatibility$django_1_8_0 =
{
    PyModuleDef_HEAD_INIT,
    "django.core.checks.compatibility.django_1_8_0",   /* m_name */
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

MOD_INIT_DECL( django$core$checks$compatibility$django_1_8_0 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$core$checks$compatibility$django_1_8_0 );
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
    puts("django.core.checks.compatibility.django_1_8_0: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.core.checks.compatibility.django_1_8_0: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$core$checks$compatibility$django_1_8_0" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$core$checks$compatibility$django_1_8_0 = Py_InitModule4(
        "django.core.checks.compatibility.django_1_8_0",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$core$checks$compatibility$django_1_8_0 = PyModule_Create( &mdef_django$core$checks$compatibility$django_1_8_0 );
#endif

    moduledict_django$core$checks$compatibility$django_1_8_0 = MODULE_DICT( module_django$core$checks$compatibility$django_1_8_0 );

    CHECK_OBJECT( module_django$core$checks$compatibility$django_1_8_0 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_41372c5996a4d1c4961e11df7f2ec48f, module_django$core$checks$compatibility$django_1_8_0 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_source_name_1;
    struct Nuitka_FrameObject *frame_875264709cb6c380bc12a0555b0dc726;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_875264709cb6c380bc12a0555b0dc726 = MAKE_MODULE_FRAME( codeobj_875264709cb6c380bc12a0555b0dc726, module_django$core$checks$compatibility$django_1_8_0 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_875264709cb6c380bc12a0555b0dc726 );
    assert( Py_REFCNT( frame_875264709cb6c380bc12a0555b0dc726 ) == 2 );

    // Framed code:
    frame_875264709cb6c380bc12a0555b0dc726->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_41372c5996a4d1c4961e11df7f2ec48f;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_875264709cb6c380bc12a0555b0dc726->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_445dca6cbd45aee8d57b3699ee355976;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    frame_875264709cb6c380bc12a0555b0dc726->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
    tmp_globals_name_1 = (PyObject *)moduledict_django$core$checks$compatibility$django_1_8_0;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_settings_tuple;
    tmp_level_name_1 = const_int_0;
    frame_875264709cb6c380bc12a0555b0dc726->m_frame.f_lineno = 3;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_settings );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain_settings, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_empty;
    tmp_globals_name_2 = (PyObject *)moduledict_django$core$checks$compatibility$django_1_8_0;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_Tags_str_plain_Warning_str_plain_register_tuple;
    tmp_level_name_2 = const_int_pos_2;
    frame_875264709cb6c380bc12a0555b0dc726->m_frame.f_lineno = 5;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_9;

    // Tried code:
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Tags );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain_Tags, tmp_assign_source_10 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Warning );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain_Warning, tmp_assign_source_11 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_register );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain_register, tmp_assign_source_12 );
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

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 8;

        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 8;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compatibility );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    frame_875264709cb6c380bc12a0555b0dc726->m_frame.f_lineno = 8;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = MAKE_FUNCTION_django$core$checks$compatibility$django_1_8_0$$$function_1_check_duplicate_template_settings(  );
    frame_875264709cb6c380bc12a0555b0dc726->m_frame.f_lineno = 8;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility$django_1_8_0, (Nuitka_StringObject *)const_str_plain_check_duplicate_template_settings, tmp_assign_source_13 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_875264709cb6c380bc12a0555b0dc726 );
#endif
    popFrameStack();

    assertFrameObject( frame_875264709cb6c380bc12a0555b0dc726 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_875264709cb6c380bc12a0555b0dc726 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_875264709cb6c380bc12a0555b0dc726, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_875264709cb6c380bc12a0555b0dc726->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_875264709cb6c380bc12a0555b0dc726, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_django$core$checks$compatibility$django_1_8_0 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
