#ifndef MBEDTLS_CONFIG_H
#define MBEDTLS_CONFIG_H

/* System support */
#define MBEDTLS_PLATFORM_C
#define MBEDTLS_PLATFORM_MEMORY
#define MBEDTLS_MEMORY_BUFFER_ALLOC_C
#define MBEDTLS_MEMORY_DEBUG
#define MBEDTLS_PLATFORM_NO_STD_FUNCTIONS
#define MBEDTLS_PLATFORM_EXIT_ALT
#define MBEDTLS_NO_PLATFORM_ENTROPY
#define MBEDTLS_NO_DEFAULT_ENTROPY_SOURCES
#define MBEDTLS_PLATFORM_PRINTF_ALT
#define MBEDTLS_PLATFORM_FPRINTF_ALT
#define MBEDTLS_PLATFORM_SNPRINTF_ALT

/* mbed TLS modules */
#define MBEDTLS_ENTROPY_C
#define MBEDTLS_OID_C
#define MBEDTLS_ERROR_C
#define MBEDTLS_PKCS1_V15
#define MBEDTLS_ASN1_PARSE_C
#define MBEDTLS_ASN1_WRITE_C
#define MBEDTLS_ECP_C
#define MBEDTLS_BIGNUM_C
#define MBEDTLS_GENPRIME

/** 单向散列 */
#define MBEDTLS_MD_C
#define MBEDTLS_SHA1_C
#define MBEDTLS_SHA256_C
#define MBEDTLS_SHA512_C

/** 对称加密 */
#define MBEDTLS_AES_C
#define MBEDTLS_CIPHER_C
#define MBEDTLS_CIPHER_MODE_CBC

/** 消息认证 */
#define MBEDTLS_CMAC_C
#define MBEDTLS_CCM_C
#define MBEDTLS_GCM_C

/** 随机数 */
#define MBEDTLS_CTR_DRBG_C
#define MBEDTLS_HMAC_DRBG_C

/** 公钥密码 */
#define MBEDTLS_RSA_C

/** 密钥协商 */
#define MBEDTLS_DHM_C 
#define MBEDTLS_ECDH_C

/** 数字签名 */
#define MBEDTLS_ECDSA_C 

/** 曲线参数 */
// #define MBEDTLS_ECP_DP_SECP192R1_ENABLED
//#define MBEDTLS_ECP_DP_SECP224R1_ENABLED
#define MBEDTLS_ECP_DP_SECP256R1_ENABLED
#define MBEDTLS_ECP_DP_SECP384R1_ENABLED
// #define MBEDTLS_ECP_DP_SECP521R1_ENABLED
// #define MBEDTLS_ECP_DP_CURVE25519_ENABLED

#if 0
#if 1 /** 最优性能 */
#define MBEDTLS_ECP_WINDOW_SIZE        6
#define MBEDTLS_ECP_FIXED_POINT_OPTIM  1
#define MBEDTLS_ECP_NIST_OPTIM
#else /** 最少内存 */
#define MBEDTLS_ECP_WINDOW_SIZE        2
#define MBEDTLS_ECP_FIXED_POINT_OPTIM  0
#endif
#endif

/** 测试样本 */
#define MBEDTLS_ECP_WINDOW_SIZE         6
#define MBEDTLS_ECP_FIXED_POINT_OPTIM   0
#define MBEDTLS_ECP_NIST_OPTIM

#include "mbedtls/check_config.h"

#endif /* MBEDTLS_CONFIG_H */