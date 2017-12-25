/* Generated code for Python source for module 'jinja2.optimizer'
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

/* The _module_jinja2$optimizer is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_jinja2$optimizer;
PyDictObject *moduledict_jinja2$optimizer;

/* The module constants used, if any. */
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_bee6bd1476d5c014a822ce159bd9bc6a;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_visit_Test;
extern PyObject *const_str_digest_bf1eae20777b04a0754ebdb3ecb36f29;
extern PyObject *const_str_plain_nodes;
static PyObject *const_str_digest_082c92267c4ce398d864ecf19fe0f961;
static PyObject *const_str_digest_ebfee0de135fe5e97125909f36daaabd;
extern PyObject *const_str_plain_visit_Pos;
extern PyObject *const_str_plain_lineno;
extern PyObject *const_str_plain_Optimizer;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_visit_Filter;
static PyObject *const_tuple_str_plain_NodeTransformer_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_20962eb34a0af153dff0f7e9235072ad;
extern PyObject *const_str_plain_visit;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_visit_Or;
extern PyObject *const_str_plain_visit_CondExpr;
extern PyObject *const_str_plain_from_untrusted;
extern PyObject *const_str_plain_jinja2;
extern PyObject *const_str_plain_node;
extern PyObject *const_str_plain_visit_Add;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_visit_Mod;
extern PyObject *const_str_plain_visit_Pow;
extern PyObject *const_str_plain_visit_Not;
static PyObject *const_tuple_str_plain_self_str_plain_environment_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_57af73d791c0e9f17f09f55febacb088;
extern PyObject *const_str_plain_visit_Compare;
extern PyObject *const_str_digest_801106fc8bd2788c6cff0b1b2e6588bc;
extern PyObject *const_str_plain_generic_visit;
extern PyObject *const_str_plain_environment;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_b41c6b700aaffeef04ce55f97204ec99;
extern PyObject *const_tuple_str_plain_nodes_tuple;
static PyObject *const_str_digest_3088678ef778a747bced4e2ad32ed083;
static PyObject *const_str_plain_fold;
extern PyObject *const_str_plain_visit_FloorDiv;
extern PyObject *const_str_plain_visit_Getitem;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_visit_Div;
extern PyObject *const_str_plain_visit_And;
static PyObject *const_tuple_str_plain_node_str_plain_environment_str_plain_optimizer_tuple;
extern PyObject *const_str_plain_visit_Neg;
extern PyObject *const_str_plain_Impossible;
static PyObject *const_tuple_str_plain_self_str_plain_node_str_plain_eval_ctx_tuple;
extern PyObject *const_str_plain_optimizer;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_NodeTransformer;
extern PyObject *const_str_plain_visit_Sub;
extern PyObject *const_str_plain_visit_Mul;
extern PyObject *const_str_plain_visit_Call;
extern PyObject *const_str_plain_Const;
static PyObject *const_tuple_6afe151b2f1976f7e0f748f22de43414_tuple;
extern PyObject *const_str_plain_visit_Getattr;
extern PyObject *const_str_plain_optimize;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_as_const;
extern PyObject *const_str_plain_eval_ctx;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_bee6bd1476d5c014a822ce159bd9bc6a = UNSTREAM_STRING( &constant_bin[ 1521321 ], 20, 0 );
    const_str_digest_082c92267c4ce398d864ecf19fe0f961 = UNSTREAM_STRING( &constant_bin[ 1521341 ], 94, 0 );
    const_str_digest_ebfee0de135fe5e97125909f36daaabd = UNSTREAM_STRING( &constant_bin[ 1521435 ], 18, 0 );
    const_tuple_str_plain_NodeTransformer_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NodeTransformer_tuple, 0, const_str_plain_NodeTransformer ); Py_INCREF( const_str_plain_NodeTransformer );
    const_str_digest_20962eb34a0af153dff0f7e9235072ad = UNSTREAM_STRING( &constant_bin[ 1521453 ], 19, 0 );
    const_tuple_str_plain_self_str_plain_environment_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_environment_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_environment_tuple, 1, const_str_plain_environment ); Py_INCREF( const_str_plain_environment );
    const_str_digest_57af73d791c0e9f17f09f55febacb088 = UNSTREAM_STRING( &constant_bin[ 1521472 ], 603, 0 );
    const_str_digest_b41c6b700aaffeef04ce55f97204ec99 = UNSTREAM_STRING( &constant_bin[ 1522075 ], 14, 0 );
    const_str_digest_3088678ef778a747bced4e2ad32ed083 = UNSTREAM_STRING( &constant_bin[ 1522089 ], 25, 0 );
    const_str_plain_fold = UNSTREAM_STRING( &constant_bin[ 116049 ], 4, 1 );
    const_tuple_str_plain_node_str_plain_environment_str_plain_optimizer_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_node_str_plain_environment_str_plain_optimizer_tuple, 0, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_str_plain_node_str_plain_environment_str_plain_optimizer_tuple, 1, const_str_plain_environment ); Py_INCREF( const_str_plain_environment );
    PyTuple_SET_ITEM( const_tuple_str_plain_node_str_plain_environment_str_plain_optimizer_tuple, 2, const_str_plain_optimizer ); Py_INCREF( const_str_plain_optimizer );
    const_tuple_str_plain_self_str_plain_node_str_plain_eval_ctx_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_node_str_plain_eval_ctx_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_node_str_plain_eval_ctx_tuple, 1, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_node_str_plain_eval_ctx_tuple, 2, const_str_plain_eval_ctx ); Py_INCREF( const_str_plain_eval_ctx );
    const_tuple_6afe151b2f1976f7e0f748f22de43414_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1522114 ], 290 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_jinja2$optimizer( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6f4fb81f157799ac82bad8e726a47596;
static PyCodeObject *codeobj_ada1427c822548cd7b5c3defaf2e089c;
static PyCodeObject *codeobj_41f4d0a8a50cd4fb7c8478ea27a6c9f2;
static PyCodeObject *codeobj_c0b342b81e993e7c5f1775960cae5de2;
static PyCodeObject *codeobj_351555cd8b57cc53001da2afb8482b8b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_20962eb34a0af153dff0f7e9235072ad );
    codeobj_6f4fb81f157799ac82bad8e726a47596 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_3088678ef778a747bced4e2ad32ed083, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_ada1427c822548cd7b5c3defaf2e089c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Optimizer, 30, const_tuple_6afe151b2f1976f7e0f748f22de43414_tuple, 0, 0, CO_NOFREE );
    codeobj_41f4d0a8a50cd4fb7c8478ea27a6c9f2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 32, const_tuple_str_plain_self_str_plain_environment_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c0b342b81e993e7c5f1775960cae5de2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fold, 35, const_tuple_str_plain_self_str_plain_node_str_plain_eval_ctx_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_351555cd8b57cc53001da2afb8482b8b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_optimize, 23, const_tuple_str_plain_node_str_plain_environment_str_plain_optimizer_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_jinja2$optimizer$$$function_1_optimize(  );


static PyObject *MAKE_FUNCTION_jinja2$optimizer$$$function_2___init__(  );


static PyObject *MAKE_FUNCTION_jinja2$optimizer$$$function_3_fold( PyObject *defaults );


// The module function definitions.
static PyObject *impl_jinja2$optimizer$$$function_1_optimize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_node = python_pars[ 0 ];
    PyObject *par_environment = python_pars[ 1 ];
    PyObject *var_optimizer = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_351555cd8b57cc53001da2afb8482b8b = NULL;

    struct Nuitka_FrameObject *frame_351555cd8b57cc53001da2afb8482b8b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_351555cd8b57cc53001da2afb8482b8b, codeobj_351555cd8b57cc53001da2afb8482b8b, module_jinja2$optimizer, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_351555cd8b57cc53001da2afb8482b8b = cache_frame_351555cd8b57cc53001da2afb8482b8b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_351555cd8b57cc53001da2afb8482b8b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_351555cd8b57cc53001da2afb8482b8b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain_Optimizer );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Optimizer );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Optimizer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_environment;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_351555cd8b57cc53001da2afb8482b8b->m_frame.f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_optimizer == NULL );
    var_optimizer = tmp_assign_source_1;

    tmp_source_name_1 = var_optimizer;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_visit );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_node;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_351555cd8b57cc53001da2afb8482b8b->m_frame.f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_351555cd8b57cc53001da2afb8482b8b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_351555cd8b57cc53001da2afb8482b8b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_351555cd8b57cc53001da2afb8482b8b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_351555cd8b57cc53001da2afb8482b8b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_351555cd8b57cc53001da2afb8482b8b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_351555cd8b57cc53001da2afb8482b8b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_351555cd8b57cc53001da2afb8482b8b,
        type_description_1,
        par_node,
        par_environment,
        var_optimizer
    );


    // Release cached frame.
    if ( frame_351555cd8b57cc53001da2afb8482b8b == cache_frame_351555cd8b57cc53001da2afb8482b8b )
    {
        Py_DECREF( frame_351555cd8b57cc53001da2afb8482b8b );
    }
    cache_frame_351555cd8b57cc53001da2afb8482b8b = NULL;

    assertFrameObject( frame_351555cd8b57cc53001da2afb8482b8b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( jinja2$optimizer$$$function_1_optimize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( par_environment );
    par_environment = NULL;

    Py_XDECREF( var_optimizer );
    var_optimizer = NULL;

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

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( par_environment );
    par_environment = NULL;

    Py_XDECREF( var_optimizer );
    var_optimizer = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( jinja2$optimizer$$$function_1_optimize );
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


static PyObject *impl_jinja2$optimizer$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_environment = python_pars[ 1 ];
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
    static struct Nuitka_FrameObject *cache_frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2 = NULL;

    struct Nuitka_FrameObject *frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2, codeobj_41f4d0a8a50cd4fb7c8478ea27a6c9f2, module_jinja2$optimizer, sizeof(void *)+sizeof(void *) );
    frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2 = cache_frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_environment;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_environment, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2,
        type_description_1,
        par_self,
        par_environment
    );


    // Release cached frame.
    if ( frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2 == cache_frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2 )
    {
        Py_DECREF( frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2 );
    }
    cache_frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2 = NULL;

    assertFrameObject( frame_41f4d0a8a50cd4fb7c8478ea27a6c9f2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( jinja2$optimizer$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_environment );
    par_environment = NULL;

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

    Py_XDECREF( par_environment );
    par_environment = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( jinja2$optimizer$$$function_2___init__ );
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


static PyObject *impl_jinja2$optimizer$$$function_3_fold( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_node = python_pars[ 1 ];
    PyObject *par_eval_ctx = python_pars[ 2 ];
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
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
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_c0b342b81e993e7c5f1775960cae5de2 = NULL;

    struct Nuitka_FrameObject *frame_c0b342b81e993e7c5f1775960cae5de2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c0b342b81e993e7c5f1775960cae5de2, codeobj_c0b342b81e993e7c5f1775960cae5de2, module_jinja2$optimizer, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c0b342b81e993e7c5f1775960cae5de2 = cache_frame_c0b342b81e993e7c5f1775960cae5de2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c0b342b81e993e7c5f1775960cae5de2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c0b342b81e993e7c5f1775960cae5de2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_generic_visit );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_node;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_c0b342b81e993e7c5f1775960cae5de2->m_frame.f_lineno = 37;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_node;
        par_node = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain_nodes );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nodes );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nodes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Const );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_from_untrusted );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_4 = par_node;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_as_const );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 39;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = par_eval_ctx;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "eval_ctx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    frame_c0b342b81e993e7c5f1775960cae5de2->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 39;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_lineno;
    tmp_source_name_5 = par_node;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_lineno );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 40;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_environment;
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_environment );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 41;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_c0b342b81e993e7c5f1775960cae5de2->m_frame.f_lineno = 39;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( jinja2$optimizer$$$function_3_fold );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_c0b342b81e993e7c5f1775960cae5de2, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_c0b342b81e993e7c5f1775960cae5de2, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain_nodes );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nodes );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nodes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Impossible );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 42;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = par_node;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 38;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c0b342b81e993e7c5f1775960cae5de2->m_frame) frame_c0b342b81e993e7c5f1775960cae5de2->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( jinja2$optimizer$$$function_3_fold );
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
    RESTORE_FRAME_EXCEPTION( frame_c0b342b81e993e7c5f1775960cae5de2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_c0b342b81e993e7c5f1775960cae5de2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_c0b342b81e993e7c5f1775960cae5de2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c0b342b81e993e7c5f1775960cae5de2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c0b342b81e993e7c5f1775960cae5de2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c0b342b81e993e7c5f1775960cae5de2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c0b342b81e993e7c5f1775960cae5de2,
        type_description_1,
        par_self,
        par_node,
        par_eval_ctx
    );


    // Release cached frame.
    if ( frame_c0b342b81e993e7c5f1775960cae5de2 == cache_frame_c0b342b81e993e7c5f1775960cae5de2 )
    {
        Py_DECREF( frame_c0b342b81e993e7c5f1775960cae5de2 );
    }
    cache_frame_c0b342b81e993e7c5f1775960cae5de2 = NULL;

    assertFrameObject( frame_c0b342b81e993e7c5f1775960cae5de2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( jinja2$optimizer$$$function_3_fold );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( par_eval_ctx );
    par_eval_ctx = NULL;

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

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( par_eval_ctx );
    par_eval_ctx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( jinja2$optimizer$$$function_3_fold );
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



static PyObject *MAKE_FUNCTION_jinja2$optimizer$$$function_1_optimize(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$optimizer$$$function_1_optimize,
        const_str_plain_optimize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_351555cd8b57cc53001da2afb8482b8b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_jinja2$optimizer,
        const_str_digest_082c92267c4ce398d864ecf19fe0f961,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$optimizer$$$function_2___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$optimizer$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_ebfee0de135fe5e97125909f36daaabd,
#endif
        codeobj_41f4d0a8a50cd4fb7c8478ea27a6c9f2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_jinja2$optimizer,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$optimizer$$$function_3_fold( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$optimizer$$$function_3_fold,
        const_str_plain_fold,
#if PYTHON_VERSION >= 330
        const_str_digest_b41c6b700aaffeef04ce55f97204ec99,
#endif
        codeobj_c0b342b81e993e7c5f1775960cae5de2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_jinja2$optimizer,
        const_str_digest_bee6bd1476d5c014a822ce159bd9bc6a,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_jinja2$optimizer =
{
    PyModuleDef_HEAD_INIT,
    "jinja2.optimizer",   /* m_name */
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

MOD_INIT_DECL( jinja2$optimizer )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_jinja2$optimizer );
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
    puts("jinja2.optimizer: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("jinja2.optimizer: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initjinja2$optimizer" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_jinja2$optimizer = Py_InitModule4(
        "jinja2.optimizer",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_jinja2$optimizer = PyModule_Create( &mdef_jinja2$optimizer );
#endif

    moduledict_jinja2$optimizer = MODULE_DICT( module_jinja2$optimizer );

    CHECK_OBJECT( module_jinja2$optimizer );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_bf1eae20777b04a0754ebdb3ecb36f29, module_jinja2$optimizer );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_fold = NULL;
    PyObject *outline_0_var_visit_Add = NULL;
    PyObject *outline_0_var_visit_Sub = NULL;
    PyObject *outline_0_var_visit_Mul = NULL;
    PyObject *outline_0_var_visit_Div = NULL;
    PyObject *outline_0_var_visit_FloorDiv = NULL;
    PyObject *outline_0_var_visit_Pow = NULL;
    PyObject *outline_0_var_visit_Mod = NULL;
    PyObject *outline_0_var_visit_And = NULL;
    PyObject *outline_0_var_visit_Or = NULL;
    PyObject *outline_0_var_visit_Pos = NULL;
    PyObject *outline_0_var_visit_Neg = NULL;
    PyObject *outline_0_var_visit_Not = NULL;
    PyObject *outline_0_var_visit_Compare = NULL;
    PyObject *outline_0_var_visit_Getitem = NULL;
    PyObject *outline_0_var_visit_Getattr = NULL;
    PyObject *outline_0_var_visit_Call = NULL;
    PyObject *outline_0_var_visit_Filter = NULL;
    PyObject *outline_0_var_visit_Test = NULL;
    PyObject *outline_0_var_visit_CondExpr = NULL;
    PyObject *tmp_Optimizer$assign_unpack_1__assign_source = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
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
    PyObject *tmp_bases_name_1;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_ada1427c822548cd7b5c3defaf2e089c_2 = NULL;

    struct Nuitka_FrameObject *frame_ada1427c822548cd7b5c3defaf2e089c_2;

    struct Nuitka_FrameObject *frame_6f4fb81f157799ac82bad8e726a47596;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = const_str_digest_57af73d791c0e9f17f09f55febacb088;
    UPDATE_STRING_DICT0( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_6f4fb81f157799ac82bad8e726a47596 = MAKE_MODULE_FRAME( codeobj_6f4fb81f157799ac82bad8e726a47596, module_jinja2$optimizer );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_6f4fb81f157799ac82bad8e726a47596 );
    assert( Py_REFCNT( frame_6f4fb81f157799ac82bad8e726a47596 ) == 2 );

    // Framed code:
    frame_6f4fb81f157799ac82bad8e726a47596->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_bf1eae20777b04a0754ebdb3ecb36f29;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_6f4fb81f157799ac82bad8e726a47596->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_jinja2;
    UPDATE_STRING_DICT0( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_jinja2;
    tmp_globals_name_1 = (PyObject *)moduledict_jinja2$optimizer;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_nodes_tuple;
    tmp_level_name_1 = const_int_0;
    frame_6f4fb81f157799ac82bad8e726a47596->m_frame.f_lineno = 19;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_nodes );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain_nodes, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_digest_801106fc8bd2788c6cff0b1b2e6588bc;
    tmp_globals_name_2 = (PyObject *)moduledict_jinja2$optimizer;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_NodeTransformer_tuple;
    tmp_level_name_2 = const_int_0;
    frame_6f4fb81f157799ac82bad8e726a47596->m_frame.f_lineno = 20;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_NodeTransformer );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain_NodeTransformer, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_jinja2$optimizer$$$function_1_optimize(  );
    UPDATE_STRING_DICT1( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain_optimize, tmp_assign_source_9 );
    // Tried code:
    tmp_assign_source_10 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain_NodeTransformer );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NodeTransformer );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NodeTransformer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;

        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_10, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_10;

    tmp_assign_source_11 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;

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


        exception_lineno = 30;

        goto try_except_handler_1;
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


        exception_lineno = 30;

        goto try_except_handler_1;
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


        exception_lineno = 30;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_12 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 30;

        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_12;

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


        exception_lineno = 30;

        goto try_except_handler_1;
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


        exception_lineno = 30;

        goto try_except_handler_1;
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


        exception_lineno = 30;

        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_Optimizer;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_6f4fb81f157799ac82bad8e726a47596->m_frame.f_lineno = 30;
    tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_13 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_13;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_15 = const_str_digest_bf1eae20777b04a0754ebdb3ecb36f29;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_15 );
    outline_0_var___module__ = tmp_assign_source_15;

    tmp_assign_source_16 = const_str_plain_Optimizer;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_16 );
    outline_0_var___qualname__ = tmp_assign_source_16;

    tmp_assign_source_17 = MAKE_FUNCTION_jinja2$optimizer$$$function_2___init__(  );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_17;

    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_18 = MAKE_FUNCTION_jinja2$optimizer$$$function_3_fold( tmp_defaults_1 );
    assert( outline_0_var_fold == NULL );
    outline_0_var_fold = tmp_assign_source_18;

    tmp_assign_source_19 = outline_0_var_fold;

    CHECK_OBJECT( tmp_assign_source_19 );
    assert( tmp_Optimizer$assign_unpack_1__assign_source == NULL );
    Py_INCREF( tmp_assign_source_19 );
    tmp_Optimizer$assign_unpack_1__assign_source = tmp_assign_source_19;

    tmp_assign_source_20 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_20 );
    assert( outline_0_var_visit_Add == NULL );
    Py_INCREF( tmp_assign_source_20 );
    outline_0_var_visit_Add = tmp_assign_source_20;

    tmp_assign_source_21 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_21 );
    assert( outline_0_var_visit_Sub == NULL );
    Py_INCREF( tmp_assign_source_21 );
    outline_0_var_visit_Sub = tmp_assign_source_21;

    tmp_assign_source_22 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_22 );
    assert( outline_0_var_visit_Mul == NULL );
    Py_INCREF( tmp_assign_source_22 );
    outline_0_var_visit_Mul = tmp_assign_source_22;

    tmp_assign_source_23 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_23 );
    assert( outline_0_var_visit_Div == NULL );
    Py_INCREF( tmp_assign_source_23 );
    outline_0_var_visit_Div = tmp_assign_source_23;

    tmp_assign_source_24 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_24 );
    assert( outline_0_var_visit_FloorDiv == NULL );
    Py_INCREF( tmp_assign_source_24 );
    outline_0_var_visit_FloorDiv = tmp_assign_source_24;

    tmp_assign_source_25 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_25 );
    assert( outline_0_var_visit_Pow == NULL );
    Py_INCREF( tmp_assign_source_25 );
    outline_0_var_visit_Pow = tmp_assign_source_25;

    tmp_assign_source_26 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_26 );
    assert( outline_0_var_visit_Mod == NULL );
    Py_INCREF( tmp_assign_source_26 );
    outline_0_var_visit_Mod = tmp_assign_source_26;

    tmp_assign_source_27 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_27 );
    assert( outline_0_var_visit_And == NULL );
    Py_INCREF( tmp_assign_source_27 );
    outline_0_var_visit_And = tmp_assign_source_27;

    tmp_assign_source_28 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_28 );
    assert( outline_0_var_visit_Or == NULL );
    Py_INCREF( tmp_assign_source_28 );
    outline_0_var_visit_Or = tmp_assign_source_28;

    tmp_assign_source_29 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_29 );
    assert( outline_0_var_visit_Pos == NULL );
    Py_INCREF( tmp_assign_source_29 );
    outline_0_var_visit_Pos = tmp_assign_source_29;

    tmp_assign_source_30 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_30 );
    assert( outline_0_var_visit_Neg == NULL );
    Py_INCREF( tmp_assign_source_30 );
    outline_0_var_visit_Neg = tmp_assign_source_30;

    tmp_assign_source_31 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_31 );
    assert( outline_0_var_visit_Not == NULL );
    Py_INCREF( tmp_assign_source_31 );
    outline_0_var_visit_Not = tmp_assign_source_31;

    tmp_assign_source_32 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_32 );
    assert( outline_0_var_visit_Compare == NULL );
    Py_INCREF( tmp_assign_source_32 );
    outline_0_var_visit_Compare = tmp_assign_source_32;

    tmp_assign_source_33 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_33 );
    assert( outline_0_var_visit_Getitem == NULL );
    Py_INCREF( tmp_assign_source_33 );
    outline_0_var_visit_Getitem = tmp_assign_source_33;

    tmp_assign_source_34 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_34 );
    assert( outline_0_var_visit_Getattr == NULL );
    Py_INCREF( tmp_assign_source_34 );
    outline_0_var_visit_Getattr = tmp_assign_source_34;

    tmp_assign_source_35 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_35 );
    assert( outline_0_var_visit_Call == NULL );
    Py_INCREF( tmp_assign_source_35 );
    outline_0_var_visit_Call = tmp_assign_source_35;

    tmp_assign_source_36 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_36 );
    assert( outline_0_var_visit_Filter == NULL );
    Py_INCREF( tmp_assign_source_36 );
    outline_0_var_visit_Filter = tmp_assign_source_36;

    tmp_assign_source_37 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_37 );
    assert( outline_0_var_visit_Test == NULL );
    Py_INCREF( tmp_assign_source_37 );
    outline_0_var_visit_Test = tmp_assign_source_37;

    tmp_assign_source_38 = tmp_Optimizer$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_38 );
    assert( outline_0_var_visit_CondExpr == NULL );
    Py_INCREF( tmp_assign_source_38 );
    outline_0_var_visit_CondExpr = tmp_assign_source_38;

    CHECK_OBJECT( (PyObject *)tmp_Optimizer$assign_unpack_1__assign_source );
    Py_DECREF( tmp_Optimizer$assign_unpack_1__assign_source );
    tmp_Optimizer$assign_unpack_1__assign_source = NULL;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ada1427c822548cd7b5c3defaf2e089c_2, codeobj_ada1427c822548cd7b5c3defaf2e089c, module_jinja2$optimizer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ada1427c822548cd7b5c3defaf2e089c_2 = cache_frame_ada1427c822548cd7b5c3defaf2e089c_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ada1427c822548cd7b5c3defaf2e089c_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ada1427c822548cd7b5c3defaf2e089c_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_result = outline_0_var_fold != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( outline_0_var_fold );
        outline_0_var_fold = NULL;
    }

    if ( tmp_result == false )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fold" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_2 = "Nooooooooooooooooooooooo";
        goto frame_exception_exit_2;
    }


#if 0
    RESTORE_FRAME_EXCEPTION( frame_ada1427c822548cd7b5c3defaf2e089c_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ada1427c822548cd7b5c3defaf2e089c_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ada1427c822548cd7b5c3defaf2e089c_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ada1427c822548cd7b5c3defaf2e089c_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ada1427c822548cd7b5c3defaf2e089c_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ada1427c822548cd7b5c3defaf2e089c_2,
        type_description_2,
        NULL,
        outline_0_var___qualname__,
        outline_0_var___module__,
        outline_0_var___init__,
        outline_0_var_fold,
        outline_0_var_visit_Add,
        outline_0_var_visit_Sub,
        outline_0_var_visit_Mul,
        outline_0_var_visit_Div,
        outline_0_var_visit_FloorDiv,
        outline_0_var_visit_Pow,
        outline_0_var_visit_Mod,
        outline_0_var_visit_And,
        outline_0_var_visit_Or,
        outline_0_var_visit_Pos,
        outline_0_var_visit_Neg,
        outline_0_var_visit_Not,
        outline_0_var_visit_Compare,
        outline_0_var_visit_Getitem,
        outline_0_var_visit_Getattr,
        outline_0_var_visit_Call,
        outline_0_var_visit_Filter,
        outline_0_var_visit_Test,
        outline_0_var_visit_CondExpr
    );


    // Release cached frame.
    if ( frame_ada1427c822548cd7b5c3defaf2e089c_2 == cache_frame_ada1427c822548cd7b5c3defaf2e089c_2 )
    {
        Py_DECREF( frame_ada1427c822548cd7b5c3defaf2e089c_2 );
    }
    cache_frame_ada1427c822548cd7b5c3defaf2e089c_2 = NULL;

    assertFrameObject( frame_ada1427c822548cd7b5c3defaf2e089c_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_2;
    skip_nested_handling_1:;
    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_3 = const_str_plain_Optimizer;
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

        exception_lineno = 30;

        goto try_except_handler_2;
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

        exception_lineno = 30;

        goto try_except_handler_2;
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_fold != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_fold,
            outline_0_var_fold
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_fold
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_fold
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Add != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Add,
            outline_0_var_visit_Add
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Add
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Add
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Sub != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Sub,
            outline_0_var_visit_Sub
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Sub
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Sub
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Mul != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Mul,
            outline_0_var_visit_Mul
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Mul
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Mul
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Div != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Div,
            outline_0_var_visit_Div
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Div
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Div
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_FloorDiv != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_FloorDiv,
            outline_0_var_visit_FloorDiv
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_FloorDiv
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_FloorDiv
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Pow != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Pow,
            outline_0_var_visit_Pow
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Pow
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Pow
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Mod != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Mod,
            outline_0_var_visit_Mod
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Mod
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Mod
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_And != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_And,
            outline_0_var_visit_And
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_And
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_And
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Or != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Or,
            outline_0_var_visit_Or
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Or
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Or
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Pos != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Pos,
            outline_0_var_visit_Pos
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Pos
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Pos
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Neg != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Neg,
            outline_0_var_visit_Neg
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Neg
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Neg
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Not != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Not,
            outline_0_var_visit_Not
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Not
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Not
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Compare != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Compare,
            outline_0_var_visit_Compare
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Compare
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Compare
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Getitem != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Getitem,
            outline_0_var_visit_Getitem
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Getitem
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Getitem
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Getattr != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Getattr,
            outline_0_var_visit_Getattr
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Getattr
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Getattr
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Call != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Call,
            outline_0_var_visit_Call
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Call
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Call
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Filter != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Filter,
            outline_0_var_visit_Filter
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Filter
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Filter
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_Test != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Test,
            outline_0_var_visit_Test
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_Test
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_Test
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    if ( outline_0_var_visit_CondExpr != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_CondExpr,
            outline_0_var_visit_CondExpr
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_visit_CondExpr
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_visit_CondExpr
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

        exception_lineno = 30;

        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_6f4fb81f157799ac82bad8e726a47596->m_frame.f_lineno = 30;
    tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_39;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( jinja2$optimizer );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var_fold );
    outline_0_var_fold = NULL;

    Py_XDECREF( outline_0_var_visit_Add );
    outline_0_var_visit_Add = NULL;

    Py_XDECREF( outline_0_var_visit_Sub );
    outline_0_var_visit_Sub = NULL;

    Py_XDECREF( outline_0_var_visit_Mul );
    outline_0_var_visit_Mul = NULL;

    Py_XDECREF( outline_0_var_visit_Div );
    outline_0_var_visit_Div = NULL;

    Py_XDECREF( outline_0_var_visit_FloorDiv );
    outline_0_var_visit_FloorDiv = NULL;

    Py_XDECREF( outline_0_var_visit_Pow );
    outline_0_var_visit_Pow = NULL;

    Py_XDECREF( outline_0_var_visit_Mod );
    outline_0_var_visit_Mod = NULL;

    Py_XDECREF( outline_0_var_visit_And );
    outline_0_var_visit_And = NULL;

    Py_XDECREF( outline_0_var_visit_Or );
    outline_0_var_visit_Or = NULL;

    Py_XDECREF( outline_0_var_visit_Pos );
    outline_0_var_visit_Pos = NULL;

    Py_XDECREF( outline_0_var_visit_Neg );
    outline_0_var_visit_Neg = NULL;

    Py_XDECREF( outline_0_var_visit_Not );
    outline_0_var_visit_Not = NULL;

    Py_XDECREF( outline_0_var_visit_Compare );
    outline_0_var_visit_Compare = NULL;

    Py_XDECREF( outline_0_var_visit_Getitem );
    outline_0_var_visit_Getitem = NULL;

    Py_XDECREF( outline_0_var_visit_Getattr );
    outline_0_var_visit_Getattr = NULL;

    Py_XDECREF( outline_0_var_visit_Call );
    outline_0_var_visit_Call = NULL;

    Py_XDECREF( outline_0_var_visit_Filter );
    outline_0_var_visit_Filter = NULL;

    Py_XDECREF( outline_0_var_visit_Test );
    outline_0_var_visit_Test = NULL;

    Py_XDECREF( outline_0_var_visit_CondExpr );
    outline_0_var_visit_CondExpr = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var_fold );
    outline_0_var_fold = NULL;

    Py_XDECREF( outline_0_var_visit_Add );
    outline_0_var_visit_Add = NULL;

    Py_XDECREF( outline_0_var_visit_Sub );
    outline_0_var_visit_Sub = NULL;

    Py_XDECREF( outline_0_var_visit_Mul );
    outline_0_var_visit_Mul = NULL;

    Py_XDECREF( outline_0_var_visit_Div );
    outline_0_var_visit_Div = NULL;

    Py_XDECREF( outline_0_var_visit_FloorDiv );
    outline_0_var_visit_FloorDiv = NULL;

    Py_XDECREF( outline_0_var_visit_Pow );
    outline_0_var_visit_Pow = NULL;

    Py_XDECREF( outline_0_var_visit_Mod );
    outline_0_var_visit_Mod = NULL;

    Py_XDECREF( outline_0_var_visit_And );
    outline_0_var_visit_And = NULL;

    Py_XDECREF( outline_0_var_visit_Or );
    outline_0_var_visit_Or = NULL;

    Py_XDECREF( outline_0_var_visit_Pos );
    outline_0_var_visit_Pos = NULL;

    Py_XDECREF( outline_0_var_visit_Neg );
    outline_0_var_visit_Neg = NULL;

    Py_XDECREF( outline_0_var_visit_Not );
    outline_0_var_visit_Not = NULL;

    Py_XDECREF( outline_0_var_visit_Compare );
    outline_0_var_visit_Compare = NULL;

    Py_XDECREF( outline_0_var_visit_Getitem );
    outline_0_var_visit_Getitem = NULL;

    Py_XDECREF( outline_0_var_visit_Getattr );
    outline_0_var_visit_Getattr = NULL;

    Py_XDECREF( outline_0_var_visit_Call );
    outline_0_var_visit_Call = NULL;

    Py_XDECREF( outline_0_var_visit_Filter );
    outline_0_var_visit_Filter = NULL;

    Py_XDECREF( outline_0_var_visit_Test );
    outline_0_var_visit_Test = NULL;

    Py_XDECREF( outline_0_var_visit_CondExpr );
    outline_0_var_visit_CondExpr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( jinja2$optimizer );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 30;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_14 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_jinja2$optimizer, (Nuitka_StringObject *)const_str_plain_Optimizer, tmp_assign_source_14 );
    goto try_end_1;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f4fb81f157799ac82bad8e726a47596 );
#endif
    popFrameStack();

    assertFrameObject( frame_6f4fb81f157799ac82bad8e726a47596 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f4fb81f157799ac82bad8e726a47596 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6f4fb81f157799ac82bad8e726a47596, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6f4fb81f157799ac82bad8e726a47596->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6f4fb81f157799ac82bad8e726a47596, exception_lineno );
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


    return MOD_RETURN_VALUE( module_jinja2$optimizer );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
