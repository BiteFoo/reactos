/*

	ksguid.c - DirectX GUIDs

	Written by Magnus Olsen

	This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

*/

#define INITGUID
#include <basetyps.h>
#include <guiddef.h>


DEFINE_GUID(IID_IKoInitializeParentDeviceObject,        0x21B36996, 0x8DE3, 0x11D1, 0x8A, 0xE0, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KoCreateObject,                             0x72CF721C, 0x525A, 0x11D1, 0x9A, 0xA1, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(IID_IUnknown,                               0x00000000, 0x0000, 0x0000, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46);
DEFINE_GUID(CLSID_Proxy,                                0x17CCA71B, 0xECD7, 0x11D0, 0xB9, 0x08, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(IID_IKsTopology,                            0x28F54683, 0x06FD, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(IID_IKsAggregateControl,                    0x7F40EAC0, 0x3947, 0x11D2, 0x87, 0x4E, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(IID_IKsControl,                             0x28F54685, 0x06FD, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(IID_IKsPropertySet,                         0x31EFAC30, 0x515C, 0x11D0, 0xA9, 0xAA, 0x00, 0xAA, 0x00, 0x61, 0xBE, 0x93);
DEFINE_GUID(IID_IKsAllocatorEx,                         0x091BB60A, 0x603F, 0x11D1, 0xB0, 0x67, 0x00, 0xA0, 0xC9, 0x06, 0x28, 0x02);
DEFINE_GUID(IID_IKsAllocator,                           0x8DA64899, 0xC0D9, 0x11D0, 0x84, 0x13, 0x00, 0x00, 0xF8, 0x22, 0xFE, 0x8A);
DEFINE_GUID(IID_IKsClockPropertySet,                    0x5C5CBD84, 0xE755, 0x11D0, 0xAC, 0x18, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(IID_IKsInterfaceHandler,                    0xD3ABC7E0, 0x9A61, 0x11D0, 0xA4, 0x0D, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(IID_IKsDataTypeCompletion,                  0x827D1A0E, 0x0F73, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(IID_IKsDataTypeHandler,                     0x5FFBAA02, 0x49A3, 0x11D0, 0x9F, 0x36, 0x00, 0xAA, 0x00, 0xA2, 0x16, 0xA1);
DEFINE_GUID(IID_IKsPinPipe,                             0xE539CD90, 0xA8B4, 0x11D1, 0x81, 0x89, 0x00, 0xA0, 0xC9, 0x06, 0x28, 0x02);
DEFINE_GUID(IID_IKsPinEx,                               0x7BB38260, 0xD19C, 0x11D2, 0xB3, 0x8A, 0x00, 0xA0, 0xC9, 0x5E, 0xC2, 0x2E);
DEFINE_GUID(IID_IKsPin,                                 0xB611780D, 0xA2D9, 0x11CF, 0x9E, 0x53, 0x00, 0xAA, 0x00, 0xA2, 0x16, 0xA1);
DEFINE_GUID(IID_IKsObject,                              0x423C13A2, 0x2070, 0x11D0, 0x9E, 0xF7, 0x00, 0xAA, 0x00, 0xA2, 0x16, 0xA1);

DEFINE_GUID(CODECAPI_CURRENTCHANGELIST,                 0x1CB14E83, 0x7D72, 0x4657, 0x83, 0xFD, 0x47, 0xA2, 0xC5, 0xB9, 0xD1, 0x3D);
DEFINE_GUID(CODECAPI_SUPPORTSEVENTS,                    0x0581AF97, 0x7693, 0x4DBD, 0x9D, 0xCA, 0x3F, 0x9E, 0xBD, 0x65, 0x85, 0xA1);
DEFINE_GUID(CODECAPI_ALLSETTINGS,                       0x6A577E92, 0x83E1, 0x4113, 0xAD, 0xC2, 0x4F, 0xCE, 0xC3, 0x2F, 0x83, 0xA1);
DEFINE_GUID(CODECAPI_SETALLDEFAULTS,                    0x6C5E6A7C, 0xACF8, 0x4F55, 0xA9, 0x99, 0x1A, 0x62, 0x81, 0x09, 0x05, 0x1B);
DEFINE_GUID(CODECAPI_AUDIO_ENCODER,                     0xB9D19A3E, 0xF897, 0x429C, 0xBC, 0x46, 0x81, 0x38, 0xB7, 0x27, 0x2B, 0x2D);
DEFINE_GUID(CODECAPI_VIDEO_ENCODER,                     0x7112E8E1, 0x3D03, 0x47EF, 0x8E, 0x60, 0x03, 0xF1, 0xCF, 0x53, 0x73, 0x01);
DEFINE_GUID(CODECAPI_CHANGELISTS,                       0x62B12ACF, 0xF6B0, 0x47D9, 0x94, 0x56, 0x96, 0xF2, 0x2C, 0x4E, 0x0B, 0x9D);
DEFINE_GUID(ENCAPIPARAM_BITRATE_MODE,                   0xEE5FB25C, 0xC713, 0x40D1, 0x9D, 0x58, 0xC0, 0xD7, 0x24, 0x1E, 0x25, 0x0F);
DEFINE_GUID(ENCAPIPARAM_PEAK_BITRATE,                   0x703F16A9, 0x3D48, 0x44A1, 0xB0, 0x77, 0x01, 0x8D, 0xFF, 0x91, 0x5D, 0x19);
DEFINE_GUID(ENCAPIPARAM_BITRATE,                        0x49CC4C43, 0xCA83, 0x4AD4, 0xA9, 0xAF, 0xF3, 0x69, 0x6A, 0xF6, 0x66, 0xDF);

DEFINE_GUID(KSCATEGORY_MULTIPLEXER,                     0x7A5DE1D3, 0x01A1, 0x452C, 0xB4, 0x81, 0x4F, 0xA2, 0xB9, 0x62, 0x71, 0xE8);
DEFINE_GUID(KSCATEGORY_ENCODER,                         0x19689BF6, 0xC384, 0x48FD, 0xAD, 0x51, 0x90, 0xE5, 0x8C, 0x79, 0xF7, 0x0B);
DEFINE_GUID(KSPROPSETID_TSRateChange,                   0xA503C5C0, 0x1D1D, 0x11D1, 0xAD, 0x80, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);
DEFINE_GUID(KSDATAFORMAT_TYPE_DVD_ENCRYPTED_PACK,       0xED0B916A, 0x044D, 0x11D1, 0xAA, 0x78, 0x00, 0xC0, 0x4F, 0xC3, 0x1D, 0x60);



DEFINE_GUID(KSNODETYPE_TV_TUNER_AUDIO,                  0xDFF220EC, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_DVD_AUDIO,                       0xDFF220EB, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_VIDEO_DISC_AUDIO,                0xDFF220EA, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_VCR_AUDIO,                       0xDFF220E8, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_PHONOGRAPH,                      0xDFF220E8, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_ANALOG_TAPE,                     0xDFF220E7, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_MINIDISK,                        0xDFF220E6, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_DCC_IO_DIGITAL_COMPACT_CASSETTE, 0xDFF220E5, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_DAT_IO_DIGITAL_AUDIO_TAPE,       0xDFF220E4, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_CD_PLAYER,                       0xDFF220E3, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_EQUALIZATION_NOISE,              0xDFF220E2, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_LEVEL_CALIBRATION_NOISE_SOURCE,  0xDFF220E1, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_1394_DV_STREAM_SOUNDTRACK,       0xDFF21FE7, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_1394_DA_STREAM,                  0xDFF21FE6, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_SPDIF_INTERFACE,                 0xDFF21FE5, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_LEGACY_AUDIO_CONNECTOR,          0xDFF21FE4, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_LINE_CONNECTOR,                  0xDFF21FE3, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_DIGITAL_AUDIO_INTERFACE,         0xDFF21FE2, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_ANALOG_CONNECTOR,                0xDFF21FE1, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_DOWN_LINE_PHONE,                 0xDFF21EE3, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_TELEPHONE,                       0xDFF21EE2, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_PHONE_LINE,                      0xDFF21EE1, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_ECHO_CANCELING_SPEAKERPHONE,     0xDFF21DE5, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_ECHO_SUPPRESSING_SPEAKERPHONE,   0xDFF21DE4, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_SPEAKERPHONE_NO_ECHO_REDUCTION,  0xDFF21DE3, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_HEADSET,                         0xDFF21DE2, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_HANDSET,                         0xDFF21DE1, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_LOW_FREQUENCY_EFFECTS_SPEAKER,   0xDFF21CE7, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_COMMUNICATION_SPEAKER,           0xDFF21CE6, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_ROOM_SPEAKER,                    0xDFF21CE5, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_DESKTOP_SPEAKER,                 0xDFF21CE4, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_HEAD_MOUNTED_DISPLAY_AUDIO,      0xDFF21CE3, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_HEADPHONES,                      0xDFF21CE2, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_SPEAKER,                         0xDFF21CE1, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_MICROPHONE_ARRAY_PROCESSOR,      0x830A44F2, 0xA32D, 0x476B, 0xBE, 0x97, 0x42, 0x84, 0x56, 0x73, 0xB3, 0x5A);
DEFINE_GUID(KSNODETYPE_PROCESSING_MICROPHONE_ARRAY,     0xDFF21BE6, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_MICROPHONE_ARRAY,                0xDFF21BE5, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_OMNI_DIRECTIONAL_MICROPHONE,     0xDFF21BE4, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_PERSONAL_MICROPHONE,             0xDFF21BE3, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_DESKTOP_MICROPHONE,              0xDFF21BE2, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNODETYPE_MICROPHONE,                      0xDFF21BE1, 0xF70F, 0x11D0, 0xB9, 0x17, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCOMPONENTID_USBAUDIO,                     0x8F1275F0, 0x26E9, 0x4264, 0xBA, 0x4D, 0x39, 0xFF, 0xF0, 0x1D, 0x94, 0xAA);
DEFINE_GUID(KSINTERFACESETID_Media,                     0x3A13EB40, 0x30A7, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSMEDIUMSETID_VPBus,                        0xA18C15EC, 0xCE43, 0x11D0, 0xAB, 0xE7, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSMEDIUMSETID_MidiBus,                      0x05908040, 0x3246, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSPROPSETID_Service,                        0x3C0D501B, 0x140B, 0x11D1, 0xB4, 0x0F, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNAME_Server,                              0x3C0D501A, 0x140B, 0x11D1, 0xB4, 0x0F, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(GUID_BUS_INTERFACE_MEDIUMS,                 0x4EC35C3E, 0x201B, 0x11D2, 0x87, 0x45, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSDEGRADESETID_Standard,                    0x9F564180, 0x704C, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSEVENTSETID_Connection,                    0x7F4BCBE0, 0x9EA5, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSEVENTSETID_Clock,                         0x364D8E20, 0x62C7, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSPROPSETID_Clock,                          0xDF12A4C0, 0xAC17, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSPROPSETID_Stream,                         0x65AABA60, 0x98AE, 0x11CF, 0xA1, 0x0D, 0x00, 0x20, 0xAF, 0xD1, 0x56, 0xE4);
DEFINE_GUID(KSPROPSETID_StreamInterface,                0x1FDD8EE1, 0x9CD3, 0x11D0, 0x82, 0xAA, 0x00, 0x00, 0xF8, 0x22, 0xFE, 0x8A);
DEFINE_GUID(KSPROPSETID_StreamAllocator,                0xCF6E4342, 0xEC87, 0x11CF, 0xA1, 0x30, 0x00, 0x20, 0xAF, 0xD1, 0x56, 0xE4);
DEFINE_GUID(KSMETHODSETID_StreamAllocator,              0xCF6E4341, 0xEC87, 0x11CF, 0xA1, 0x30, 0x00, 0x20, 0xAF, 0xD1, 0x56, 0xE4);
DEFINE_GUID(KSEVENTSETID_StreamAllocator,               0x75D95571, 0x073C, 0x11D0, 0xA1, 0x61, 0x00, 0x20, 0xAF, 0xD1, 0x56, 0xE4);
DEFINE_GUID(KSMEMORY_TYPE_DEVICE_UNKNOWN,               0x091BB639, 0x603F, 0x11D1, 0xB0, 0x67, 0x00, 0xA0, 0xC9, 0x06, 0x28, 0x02);
DEFINE_GUID(KSMEMORY_TYPE_KERNEL_NONPAGED,              0x4A6D5FC4, 0x7895, 0x11D1, 0xB0, 0x69, 0x00, 0xA0, 0xC9, 0x06, 0x28, 0x02);
DEFINE_GUID(KSMEMORY_TYPE_KERNEL_PAGED,                 0xD833F8F8, 0x7894, 0x11D1, 0xB0, 0x69, 0x00, 0xA0, 0xC9, 0x06, 0x28, 0x02);
DEFINE_GUID(KSMEMORY_TYPE_USER,                         0x8CB0FC28, 0x7893, 0x11D1, 0xB0, 0x69, 0x00, 0xA0, 0xC9, 0x06, 0x28, 0x02);
DEFINE_GUID(KSMEMORY_TYPE_SYSTEM,                       0x091BB638, 0x603F, 0x11D1, 0xB0, 0x67, 0x00, 0xA0, 0xC9, 0x06, 0x28, 0x02);
DEFINE_GUID(KSPROPSETID_Connection,                     0x1D58C920, 0xAC9B, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSPROPSETID_Quality,                        0xD16AD380, 0xAC1A, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSDATAFORMAT_SPECIFIER_NONE,                0x0F6417D6, 0xC318, 0x11D0, 0xA4, 0x3F, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSDATAFORMAT_SPECIFIER_FILEHANDLE,          0x65E8773C, 0x8F56, 0x11D0, 0xA3, 0xB9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSDATAFORMAT_SPECIFIER_FILENAME,            0xAA797B40, 0xE974, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSDATAFORMAT_SUBTYPE_NONE,                  0xE436EB8E, 0x524F, 0x11CE, 0x9F, 0x53, 0x00, 0x20, 0xAF, 0x0B, 0xA7, 0x70);
DEFINE_GUID(KSDATAFORMAT_TYPE_STREAM,                   0xE436EB83, 0x524F, 0x11CE, 0x9F, 0x53, 0x00, 0x20, 0xAF, 0x0B, 0xA7, 0x70);
DEFINE_GUID(KSNAME_TopologyNode,                        0x0621061A, 0xEE75, 0x11D0, 0xB9, 0x15, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSNAME_Allocator,                           0x642F5D00, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSNAME_Clock,                               0x53172480, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSNAME_Pin,                                 0x146F1A80, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSNAME_Filter,                              0x9B365890, 0x165F, 0x11D0, 0xA1, 0x95, 0x00, 0x20, 0xAF, 0xD1, 0x56, 0xE4);
DEFINE_GUID(KSPROPSETID_Pin,                            0x8C134960, 0x51AD, 0x11CF, 0x87, 0x8A, 0x94, 0xF8, 0x01, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSMEDIUMSETID_Standard,                     0x4747B320, 0x62CE, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSINTERFACESETID_FileIo,                    0x8C6F932C, 0xE771, 0x11D0, 0xB8, 0xFF, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSINTERFACESETID_Standard,                  0x1A8766A0, 0x62CE, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSTIME_FORMAT_MEDIA_TIME,                   0x7B785574, 0x8C82, 0x11CF, 0xBC, 0x0C, 0x00, 0xAA, 0x00, 0xAC, 0x74, 0xF6);
DEFINE_GUID(KSTIME_FORMAT_FIELD,                        0x7B785573, 0x8C82, 0x11CF, 0xBC, 0x0C, 0x00, 0xAA, 0x00, 0xAC, 0x74, 0xF6);
DEFINE_GUID(KSTIME_FORMAT_SAMPLE,                       0x7B785572, 0x8C82, 0x11CF, 0xBC, 0x0C, 0x00, 0xAA, 0x00, 0xAC, 0x74, 0xF6);
DEFINE_GUID(KSTIME_FORMAT_BYTE,                         0x7B785571, 0x8C82, 0x11CF, 0xBC, 0x0C, 0x00, 0xAA, 0x00, 0xAC, 0x74, 0xF6);
DEFINE_GUID(KSTIME_FORMAT_FRAME,                        0x7B785570, 0x8C82, 0x11CF, 0xBC, 0x0C, 0x00, 0xAA, 0x00, 0xAC, 0x74, 0xF6);
DEFINE_GUID(KSCATEGORY_QUALITY,                         0x97EBAACB, 0x95BD, 0x11D0, 0xA3, 0xEA, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_PROXY,                           0x97EBAACA, 0x95BD, 0x11D0, 0xA3, 0xEA, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_CLOCK,                           0x53172480, 0x4791, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSCATEGORY_FILESYSTEM,                      0x760FED5E, 0x9357, 0x11D0, 0xA3, 0xCC, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_MEDIUMTRANSFORM,                 0xCF1DDA2E, 0x9743, 0x11D0, 0xA3, 0xEE, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_INTERFACETRANSFORM,              0xCF1DDA2D, 0x9743, 0x11D0, 0xA3, 0xEE, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_COMMUNICATIONSTRANSFORM,         0xCF1DDA2C, 0x9743, 0x11D0, 0xA3, 0xEE, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_DATATRANSFORM,                   0x2EB07EA0, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSCATEGORY_DATADECOMPRESSOR,                0x2721AE20, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSCATEGORY_DATACOMPRESSOR,                  0x1E84C900, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSCATEGORY_SPLITTER,                        0x0A4252A0, 0x7E70, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSCATEGORY_MIXER,                           0xAD809C00, 0x7B88, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSCATEGORY_RENDER,                          0x65E8773E, 0x8F56, 0x11D0, 0xA3, 0xB9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_CAPTURE,                         0x65E8773D, 0x8F56, 0x11D0, 0xA3, 0xB9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSCATEGORY_BRIDGE,                          0x085AFF00, 0x62CE, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSPROPSETID_GM,                             0xAF627536, 0xE719, 0x11D2, 0x8A, 0x1D, 0x00, 0x60, 0x97, 0xD2, 0xDF, 0x5D);
DEFINE_GUID(KSPROPSETID_Topology,                       0x720D4AC0, 0x7533, 0x11D0, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSPROPSETID_MediaSeeking,                   0xEE904F0C, 0xD09B, 0x11D0, 0xAB, 0xE9, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSMETHODSETID_StreamIo,                     0x65D003CA, 0x1523, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSPROPSETID_General,                        0x1464EDA5, 0x6A8F, 0x11D1, 0x9A, 0xA7, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
DEFINE_GUID(KSPROPTYPESETID_General,                    0x97E99BA0, 0xBDEA, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(GUID_NULL,                                  0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
DEFINE_GUID(BUSID_SoftwareDeviceEnumerator,             0x4747B320, 0x62CE, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);


