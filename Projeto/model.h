
#pragma once

#ifdef __has_attribute
#define HAVE_ATTRIBUTE(x) __has_attribute(x)
#else
#define HAVE_ATTRIBUTE(x) 0
#endif
#if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
#define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
#else
#define DATA_ALIGN_ATTRIBUTE
#endif

// automatically configure network
#define TF_NUM_INPUTS 8
#define TF_NUM_OUTPUTS 1
#define TF_NUM_OPS 3

/**
 * Call this function to register the ops
 * that have been detected
 */
template<class TF>
void registerNetworkOps(TF& nn) {
    nn.resolver.AddFullyConnected();
    nn.resolver.AddSoftmax();
    nn.resolver.AddLogistic();
    
}




// model data
const unsigned char model[2688] DATA_ALIGN_ATTRIBUTE = { 0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xc0, 0x05, 0x00, 0x00, 0xd0, 0x05, 0x00, 0x00, 0x1c, 0x0a, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xf6, 0xf9, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x94, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x35, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xc2, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xdc, 0xff, 0xff, 0xff, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x43, 0x4f, 0x4e, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4f, 0x4e, 0x5f, 0x4d, 0x45, 0x54, 0x41, 0x44, 0x41, 0x54, 0x41, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xdc, 0x04, 0x00, 0x00, 0xd4, 0x04, 0x00, 0x00, 0xc0, 0x04, 0x00, 0x00, 0x44, 0x04, 0x00, 0x00, 0x14, 0x01, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6a, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0e, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x32, 0x2e, 0x31, 0x35, 0x2e, 0x31, 0x00, 0x00, 0xca, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x31, 0x34, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0xf7, 0xff, 0xff, 0xa0, 0xf7, 0xff, 0xff, 0xa4, 0xf7, 0xff, 0xff, 0xf2, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x52, 0x84, 0xe0, 0xbe, 0xb6, 0x2d, 0x0e, 0xbe, 0x20, 0xd2, 0x6b, 0xbe, 0x94, 0x96, 0xa3, 0x3e, 0x3c, 0xcb, 0x7b, 0x3e, 0x68, 0xb3, 0x9c, 0x3e, 0x51, 0x2a, 0x4f, 0x3e, 0x83, 0xe1, 0xbc, 0xbe, 0x94, 0xfa, 0x83, 0x3c, 0x28, 0xd1, 0xbf, 0xbe, 0xe0, 0x88, 0xa5, 0xbc, 0x5f, 0x7e, 0x80, 0xbe, 0xec, 0x58, 0x4f, 0x3e, 0xb0, 0x2e, 0xe1, 0xbd, 0xfc, 0xfb, 0xd8, 0x3e, 0xac, 0x03, 0xbd, 0xbe, 0x3e, 0x29, 0x5b, 0xbe, 0x98, 0xf8, 0x6b, 0xbe, 0x50, 0x72, 0xa7, 0x3e, 0x30, 0x09, 0xa2, 0x3d, 0xc0, 0x8e, 0x72, 0x3d, 0xb6, 0x5a, 0x34, 0xbe, 0xe1, 0xbe, 0x7f, 0xbe, 0x91, 0x92, 0xea, 0x3d, 0x3f, 0x3c, 0xec, 0xbe, 0x62, 0xfc, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x20, 0x03, 0x00, 0x00, 0xdc, 0x8c, 0x21, 0xbe, 0x20, 0x03, 0x7b, 0x3e, 0xcc, 0x75, 0x15, 0xbe, 0x30, 0xcc, 0x89, 0x3c, 0x00, 0xb0, 0x76, 0x39, 0xcc, 0x52, 0x05, 0xbe, 0x57, 0xb7, 0x63, 0xbe, 0xab, 0x83, 0xb3, 0xbe, 0x50, 0xae, 0x94, 0xbc, 0xa4, 0xc8, 0xb8, 0xbe, 0xcd, 0xbd, 0x9a, 0xbe, 0x44, 0x5a, 0x28, 0x3e, 0xc0, 0xb3, 0xca, 0xbc, 0x38, 0xbf, 0x7e, 0x3d, 0x31, 0xe6, 0x42, 0xbe, 0x14, 0xad, 0x1b, 0xbe, 0xb0, 0x70, 0x24, 0xbd, 0xbe, 0x0c, 0xb8, 0x3e, 0xe8, 0x24, 0x20, 0xbd, 0xa0, 0x74, 0xa3, 0xbe, 0xb4, 0x76, 0x59, 0x3e, 0x18, 0x25, 0x46, 0x3e, 0xbe, 0xfa, 0x21, 0xbe, 0x89, 0x81, 0xd6, 0xbe, 0xb4, 0x6e, 0x52, 0xbe, 0xc2, 0x03, 0x73, 0xbe, 0x45, 0x5f, 0xa8, 0xbe, 0x46, 0x4a, 0x32, 0xbe, 0x02, 0x1c, 0xaf, 0x3e, 0x68, 0x3e, 0xb8, 0x3d, 0x00, 0x34, 0x7c, 0xbb, 0x46, 0x4e, 0x30, 0xbe, 0x32, 0x5d, 0x89, 0xbd, 0x9e, 0x56, 0x21, 0x3e, 0x5a, 0xae, 0x87, 0xbe, 0x63, 0x86, 0x84, 0xbe, 0x76, 0x0f, 0x97, 0x3e, 0x4c, 0x2d, 0x49, 0x3e, 0x51, 0xbf, 0x53, 0x3e, 0xb2, 0x51, 0x81, 0x3e, 0x6c, 0x9a, 0x0e, 0x3e, 0x3e, 0x55, 0xad, 0xbd, 0xca, 0x7c, 0xa5, 0x3e, 0x12, 0x37, 0x2f, 0x3e, 0x7e, 0xcd, 0x7e, 0x3e, 0xc9, 0xb7, 0xb9, 0xbe, 0x29, 0xc8, 0xba, 0x3e, 0x76, 0xd1, 0x5d, 0xbe, 0x0b, 0xd1, 0xa3, 0xbe, 0x78, 0x73, 0xcb, 0xbd, 0xc0, 0xaf, 0x08, 0xbe, 0x4d, 0x0a, 0x32, 0x3e, 0x87, 0x29, 0xa0, 0x3e, 0x70, 0x03, 0x08, 0xbe, 0x21, 0x1e, 0xe2, 0xbd, 0xe4, 0x1b, 0xa7, 0x3e, 0x1b, 0xa5, 0xb4, 0x3e, 0x4c, 0x78, 0xbe, 0xbe, 0x13, 0xe0, 0x6d, 0xbe, 0x3a, 0xb3, 0x24, 0xbe, 0xd0, 0x30, 0x75, 0xbf, 0x38, 0xe0, 0x09, 0x3e, 0x73, 0x5a, 0x9b, 0x3e, 0x68, 0x5d, 0xd3, 0x3e, 0xf4, 0xaf, 0xec, 0xbe, 0x87, 0x90, 0x3c, 0x3e, 0x54, 0x28, 0x63, 0x3e, 0x1f, 0x08, 0x84, 0xbc, 0x9d, 0x51, 0x47, 0x3f, 0xfe, 0x84, 0x78, 0x3c, 0x18, 0x1d, 0x49, 0xbe, 0xb7, 0x61, 0x50, 0x3e, 0x3e, 0xfc, 0x71, 0xbe, 0x90, 0xe9, 0x33, 0xbe, 0xb8, 0x43, 0x77, 0xbe, 0x58, 0xa3, 0x44, 0xbd, 0x48, 0x32, 0x29, 0x3e, 0x1c, 0x4f, 0xaa, 0xbe, 0x00, 0x47, 0xc4, 0x3a, 0x07, 0x2a, 0x8b, 0xbe, 0x27, 0xf5, 0xcd, 0xbe, 0x71, 0x90, 0xbd, 0xbe, 0x68, 0xfa, 0x51, 0x3d, 0x28, 0x24, 0x2b, 0x3e, 0xca, 0x03, 0x12, 0xbe, 0xc0, 0xac, 0x7c, 0xbe, 0x08, 0xf7, 0x18, 0xbe, 0xa0, 0x69, 0xb3, 0xbd, 0x00, 0xc8, 0xd5, 0x3c, 0x78, 0xc8, 0x81, 0xbe, 0x3a, 0xb1, 0xa0, 0xbe, 0x08, 0x96, 0x03, 0xbe, 0x3b, 0x08, 0xbb, 0xbe, 0xd9, 0x90, 0xa4, 0xbe, 0xf2, 0x26, 0xba, 0xbe, 0x72, 0xdb, 0x89, 0xbe, 0x10, 0x15, 0x96, 0x3e, 0x64, 0x7e, 0x92, 0xbe, 0x52, 0x98, 0x24, 0xbe, 0x79, 0xc3, 0x6c, 0xbe, 0x70, 0x35, 0xf7, 0xbd, 0x38, 0xae, 0xec, 0x3d, 0x2d, 0xdf, 0xc9, 0xbe, 0xeb, 0x49, 0xc6, 0xbe, 0xc8, 0x88, 0x4d, 0x3d, 0x14, 0x52, 0x90, 0xbe, 0x06, 0x4e, 0x5f, 0x3e, 0x49, 0x32, 0xd9, 0xbe, 0xbc, 0xd5, 0xf2, 0xbe, 0xd2, 0xa6, 0x13, 0x3e, 0xa9, 0xfc, 0x66, 0xbe, 0x22, 0x5c, 0x55, 0x3e, 0xa4, 0x6d, 0x31, 0xbe, 0x00, 0x77, 0x86, 0xbe, 0xaa, 0xe9, 0x93, 0x3d, 0x3d, 0x5c, 0x31, 0xbe, 0xdc, 0xab, 0x53, 0x3f, 0x63, 0x28, 0x9f, 0x3c, 0xc9, 0xec, 0x49, 0x3e, 0x96, 0xba, 0x8f, 0x3e, 0x2c, 0x4d, 0xc2, 0xbd, 0x18, 0xa6, 0x19, 0xbe, 0xdc, 0x5b, 0x0b, 0x3e, 0x12, 0xb0, 0xc6, 0x3e, 0x34, 0xb3, 0x82, 0xbe, 0xbc, 0x3a, 0x4a, 0x3e, 0x78, 0xca, 0xa6, 0xbe, 0x5a, 0xbf, 0x10, 0xbe, 0x08, 0xa1, 0xe6, 0x3d, 0xd8, 0x84, 0xe7, 0xbd, 0xdc, 0x3d, 0xae, 0xbd, 0xfa, 0xa8, 0x1f, 0xbe, 0xd9, 0xfd, 0x7a, 0xbe, 0x40, 0x73, 0xf3, 0x3c, 0x7a, 0x7a, 0xba, 0x3e, 0xaf, 0xe2, 0x9a, 0xbe, 0x0a, 0xc4, 0x9f, 0xbe, 0xcb, 0x42, 0xe2, 0x3c, 0x1b, 0x83, 0xbf, 0x3e, 0x0f, 0xe2, 0x05, 0x3e, 0xbf, 0xd4, 0x72, 0xbe, 0x39, 0xea, 0x84, 0xbe, 0xe4, 0x1f, 0xbd, 0xbe, 0xef, 0xea, 0x4b, 0xbe, 0xe0, 0xb0, 0xab, 0xbe, 0x7a, 0x90, 0xa7, 0xbe, 0x5c, 0x4b, 0xd8, 0x3e, 0x70, 0x94, 0x99, 0xbe, 0x78, 0x5e, 0xee, 0x3d, 0x48, 0x25, 0x2d, 0xbd, 0x3d, 0xa0, 0xa3, 0xbe, 0x12, 0x2d, 0x59, 0xbe, 0x65, 0xab, 0x37, 0xbe, 0xd4, 0x5f, 0x26, 0x3e, 0x7d, 0x51, 0xb6, 0xbe, 0xc7, 0xea, 0x80, 0xbe, 0x7a, 0xbf, 0xcc, 0x3e, 0x7c, 0x2b, 0xd8, 0xbe, 0xef, 0x04, 0xc6, 0xbe, 0x98, 0x53, 0x9b, 0xbd, 0x98, 0xf2, 0xb3, 0x3d, 0x40, 0x0c, 0xf8, 0x3d, 0x98, 0xb7, 0x65, 0xbd, 0x43, 0x6d, 0x9a, 0xbe, 0x77, 0xf6, 0x7a, 0xbe, 0xf8, 0x6d, 0x60, 0x3d, 0x88, 0x5f, 0x82, 0xbe, 0xaf, 0x89, 0x3a, 0xbe, 0x80, 0x75, 0x18, 0xbb, 0x18, 0xc0, 0xbf, 0xbe, 0xd0, 0xb4, 0x2b, 0x3e, 0x90, 0x7f, 0x91, 0xbe, 0xb8, 0x17, 0x29, 0x3e, 0x88, 0x17, 0x2f, 0x3e, 0x80, 0xf3, 0xf2, 0xbd, 0xf4, 0x0d, 0x24, 0xbe, 0x89, 0x80, 0xa4, 0xbe, 0xd4, 0xcc, 0x18, 0xbd, 0x24, 0x84, 0xab, 0x3e, 0xfd, 0xa9, 0xfe, 0xbe, 0x0f, 0xee, 0x6d, 0xbf, 0x23, 0xdd, 0x43, 0xbd, 0x8b, 0x7f, 0x5b, 0x3e, 0x63, 0x36, 0x9b, 0x3e, 0x17, 0x7c, 0xb4, 0xbe, 0xed, 0x71, 0x3b, 0x3d, 0x02, 0x05, 0xf6, 0xbd, 0xac, 0xaa, 0x9d, 0xbd, 0x58, 0x72, 0xb9, 0xbd, 0xe1, 0x2e, 0xe0, 0x3d, 0x95, 0x08, 0x57, 0x3e, 0x2a, 0x5c, 0x9d, 0xbd, 0x38, 0xde, 0xdb, 0x3d, 0xd0, 0xbd, 0xe4, 0xbd, 0x02, 0xf0, 0xac, 0x3e, 0x50, 0xe7, 0x71, 0x3e, 0xa7, 0x65, 0x97, 0xbe, 0x40, 0xbc, 0x2f, 0x3e, 0x38, 0x16, 0x29, 0x3e, 0x92, 0x62, 0xc7, 0xbe, 0x8e, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x86, 0x7f, 0xbf, 0x70, 0x08, 0x99, 0xbc, 0x23, 0x1d, 0x80, 0xbf, 0xb6, 0xf2, 0x79, 0x3f, 0xc6, 0x49, 0x93, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0x14, 0x75, 0x3f, 0x36, 0x23, 0x7e, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x26, 0xae, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0xf5, 0x78, 0x3f, 0x65, 0x48, 0x89, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x87, 0x33, 0x7c, 0xbf, 0xcc, 0xfb, 0xff, 0xff, 0xd0, 0xfb, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xce, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x74, 0xfc, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x16, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xe8, 0x02, 0x00, 0x00, 0x78, 0x02, 0x00, 0x00, 0x08, 0x02, 0x00, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x70, 0x01, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x4e, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x38, 0xfd, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x3a, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xa6, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x90, 0xfd, 0xff, 0xff, 0x38, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x32, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x35, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x32, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x35, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1e, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x08, 0xfe, 0xff, 0xff, 0x52, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x32, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x32, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x32, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x1a, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x88, 0xfe, 0xff, 0xff, 0x1b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x32, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x35, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x62, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0xd0, 0xfe, 0xff, 0xff, 0x1b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x32, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xaa, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x18, 0xff, 0xff, 0xff, 0x2b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x32, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x01, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x18, 0x00, 0x14, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x84, 0xff, 0xff, 0xff, 0x2b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x32, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x35, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x00, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x5f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x3a, 0x30, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xf4, 0xff, 0xff, 0xff, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x0c, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09 };