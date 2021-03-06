{
"// GLSL shader autogenerated by cg2glsl.py.\n"
"#if defined(VERTEX)\n"
"\n"
"#if __VERSION__ >= 130\n"
"#define COMPAT_VARYING out\n"
"#define COMPAT_ATTRIBUTE in\n"
"#define COMPAT_TEXTURE texture\n"
"#else\n"
"#define COMPAT_VARYING varying\n"
"#define COMPAT_ATTRIBUTE attribute\n"
"#define COMPAT_TEXTURE texture2D\n"
"#endif\n"
"\n"
"#ifdef GL_ES\n"
"#define COMPAT_PRECISION mediump\n"
"#else\n"
"#define COMPAT_PRECISION\n"
"#endif\n"
"COMPAT_VARYING     vec2 _CT;\n"
"COMPAT_VARYING     vec4 _position2;\n"
"COMPAT_VARYING     vec4 _color;\n"
"COMPAT_VARYING     vec2 _texCoord1;\n"
"COMPAT_VARYING     vec4 _position1;\n"
"COMPAT_VARYING     float _frame_rotation;\n"
"struct input_dummy {\n"
"    vec2 _video_size;\n"
"    vec2 _texture_size;\n"
"    vec2 _output_dummy_size;\n"
"    float _frame_count;\n"
"    float _frame_direction;\n"
"    float _frame_rotation;\n"
"};\n"
"struct VERTEX_OUTPUT {\n"
"    vec4 _position1;\n"
"    vec2 _texCoord1;\n"
"};\n"
"struct output_dummy {\n"
"    vec4 _color;\n"
"};\n"
"struct VERTEX_INPUT {\n"
"    vec4 _position2;\n"
"    vec2 _CT;\n"
"};\n"
"VERTEX_OUTPUT _ret_0;\n"
"vec4 _r0005;\n"
"COMPAT_ATTRIBUTE vec4 VertexCoord;\n"
"COMPAT_ATTRIBUTE vec4 TexCoord;\n"
"COMPAT_VARYING vec4 TEX0;\n"
" \n"
"uniform mat4 MVPMatrix;\n"
"uniform int FrameDirection;\n"
"uniform int FrameCount;\n"
"uniform COMPAT_PRECISION vec2 OutputSize;\n"
"uniform COMPAT_PRECISION vec2 TextureSize;\n"
"uniform COMPAT_PRECISION vec2 InputSize;\n"
"void main()\n"
"{\n"
"    _r0005 = VertexCoord.x*MVPMatrix[0];\n"
"    _r0005 = _r0005 + VertexCoord.y*MVPMatrix[1];\n"
"    _r0005 = _r0005 + VertexCoord.z*MVPMatrix[2];\n"
"    _r0005 = _r0005 + VertexCoord.w*MVPMatrix[3];\n"
"    _ret_0._position1 = _r0005;\n"
"    _ret_0._texCoord1 = TexCoord.xy;\n"
"    gl_Position = _r0005;\n"
"    TEX0.xy = TexCoord.xy;\n"
"    return;\n"
"    TEX0.xy = _ret_0._texCoord1;\n"
"} \n"
"#elif defined(FRAGMENT)\n"
"\n"
"#if __VERSION__ >= 130\n"
"#define COMPAT_VARYING in\n"
"#define COMPAT_TEXTURE texture\n"
"out vec4 FragColor;\n"
"#else\n"
"#define COMPAT_VARYING varying\n"
"#define FragColor gl_FragColor\n"
"#define COMPAT_TEXTURE texture2D\n"
"#endif\n"
"\n"
"#ifdef GL_ES\n"
"#ifdef GL_FRAGMENT_PRECISION_HIGH\n"
"precision highp float;\n"
"#else\n"
"precision mediump float;\n"
"#endif\n"
"#define COMPAT_PRECISION mediump\n"
"#else\n"
"#define COMPAT_PRECISION\n"
"#endif\n"
"COMPAT_VARYING     vec2 _CT;\n"
"COMPAT_VARYING     vec4 _color;\n"
"COMPAT_VARYING     vec2 _texCoord;\n"
"COMPAT_VARYING     float _frame_rotation;\n"
"struct input_dummy {\n"
"    vec2 _video_size;\n"
"    vec2 _texture_size;\n"
"    vec2 _output_dummy_size;\n"
"    float _frame_count;\n"
"    float _frame_direction;\n"
"    float _frame_rotation;\n"
"};\n"
"struct VERTEX_OUTPUT {\n"
"    vec2 _texCoord;\n"
"};\n"
"struct output_dummy {\n"
"    vec4 _color;\n"
"};\n"
"struct VERTEX_INPUT {\n"
"    vec2 _CT;\n"
"};\n"
"vec4 _TMP1;\n"
"vec4 _TMP0;\n"
"uniform sampler2D Texture;\n"
"vec2 _c0008;\n"
"vec2 _c0010;\n"
"COMPAT_VARYING vec4 TEX0;\n"
" \n"
"uniform int FrameDirection;\n"
"uniform int FrameCount;\n"
"uniform COMPAT_PRECISION vec2 OutputSize;\n"
"uniform COMPAT_PRECISION vec2 TextureSize;\n"
"uniform COMPAT_PRECISION vec2 InputSize;\n"
"void main()\n"
"{\n"
"    vec4 _Color;\n"
"    _c0008 = TEX0.xy - 1.00000005E-03;\n"
"    _TMP0 = COMPAT_TEXTURE(Texture, _c0008);\n"
"    _Color = vec4( 5.00000000E-01, 5.00000000E-01, 5.00000000E-01, 1.00000000E+00) - _TMP0*2.00000000E+00;\n"
"    _c0010 = TEX0.xy + 1.00000005E-03;\n"
"    _TMP1 = COMPAT_TEXTURE(Texture, _c0010);\n"
"    _Color = _Color + _TMP1*2.00000000E+00;\n"
"    _Color.xyz = vec3((_Color.x + _Color.y + _Color.z)/3.00000000E+00, (_Color.x + _Color.y + _Color.z)/3.00000000E+00, (_Color.x + _Color.y + _Color.z)/3.00000000E+00);\n"
"    FragColor = _Color;\n"
"    return;\n"
"} \n"
"#endif\n"
},
