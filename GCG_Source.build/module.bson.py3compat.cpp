/* Generated code for Python source for module 'bson.py3compat'
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

/* The _module_bson$py3compat is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_bson$py3compat;
PyDictObject *moduledict_bson$py3compat;

/* The module constants used, if any. */
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_b;
extern PyObject *const_tuple_str_plain_BytesIO_tuple;
extern PyObject *const_str_plain_basestring;
extern PyObject *const_str_plain_itertools;
extern PyObject *const_str_plain_codecs;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_bson;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_14620984f9afa151922066f95539fc12;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_io;
extern PyObject *const_tuple_str_plain_StringIO_tuple;
extern PyObject *const_str_plain_StringIO;
extern PyObject *const_str_plain_text_type;
static PyObject *const_str_digest_83b523dfb291bd4f90dc579b5a178107;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain__thread;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_values;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_hex;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_d26b438bd114436a94b3eebca869faa2;
extern PyObject *const_str_plain_long;
static PyObject *const_str_plain__unicode;
extern PyObject *const_str_plain_with_traceback;
extern PyObject *const_str_plain_h;
extern PyObject *const_str_plain_bytes_from_hex;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_maxsize;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_BytesIO;
extern PyObject *const_str_plain_unicode;
static PyObject *const_str_plain_exctype;
extern PyObject *const_str_plain_iteritems;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_itervalues;
extern PyObject *const_tuple_str_plain_s_tuple;
extern PyObject *const_str_plain_version_info;
static PyObject *const_tuple_str_plain_hex_tuple;
extern PyObject *const_str_plain_cStringIO;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_exec;
extern PyObject *const_str_plain_integer_types;
extern PyObject *const_str_plain_MAXSIZE;
extern PyObject *const_str_plain_string_type;
static PyObject *const_str_plain_fromhex;
extern PyObject *const_str_digest_d5f9830e31a211506aa98aa8ff5c6ad8;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_tuple_str_plain_imap_tuple;
extern PyObject *const_str_plain_maxint;
extern PyObject *const_str_angle_string;
extern PyObject *const_str_plain_thread;
extern PyObject *const_tuple_str_plain_d_tuple;
static PyObject *const_str_plain_latin_1_encode;
static PyObject *const_tuple_str_plain_exctype_str_plain_value_str_plain_trace_tuple;
extern PyObject *const_str_plain_trace;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_reraise;
extern PyObject *const_str_plain_PY3;
static PyObject *const_str_digest_1503cacfcdcf4c60a47591d5e2f0bf62;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_imap;
static PyObject *const_tuple_str_plain_h_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_14620984f9afa151922066f95539fc12 = UNSTREAM_STRING( &constant_bin[ 131528 ], 60, 0 );
    const_str_digest_83b523dfb291bd4f90dc579b5a178107 = UNSTREAM_STRING( &constant_bin[ 131588 ], 78, 0 );
    const_str_digest_d26b438bd114436a94b3eebca869faa2 = UNSTREAM_STRING( &constant_bin[ 131666 ], 23, 0 );
    const_str_plain__unicode = UNSTREAM_STRING( &constant_bin[ 121756 ], 8, 1 );
    const_str_plain_exctype = UNSTREAM_STRING( &constant_bin[ 131600 ], 7, 1 );
    const_tuple_str_plain_hex_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hex_tuple, 0, const_str_plain_hex ); Py_INCREF( const_str_plain_hex );
    const_str_plain_fromhex = UNSTREAM_STRING( &constant_bin[ 131689 ], 7, 1 );
    const_str_plain_latin_1_encode = UNSTREAM_STRING( &constant_bin[ 131696 ], 14, 1 );
    const_tuple_str_plain_exctype_str_plain_value_str_plain_trace_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_exctype_str_plain_value_str_plain_trace_tuple, 0, const_str_plain_exctype ); Py_INCREF( const_str_plain_exctype );
    PyTuple_SET_ITEM( const_tuple_str_plain_exctype_str_plain_value_str_plain_trace_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_exctype_str_plain_value_str_plain_trace_tuple, 2, const_str_plain_trace ); Py_INCREF( const_str_plain_trace );
    const_str_digest_1503cacfcdcf4c60a47591d5e2f0bf62 = UNSTREAM_STRING( &constant_bin[ 131710 ], 17, 0 );
    const_tuple_str_plain_h_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_h_tuple, 0, const_str_plain_h ); Py_INCREF( const_str_plain_h );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_bson$py3compat( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_922de44237da4be51b160853159124f4;
static PyCodeObject *codeobj_eb93247d2fc7adef753211a309e3233e;
static PyCodeObject *codeobj_abb79f36742ef6b051ba9040e5a2471a;
static PyCodeObject *codeobj_5fd36ac12f010456702f2cedec44bd9b;
static PyCodeObject *codeobj_cdefbec491a19dbd0b609fac9bc8da35;
static PyCodeObject *codeobj_7eabb2ea0727fe8dc2a679ae28a56d19;
static PyCodeObject *codeobj_b740cd9a455bdb01e690351f4b64473f;
static PyCodeObject *codeobj_15883ce73ab704afff142d1a89c405aa;
static PyCodeObject *codeobj_6308db61161f0f4557e15af7d47b938e;
static PyCodeObject *codeobj_39de04d6917da515d624796563b61b46;
static PyCodeObject *codeobj_ce6877c6d78f1704965d916066c898ec;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_1503cacfcdcf4c60a47591d5e2f0bf62 );
    codeobj_922de44237da4be51b160853159124f4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d26b438bd114436a94b3eebca869faa2, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_eb93247d2fc7adef753211a309e3233e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unicode, 49, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_abb79f36742ef6b051ba9040e5a2471a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_b, 29, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5fd36ac12f010456702f2cedec44bd9b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_b, 66, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cdefbec491a19dbd0b609fac9bc8da35 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bytes_from_hex, 37, const_tuple_str_plain_h_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7eabb2ea0727fe8dc2a679ae28a56d19 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bytes_from_hex, 70, const_tuple_str_plain_h_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b740cd9a455bdb01e690351f4b64473f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iteritems, 40, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_15883ce73ab704afff142d1a89c405aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iteritems, 73, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6308db61161f0f4557e15af7d47b938e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_itervalues, 43, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_39de04d6917da515d624796563b61b46 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_itervalues, 76, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ce6877c6d78f1704965d916066c898ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reraise, 46, const_tuple_str_plain_exctype_str_plain_value_str_plain_trace_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_10_itervalues(  );


static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_1_b(  );


static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_2_bytes_from_hex(  );


static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_3_iteritems(  );


static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_4_itervalues(  );


static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_5_reraise( PyObject *defaults );


static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_6__unicode(  );


static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_7_b(  );


static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_8_bytes_from_hex(  );


static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_9_iteritems(  );


// The module function definitions.
static PyObject *impl_bson$py3compat$$$function_1_b( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_abb79f36742ef6b051ba9040e5a2471a = NULL;

    struct Nuitka_FrameObject *frame_abb79f36742ef6b051ba9040e5a2471a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_abb79f36742ef6b051ba9040e5a2471a, codeobj_abb79f36742ef6b051ba9040e5a2471a, module_bson$py3compat, sizeof(void *) );
    frame_abb79f36742ef6b051ba9040e5a2471a = cache_frame_abb79f36742ef6b051ba9040e5a2471a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_abb79f36742ef6b051ba9040e5a2471a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_abb79f36742ef6b051ba9040e5a2471a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_codecs );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codecs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_latin_1_encode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_s;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_abb79f36742ef6b051ba9040e5a2471a->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abb79f36742ef6b051ba9040e5a2471a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_abb79f36742ef6b051ba9040e5a2471a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abb79f36742ef6b051ba9040e5a2471a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_abb79f36742ef6b051ba9040e5a2471a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_abb79f36742ef6b051ba9040e5a2471a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_abb79f36742ef6b051ba9040e5a2471a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_abb79f36742ef6b051ba9040e5a2471a,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_abb79f36742ef6b051ba9040e5a2471a == cache_frame_abb79f36742ef6b051ba9040e5a2471a )
    {
        Py_DECREF( frame_abb79f36742ef6b051ba9040e5a2471a );
    }
    cache_frame_abb79f36742ef6b051ba9040e5a2471a = NULL;

    assertFrameObject( frame_abb79f36742ef6b051ba9040e5a2471a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_1_b );
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
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_1_b );
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


static PyObject *impl_bson$py3compat$$$function_2_bytes_from_hex( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_h = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_cdefbec491a19dbd0b609fac9bc8da35 = NULL;

    struct Nuitka_FrameObject *frame_cdefbec491a19dbd0b609fac9bc8da35;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cdefbec491a19dbd0b609fac9bc8da35, codeobj_cdefbec491a19dbd0b609fac9bc8da35, module_bson$py3compat, sizeof(void *) );
    frame_cdefbec491a19dbd0b609fac9bc8da35 = cache_frame_cdefbec491a19dbd0b609fac9bc8da35;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cdefbec491a19dbd0b609fac9bc8da35 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cdefbec491a19dbd0b609fac9bc8da35 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = (PyObject *)&PyBytes_Type;
    tmp_args_element_name_1 = par_h;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_cdefbec491a19dbd0b609fac9bc8da35->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_fromhex, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdefbec491a19dbd0b609fac9bc8da35 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdefbec491a19dbd0b609fac9bc8da35 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdefbec491a19dbd0b609fac9bc8da35 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cdefbec491a19dbd0b609fac9bc8da35, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cdefbec491a19dbd0b609fac9bc8da35->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cdefbec491a19dbd0b609fac9bc8da35, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cdefbec491a19dbd0b609fac9bc8da35,
        type_description_1,
        par_h
    );


    // Release cached frame.
    if ( frame_cdefbec491a19dbd0b609fac9bc8da35 == cache_frame_cdefbec491a19dbd0b609fac9bc8da35 )
    {
        Py_DECREF( frame_cdefbec491a19dbd0b609fac9bc8da35 );
    }
    cache_frame_cdefbec491a19dbd0b609fac9bc8da35 = NULL;

    assertFrameObject( frame_cdefbec491a19dbd0b609fac9bc8da35 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_2_bytes_from_hex );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_h );
    par_h = NULL;

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

    Py_XDECREF( par_h );
    par_h = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_2_bytes_from_hex );
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


static PyObject *impl_bson$py3compat$$$function_3_iteritems( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_d = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_b740cd9a455bdb01e690351f4b64473f = NULL;

    struct Nuitka_FrameObject *frame_b740cd9a455bdb01e690351f4b64473f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b740cd9a455bdb01e690351f4b64473f, codeobj_b740cd9a455bdb01e690351f4b64473f, module_bson$py3compat, sizeof(void *) );
    frame_b740cd9a455bdb01e690351f4b64473f = cache_frame_b740cd9a455bdb01e690351f4b64473f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b740cd9a455bdb01e690351f4b64473f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b740cd9a455bdb01e690351f4b64473f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_d;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_b740cd9a455bdb01e690351f4b64473f->m_frame.f_lineno = 41;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b740cd9a455bdb01e690351f4b64473f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b740cd9a455bdb01e690351f4b64473f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b740cd9a455bdb01e690351f4b64473f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b740cd9a455bdb01e690351f4b64473f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b740cd9a455bdb01e690351f4b64473f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b740cd9a455bdb01e690351f4b64473f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b740cd9a455bdb01e690351f4b64473f,
        type_description_1,
        par_d
    );


    // Release cached frame.
    if ( frame_b740cd9a455bdb01e690351f4b64473f == cache_frame_b740cd9a455bdb01e690351f4b64473f )
    {
        Py_DECREF( frame_b740cd9a455bdb01e690351f4b64473f );
    }
    cache_frame_b740cd9a455bdb01e690351f4b64473f = NULL;

    assertFrameObject( frame_b740cd9a455bdb01e690351f4b64473f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_3_iteritems );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_d );
    par_d = NULL;

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

    Py_XDECREF( par_d );
    par_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_3_iteritems );
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


static PyObject *impl_bson$py3compat$$$function_4_itervalues( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_d = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_6308db61161f0f4557e15af7d47b938e = NULL;

    struct Nuitka_FrameObject *frame_6308db61161f0f4557e15af7d47b938e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6308db61161f0f4557e15af7d47b938e, codeobj_6308db61161f0f4557e15af7d47b938e, module_bson$py3compat, sizeof(void *) );
    frame_6308db61161f0f4557e15af7d47b938e = cache_frame_6308db61161f0f4557e15af7d47b938e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6308db61161f0f4557e15af7d47b938e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6308db61161f0f4557e15af7d47b938e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_d;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_6308db61161f0f4557e15af7d47b938e->m_frame.f_lineno = 44;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_values );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6308db61161f0f4557e15af7d47b938e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6308db61161f0f4557e15af7d47b938e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6308db61161f0f4557e15af7d47b938e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6308db61161f0f4557e15af7d47b938e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6308db61161f0f4557e15af7d47b938e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6308db61161f0f4557e15af7d47b938e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6308db61161f0f4557e15af7d47b938e,
        type_description_1,
        par_d
    );


    // Release cached frame.
    if ( frame_6308db61161f0f4557e15af7d47b938e == cache_frame_6308db61161f0f4557e15af7d47b938e )
    {
        Py_DECREF( frame_6308db61161f0f4557e15af7d47b938e );
    }
    cache_frame_6308db61161f0f4557e15af7d47b938e = NULL;

    assertFrameObject( frame_6308db61161f0f4557e15af7d47b938e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_4_itervalues );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_d );
    par_d = NULL;

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

    Py_XDECREF( par_d );
    par_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_4_itervalues );
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


static PyObject *impl_bson$py3compat$$$function_5_reraise( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_exctype = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *par_trace = python_pars[ 2 ];
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
    PyObject *tmp_unicode_arg_1;
    static struct Nuitka_FrameObject *cache_frame_ce6877c6d78f1704965d916066c898ec = NULL;

    struct Nuitka_FrameObject *frame_ce6877c6d78f1704965d916066c898ec;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ce6877c6d78f1704965d916066c898ec, codeobj_ce6877c6d78f1704965d916066c898ec, module_bson$py3compat, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ce6877c6d78f1704965d916066c898ec = cache_frame_ce6877c6d78f1704965d916066c898ec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ce6877c6d78f1704965d916066c898ec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ce6877c6d78f1704965d916066c898ec ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_2 = par_exctype;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_unicode_arg_1 = par_value;

    CHECK_OBJECT( tmp_unicode_arg_1 );
    tmp_args_element_name_1 = PyObject_Unicode( tmp_unicode_arg_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_ce6877c6d78f1704965d916066c898ec->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_with_traceback );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_trace;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "trace" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_ce6877c6d78f1704965d916066c898ec->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 47;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce6877c6d78f1704965d916066c898ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce6877c6d78f1704965d916066c898ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ce6877c6d78f1704965d916066c898ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ce6877c6d78f1704965d916066c898ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ce6877c6d78f1704965d916066c898ec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ce6877c6d78f1704965d916066c898ec,
        type_description_1,
        par_exctype,
        par_value,
        par_trace
    );


    // Release cached frame.
    if ( frame_ce6877c6d78f1704965d916066c898ec == cache_frame_ce6877c6d78f1704965d916066c898ec )
    {
        Py_DECREF( frame_ce6877c6d78f1704965d916066c898ec );
    }
    cache_frame_ce6877c6d78f1704965d916066c898ec = NULL;

    assertFrameObject( frame_ce6877c6d78f1704965d916066c898ec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_5_reraise );
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

    Py_XDECREF( par_exctype );
    par_exctype = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_trace );
    par_trace = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_5_reraise );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_bson$py3compat$$$function_6__unicode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_s;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_6__unicode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_6__unicode );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_bson$py3compat$$$function_7_b( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_s;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_7_b );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_7_b );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_bson$py3compat$$$function_8_bytes_from_hex( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_h = python_pars[ 0 ];
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
    static struct Nuitka_FrameObject *cache_frame_7eabb2ea0727fe8dc2a679ae28a56d19 = NULL;

    struct Nuitka_FrameObject *frame_7eabb2ea0727fe8dc2a679ae28a56d19;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7eabb2ea0727fe8dc2a679ae28a56d19, codeobj_7eabb2ea0727fe8dc2a679ae28a56d19, module_bson$py3compat, sizeof(void *) );
    frame_7eabb2ea0727fe8dc2a679ae28a56d19 = cache_frame_7eabb2ea0727fe8dc2a679ae28a56d19;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7eabb2ea0727fe8dc2a679ae28a56d19 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7eabb2ea0727fe8dc2a679ae28a56d19 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_h;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_7eabb2ea0727fe8dc2a679ae28a56d19->m_frame.f_lineno = 71;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_hex_tuple, 0 ) );

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7eabb2ea0727fe8dc2a679ae28a56d19 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7eabb2ea0727fe8dc2a679ae28a56d19 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7eabb2ea0727fe8dc2a679ae28a56d19 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7eabb2ea0727fe8dc2a679ae28a56d19, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7eabb2ea0727fe8dc2a679ae28a56d19->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7eabb2ea0727fe8dc2a679ae28a56d19, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7eabb2ea0727fe8dc2a679ae28a56d19,
        type_description_1,
        par_h
    );


    // Release cached frame.
    if ( frame_7eabb2ea0727fe8dc2a679ae28a56d19 == cache_frame_7eabb2ea0727fe8dc2a679ae28a56d19 )
    {
        Py_DECREF( frame_7eabb2ea0727fe8dc2a679ae28a56d19 );
    }
    cache_frame_7eabb2ea0727fe8dc2a679ae28a56d19 = NULL;

    assertFrameObject( frame_7eabb2ea0727fe8dc2a679ae28a56d19 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_8_bytes_from_hex );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_h );
    par_h = NULL;

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

    Py_XDECREF( par_h );
    par_h = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_8_bytes_from_hex );
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


static PyObject *impl_bson$py3compat$$$function_9_iteritems( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_d = python_pars[ 0 ];
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
    static struct Nuitka_FrameObject *cache_frame_15883ce73ab704afff142d1a89c405aa = NULL;

    struct Nuitka_FrameObject *frame_15883ce73ab704afff142d1a89c405aa;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_15883ce73ab704afff142d1a89c405aa, codeobj_15883ce73ab704afff142d1a89c405aa, module_bson$py3compat, sizeof(void *) );
    frame_15883ce73ab704afff142d1a89c405aa = cache_frame_15883ce73ab704afff142d1a89c405aa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_15883ce73ab704afff142d1a89c405aa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_15883ce73ab704afff142d1a89c405aa ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_d;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_15883ce73ab704afff142d1a89c405aa->m_frame.f_lineno = 74;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_iteritems );
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
    RESTORE_FRAME_EXCEPTION( frame_15883ce73ab704afff142d1a89c405aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_15883ce73ab704afff142d1a89c405aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_15883ce73ab704afff142d1a89c405aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_15883ce73ab704afff142d1a89c405aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_15883ce73ab704afff142d1a89c405aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_15883ce73ab704afff142d1a89c405aa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_15883ce73ab704afff142d1a89c405aa,
        type_description_1,
        par_d
    );


    // Release cached frame.
    if ( frame_15883ce73ab704afff142d1a89c405aa == cache_frame_15883ce73ab704afff142d1a89c405aa )
    {
        Py_DECREF( frame_15883ce73ab704afff142d1a89c405aa );
    }
    cache_frame_15883ce73ab704afff142d1a89c405aa = NULL;

    assertFrameObject( frame_15883ce73ab704afff142d1a89c405aa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_9_iteritems );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_d );
    par_d = NULL;

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

    Py_XDECREF( par_d );
    par_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_9_iteritems );
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


static PyObject *impl_bson$py3compat$$$function_10_itervalues( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_d = python_pars[ 0 ];
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
    static struct Nuitka_FrameObject *cache_frame_39de04d6917da515d624796563b61b46 = NULL;

    struct Nuitka_FrameObject *frame_39de04d6917da515d624796563b61b46;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_39de04d6917da515d624796563b61b46, codeobj_39de04d6917da515d624796563b61b46, module_bson$py3compat, sizeof(void *) );
    frame_39de04d6917da515d624796563b61b46 = cache_frame_39de04d6917da515d624796563b61b46;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_39de04d6917da515d624796563b61b46 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_39de04d6917da515d624796563b61b46 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_d;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_39de04d6917da515d624796563b61b46->m_frame.f_lineno = 77;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_itervalues );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_39de04d6917da515d624796563b61b46 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_39de04d6917da515d624796563b61b46 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_39de04d6917da515d624796563b61b46 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_39de04d6917da515d624796563b61b46, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_39de04d6917da515d624796563b61b46->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_39de04d6917da515d624796563b61b46, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_39de04d6917da515d624796563b61b46,
        type_description_1,
        par_d
    );


    // Release cached frame.
    if ( frame_39de04d6917da515d624796563b61b46 == cache_frame_39de04d6917da515d624796563b61b46 )
    {
        Py_DECREF( frame_39de04d6917da515d624796563b61b46 );
    }
    cache_frame_39de04d6917da515d624796563b61b46 = NULL;

    assertFrameObject( frame_39de04d6917da515d624796563b61b46 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_10_itervalues );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_d );
    par_d = NULL;

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

    Py_XDECREF( par_d );
    par_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$py3compat$$$function_10_itervalues );
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



static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_10_itervalues(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$py3compat$$$function_10_itervalues,
        const_str_plain_itervalues,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_39de04d6917da515d624796563b61b46,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_1_b(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$py3compat$$$function_1_b,
        const_str_plain_b,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_abb79f36742ef6b051ba9040e5a2471a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_2_bytes_from_hex(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$py3compat$$$function_2_bytes_from_hex,
        const_str_plain_bytes_from_hex,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cdefbec491a19dbd0b609fac9bc8da35,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_3_iteritems(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$py3compat$$$function_3_iteritems,
        const_str_plain_iteritems,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b740cd9a455bdb01e690351f4b64473f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_4_itervalues(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$py3compat$$$function_4_itervalues,
        const_str_plain_itervalues,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6308db61161f0f4557e15af7d47b938e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_5_reraise( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$py3compat$$$function_5_reraise,
        const_str_plain_reraise,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ce6877c6d78f1704965d916066c898ec,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_6__unicode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$py3compat$$$function_6__unicode,
        const_str_plain__unicode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_eb93247d2fc7adef753211a309e3233e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_7_b(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$py3compat$$$function_7_b,
        const_str_plain_b,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5fd36ac12f010456702f2cedec44bd9b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_8_bytes_from_hex(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$py3compat$$$function_8_bytes_from_hex,
        const_str_plain_bytes_from_hex,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7eabb2ea0727fe8dc2a679ae28a56d19,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bson$py3compat$$$function_9_iteritems(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$py3compat$$$function_9_iteritems,
        const_str_plain_iteritems,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_15883ce73ab704afff142d1a89c405aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson$py3compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_bson$py3compat =
{
    PyModuleDef_HEAD_INIT,
    "bson.py3compat",   /* m_name */
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

MOD_INIT_DECL( bson$py3compat )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_bson$py3compat );
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
    puts("bson.py3compat: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("bson.py3compat: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initbson$py3compat" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_bson$py3compat = Py_InitModule4(
        "bson.py3compat",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_bson$py3compat = PyModule_Create( &mdef_bson$py3compat );
#endif

    moduledict_bson$py3compat = MODULE_DICT( module_bson$py3compat );

    CHECK_OBJECT( module_bson$py3compat );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d5f9830e31a211506aa98aa8ff5c6ad8, module_bson$py3compat );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_exec_call_1__globals = NULL;
    PyObject *tmp_exec_call_1__locals = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_eval_compiled_1;
    PyObject *tmp_eval_globals_1;
    PyObject *tmp_eval_locals_1;
    PyObject *tmp_eval_source_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_outline_return_value_1;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_922de44237da4be51b160853159124f4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_14620984f9afa151922066f95539fc12;
    UPDATE_STRING_DICT0( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_922de44237da4be51b160853159124f4 = MAKE_MODULE_FRAME( codeobj_922de44237da4be51b160853159124f4, module_bson$py3compat );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_922de44237da4be51b160853159124f4 );
    assert( Py_REFCNT( frame_922de44237da4be51b160853159124f4 ) == 2 );

    // Framed code:
    frame_922de44237da4be51b160853159124f4->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_d5f9830e31a211506aa98aa8ff5c6ad8;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_922de44237da4be51b160853159124f4->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_bson;
    UPDATE_STRING_DICT0( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_bson$py3compat;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_922de44237da4be51b160853159124f4->m_frame.f_lineno = 17;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( tmp_assign_source_7 != NULL );
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_3;
    tmp_assign_source_8 = RICH_COMPARE_EQ_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_8 );
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_PY3 );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PY3 );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PY3" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;

        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

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
    tmp_name_name_2 = const_str_plain_codecs;
    tmp_globals_name_2 = (PyObject *)moduledict_bson$py3compat;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_922de44237da4be51b160853159124f4->m_frame.f_lineno = 22;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_codecs, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_plain__thread;
    tmp_globals_name_3 = (PyObject *)moduledict_bson$py3compat;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_922de44237da4be51b160853159124f4->m_frame.f_lineno = 23;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    assert( tmp_assign_source_10 != NULL );
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_thread, tmp_assign_source_10 );
    tmp_name_name_4 = const_str_plain_io;
    tmp_globals_name_4 = (PyObject *)moduledict_bson$py3compat;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_BytesIO_tuple;
    tmp_level_name_4 = const_int_0;
    frame_922de44237da4be51b160853159124f4->m_frame.f_lineno = 24;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_BytesIO );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_11 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_maxsize );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_MAXSIZE, tmp_assign_source_12 );
    tmp_assign_source_13 = (PyObject *)&PyMap_Type;
    UPDATE_STRING_DICT0( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_imap, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_bson$py3compat$$$function_1_b(  );
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_b, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_bson$py3compat$$$function_2_bytes_from_hex(  );
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_bytes_from_hex, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_bson$py3compat$$$function_3_iteritems(  );
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_iteritems, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_bson$py3compat$$$function_4_itervalues(  );
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_itervalues, tmp_assign_source_17 );
    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_18 = MAKE_FUNCTION_bson$py3compat$$$function_5_reraise( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_reraise, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_bson$py3compat$$$function_6__unicode(  );
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain__unicode, tmp_assign_source_19 );
    tmp_assign_source_20 = (PyObject *)&PyUnicode_Type;
    UPDATE_STRING_DICT0( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_20 );
    tmp_assign_source_21 = (PyObject *)&PyUnicode_Type;
    UPDATE_STRING_DICT0( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_string_type, tmp_assign_source_21 );
    tmp_assign_source_22 = (PyObject *)&PyLong_Type;
    UPDATE_STRING_DICT0( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_22 );
    goto branch_end_1;
    branch_no_1:;
    tmp_name_name_5 = const_str_plain_thread;
    tmp_globals_name_5 = (PyObject *)moduledict_bson$py3compat;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    tmp_level_name_5 = const_int_0;
    frame_922de44237da4be51b160853159124f4->m_frame.f_lineno = 56;
    tmp_assign_source_23 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_thread, tmp_assign_source_23 );
    tmp_name_name_6 = const_str_plain_itertools;
    tmp_globals_name_6 = (PyObject *)moduledict_bson$py3compat;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_imap_tuple;
    tmp_level_name_6 = const_int_0;
    frame_922de44237da4be51b160853159124f4->m_frame.f_lineno = 58;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    assert( tmp_import_name_from_2 != NULL );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_imap );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_imap, tmp_assign_source_24 );
    // Tried code:
    tmp_name_name_7 = const_str_plain_cStringIO;
    tmp_globals_name_7 = (PyObject *)moduledict_bson$py3compat;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_StringIO_tuple;
    tmp_level_name_7 = const_int_0;
    frame_922de44237da4be51b160853159124f4->m_frame.f_lineno = 60;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_StringIO );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_25 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_922de44237da4be51b160853159124f4, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_922de44237da4be51b160853159124f4, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_2;
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
    tmp_name_name_8 = const_str_plain_StringIO;
    tmp_globals_name_8 = (PyObject *)moduledict_bson$py3compat;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_StringIO_tuple;
    tmp_level_name_8 = const_int_0;
    frame_922de44237da4be51b160853159124f4->m_frame.f_lineno = 62;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_2;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_StringIO );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_26 );
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 59;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_922de44237da4be51b160853159124f4->m_frame) frame_922de44237da4be51b160853159124f4->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_2:;
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
    NUITKA_CANNOT_GET_HERE( bson$py3compat );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_27 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_maxint );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_MAXSIZE, tmp_assign_source_27 );
    tmp_assign_source_28 = MAKE_FUNCTION_bson$py3compat$$$function_7_b(  );
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_b, tmp_assign_source_28 );
    tmp_assign_source_29 = MAKE_FUNCTION_bson$py3compat$$$function_8_bytes_from_hex(  );
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_bytes_from_hex, tmp_assign_source_29 );
    tmp_assign_source_30 = MAKE_FUNCTION_bson$py3compat$$$function_9_iteritems(  );
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_iteritems, tmp_assign_source_30 );
    tmp_assign_source_31 = MAKE_FUNCTION_bson$py3compat$$$function_10_itervalues(  );
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_itervalues, tmp_assign_source_31 );
    tmp_assign_source_32 = (PyObject *)moduledict_bson$py3compat;
    assert( tmp_exec_call_1__locals == NULL );
    Py_INCREF( tmp_assign_source_32 );
    tmp_exec_call_1__locals = tmp_assign_source_32;

    tmp_assign_source_33 = (PyObject *)moduledict_bson$py3compat;
    assert( tmp_exec_call_1__globals == NULL );
    Py_INCREF( tmp_assign_source_33 );
    tmp_exec_call_1__globals = tmp_assign_source_33;

    // Tried code:
    tmp_eval_source_1 = const_str_digest_83b523dfb291bd4f90dc579b5a178107;
    tmp_eval_globals_1 = tmp_exec_call_1__globals;

    CHECK_OBJECT( tmp_eval_globals_1 );
    tmp_eval_locals_1 = tmp_exec_call_1__locals;

    CHECK_OBJECT( tmp_eval_locals_1 );
    tmp_eval_compiled_1 = COMPILE_CODE( tmp_eval_source_1, const_str_angle_string, const_str_plain_exec, NULL, NULL, NULL );
    if ( tmp_eval_compiled_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_3;
    }
    tmp_outline_return_value_1 = EVAL_CODE( tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1 );
    Py_DECREF( tmp_eval_compiled_1 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_3;
    }
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$py3compat );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_exec_call_1__globals );
    Py_DECREF( tmp_exec_call_1__globals );
    tmp_exec_call_1__globals = NULL;

    Py_XDECREF( tmp_exec_call_1__locals );
    tmp_exec_call_1__locals = NULL;

    goto outline_result_1;
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

    CHECK_OBJECT( (PyObject *)tmp_exec_call_1__globals );
    Py_DECREF( tmp_exec_call_1__globals );
    tmp_exec_call_1__globals = NULL;

    Py_XDECREF( tmp_exec_call_1__locals );
    tmp_exec_call_1__locals = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$py3compat );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_unused = tmp_outline_return_value_1;
    Py_DECREF( tmp_unused );
    tmp_assign_source_34 = GET_STRING_DICT_VALUE( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_assign_source_34 == NULL ))
    {
        tmp_assign_source_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_assign_source_34 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain__unicode, tmp_assign_source_34 );
    tmp_assign_source_35 = GET_STRING_DICT_VALUE( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_basestring );

    if (unlikely( tmp_assign_source_35 == NULL ))
    {
        tmp_assign_source_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
    }

    if ( tmp_assign_source_35 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "basestring" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_string_type, tmp_assign_source_35 );
    tmp_assign_source_36 = GET_STRING_DICT_VALUE( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_assign_source_36 == NULL ))
    {
        tmp_assign_source_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_assign_source_36 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_36 );
    tmp_assign_source_37 = PyTuple_New( 2 );
    tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_long );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_long );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_37 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "long" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_37, 1, tmp_tuple_element_1 );
    UPDATE_STRING_DICT1( moduledict_bson$py3compat, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_37 );
    branch_end_1:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_922de44237da4be51b160853159124f4 );
#endif
    popFrameStack();

    assertFrameObject( frame_922de44237da4be51b160853159124f4 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_922de44237da4be51b160853159124f4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_922de44237da4be51b160853159124f4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_922de44237da4be51b160853159124f4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_922de44237da4be51b160853159124f4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_bson$py3compat );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
