/* Generated code for Python source for module 'django.template.backends.base'
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

/* The _module_django$template$backends$base is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$template$backends$base;
PyDictObject *moduledict_django$template$backends$base;

/* The module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_a65f0f813d751b5051c1910cfe87d94a;
extern PyObject *const_str_plain___name__;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_template_code;
extern PyObject *const_str_plain_dirs;
static PyObject *const_tuple_str_plain_DIRS_tuple;
static PyObject *const_str_digest_b4a5fc651c4f57bf6ba05bd8fa72c2c2;
static PyObject *const_str_digest_9e1b3361b23377c337d6fa655a6078b4;
static PyObject *const_tuple_a4c1ad595fb3a7565f4fb1c0ef85a85e_tuple;
extern PyObject *const_str_plain_from_string;
static PyObject *const_str_plain_iter_template_filenames;
static PyObject *const_str_digest_4602c3740602e4f5df2169b42d0c5891;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_template_dirs;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_self_str_plain_template_code_tuple;
extern PyObject *const_str_digest_d7cf60a02de7b10a6b68d1680ba3139e;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_template_dir;
static PyObject *const_str_digest_e366cb593ddedf064920c9a3718eb49b;
extern PyObject *const_tuple_str_plain_cached_property_tuple;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_d5554c3da086cbe8c97fe0686e5b54ad;
static PyObject *const_str_digest_ce59a548bd6f308491ac48a87fc09045;
extern PyObject *const_str_plain_safe_join;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_template_dirs_tuple;
extern PyObject *const_str_digest_dfb6e1abbed3113ee07234fdc458a320;
static PyObject *const_str_digest_42b8974af5c5d2c98903ed8a8266d251;
extern PyObject *const_str_plain_get_app_template_dirs;
static PyObject *const_str_digest_c673f0b1f7026e63fa14fe21e3e86380;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_SuspiciousFileOperation;
extern PyObject *const_str_digest_cd11f07a27d5ce295a7ba630b454b641;
static PyObject *const_str_digest_ee1a326a7e9eafb4c1ff4146e122a382;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_template_name;
extern PyObject *const_str_plain_name;
static PyObject *const_tuple_str_plain_self_str_plain_params_tuple;
static PyObject *const_tuple_8083340f04831be779f4c121b4ef7545_tuple;
extern PyObject *const_str_plain_ImproperlyConfigured;
extern PyObject *const_str_plain_ModuleSpec;
static PyObject *const_str_digest_d78ea6bd18210f094f8826a8359fd6dc;
static PyObject *const_str_digest_6b00940e65d6984ac91e41684224998a;
extern PyObject *const_str_plain_APP_DIRS;
extern PyObject *const_tuple_str_plain_self_str_plain_template_name_tuple;
extern PyObject *const_str_plain_pop;
extern PyObject *const_int_0;
static PyObject *const_str_digest_7135d40dc5b5a876c5b3b02aa2c83f93;
extern PyObject *const_str_plain_NAME;
extern PyObject *const_str_plain_cached_property;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
extern PyObject *const_str_plain_get_template;
static PyObject *const_tuple_c86a89cfdb5e9b30de340ed9ed810661_tuple;
static PyObject *const_str_digest_f1fb4fad33324bc6e341c8b4f776d6fd;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_tuple_str_plain_get_app_template_dirs_tuple;
extern PyObject *const_str_plain_BaseEngine;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_params;
extern PyObject *const_tuple_str_plain_APP_DIRS_tuple;
extern PyObject *const_str_digest_842dfd4744c6e20ce39943a1591eb59d;
static PyObject *const_tuple_str_plain_NAME_tuple;
static PyObject *const_str_digest_5cec4386aa290fb082fd0dc9cee4db9b;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_DIRS;
static PyObject *const_tuple_str_plain_safe_join_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_app_dirs;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_app_dirname;
extern PyObject *const_str_digest_3d2fb639fc3676a85e9d77bb02d18a21;
static PyObject *const_str_digest_da49df330b0fd531622d00567d54fb38;
static PyObject *const_str_digest_3979b563a667493c5849c167d3fa3854;
static PyObject *const_str_digest_0b02e982bf82431b550a453c2b0d62cf;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_a65f0f813d751b5051c1910cfe87d94a = UNSTREAM_STRING( &constant_bin[ 1098640 ], 72, 0 );
    const_tuple_str_plain_DIRS_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DIRS_tuple, 0, const_str_plain_DIRS ); Py_INCREF( const_str_plain_DIRS );
    const_str_digest_b4a5fc651c4f57bf6ba05bd8fa72c2c2 = UNSTREAM_STRING( &constant_bin[ 1098712 ], 109, 0 );
    const_str_digest_9e1b3361b23377c337d6fa655a6078b4 = UNSTREAM_STRING( &constant_bin[ 1098821 ], 34, 0 );
    const_tuple_a4c1ad595fb3a7565f4fb1c0ef85a85e_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_a4c1ad595fb3a7565f4fb1c0ef85a85e_tuple, 0, const_str_plain_ImproperlyConfigured ); Py_INCREF( const_str_plain_ImproperlyConfigured );
    PyTuple_SET_ITEM( const_tuple_a4c1ad595fb3a7565f4fb1c0ef85a85e_tuple, 1, const_str_plain_SuspiciousFileOperation ); Py_INCREF( const_str_plain_SuspiciousFileOperation );
    const_str_plain_iter_template_filenames = UNSTREAM_STRING( &constant_bin[ 1098832 ], 23, 1 );
    const_str_digest_4602c3740602e4f5df2169b42d0c5891 = UNSTREAM_STRING( &constant_bin[ 1098855 ], 22, 0 );
    const_str_digest_e366cb593ddedf064920c9a3718eb49b = UNSTREAM_STRING( &constant_bin[ 1098877 ], 65, 0 );
    const_str_digest_d5554c3da086cbe8c97fe0686e5b54ad = UNSTREAM_STRING( &constant_bin[ 1098942 ], 32, 0 );
    const_str_digest_ce59a548bd6f308491ac48a87fc09045 = UNSTREAM_STRING( &constant_bin[ 1098974 ], 23, 0 );
    const_tuple_str_plain_self_str_plain_template_dirs_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_template_dirs_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_template_dirs_tuple, 1, const_str_plain_template_dirs ); Py_INCREF( const_str_plain_template_dirs );
    const_str_digest_42b8974af5c5d2c98903ed8a8266d251 = UNSTREAM_STRING( &constant_bin[ 1098997 ], 22, 0 );
    const_str_digest_c673f0b1f7026e63fa14fe21e3e86380 = UNSTREAM_STRING( &constant_bin[ 1099019 ], 61, 0 );
    const_str_digest_ee1a326a7e9eafb4c1ff4146e122a382 = UNSTREAM_STRING( &constant_bin[ 1099080 ], 24, 0 );
    const_tuple_str_plain_self_str_plain_params_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_params_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_params_tuple, 1, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    const_tuple_8083340f04831be779f4c121b4ef7545_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_8083340f04831be779f4c121b4ef7545_tuple, 0, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    PyTuple_SET_ITEM( const_tuple_8083340f04831be779f4c121b4ef7545_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_8083340f04831be779f4c121b4ef7545_tuple, 2, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_8083340f04831be779f4c121b4ef7545_tuple, 3, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    PyTuple_SET_ITEM( const_tuple_8083340f04831be779f4c121b4ef7545_tuple, 4, const_str_plain_app_dirname ); Py_INCREF( const_str_plain_app_dirname );
    PyTuple_SET_ITEM( const_tuple_8083340f04831be779f4c121b4ef7545_tuple, 5, const_str_plain_from_string ); Py_INCREF( const_str_plain_from_string );
    PyTuple_SET_ITEM( const_tuple_8083340f04831be779f4c121b4ef7545_tuple, 6, const_str_plain_get_template ); Py_INCREF( const_str_plain_get_template );
    PyTuple_SET_ITEM( const_tuple_8083340f04831be779f4c121b4ef7545_tuple, 7, const_str_plain_template_dirs ); Py_INCREF( const_str_plain_template_dirs );
    PyTuple_SET_ITEM( const_tuple_8083340f04831be779f4c121b4ef7545_tuple, 8, const_str_plain_iter_template_filenames ); Py_INCREF( const_str_plain_iter_template_filenames );
    const_str_digest_d78ea6bd18210f094f8826a8359fd6dc = UNSTREAM_STRING( &constant_bin[ 1099104 ], 131, 0 );
    const_str_digest_6b00940e65d6984ac91e41684224998a = UNSTREAM_STRING( &constant_bin[ 1099235 ], 106, 0 );
    const_str_digest_7135d40dc5b5a876c5b3b02aa2c83f93 = UNSTREAM_STRING( &constant_bin[ 1099341 ], 38, 0 );
    const_tuple_c86a89cfdb5e9b30de340ed9ed810661_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_c86a89cfdb5e9b30de340ed9ed810661_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c86a89cfdb5e9b30de340ed9ed810661_tuple, 1, const_str_plain_template_name ); Py_INCREF( const_str_plain_template_name );
    PyTuple_SET_ITEM( const_tuple_c86a89cfdb5e9b30de340ed9ed810661_tuple, 2, const_str_plain_template_dir ); Py_INCREF( const_str_plain_template_dir );
    const_str_digest_f1fb4fad33324bc6e341c8b4f776d6fd = UNSTREAM_STRING( &constant_bin[ 1099379 ], 19, 0 );
    const_tuple_str_plain_get_app_template_dirs_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_app_template_dirs_tuple, 0, const_str_plain_get_app_template_dirs ); Py_INCREF( const_str_plain_get_app_template_dirs );
    const_tuple_str_plain_NAME_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NAME_tuple, 0, const_str_plain_NAME ); Py_INCREF( const_str_plain_NAME );
    const_str_digest_5cec4386aa290fb082fd0dc9cee4db9b = UNSTREAM_STRING( &constant_bin[ 1099349 ], 29, 0 );
    const_tuple_str_plain_safe_join_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_safe_join_tuple, 0, const_str_plain_safe_join ); Py_INCREF( const_str_plain_safe_join );
    const_str_digest_da49df330b0fd531622d00567d54fb38 = UNSTREAM_STRING( &constant_bin[ 1099398 ], 22, 0 );
    const_str_digest_3979b563a667493c5849c167d3fa3854 = UNSTREAM_STRING( &constant_bin[ 1099420 ], 62, 0 );
    const_str_digest_0b02e982bf82431b550a453c2b0d62cf = UNSTREAM_STRING( &constant_bin[ 1099482 ], 182, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$template$backends$base( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d38850050b98b58c298f98bb298779af;
static PyCodeObject *codeobj_be077eb31490811b9e004afb86fba3fb;
static PyCodeObject *codeobj_04ae0741b956069f0e2d0f5846363270;
static PyCodeObject *codeobj_4380a07973dfd9817cccab443c5b04ba;
static PyCodeObject *codeobj_e0183570de0a1e591a7bec728a5cf013;
static PyCodeObject *codeobj_8389d7163cefb99620851e18391ea66e;
static PyCodeObject *codeobj_c569e85380849acf829fef10656d9fc6;
static PyCodeObject *codeobj_f1fec89dda0b57d83d954235ea22999a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_d5554c3da086cbe8c97fe0686e5b54ad );
    codeobj_d38850050b98b58c298f98bb298779af = MAKE_CODEOBJ( module_filename_obj, const_str_digest_7135d40dc5b5a876c5b3b02aa2c83f93, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_be077eb31490811b9e004afb86fba3fb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_BaseEngine, 12, const_tuple_8083340f04831be779f4c121b4ef7545_tuple, 0, 0, CO_NOFREE );
    codeobj_04ae0741b956069f0e2d0f5846363270 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 17, const_tuple_str_plain_self_str_plain_params_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4380a07973dfd9817cccab443c5b04ba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_app_dirname, 31, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e0183570de0a1e591a7bec728a5cf013 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_string, 37, const_tuple_str_plain_self_str_plain_template_code_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8389d7163cefb99620851e18391ea66e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_template, 47, const_tuple_str_plain_self_str_plain_template_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c569e85380849acf829fef10656d9fc6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iter_template_filenames, 71, const_tuple_c86a89cfdb5e9b30de340ed9ed810661_tuple, 2, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f1fec89dda0b57d83d954235ea22999a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_template_dirs, 60, const_tuple_str_plain_self_str_plain_template_dirs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$template$backends$base$$$function_6_iter_template_filenames$$$genobj_1_iter_template_filenames_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void django$template$backends$base$$$function_6_iter_template_filenames$$$genobj_1_iter_template_filenames_context( struct Nuitka_GeneratorObject *generator );
#endif


static PyObject *MAKE_FUNCTION_django$template$backends$base$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_django$template$backends$base$$$function_2_app_dirname(  );


static PyObject *MAKE_FUNCTION_django$template$backends$base$$$function_3_from_string(  );


static PyObject *MAKE_FUNCTION_django$template$backends$base$$$function_4_get_template(  );


static PyObject *MAKE_FUNCTION_django$template$backends$base$$$function_5_template_dirs(  );


static PyObject *MAKE_FUNCTION_django$template$backends$base$$$function_6_iter_template_filenames(  );


// The module function definitions.
static PyObject *impl_django$template$backends$base$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_params = python_pars[ 1 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_bool_arg_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_04ae0741b956069f0e2d0f5846363270 = NULL;

    struct Nuitka_FrameObject *frame_04ae0741b956069f0e2d0f5846363270;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_04ae0741b956069f0e2d0f5846363270, codeobj_04ae0741b956069f0e2d0f5846363270, module_django$template$backends$base, sizeof(void *)+sizeof(void *) );
    frame_04ae0741b956069f0e2d0f5846363270 = cache_frame_04ae0741b956069f0e2d0f5846363270;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_04ae0741b956069f0e2d0f5846363270 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_04ae0741b956069f0e2d0f5846363270 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_params;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_04ae0741b956069f0e2d0f5846363270->m_frame.f_lineno = 23;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_params;
        par_params = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = par_params;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_04ae0741b956069f0e2d0f5846363270->m_frame.f_lineno = 24;
    tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_NAME_tuple, 0 ) );

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "oo";
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

        exception_lineno = 24;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_name, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 24;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_called_instance_3 = par_params;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_04ae0741b956069f0e2d0f5846363270->m_frame.f_lineno = 25;
    tmp_list_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_DIRS_tuple, 0 ) );

    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
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

        exception_lineno = 25;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_dirs, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 25;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_called_instance_4 = par_params;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_04ae0741b956069f0e2d0f5846363270->m_frame.f_lineno = 26;
    tmp_bool_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_APP_DIRS_tuple, 0 ) );

    if ( tmp_bool_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = TO_BOOL( tmp_bool_arg_1 );
    Py_DECREF( tmp_bool_arg_1 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "oo";
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

        exception_lineno = 26;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_app_dirs, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = par_params;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain_ImproperlyConfigured );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImproperlyConfigured );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ImproperlyConfigured" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = const_str_digest_42b8974af5c5d2c98903ed8a8266d251;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_2 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_3 = par_params;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_04ae0741b956069f0e2d0f5846363270->m_frame.f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 29;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_04ae0741b956069f0e2d0f5846363270->m_frame.f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_04ae0741b956069f0e2d0f5846363270->m_frame.f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 28;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_04ae0741b956069f0e2d0f5846363270 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_04ae0741b956069f0e2d0f5846363270 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_04ae0741b956069f0e2d0f5846363270, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_04ae0741b956069f0e2d0f5846363270->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_04ae0741b956069f0e2d0f5846363270, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_04ae0741b956069f0e2d0f5846363270,
        type_description_1,
        par_self,
        par_params
    );


    // Release cached frame.
    if ( frame_04ae0741b956069f0e2d0f5846363270 == cache_frame_04ae0741b956069f0e2d0f5846363270 )
    {
        Py_DECREF( frame_04ae0741b956069f0e2d0f5846363270 );
    }
    cache_frame_04ae0741b956069f0e2d0f5846363270 = NULL;

    assertFrameObject( frame_04ae0741b956069f0e2d0f5846363270 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$template$backends$base$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_params );
    par_params = NULL;

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

    Py_XDECREF( par_params );
    par_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$template$backends$base$$$function_1___init__ );
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


static PyObject *impl_django$template$backends$base$$$function_2_app_dirname( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_4380a07973dfd9817cccab443c5b04ba = NULL;

    struct Nuitka_FrameObject *frame_4380a07973dfd9817cccab443c5b04ba;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4380a07973dfd9817cccab443c5b04ba, codeobj_4380a07973dfd9817cccab443c5b04ba, module_django$template$backends$base, sizeof(void *) );
    frame_4380a07973dfd9817cccab443c5b04ba = cache_frame_4380a07973dfd9817cccab443c5b04ba;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4380a07973dfd9817cccab443c5b04ba );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4380a07973dfd9817cccab443c5b04ba ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain_ImproperlyConfigured );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImproperlyConfigured );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ImproperlyConfigured" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = const_str_digest_e366cb593ddedf064920c9a3718eb49b;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 35;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 35;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_4380a07973dfd9817cccab443c5b04ba->m_frame.f_lineno = 34;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_4380a07973dfd9817cccab443c5b04ba->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 33;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4380a07973dfd9817cccab443c5b04ba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4380a07973dfd9817cccab443c5b04ba );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4380a07973dfd9817cccab443c5b04ba, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4380a07973dfd9817cccab443c5b04ba->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4380a07973dfd9817cccab443c5b04ba, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4380a07973dfd9817cccab443c5b04ba,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4380a07973dfd9817cccab443c5b04ba == cache_frame_4380a07973dfd9817cccab443c5b04ba )
    {
        Py_DECREF( frame_4380a07973dfd9817cccab443c5b04ba );
    }
    cache_frame_4380a07973dfd9817cccab443c5b04ba = NULL;

    assertFrameObject( frame_4380a07973dfd9817cccab443c5b04ba );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$template$backends$base$$$function_2_app_dirname );
    return NULL;
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
    NUITKA_CANNOT_GET_HERE( django$template$backends$base$$$function_2_app_dirname );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_django$template$backends$base$$$function_3_from_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_template_code = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    static struct Nuitka_FrameObject *cache_frame_e0183570de0a1e591a7bec728a5cf013 = NULL;

    struct Nuitka_FrameObject *frame_e0183570de0a1e591a7bec728a5cf013;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e0183570de0a1e591a7bec728a5cf013, codeobj_e0183570de0a1e591a7bec728a5cf013, module_django$template$backends$base, sizeof(void *)+sizeof(void *) );
    frame_e0183570de0a1e591a7bec728a5cf013 = cache_frame_e0183570de0a1e591a7bec728a5cf013;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e0183570de0a1e591a7bec728a5cf013 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e0183570de0a1e591a7bec728a5cf013 ) == 2 ); // Frame stack

    // Framed code:
    tmp_make_exception_arg_1 = const_str_digest_3979b563a667493c5849c167d3fa3854;
    frame_e0183570de0a1e591a7bec728a5cf013->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 43;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0183570de0a1e591a7bec728a5cf013 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0183570de0a1e591a7bec728a5cf013 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e0183570de0a1e591a7bec728a5cf013, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e0183570de0a1e591a7bec728a5cf013->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e0183570de0a1e591a7bec728a5cf013, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e0183570de0a1e591a7bec728a5cf013,
        type_description_1,
        par_self,
        par_template_code
    );


    // Release cached frame.
    if ( frame_e0183570de0a1e591a7bec728a5cf013 == cache_frame_e0183570de0a1e591a7bec728a5cf013 )
    {
        Py_DECREF( frame_e0183570de0a1e591a7bec728a5cf013 );
    }
    cache_frame_e0183570de0a1e591a7bec728a5cf013 = NULL;

    assertFrameObject( frame_e0183570de0a1e591a7bec728a5cf013 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$template$backends$base$$$function_3_from_string );
    return NULL;
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

    Py_XDECREF( par_template_code );
    par_template_code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$template$backends$base$$$function_3_from_string );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_django$template$backends$base$$$function_4_get_template( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_template_name = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    static struct Nuitka_FrameObject *cache_frame_8389d7163cefb99620851e18391ea66e = NULL;

    struct Nuitka_FrameObject *frame_8389d7163cefb99620851e18391ea66e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8389d7163cefb99620851e18391ea66e, codeobj_8389d7163cefb99620851e18391ea66e, module_django$template$backends$base, sizeof(void *)+sizeof(void *) );
    frame_8389d7163cefb99620851e18391ea66e = cache_frame_8389d7163cefb99620851e18391ea66e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8389d7163cefb99620851e18391ea66e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8389d7163cefb99620851e18391ea66e ) == 2 ); // Frame stack

    // Framed code:
    tmp_make_exception_arg_1 = const_str_digest_c673f0b1f7026e63fa14fe21e3e86380;
    frame_8389d7163cefb99620851e18391ea66e->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 53;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8389d7163cefb99620851e18391ea66e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8389d7163cefb99620851e18391ea66e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8389d7163cefb99620851e18391ea66e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8389d7163cefb99620851e18391ea66e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8389d7163cefb99620851e18391ea66e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8389d7163cefb99620851e18391ea66e,
        type_description_1,
        par_self,
        par_template_name
    );


    // Release cached frame.
    if ( frame_8389d7163cefb99620851e18391ea66e == cache_frame_8389d7163cefb99620851e18391ea66e )
    {
        Py_DECREF( frame_8389d7163cefb99620851e18391ea66e );
    }
    cache_frame_8389d7163cefb99620851e18391ea66e = NULL;

    assertFrameObject( frame_8389d7163cefb99620851e18391ea66e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$template$backends$base$$$function_4_get_template );
    return NULL;
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

    Py_XDECREF( par_template_name );
    par_template_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$template$backends$base$$$function_4_get_template );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_django$template$backends$base$$$function_5_template_dirs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_template_dirs = NULL;
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
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_arg_1;
    static struct Nuitka_FrameObject *cache_frame_f1fec89dda0b57d83d954235ea22999a = NULL;

    struct Nuitka_FrameObject *frame_f1fec89dda0b57d83d954235ea22999a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f1fec89dda0b57d83d954235ea22999a, codeobj_f1fec89dda0b57d83d954235ea22999a, module_django$template$backends$base, sizeof(void *)+sizeof(void *) );
    frame_f1fec89dda0b57d83d954235ea22999a = cache_frame_f1fec89dda0b57d83d954235ea22999a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f1fec89dda0b57d83d954235ea22999a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f1fec89dda0b57d83d954235ea22999a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dirs );
    if ( tmp_tuple_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = PySequence_Tuple( tmp_tuple_arg_1 );
    Py_DECREF( tmp_tuple_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_template_dirs == NULL );
    var_template_dirs = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_app_dirs );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 67;
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
    tmp_left_name_1 = var_template_dirs;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "template_dirs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain_get_app_template_dirs );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_app_template_dirs );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_app_template_dirs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oo";
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

        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_app_dirname );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_f1fec89dda0b57d83d954235ea22999a->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_2 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    var_template_dirs = tmp_assign_source_2;

    branch_no_1:;
    tmp_return_value = var_template_dirs;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "template_dirs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1fec89dda0b57d83d954235ea22999a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1fec89dda0b57d83d954235ea22999a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1fec89dda0b57d83d954235ea22999a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f1fec89dda0b57d83d954235ea22999a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f1fec89dda0b57d83d954235ea22999a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f1fec89dda0b57d83d954235ea22999a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f1fec89dda0b57d83d954235ea22999a,
        type_description_1,
        par_self,
        var_template_dirs
    );


    // Release cached frame.
    if ( frame_f1fec89dda0b57d83d954235ea22999a == cache_frame_f1fec89dda0b57d83d954235ea22999a )
    {
        Py_DECREF( frame_f1fec89dda0b57d83d954235ea22999a );
    }
    cache_frame_f1fec89dda0b57d83d954235ea22999a = NULL;

    assertFrameObject( frame_f1fec89dda0b57d83d954235ea22999a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$template$backends$base$$$function_5_template_dirs );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_template_dirs );
    var_template_dirs = NULL;

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

    Py_XDECREF( var_template_dirs );
    var_template_dirs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$template$backends$base$$$function_5_template_dirs );
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


static PyObject *impl_django$template$backends$base$$$function_6_iter_template_filenames( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_template_name = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Nuitka_Generator_New(
        django$template$backends$base$$$function_6_iter_template_filenames$$$genobj_1_iter_template_filenames_context,
        module_django$template$backends$base,
        const_str_plain_iter_template_filenames,
#if PYTHON_VERSION >= 350
        const_str_digest_9e1b3361b23377c337d6fa655a6078b4,
#endif
        codeobj_c569e85380849acf829fef10656d9fc6,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_template_name;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    assert( Py_SIZE( tmp_return_value ) >= 2 ); 


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$template$backends$base$$$function_6_iter_template_filenames );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_template_name );
    Py_DECREF( par_template_name );
    par_template_name = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_template_name );
    Py_DECREF( par_template_name );
    par_template_name = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$template$backends$base$$$function_6_iter_template_filenames );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct django$template$backends$base$$$function_6_iter_template_filenames$$$genobj_1_iter_template_filenames_locals {
    PyObject *var_template_dir
    PyObject *tmp_for_loop_1__for_iterator
    PyObject *tmp_for_loop_1__iter_value
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *django$template$backends$base$$$function_6_iter_template_filenames$$$genobj_1_iter_template_filenames_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void django$template$backends$base$$$function_6_iter_template_filenames$$$genobj_1_iter_template_filenames_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_template_dir = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_c569e85380849acf829fef10656d9fc6, module_django$template$backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_template_dirs );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "cco";
            exception_lineno = 78;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_template_dir;
        var_template_dir = tmp_assign_source_3;
        Py_INCREF( var_template_dir );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain_safe_join );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_safe_join );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "safe_join" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "cco";
        goto try_except_handler_3;
    }

    tmp_args_element_name_1 = var_template_dir;

    CHECK_OBJECT( tmp_args_element_name_1 );
    if ( generator->m_closure[1] == NULL )
    {
        tmp_args_element_name_2 = NULL;
    }
    else
    {
        tmp_args_element_name_2 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "template_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "cco";
        goto try_except_handler_3;
    }

    generator->m_frame->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "cco";
        goto try_except_handler_3;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "cco";
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, generator->m_frame, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain_SuspiciousFileOperation );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SuspiciousFileOperation );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SuspiciousFileOperation" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "cco";
        goto try_except_handler_4;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "cco";
        goto try_except_handler_4;
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
        exception_lineno = 79;
    }

    if (exception_tb && exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "cco";
    goto try_except_handler_4;
    branch_no_1:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$template$backends$base$$$function_6_iter_template_filenames$$$genobj_1_iter_template_filenames );
    return;
    // End of try:
    try_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "cco";
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

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
            generator->m_closure[0],
            generator->m_closure[1],
            var_template_dir
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

    Py_XDECREF( var_template_dir );
    var_template_dir = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF( var_template_dir );
    var_template_dir = NULL;


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



static PyObject *MAKE_FUNCTION_django$template$backends$base$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$template$backends$base$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_f1fb4fad33324bc6e341c8b4f776d6fd,
#endif
        codeobj_04ae0741b956069f0e2d0f5846363270,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$template$backends$base,
        const_str_digest_6b00940e65d6984ac91e41684224998a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$template$backends$base$$$function_2_app_dirname(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$template$backends$base$$$function_2_app_dirname,
        const_str_plain_app_dirname,
#if PYTHON_VERSION >= 330
        const_str_digest_4602c3740602e4f5df2169b42d0c5891,
#endif
        codeobj_4380a07973dfd9817cccab443c5b04ba,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$template$backends$base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$template$backends$base$$$function_3_from_string(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$template$backends$base$$$function_3_from_string,
        const_str_plain_from_string,
#if PYTHON_VERSION >= 330
        const_str_digest_da49df330b0fd531622d00567d54fb38,
#endif
        codeobj_e0183570de0a1e591a7bec728a5cf013,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$template$backends$base,
        const_str_digest_b4a5fc651c4f57bf6ba05bd8fa72c2c2,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$template$backends$base$$$function_4_get_template(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$template$backends$base$$$function_4_get_template,
        const_str_plain_get_template,
#if PYTHON_VERSION >= 330
        const_str_digest_ce59a548bd6f308491ac48a87fc09045,
#endif
        codeobj_8389d7163cefb99620851e18391ea66e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$template$backends$base,
        const_str_digest_d78ea6bd18210f094f8826a8359fd6dc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$template$backends$base$$$function_5_template_dirs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$template$backends$base$$$function_5_template_dirs,
        const_str_plain_template_dirs,
#if PYTHON_VERSION >= 330
        const_str_digest_ee1a326a7e9eafb4c1ff4146e122a382,
#endif
        codeobj_f1fec89dda0b57d83d954235ea22999a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$template$backends$base,
        const_str_digest_a65f0f813d751b5051c1910cfe87d94a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$template$backends$base$$$function_6_iter_template_filenames(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$template$backends$base$$$function_6_iter_template_filenames,
        const_str_plain_iter_template_filenames,
#if PYTHON_VERSION >= 330
        const_str_digest_9e1b3361b23377c337d6fa655a6078b4,
#endif
        codeobj_c569e85380849acf829fef10656d9fc6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$template$backends$base,
        const_str_digest_0b02e982bf82431b550a453c2b0d62cf,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$template$backends$base =
{
    PyModuleDef_HEAD_INIT,
    "django.template.backends.base",   /* m_name */
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

MOD_INIT_DECL( django$template$backends$base )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$template$backends$base );
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
    puts("django.template.backends.base: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.template.backends.base: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$template$backends$base" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$template$backends$base = Py_InitModule4(
        "django.template.backends.base",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$template$backends$base = PyModule_Create( &mdef_django$template$backends$base );
#endif

    moduledict_django$template$backends$base = MODULE_DICT( module_django$template$backends$base );

    CHECK_OBJECT( module_django$template$backends$base );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_5cec4386aa290fb082fd0dc9cee4db9b, module_django$template$backends$base );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_app_dirname = NULL;
    PyObject *outline_0_var_from_string = NULL;
    PyObject *outline_0_var_get_template = NULL;
    PyObject *outline_0_var_template_dirs = NULL;
    PyObject *outline_0_var_iter_template_filenames = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
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
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_be077eb31490811b9e004afb86fba3fb_2 = NULL;

    struct Nuitka_FrameObject *frame_be077eb31490811b9e004afb86fba3fb_2;

    struct Nuitka_FrameObject *frame_d38850050b98b58c298f98bb298779af;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_d38850050b98b58c298f98bb298779af = MAKE_MODULE_FRAME( codeobj_d38850050b98b58c298f98bb298779af, module_django$template$backends$base );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d38850050b98b58c298f98bb298779af );
    assert( Py_REFCNT( frame_d38850050b98b58c298f98bb298779af ) == 2 );

    // Framed code:
    frame_d38850050b98b58c298f98bb298779af->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_5cec4386aa290fb082fd0dc9cee4db9b;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_d38850050b98b58c298f98bb298779af->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_d7cf60a02de7b10a6b68d1680ba3139e;
    UPDATE_STRING_DICT0( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    frame_d38850050b98b58c298f98bb298779af->m_frame.f_lineno = 2;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_digest_dfb6e1abbed3113ee07234fdc458a320;
    tmp_globals_name_1 = (PyObject *)moduledict_django$template$backends$base;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_a4c1ad595fb3a7565f4fb1c0ef85a85e_tuple;
    tmp_level_name_1 = const_int_0;
    frame_d38850050b98b58c298f98bb298779af->m_frame.f_lineno = 4;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ImproperlyConfigured );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain_ImproperlyConfigured, tmp_assign_source_9 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_SuspiciousFileOperation );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain_SuspiciousFileOperation, tmp_assign_source_10 );
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

    tmp_name_name_2 = const_str_digest_cd11f07a27d5ce295a7ba630b454b641;
    tmp_globals_name_2 = (PyObject *)moduledict_django$template$backends$base;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_get_app_template_dirs_tuple;
    tmp_level_name_2 = const_int_0;
    frame_d38850050b98b58c298f98bb298779af->m_frame.f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_get_app_template_dirs );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain_get_app_template_dirs, tmp_assign_source_11 );
    tmp_name_name_3 = const_str_digest_842dfd4744c6e20ce39943a1591eb59d;
    tmp_globals_name_3 = (PyObject *)moduledict_django$template$backends$base;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_safe_join_tuple;
    tmp_level_name_3 = const_int_0;
    frame_d38850050b98b58c298f98bb298779af->m_frame.f_lineno = 8;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_safe_join );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain_safe_join, tmp_assign_source_12 );
    tmp_name_name_4 = const_str_digest_3d2fb639fc3676a85e9d77bb02d18a21;
    tmp_globals_name_4 = (PyObject *)moduledict_django$template$backends$base;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_cached_property_tuple;
    tmp_level_name_4 = const_int_0;
    frame_d38850050b98b58c298f98bb298779af->m_frame.f_lineno = 9;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_cached_property );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain_cached_property, tmp_assign_source_13 );
    tmp_assign_source_14 = const_tuple_type_object_tuple;
    assert( tmp_class_creation_1__bases == NULL );
    Py_INCREF( tmp_assign_source_14 );
    tmp_class_creation_1__bases = tmp_assign_source_14;

    tmp_assign_source_15 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_15;

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


        exception_lineno = 12;

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


        exception_lineno = 12;

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


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

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
    tmp_assign_source_16 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 12;

        goto try_except_handler_2;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_16;

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


        exception_lineno = 12;

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


        exception_lineno = 12;

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
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_BaseEngine;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_d38850050b98b58c298f98bb298779af->m_frame.f_lineno = 12;
    tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_17 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_17;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_19 = const_str_digest_5cec4386aa290fb082fd0dc9cee4db9b;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_19 );
    outline_0_var___module__ = tmp_assign_source_19;

    tmp_assign_source_20 = const_str_plain_BaseEngine;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_20 );
    outline_0_var___qualname__ = tmp_assign_source_20;

    tmp_assign_source_21 = MAKE_FUNCTION_django$template$backends$base$$$function_1___init__(  );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_21;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_be077eb31490811b9e004afb86fba3fb_2, codeobj_be077eb31490811b9e004afb86fba3fb, module_django$template$backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_be077eb31490811b9e004afb86fba3fb_2 = cache_frame_be077eb31490811b9e004afb86fba3fb_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be077eb31490811b9e004afb86fba3fb_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be077eb31490811b9e004afb86fba3fb_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_3 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_3 = MAKE_FUNCTION_django$template$backends$base$$$function_2_app_dirname(  );
    frame_be077eb31490811b9e004afb86fba3fb_2->m_frame.f_lineno = 31;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_2 = "NoooNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_app_dirname == NULL );
    outline_0_var_app_dirname = tmp_assign_source_22;

    tmp_assign_source_23 = MAKE_FUNCTION_django$template$backends$base$$$function_3_from_string(  );
    assert( outline_0_var_from_string == NULL );
    outline_0_var_from_string = tmp_assign_source_23;

    tmp_assign_source_24 = MAKE_FUNCTION_django$template$backends$base$$$function_4_get_template(  );
    assert( outline_0_var_get_template == NULL );
    outline_0_var_get_template = tmp_assign_source_24;

    tmp_called_name_4 = PyDict_GetItem( locals_dict_1, const_str_plain_cached_property );

    if ( tmp_called_name_4 == NULL )
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain_cached_property );

        if (unlikely( tmp_called_name_4 == NULL ))
        {
            tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cached_property );
        }

        if ( tmp_called_name_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cached_property" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 60;
            type_description_2 = "NooooooNN";
            goto frame_exception_exit_2;
        }

    }

    tmp_args_element_name_4 = MAKE_FUNCTION_django$template$backends$base$$$function_5_template_dirs(  );
    frame_be077eb31490811b9e004afb86fba3fb_2->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_2 = "NooooooNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_template_dirs == NULL );
    outline_0_var_template_dirs = tmp_assign_source_25;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_be077eb31490811b9e004afb86fba3fb_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be077eb31490811b9e004afb86fba3fb_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be077eb31490811b9e004afb86fba3fb_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be077eb31490811b9e004afb86fba3fb_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be077eb31490811b9e004afb86fba3fb_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be077eb31490811b9e004afb86fba3fb_2,
        type_description_2,
        NULL,
        outline_0_var___qualname__,
        outline_0_var___module__,
        outline_0_var___init__,
        outline_0_var_app_dirname,
        outline_0_var_from_string,
        outline_0_var_get_template,
        outline_0_var_template_dirs,
        NULL
    );


    // Release cached frame.
    if ( frame_be077eb31490811b9e004afb86fba3fb_2 == cache_frame_be077eb31490811b9e004afb86fba3fb_2 )
    {
        Py_DECREF( frame_be077eb31490811b9e004afb86fba3fb_2 );
    }
    cache_frame_be077eb31490811b9e004afb86fba3fb_2 = NULL;

    assertFrameObject( frame_be077eb31490811b9e004afb86fba3fb_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_assign_source_26 = MAKE_FUNCTION_django$template$backends$base$$$function_6_iter_template_filenames(  );
    assert( outline_0_var_iter_template_filenames == NULL );
    outline_0_var_iter_template_filenames = tmp_assign_source_26;

    tmp_called_name_5 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_2 = const_str_plain_BaseEngine;
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

        exception_lineno = 12;

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

        exception_lineno = 12;

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

        exception_lineno = 12;

        goto try_except_handler_3;
    }
    if ( outline_0_var_app_dirname != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_app_dirname,
            outline_0_var_app_dirname
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_app_dirname
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_app_dirname
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

        exception_lineno = 12;

        goto try_except_handler_3;
    }
    if ( outline_0_var_from_string != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_from_string,
            outline_0_var_from_string
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_from_string
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_from_string
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

        exception_lineno = 12;

        goto try_except_handler_3;
    }
    if ( outline_0_var_get_template != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_get_template,
            outline_0_var_get_template
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_get_template
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_get_template
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

        exception_lineno = 12;

        goto try_except_handler_3;
    }
    if ( outline_0_var_template_dirs != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_template_dirs,
            outline_0_var_template_dirs
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_template_dirs
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_template_dirs
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

        exception_lineno = 12;

        goto try_except_handler_3;
    }
    if ( outline_0_var_iter_template_filenames != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_iter_template_filenames,
            outline_0_var_iter_template_filenames
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_iter_template_filenames
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_iter_template_filenames
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

        exception_lineno = 12;

        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_d38850050b98b58c298f98bb298779af->m_frame.f_lineno = 12;
    tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_27;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$template$backends$base );
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

    Py_XDECREF( outline_0_var_app_dirname );
    outline_0_var_app_dirname = NULL;

    Py_XDECREF( outline_0_var_from_string );
    outline_0_var_from_string = NULL;

    Py_XDECREF( outline_0_var_get_template );
    outline_0_var_get_template = NULL;

    Py_XDECREF( outline_0_var_template_dirs );
    outline_0_var_template_dirs = NULL;

    Py_XDECREF( outline_0_var_iter_template_filenames );
    outline_0_var_iter_template_filenames = NULL;

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

    Py_XDECREF( outline_0_var_app_dirname );
    outline_0_var_app_dirname = NULL;

    Py_XDECREF( outline_0_var_from_string );
    outline_0_var_from_string = NULL;

    Py_XDECREF( outline_0_var_get_template );
    outline_0_var_get_template = NULL;

    Py_XDECREF( outline_0_var_template_dirs );
    outline_0_var_template_dirs = NULL;

    Py_XDECREF( outline_0_var_iter_template_filenames );
    outline_0_var_iter_template_filenames = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$template$backends$base );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 12;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_18 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_django$template$backends$base, (Nuitka_StringObject *)const_str_plain_BaseEngine, tmp_assign_source_18 );
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
    RESTORE_FRAME_EXCEPTION( frame_d38850050b98b58c298f98bb298779af );
#endif
    popFrameStack();

    assertFrameObject( frame_d38850050b98b58c298f98bb298779af );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d38850050b98b58c298f98bb298779af );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d38850050b98b58c298f98bb298779af, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d38850050b98b58c298f98bb298779af->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d38850050b98b58c298f98bb298779af, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;


    return MOD_RETURN_VALUE( module_django$template$backends$base );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
