/* Generated code for Python source for module 'jinja2'
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

/* The _module_jinja2 is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_jinja2;
PyDictObject *moduledict_jinja2;

/* The module constants used, if any. */
static PyObject *const_str_digest_e58b8e238daae7f316f45d0978267798;
extern PyObject *const_str_plain_ModuleLoader;
extern PyObject *const_str_plain_select_autoescape;
extern PyObject *const_str_plain_FunctionLoader;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_TemplateRuntimeError;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_environmentfilter;
extern PyObject *const_str_plain_DebugUndefined;
static PyObject *const_tuple_5dfb4a6b54326bc0bb54bb6c9e3c4e7d_tuple;
extern PyObject *const_str_digest_b08614c1312768b93d9ef3c1dea1f5f0;
extern PyObject *const_str_plain_Markup;
static PyObject *const_str_digest_37aca85c698d791dc4bb639deca6348b;
extern PyObject *const_str_plain_UndefinedError;
static PyObject *const_str_plain_NUITKA_PACKAGE_jinja2;
extern PyObject *const_str_plain_Undefined;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_TemplateAssertionError;
extern PyObject *const_str_plain_PrefixLoader;
extern PyObject *const_str_plain_evalcontextfilter;
static PyObject *const_tuple_b3549df247658a589749241c2b24c2db_tuple;
extern PyObject *const_str_plain_TemplateError;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_have_async_gen;
static PyObject *const_tuple_d807b44edc242b896884973c3a827ba7_tuple;
static PyObject *const_tuple_str_plain_have_async_gen_tuple;
extern PyObject *const_str_plain_jinja2;
extern PyObject *const_str_plain_contextfunction;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_BaseLoader;
extern PyObject *const_str_plain_ChoiceLoader;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_BytecodeCache;
extern PyObject *const_str_digest_38d72d37090218643439302eee0c8cc7;
extern PyObject *const_str_plain_environmentfunction;
static PyObject *const_tuple_str_plain_Environment_str_plain_Template_tuple;
static PyObject *const_tuple_str_plain_have_async_gen_str_plain_patch_all_tuple;
extern PyObject *const_str_plain_TemplatesNotFound;
static PyObject *const_tuple_a092851630f55a05c6651dd5e3a7244c_tuple;
extern PyObject *const_str_plain_FileSystemBytecodeCache;
static PyObject *const_str_digest_4c82b25742f967dcf13c59ab3ce749ec;
extern PyObject *const_str_plain_FileSystemLoader;
extern PyObject *const_str_plain_MemcachedBytecodeCache;
static PyObject *const_tuple_6c62aa50d59ca178ea05507b5d2b6c86_tuple;
extern PyObject *const_str_digest_22004669909bd31f2603b122dfcf8792;
extern PyObject *const_str_digest_6a1b15fc617d9b2615daf846b271eabb;
extern PyObject *const_str_plain_Template;
extern PyObject *const_str_digest_50cd10b5aab52d808bd46c35f0566289;
extern PyObject *const_str_plain_make_logging_undefined;
extern PyObject *const_str_plain_clear_caches;
extern PyObject *const_str_plain_is_undefined;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
static PyObject *const_str_digest_e692544264bb3d8afff99f020a80a2af;
extern PyObject *const_str_plain_TemplateNotFound;
extern PyObject *const_str_plain___path__;
static PyObject *const_tuple_498366ec481302e9f1f5d0e8f355fea7_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_StrictUndefined;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_d3e422765a6c594f8308e26b965ba501;
static PyObject *const_str_digest_0cff46ec8a2788cce1099b079c1b518f;
static PyObject *const_str_plain__patch_async;
static PyObject *const_list_606708933253e5b092f48ccf0a0b13ca_list;
extern PyObject *const_str_digest_74893e30ca8be260e576d22e2956d0c6;
extern PyObject *const_str_plain_evalcontextfunction;
static PyObject *const_tuple_6939f3e2f6808822e75b30ec1dd66771_tuple;
extern PyObject *const_str_plain_contextfilter;
static PyObject *const_tuple_str_plain_patch_all_tuple;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_digest_fe28cdd84166b590823fe1124faec462;
static PyObject *const_str_plain___docformat__;
extern PyObject *const_str_plain_TemplateSyntaxError;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_DictLoader;
extern PyObject *const_str_plain_escape;
extern PyObject *const_str_plain_Environment;
static PyObject *const_str_plain_patch_all;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_PackageLoader;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_e58b8e238daae7f316f45d0978267798 = UNSTREAM_STRING( &constant_bin[ 1422187 ], 19, 0 );
    const_tuple_5dfb4a6b54326bc0bb54bb6c9e3c4e7d_tuple = PyTuple_New( 2 );
    const_str_plain_NUITKA_PACKAGE_jinja2 = UNSTREAM_STRING( &constant_bin[ 1422206 ], 21, 1 );
    PyTuple_SET_ITEM( const_tuple_5dfb4a6b54326bc0bb54bb6c9e3c4e7d_tuple, 0, const_str_plain_NUITKA_PACKAGE_jinja2 ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_jinja2 );
    PyTuple_SET_ITEM( const_tuple_5dfb4a6b54326bc0bb54bb6c9e3c4e7d_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_str_digest_37aca85c698d791dc4bb639deca6348b = UNSTREAM_STRING( &constant_bin[ 1422227 ], 19, 0 );
    const_tuple_b3549df247658a589749241c2b24c2db_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_b3549df247658a589749241c2b24c2db_tuple, 0, const_str_plain_BytecodeCache ); Py_INCREF( const_str_plain_BytecodeCache );
    PyTuple_SET_ITEM( const_tuple_b3549df247658a589749241c2b24c2db_tuple, 1, const_str_plain_FileSystemBytecodeCache ); Py_INCREF( const_str_plain_FileSystemBytecodeCache );
    PyTuple_SET_ITEM( const_tuple_b3549df247658a589749241c2b24c2db_tuple, 2, const_str_plain_MemcachedBytecodeCache ); Py_INCREF( const_str_plain_MemcachedBytecodeCache );
    const_tuple_d807b44edc242b896884973c3a827ba7_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_d807b44edc242b896884973c3a827ba7_tuple, 0, const_str_plain_Markup ); Py_INCREF( const_str_plain_Markup );
    PyTuple_SET_ITEM( const_tuple_d807b44edc242b896884973c3a827ba7_tuple, 1, const_str_plain_escape ); Py_INCREF( const_str_plain_escape );
    PyTuple_SET_ITEM( const_tuple_d807b44edc242b896884973c3a827ba7_tuple, 2, const_str_plain_clear_caches ); Py_INCREF( const_str_plain_clear_caches );
    PyTuple_SET_ITEM( const_tuple_d807b44edc242b896884973c3a827ba7_tuple, 3, const_str_plain_environmentfunction ); Py_INCREF( const_str_plain_environmentfunction );
    PyTuple_SET_ITEM( const_tuple_d807b44edc242b896884973c3a827ba7_tuple, 4, const_str_plain_evalcontextfunction ); Py_INCREF( const_str_plain_evalcontextfunction );
    PyTuple_SET_ITEM( const_tuple_d807b44edc242b896884973c3a827ba7_tuple, 5, const_str_plain_contextfunction ); Py_INCREF( const_str_plain_contextfunction );
    PyTuple_SET_ITEM( const_tuple_d807b44edc242b896884973c3a827ba7_tuple, 6, const_str_plain_is_undefined ); Py_INCREF( const_str_plain_is_undefined );
    PyTuple_SET_ITEM( const_tuple_d807b44edc242b896884973c3a827ba7_tuple, 7, const_str_plain_select_autoescape ); Py_INCREF( const_str_plain_select_autoescape );
    const_tuple_str_plain_have_async_gen_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_have_async_gen_tuple, 0, const_str_plain_have_async_gen ); Py_INCREF( const_str_plain_have_async_gen );
    const_tuple_str_plain_Environment_str_plain_Template_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Environment_str_plain_Template_tuple, 0, const_str_plain_Environment ); Py_INCREF( const_str_plain_Environment );
    PyTuple_SET_ITEM( const_tuple_str_plain_Environment_str_plain_Template_tuple, 1, const_str_plain_Template ); Py_INCREF( const_str_plain_Template );
    const_tuple_str_plain_have_async_gen_str_plain_patch_all_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_have_async_gen_str_plain_patch_all_tuple, 0, const_str_plain_have_async_gen ); Py_INCREF( const_str_plain_have_async_gen );
    const_str_plain_patch_all = UNSTREAM_STRING( &constant_bin[ 1422246 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_have_async_gen_str_plain_patch_all_tuple, 1, const_str_plain_patch_all ); Py_INCREF( const_str_plain_patch_all );
    const_tuple_a092851630f55a05c6651dd5e3a7244c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_a092851630f55a05c6651dd5e3a7244c_tuple, 0, const_str_plain_Undefined ); Py_INCREF( const_str_plain_Undefined );
    PyTuple_SET_ITEM( const_tuple_a092851630f55a05c6651dd5e3a7244c_tuple, 1, const_str_plain_DebugUndefined ); Py_INCREF( const_str_plain_DebugUndefined );
    PyTuple_SET_ITEM( const_tuple_a092851630f55a05c6651dd5e3a7244c_tuple, 2, const_str_plain_StrictUndefined ); Py_INCREF( const_str_plain_StrictUndefined );
    PyTuple_SET_ITEM( const_tuple_a092851630f55a05c6651dd5e3a7244c_tuple, 3, const_str_plain_make_logging_undefined ); Py_INCREF( const_str_plain_make_logging_undefined );
    const_str_digest_4c82b25742f967dcf13c59ab3ce749ec = UNSTREAM_STRING( &constant_bin[ 1422255 ], 15, 0 );
    const_tuple_6c62aa50d59ca178ea05507b5d2b6c86_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_6c62aa50d59ca178ea05507b5d2b6c86_tuple, 0, const_str_plain_TemplateError ); Py_INCREF( const_str_plain_TemplateError );
    PyTuple_SET_ITEM( const_tuple_6c62aa50d59ca178ea05507b5d2b6c86_tuple, 1, const_str_plain_UndefinedError ); Py_INCREF( const_str_plain_UndefinedError );
    PyTuple_SET_ITEM( const_tuple_6c62aa50d59ca178ea05507b5d2b6c86_tuple, 2, const_str_plain_TemplateNotFound ); Py_INCREF( const_str_plain_TemplateNotFound );
    PyTuple_SET_ITEM( const_tuple_6c62aa50d59ca178ea05507b5d2b6c86_tuple, 3, const_str_plain_TemplatesNotFound ); Py_INCREF( const_str_plain_TemplatesNotFound );
    PyTuple_SET_ITEM( const_tuple_6c62aa50d59ca178ea05507b5d2b6c86_tuple, 4, const_str_plain_TemplateSyntaxError ); Py_INCREF( const_str_plain_TemplateSyntaxError );
    PyTuple_SET_ITEM( const_tuple_6c62aa50d59ca178ea05507b5d2b6c86_tuple, 5, const_str_plain_TemplateAssertionError ); Py_INCREF( const_str_plain_TemplateAssertionError );
    PyTuple_SET_ITEM( const_tuple_6c62aa50d59ca178ea05507b5d2b6c86_tuple, 6, const_str_plain_TemplateRuntimeError ); Py_INCREF( const_str_plain_TemplateRuntimeError );
    const_str_digest_e692544264bb3d8afff99f020a80a2af = UNSTREAM_STRING( &constant_bin[ 1422270 ], 4, 0 );
    const_tuple_498366ec481302e9f1f5d0e8f355fea7_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_498366ec481302e9f1f5d0e8f355fea7_tuple, 0, const_str_plain_BaseLoader ); Py_INCREF( const_str_plain_BaseLoader );
    PyTuple_SET_ITEM( const_tuple_498366ec481302e9f1f5d0e8f355fea7_tuple, 1, const_str_plain_FileSystemLoader ); Py_INCREF( const_str_plain_FileSystemLoader );
    PyTuple_SET_ITEM( const_tuple_498366ec481302e9f1f5d0e8f355fea7_tuple, 2, const_str_plain_PackageLoader ); Py_INCREF( const_str_plain_PackageLoader );
    PyTuple_SET_ITEM( const_tuple_498366ec481302e9f1f5d0e8f355fea7_tuple, 3, const_str_plain_DictLoader ); Py_INCREF( const_str_plain_DictLoader );
    PyTuple_SET_ITEM( const_tuple_498366ec481302e9f1f5d0e8f355fea7_tuple, 4, const_str_plain_FunctionLoader ); Py_INCREF( const_str_plain_FunctionLoader );
    PyTuple_SET_ITEM( const_tuple_498366ec481302e9f1f5d0e8f355fea7_tuple, 5, const_str_plain_PrefixLoader ); Py_INCREF( const_str_plain_PrefixLoader );
    PyTuple_SET_ITEM( const_tuple_498366ec481302e9f1f5d0e8f355fea7_tuple, 6, const_str_plain_ChoiceLoader ); Py_INCREF( const_str_plain_ChoiceLoader );
    PyTuple_SET_ITEM( const_tuple_498366ec481302e9f1f5d0e8f355fea7_tuple, 7, const_str_plain_ModuleLoader ); Py_INCREF( const_str_plain_ModuleLoader );
    const_str_digest_d3e422765a6c594f8308e26b965ba501 = UNSTREAM_STRING( &constant_bin[ 1422274 ], 670, 0 );
    const_str_digest_0cff46ec8a2788cce1099b079c1b518f = UNSTREAM_STRING( &constant_bin[ 1422944 ], 18, 0 );
    const_str_plain__patch_async = UNSTREAM_STRING( &constant_bin[ 1422962 ], 12, 1 );
    const_list_606708933253e5b092f48ccf0a0b13ca_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1422974 ], 585 );
    const_tuple_6939f3e2f6808822e75b30ec1dd66771_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_6939f3e2f6808822e75b30ec1dd66771_tuple, 0, const_str_plain_environmentfilter ); Py_INCREF( const_str_plain_environmentfilter );
    PyTuple_SET_ITEM( const_tuple_6939f3e2f6808822e75b30ec1dd66771_tuple, 1, const_str_plain_contextfilter ); Py_INCREF( const_str_plain_contextfilter );
    PyTuple_SET_ITEM( const_tuple_6939f3e2f6808822e75b30ec1dd66771_tuple, 2, const_str_plain_evalcontextfilter ); Py_INCREF( const_str_plain_evalcontextfilter );
    const_tuple_str_plain_patch_all_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_patch_all_tuple, 0, const_str_plain_patch_all ); Py_INCREF( const_str_plain_patch_all );
    const_str_plain___docformat__ = UNSTREAM_STRING( &constant_bin[ 1423559 ], 13, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_jinja2( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f8317b627f30432a3a28c6beb95e8430;
static PyCodeObject *codeobj_b338158ce0679c73ef406b16423a3fe8;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_0cff46ec8a2788cce1099b079c1b518f );
    codeobj_f8317b627f30432a3a28c6beb95e8430 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_4c82b25742f967dcf13c59ab3ce749ec, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_b338158ce0679c73ef406b16423a3fe8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__patch_async, 75, const_tuple_str_plain_have_async_gen_str_plain_patch_all_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_jinja2$$$function_1__patch_async(  );


// The module function definitions.
static PyObject *impl_jinja2$$$function_1__patch_async( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_have_async_gen = NULL;
    PyObject *var_patch_all = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
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
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b338158ce0679c73ef406b16423a3fe8 = NULL;

    struct Nuitka_FrameObject *frame_b338158ce0679c73ef406b16423a3fe8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b338158ce0679c73ef406b16423a3fe8, codeobj_b338158ce0679c73ef406b16423a3fe8, module_jinja2, sizeof(void *)+sizeof(void *) );
    frame_b338158ce0679c73ef406b16423a3fe8 = cache_frame_b338158ce0679c73ef406b16423a3fe8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b338158ce0679c73ef406b16423a3fe8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b338158ce0679c73ef406b16423a3fe8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_6a1b15fc617d9b2615daf846b271eabb;
    tmp_globals_name_1 = (PyObject *)moduledict_jinja2;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_have_async_gen_tuple;
    tmp_level_name_1 = const_int_0;
    frame_b338158ce0679c73ef406b16423a3fe8->m_frame.f_lineno = 76;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_have_async_gen );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_have_async_gen == NULL );
    var_have_async_gen = tmp_assign_source_1;

    tmp_cond_value_1 = var_have_async_gen;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
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
    tmp_name_name_2 = const_str_digest_37aca85c698d791dc4bb639deca6348b;
    tmp_globals_name_2 = (PyObject *)moduledict_jinja2;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_patch_all_tuple;
    tmp_level_name_2 = const_int_0;
    frame_b338158ce0679c73ef406b16423a3fe8->m_frame.f_lineno = 78;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_patch_all );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_patch_all == NULL );
    var_patch_all = tmp_assign_source_2;

    tmp_called_name_1 = var_patch_all;

    CHECK_OBJECT( tmp_called_name_1 );
    frame_b338158ce0679c73ef406b16423a3fe8->m_frame.f_lineno = 79;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b338158ce0679c73ef406b16423a3fe8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b338158ce0679c73ef406b16423a3fe8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b338158ce0679c73ef406b16423a3fe8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b338158ce0679c73ef406b16423a3fe8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b338158ce0679c73ef406b16423a3fe8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b338158ce0679c73ef406b16423a3fe8,
        type_description_1,
        var_have_async_gen,
        var_patch_all
    );


    // Release cached frame.
    if ( frame_b338158ce0679c73ef406b16423a3fe8 == cache_frame_b338158ce0679c73ef406b16423a3fe8 )
    {
        Py_DECREF( frame_b338158ce0679c73ef406b16423a3fe8 );
    }
    cache_frame_b338158ce0679c73ef406b16423a3fe8 = NULL;

    assertFrameObject( frame_b338158ce0679c73ef406b16423a3fe8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( jinja2$$$function_1__patch_async );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_have_async_gen );
    var_have_async_gen = NULL;

    Py_XDECREF( var_patch_all );
    var_patch_all = NULL;

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

    Py_XDECREF( var_have_async_gen );
    var_have_async_gen = NULL;

    Py_XDECREF( var_patch_all );
    var_patch_all = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( jinja2$$$function_1__patch_async );
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



static PyObject *MAKE_FUNCTION_jinja2$$$function_1__patch_async(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$$$function_1__patch_async,
        const_str_plain__patch_async,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b338158ce0679c73ef406b16423a3fe8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_jinja2,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_jinja2 =
{
    PyModuleDef_HEAD_INIT,
    "jinja2",   /* m_name */
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

MOD_INIT_DECL( jinja2 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_jinja2 );
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
    puts("jinja2: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("jinja2: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initjinja2" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_jinja2 = Py_InitModule4(
        "jinja2",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_jinja2 = PyModule_Create( &mdef_jinja2 );
#endif

    moduledict_jinja2 = MODULE_DICT( module_jinja2 );

    CHECK_OBJECT( module_jinja2 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_jinja2, module_jinja2 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
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
    PyObject *tmp_import_name_from_30;
    PyObject *tmp_import_name_from_31;
    PyObject *tmp_import_name_from_32;
    PyObject *tmp_import_name_from_33;
    PyObject *tmp_import_name_from_34;
    PyObject *tmp_import_name_from_35;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    int tmp_res;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_f8317b627f30432a3a28c6beb95e8430;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_d3e422765a6c594f8308e26b965ba501;
    UPDATE_STRING_DICT0( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_f8317b627f30432a3a28c6beb95e8430 = MAKE_MODULE_FRAME( codeobj_f8317b627f30432a3a28c6beb95e8430, module_jinja2 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f8317b627f30432a3a28c6beb95e8430 );
    assert( Py_REFCNT( frame_f8317b627f30432a3a28c6beb95e8430 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 2 );
    frame_f8317b627f30432a3a28c6beb95e8430->m_frame.f_lineno = 1;
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
    frame_f8317b627f30432a3a28c6beb95e8430->m_frame.f_lineno = 1;
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
    frame_f8317b627f30432a3a28c6beb95e8430->m_frame.f_lineno = 1;
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
    frame_f8317b627f30432a3a28c6beb95e8430->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_5dfb4a6b54326bc0bb54bb6c9e3c4e7d_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_f8317b627f30432a3a28c6beb95e8430->m_frame.f_lineno = 1;
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
    tmp_args_element_name_2 = const_str_plain_jinja2;
    tmp_args_element_name_3 = metapath_based_loader;
    frame_f8317b627f30432a3a28c6beb95e8430->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_plain_jinja2;
    UPDATE_STRING_DICT0( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_e58b8e238daae7f316f45d0978267798;
    UPDATE_STRING_DICT0( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain___docformat__, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_e692544264bb3d8afff99f020a80a2af;
    UPDATE_STRING_DICT0( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_9 );
    tmp_name_name_1 = const_str_digest_50cd10b5aab52d808bd46c35f0566289;
    tmp_globals_name_1 = (PyObject *)moduledict_jinja2;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Environment_str_plain_Template_tuple;
    tmp_level_name_1 = const_int_0;
    frame_f8317b627f30432a3a28c6beb95e8430->m_frame.f_lineno = 33;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_10;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Environment );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_Environment, tmp_assign_source_11 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Template );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_Template, tmp_assign_source_12 );
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

    tmp_name_name_2 = const_str_digest_fe28cdd84166b590823fe1124faec462;
    tmp_globals_name_2 = (PyObject *)moduledict_jinja2;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_498366ec481302e9f1f5d0e8f355fea7_tuple;
    tmp_level_name_2 = const_int_0;
    frame_f8317b627f30432a3a28c6beb95e8430->m_frame.f_lineno = 36;
    tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_13;

    // Tried code:
    tmp_import_name_from_3 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_BaseLoader );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_BaseLoader, tmp_assign_source_14 );
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_FileSystemLoader );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_FileSystemLoader, tmp_assign_source_15 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_PackageLoader );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_PackageLoader, tmp_assign_source_16 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_DictLoader );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_DictLoader, tmp_assign_source_17 );
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_FunctionLoader );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_FunctionLoader, tmp_assign_source_18 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_PrefixLoader );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_PrefixLoader, tmp_assign_source_19 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_ChoiceLoader );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_ChoiceLoader, tmp_assign_source_20 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_ModuleLoader );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_ModuleLoader, tmp_assign_source_21 );
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

    tmp_name_name_3 = const_str_digest_b08614c1312768b93d9ef3c1dea1f5f0;
    tmp_globals_name_3 = (PyObject *)moduledict_jinja2;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_b3549df247658a589749241c2b24c2db_tuple;
    tmp_level_name_3 = const_int_0;
    frame_f8317b627f30432a3a28c6beb95e8430->m_frame.f_lineno = 41;
    tmp_assign_source_22 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_22;

    // Tried code:
    tmp_import_name_from_11 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_BytecodeCache );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_BytecodeCache, tmp_assign_source_23 );
    tmp_import_name_from_12 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_FileSystemBytecodeCache );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_FileSystemBytecodeCache, tmp_assign_source_24 );
    tmp_import_name_from_13 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_MemcachedBytecodeCache );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_MemcachedBytecodeCache, tmp_assign_source_25 );
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

    tmp_name_name_4 = const_str_digest_38d72d37090218643439302eee0c8cc7;
    tmp_globals_name_4 = (PyObject *)moduledict_jinja2;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_a092851630f55a05c6651dd5e3a7244c_tuple;
    tmp_level_name_4 = const_int_0;
    frame_f8317b627f30432a3a28c6beb95e8430->m_frame.f_lineno = 45;
    tmp_assign_source_26 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_26;

    // Tried code:
    tmp_import_name_from_14 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_Undefined );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_Undefined, tmp_assign_source_27 );
    tmp_import_name_from_15 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_DebugUndefined );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_DebugUndefined, tmp_assign_source_28 );
    tmp_import_name_from_16 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_StrictUndefined );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_StrictUndefined, tmp_assign_source_29 );
    tmp_import_name_from_17 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_make_logging_undefined );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_make_logging_undefined, tmp_assign_source_30 );
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

    tmp_name_name_5 = const_str_digest_22004669909bd31f2603b122dfcf8792;
    tmp_globals_name_5 = (PyObject *)moduledict_jinja2;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_6c62aa50d59ca178ea05507b5d2b6c86_tuple;
    tmp_level_name_5 = const_int_0;
    frame_f8317b627f30432a3a28c6beb95e8430->m_frame.f_lineno = 49;
    tmp_assign_source_31 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_5__module == NULL );
    tmp_import_from_5__module = tmp_assign_source_31;

    // Tried code:
    tmp_import_name_from_18 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_TemplateError );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_TemplateError, tmp_assign_source_32 );
    tmp_import_name_from_19 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_UndefinedError );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_UndefinedError, tmp_assign_source_33 );
    tmp_import_name_from_20 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_TemplateNotFound );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_TemplateNotFound, tmp_assign_source_34 );
    tmp_import_name_from_21 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_TemplatesNotFound );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_TemplatesNotFound, tmp_assign_source_35 );
    tmp_import_name_from_22 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_22 );
    tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_TemplateSyntaxError );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_TemplateSyntaxError, tmp_assign_source_36 );
    tmp_import_name_from_23 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_23 );
    tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_TemplateAssertionError );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_TemplateAssertionError, tmp_assign_source_37 );
    tmp_import_name_from_24 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_24 );
    tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_TemplateRuntimeError );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_TemplateRuntimeError, tmp_assign_source_38 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    tmp_name_name_6 = const_str_digest_74893e30ca8be260e576d22e2956d0c6;
    tmp_globals_name_6 = (PyObject *)moduledict_jinja2;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_6939f3e2f6808822e75b30ec1dd66771_tuple;
    tmp_level_name_6 = const_int_0;
    frame_f8317b627f30432a3a28c6beb95e8430->m_frame.f_lineno = 54;
    tmp_assign_source_39 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_6__module == NULL );
    tmp_import_from_6__module = tmp_assign_source_39;

    // Tried code:
    tmp_import_name_from_25 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_25 );
    tmp_assign_source_40 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_environmentfilter );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_environmentfilter, tmp_assign_source_40 );
    tmp_import_name_from_26 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_26 );
    tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_contextfilter );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_contextfilter, tmp_assign_source_41 );
    tmp_import_name_from_27 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_27 );
    tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_evalcontextfilter );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_evalcontextfilter, tmp_assign_source_42 );
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

    Py_XDECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    tmp_name_name_7 = const_str_digest_6a1b15fc617d9b2615daf846b271eabb;
    tmp_globals_name_7 = (PyObject *)moduledict_jinja2;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_d807b44edc242b896884973c3a827ba7_tuple;
    tmp_level_name_7 = const_int_0;
    frame_f8317b627f30432a3a28c6beb95e8430->m_frame.f_lineno = 56;
    tmp_assign_source_43 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_7__module == NULL );
    tmp_import_from_7__module = tmp_assign_source_43;

    // Tried code:
    tmp_import_name_from_28 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_28 );
    tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_Markup );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_Markup, tmp_assign_source_44 );
    tmp_import_name_from_29 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_29 );
    tmp_assign_source_45 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_escape );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_escape, tmp_assign_source_45 );
    tmp_import_name_from_30 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_30 );
    tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_30, const_str_plain_clear_caches );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_clear_caches, tmp_assign_source_46 );
    tmp_import_name_from_31 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_31 );
    tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_31, const_str_plain_environmentfunction );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_environmentfunction, tmp_assign_source_47 );
    tmp_import_name_from_32 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_32 );
    tmp_assign_source_48 = IMPORT_NAME( tmp_import_name_from_32, const_str_plain_evalcontextfunction );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_evalcontextfunction, tmp_assign_source_48 );
    tmp_import_name_from_33 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_33 );
    tmp_assign_source_49 = IMPORT_NAME( tmp_import_name_from_33, const_str_plain_contextfunction );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_contextfunction, tmp_assign_source_49 );
    tmp_import_name_from_34 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_34 );
    tmp_assign_source_50 = IMPORT_NAME( tmp_import_name_from_34, const_str_plain_is_undefined );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_is_undefined, tmp_assign_source_50 );
    tmp_import_name_from_35 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_35 );
    tmp_assign_source_51 = IMPORT_NAME( tmp_import_name_from_35, const_str_plain_select_autoescape );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain_select_autoescape, tmp_assign_source_51 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;

    tmp_assign_source_52 = LIST_COPY( const_list_606708933253e5b092f48ccf0a0b13ca_list );
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_52 );
    tmp_assign_source_53 = MAKE_FUNCTION_jinja2$$$function_1__patch_async(  );
    UPDATE_STRING_DICT1( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain__patch_async, tmp_assign_source_53 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_jinja2, (Nuitka_StringObject *)const_str_plain__patch_async );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__patch_async );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_patch_async" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;

        goto frame_exception_exit_1;
    }

    frame_f8317b627f30432a3a28c6beb95e8430->m_frame.f_lineno = 82;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_jinja2, const_str_plain__patch_async );
    if ( tmp_res == -1 ) CLEAR_ERROR_OCCURRED();

    if ( tmp_res == -1 )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_patch_async" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;

        goto frame_exception_exit_1;
    }


    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f8317b627f30432a3a28c6beb95e8430 );
#endif
    popFrameStack();

    assertFrameObject( frame_f8317b627f30432a3a28c6beb95e8430 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f8317b627f30432a3a28c6beb95e8430 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f8317b627f30432a3a28c6beb95e8430, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f8317b627f30432a3a28c6beb95e8430->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f8317b627f30432a3a28c6beb95e8430, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_jinja2 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
