
#ifndef ROUTER_LIB_EXPORT_H
#define ROUTER_LIB_EXPORT_H

#ifdef CUDA_VEHICLE_ROUTER_LIB_STATIC_DEFINE
#  define ROUTER_LIB_EXPORT
#  define CUDA_VEHICLE_ROUTER_LIB_NO_EXPORT
#else
#  ifndef ROUTER_LIB_EXPORT
#    ifdef cuda_vehicle_router_lib_EXPORTS
        /* We are building this library */
#      define ROUTER_LIB_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define ROUTER_LIB_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef CUDA_VEHICLE_ROUTER_LIB_NO_EXPORT
#    define CUDA_VEHICLE_ROUTER_LIB_NO_EXPORT 
#  endif
#endif

#ifndef CUDA_VEHICLE_ROUTER_LIB_DEPRECATED
#  define CUDA_VEHICLE_ROUTER_LIB_DEPRECATED __declspec(deprecated)
#endif

#ifndef CUDA_VEHICLE_ROUTER_LIB_DEPRECATED_EXPORT
#  define CUDA_VEHICLE_ROUTER_LIB_DEPRECATED_EXPORT ROUTER_LIB_EXPORT CUDA_VEHICLE_ROUTER_LIB_DEPRECATED
#endif

#ifndef CUDA_VEHICLE_ROUTER_LIB_DEPRECATED_NO_EXPORT
#  define CUDA_VEHICLE_ROUTER_LIB_DEPRECATED_NO_EXPORT CUDA_VEHICLE_ROUTER_LIB_NO_EXPORT CUDA_VEHICLE_ROUTER_LIB_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef CUDA_VEHICLE_ROUTER_LIB_NO_DEPRECATED
#    define CUDA_VEHICLE_ROUTER_LIB_NO_DEPRECATED
#  endif
#endif

#endif
