/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_nodes_ParallaxNode */

#ifndef _Included_com_wiyun_engine_nodes_ParallaxNode
#define _Included_com_wiyun_engine_nodes_ParallaxNode
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_nativeInit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    addChild
 * Signature: (Lcom/wiyun/engine/nodes/Node;II)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_addChild__Lcom_wiyun_engine_nodes_Node_2II
  (JNIEnv *, jobject, jobject, jint, jint);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    addChild
 * Signature: (Lcom/wiyun/engine/nodes/Node;IFF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_addChild__Lcom_wiyun_engine_nodes_Node_2IFF
  (JNIEnv *, jobject, jobject, jint, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    removeChild
 * Signature: (Lcom/wiyun/engine/nodes/Node;Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_removeChild
  (JNIEnv *, jobject, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    removeAllChildren
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_removeAllChildren
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    offsetBy
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_offsetBy
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    fling
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_fling
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    stopFling
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_stopFling
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    getOffsetX
 * Signature: ()I
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_getOffsetX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    getOffsetY
 * Signature: ()I
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_getOffsetY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    setMinX
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_setMinX
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    setMinY
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_setMinY
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    getMinX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_getMinX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    getMinY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_getMinY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    setMaxX
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_setMaxX
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    setMaxY
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_setMaxY
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    getMaxX
 * Signature: ()I
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_getMaxX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_ParallaxNode
 * Method:    getMaxY
 * Signature: ()I
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_ParallaxNode_getMaxY
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
