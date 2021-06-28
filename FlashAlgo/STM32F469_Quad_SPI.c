/* Flash OS Routines (Automagically Generated)
 * Copyright (c) 2009-2015 ARM Limited
 */
#include "flash_blob.h"

static const uint32_t flash_code[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0x2106B510, 0x444848F7, 0xF0006800, 0x2363FC6B, 0x21052202, 0x444848F3, 0xF0006800, 0xBD10FD50,
    0x41F0E92D, 0x460F4606, 0x68204614, 0xE8BDB908, 0x4DED81F0, 0xFFE4F7FF, 0x48EABF00, 0x68004448,
    0xF0006880, 0x28000020, 0x6820D1F7, 0x49E51E40, 0x68094449, 0xF4456108, 0xF44565A0, 0xBF005500,
    0x444848E0, 0x68806800, 0x0020F000, 0xD1F72800, 0x444848DC, 0x61456800, 0x444848DA, 0x61876800,
    0xBF00E00F, 0x444848D7, 0x68806800, 0x0004F000, 0xD1F72804, 0x0B01F816, 0x444949D2, 0xF8816809,
    0x68210020, 0x60201E48, 0xD1EA2900, 0x60202000, 0x22012319, 0x48CB2105, 0x68004448, 0xFCFFF000,
    0x444848C8, 0x68006800, 0x0002F040, 0x444949C5, 0x60086809, 0x48C3BF00, 0x68004448, 0xF0006880,
    0x28000020, 0xBF00D1F7, 0xB570E7A1, 0xF7FF4604, 0xBF00FF87, 0x444848BB, 0x68806800, 0x0020F000,
    0xD1F72800, 0x444949B7, 0x61086809, 0xF4454DB7, 0xBF005500, 0x444848B3, 0x68806800, 0x0020F000,
    0xD1F72800, 0x444848AF, 0x61456800, 0x48ADBF00, 0x68004448, 0xF0006880, 0x28000020, 0x48A9D1F7,
    0x68004448, 0xF7FF6184, 0x2319FF5B, 0x21052201, 0x444848A4, 0xF0006800, 0xBF00FCB2, 0x444848A1,
    0x68806800, 0x0020F000, 0xD1F72800, 0xB57CBD70, 0x460D4604, 0xF0004616, 0x2000FFE9, 0x4449499C,
    0x21017008, 0xF0002002, 0x2101FE9E, 0xF0000588, 0x2209FE70, 0x4897210A, 0x68004448, 0xFAB7F000,
    0x2106220A, 0x44484894, 0xF0006800, 0x220AFAB0, 0x48902108, 0x68004448, 0xFAA9F000, 0x2109220A,
    0x4448488C, 0xF0006800, 0x2209FAA2, 0x48892107, 0x68004448, 0xFA9BF000, 0x21062209, 0x44484885,
    0xF0006800, 0xF000FA94, 0x2000FB35, 0x46024603, 0x90004601, 0x4448487B, 0xF0006800, 0x2300FB5D,
    0xF44F2201, 0x487711F8, 0x68004448, 0xFB45F000, 0x44484874, 0x68006800, 0x0001F040, 0x44494971,
    0x60086809, 0x486FBF00, 0x68004448, 0xF0006880, 0x28000020, 0xF240D1F7, 0x496A10FF, 0x68094449,
    0x486E6108, 0x98019001, 0x5000F440, 0xBF009001, 0x44484864, 0x68806800, 0x0020F000, 0xD1F72800,
    0x44494960, 0x68099801, 0x20006148, 0x4601BD7C, 0x47702000, 0x4604B510, 0x4070F024, 0xFF35F7FF,
    0xBD102000, 0xF04FB570, 0xF04F4410, 0xE0044512, 0xF7FF4620, 0xF504FFEF, 0x42A53480, 0x2000D2F8,
    0xE92DBD70, 0x46074DFC, 0x4614460E, 0x0A00F04F, 0x46C346D0, 0x20002500, 0x90009001, 0x0BFFF006,
    0x7580F5CB, 0xEA4F6820, 0xF8942A10, 0xF1BB8000, 0xD1240F00, 0x0F00F1BA, 0x6820D107, 0x466A9000,
    0x46384631, 0xFE9CF7FF, 0xE00BE065, 0x7080F44F, 0x466A9000, 0x46384631, 0xFE92F7FF, 0x7680F506,
    0x7780F507, 0x000AEA5F, 0x0A01F1AA, 0xF8CDD1EE, 0x466A8000, 0x46384631, 0xFE82F7FF, 0xF1BAE04B,
    0xD11C0F00, 0xD91245A8, 0x0005EBA8, 0x95009001, 0x4631466A, 0xF7FF4638, 0x442EFE73, 0x9801442F,
    0x466A9000, 0x46384631, 0xFE6AF7FF, 0x6820E033, 0x466A9000, 0x46384631, 0xFE62F7FF, 0x6820E02B,
    0x60201B40, 0xEA4F6820, 0xF8942A10, 0x95008000, 0x4631466A, 0xF7FF4638, 0x442EFE53, 0xE00B442F,
    0x7080F44F, 0x466A9000, 0x46384631, 0xFE48F7FF, 0x7680F506, 0x7780F507, 0x000AEA5F, 0x0A01F1AA,
    0xF1B8D1EE, 0xD0060F00, 0x8000F8CD, 0x4631466A, 0xF7FF4638, 0xE8BDFE35, 0xE92D8DFC, 0x460443F8,
    0x4616460D, 0x477EF024, 0x950046B0, 0x4639466A, 0xF7FF4640, 0x2000FF66, 0x83F8E8BD, 0x20014603,
    0x00004770, 0x00000048, 0x01000002, 0x040005D8, 0x000000AC, 0x00000080, 0x00000070, 0x0E20053B,
    0x4604B510, 0x0009F3C4, 0xD13E2800, 0xF5A012A0, 0x38801080, 0xD238280A, 0xF000E8DF, 0x140F0A05,
    0x28231E19, 0x2101322D, 0xF0004608, 0xE02EFD22, 0x20022101, 0xFD1DF000, 0x2101E029, 0xF0002004,
    0xE024FD18, 0x20082101, 0xFD13F000, 0x2101E01F, 0xF0002010, 0xE01AFD0E, 0x20202101, 0xFD09F000,
    0x2101E015, 0xF0002040, 0xE010FD04, 0x20802101, 0xFCFFF000, 0x2101E00B, 0xF0000208, 0xE006FCFA,
    0x02482101, 0xFCF5F000, 0xBF00E001, 0xBF00E7FE, 0xB510BD10, 0xF3C44604, 0x28000009, 0x12A0D174,
    0x1080F5A0, 0x280B3880, 0xE8DFD26E, 0x0F06F000, 0x332A2118, 0x584E453C, 0x21010062, 0xF0004608,
    0x2100FD41, 0xF0002001, 0xE05EFD3D, 0x20022101, 0xFD38F000, 0x20022100, 0xFD34F000, 0x2101E055,
    0xF0002004, 0x2100FD2F, 0xF0002004, 0xE04CFD2B, 0x20082101, 0xFD26F000, 0x20082100, 0xFD22F000,
    0x2101E043, 0xF0002010, 0x2100FD1D, 0xF0002010, 0xE03AFD19, 0x20202101, 0xFD14F000, 0x20202100,
    0xFD10F000, 0x2101E031, 0xF0002040, 0x2100FD0B, 0xF0002040, 0xE028FD07, 0x20802101, 0xFD02F000,
    0x20802100, 0xFCFEF000, 0x2101E01F, 0xF0000208, 0x2100FCF9, 0x7080F44F, 0xFCF4F000, 0x2101E015,
    0xF0000248, 0x2100FCEF, 0x7000F44F, 0xFCEAF000, 0x2101E00B, 0xF0000288, 0x2100FCE5, 0x6080F44F,
    0xFCE0F000, 0xE7FFE001, 0xBF00BF00, 0xE92DBD10, 0x460C4DF0, 0x6708E9DD, 0x25002100, 0xBF00468C,
    0xF04FE062, 0xFA080801, 0xEA04F501, 0x45AC0C05, 0xF8D0D159, 0xEA4F8000, 0xF04F0B41, 0xFA0A0A03,
    0xEA28FA0B, 0xF8C0080A, 0xF8D08000, 0xEA4F8000, 0xFA020A41, 0xEA48FA0A, 0xF8C0080A, 0x2A018000,
    0x2A02D001, 0xF8D0D129, 0xEA4F8008, 0xF04F0B41, 0xFA0A0A03, 0xEA28FA0B, 0xF8C0080A, 0xF8D08008,
    0xEA4F8008, 0xFA030A41, 0xEA48FA0A, 0xF8C0080A, 0xF8B08008, 0xF04F8004, 0xFA0A0A01, 0xEA28FA01,
    0xF8A0080A, 0xF8B08004, 0xFA068004, 0xFA1FFA01, 0xEA48FA8A, 0xF8A0080A, 0xF8D08004, 0xEA4F800C,
    0xF04F0B41, 0xFA0A0A03, 0xEA28FA0B, 0xF8C0080A, 0xF8D0800C, 0xEA4F800C, 0xFA070A41, 0xEA48FA0A,
    0xF8C0080A, 0x1C49800C, 0xD39A2910, 0x8DF0E8BD, 0x20004602, 0x400B8A13, 0x2001B10B, 0x2000E000,
    0x46014770, 0x47708A08, 0x20004602, 0x400B8A93, 0x2001B10B, 0x2000E000, 0x46014770, 0x47708A88,
    0x47708301, 0x47708341, 0x8301B10A, 0x8341E000, 0x82814770, 0xF44F4770, 0x430A3280, 0x61C161C2,
    0x69C261C2, 0x477069C2, 0x2300B5F0, 0x074D2400, 0xFA020EED, 0x10CEF305, 0x0520F100, 0x5026F855,
    0x0EF7074E, 0x40BE260F, 0x10CF43B5, 0x0620F100, 0x5027F846, 0xF10010CE, 0xF8550520, 0xEA455026,
    0x10CE0403, 0x0520F100, 0x4026F845, 0xE92DBDF0, 0x460541FC, 0x4616460C, 0x46282700, 0xFE70F7FF,
    0x40A02001, 0x2000B287, 0x23029000, 0x4639461A, 0x46289001, 0xFF2BF7FF, 0x46214632, 0xF7FF4628,
    0xE8BDFFC3, 0xE92D81FC, 0x460541FC, 0x4616460C, 0x46282700, 0xFE54F7FF, 0x40A02001, 0x2000B287,
    0x23022101, 0xE9CD461A, 0x46391000, 0xF7FF4628, 0x4632FF0E, 0x46284621, 0xFFA6F7FF, 0x81FCE8BD,
    0x41FCE92D, 0x460C4606, 0x27004615, 0xF7FF4630, 0x2001FE37, 0xB28740A0, 0x23022000, 0x46392201,
    0x5000E9CD, 0xF7FF4630, 0xE8BDFEF2, 0xE92D81FC, 0x460641FC, 0x4615460C, 0x46302700, 0xFE20F7FF,
    0x40A02001, 0x2000B287, 0x46022302, 0xE9CD4639, 0x46300500, 0xFEDBF7FF, 0x81FCE8BD, 0x4604B570,
    0x2601460D, 0xF7FF4620, 0x68E0FE0B, 0x2103006A, 0x43884091, 0x68E060E0, 0xFA060069, 0x4308F101,
    0xBD7060E0, 0x4604B570, 0x2602460D, 0xF7FF4620, 0x68E0FDF7, 0x2103006A, 0x43884091, 0x68E060E0,
    0xFA060069, 0x4308F101, 0xBD7060E0, 0x4604B570, 0x2600460D, 0xF7FF4620, 0x68E0FDE3, 0x2103006A,
    0x43884091, 0x68E060E0, 0xFA060069, 0x4308F101, 0xBD7060E0, 0x2101B510, 0xF0002002, 0x2100FBAD,
    0xF0002002, 0xBD10FBA9, 0xBF00B510, 0xF0046884, 0x2C000420, 0x2402D1FA, 0x680462C4, 0x0400F424,
    0x68046004, 0x6004431C, 0x62426281, 0x6884BF00, 0x0420F004, 0xD1FA2C00, 0xB530BD10, 0x6885BF00,
    0x0520F005, 0xD1FA2D00, 0x2502EA41, 0x0403EA45, 0x43256845, 0xBD306045, 0x9D04B570, 0xF0266806,
    0x60060601, 0x6886BF00, 0x0620F006, 0xD1FA2E00, 0xEA410609, 0x431E0602, 0x0405EA46, 0x43266806,
    0xBD706006, 0x6883BF00, 0x0320F003, 0xD1FA2B00, 0xF4416103, 0x61427280, 0x6883BF00, 0x0320F003,
    0xD1FA2B00, 0xB5F04770, 0xE9DD460E, 0x21004505, 0x61071E57, 0x61836146, 0xD10E2D08, 0xBF00BF00,
    0xF0076887, 0x2F000704, 0x2735D0FA, 0x7020F880, 0xF0076887, 0x2F000702, 0x2D16D0F1, 0xBF00D118,
    0x6887BF00, 0x0704F007, 0xD0FA2F00, 0xC004F8D4, 0x0702F10C, 0xF8BC6067, 0x84077000, 0xB2F91C4F,
    0xD1002905, 0x6887BF00, 0x0702F007, 0xD0E72F00, 0xD1182D32, 0xBF00BF00, 0xF0076887, 0x2F000704,
    0xF8D4D0FA, 0xF10CC008, 0x60A70704, 0x7000F8DC, 0x1C4F6207, 0x2903B2F9, 0xBF00D100, 0xF0076887,
    0x2F000702, 0x2702D0E7, 0xBDF060C7, 0xE9DDB5F0, 0x61024505, 0x430E6946, 0x61836146, 0xD1142D08,
    0xE008BF00, 0x7020F890, 0xC000F8D4, 0x0601F10C, 0xF88C6026, 0x68867000, 0x0604F006, 0xD0F12E00,
    0xF0066886, 0x2E000602, 0x2D16D1EB, 0xBF00D113, 0x8C07E007, 0xC004F8D4, 0x0602F10C, 0xF8AC6066,
    0x68867000, 0x0604F006, 0xD0F22E00, 0xF0066886, 0x2E000602, 0x2D32D1EC, 0xBF00D113, 0x6A07E007,
    0xC008F8D4, 0x0604F10C, 0xF8CC60A6, 0x68867000, 0x0604F006, 0xD0F22E00, 0xF0066886, 0x2E000602,
    0xBDF0D1EC, 0x460CB5F0, 0x76FFF64F, 0x2102EA42, 0x6887BF00, 0x0720F007, 0xD1FA2F00, 0x61071E7F,
    0x7780F444, 0x65A0F047, 0x6887BF00, 0x0720F007, 0xD1FA2F00, 0x2B196145, 0xE004D109, 0xF0076887,
    0xB1070704, 0xEA068C06, 0x2F000701, 0x2B63D1F6, 0x2600D10A, 0x6887E004, 0x0704F007, 0x8C06B107,
    0x0701EA06, 0xD1F6428F, 0xF0476807, 0x60070702, 0x6887BF00, 0x0720F007, 0xD1FA2F00, 0xB570BDF0,
    0xBF0025FF, 0xF0066886, 0x2E000620, 0x1E76D1FA, 0xF4416106, 0xF0467680, 0xBF0064A0, 0xF0066886,
    0x2E000620, 0x6144D1FA, 0xD10A2B19, 0x6886E005, 0x0604F006, 0xF890B10E, 0xEA055020, 0x2E000602,
    0x2B63D1F5, 0x2500D10B, 0x6886E005, 0x0604F006, 0xF890B10E, 0xEA055020, 0x42960602, 0x6806D1F5,
    0x0602F046, 0xBF006006, 0xF0066886, 0x2E000620, 0xBD70D1FA, 0x4DF8E92D, 0x460D4604, 0x461F4616,
    0xAB0AE9DD, 0x8024F8DD, 0x90006960, 0x46204651, 0xFEC8F7FF, 0x4632463B, 0x46204629, 0xFE84F7FF,
    0x0001F1AB, 0xBF006120, 0xF00068A0, 0x28000020, 0xF048D1FA, 0xF0406000, 0x61602001, 0x68A0BF00,
    0x0008F000, 0xD0FA2800, 0xF0406820, 0x60200002, 0x68A0BF00, 0x0002F000, 0xD0FA2800, 0x68A0BF00,
    0x0020F000, 0xD1FA2800, 0xF04068E0, 0x60E00008, 0xF04068E0, 0x60E00002, 0x8DF8E8BD, 0x444848F6,
    0x68006800, 0x0001F040, 0x444949F3, 0x60086809, 0x49F12000, 0x68094449, 0x48EF6088, 0x68004448,
    0x49EE6800, 0x49EC4008, 0x68094449, 0x20006008, 0x444949E9, 0x60486809, 0x444848E7, 0x68006800,
    0x2080F420, 0x444949E4, 0x60086809, 0x49E22000, 0x68094449, 0x477060C8, 0x444949DF, 0x68096809,
    0x3180F421, 0x444A4ADC, 0x60116812, 0x444949DA, 0x68096809, 0x2180F421, 0x444A4AD7, 0x60116812,
    0x3F80F5B0, 0xF5B0D003, 0xD1162F80, 0x49D2E00A, 0x68094449, 0xF4416809, 0x4ACF3180, 0x6812444A,
    0xE00B6011, 0x444949CC, 0x68096809, 0x21A0F441, 0x444A4AC9, 0x60116812, 0xBF00E000, 0x4770BF00,
    0x20004601, 0x444A4AC4, 0x68106812, 0x00F8F020, 0x00C1EA40, 0x444A4AC0, 0x60106812, 0xB5F04770,
    0x4505E9DD, 0x1682EA41, 0xEBC72701, 0xEA460753, 0x43064607, 0x6604EA46, 0x7605EA46, 0x444F4FB6,
    0x607E683F, 0x4601BDF0, 0x4AB32000, 0x6812444A, 0xF0206890, 0x43080003, 0x444A4AAF, 0x60906812,
    0x48AD4770, 0x68004448, 0xF0006880, 0x4770000C, 0x20004601, 0x444A4AA8, 0x68906812, 0x00F0F020,
    0x4AA54308, 0x6812444A, 0x47706090, 0x20004601, 0x444A4AA1, 0x68906812, 0x50E0F420, 0x4A9E4308,
    0x6812444A, 0x47706090, 0x20004601, 0x444A4A9A, 0x68906812, 0x4060F420, 0x00C1EA40, 0x444A4A96,
    0x60906812, 0x21004770, 0x70114A95, 0x28017011, 0x2804D002, 0xE003D108, 0x4A912101, 0xE0047011,
    0x4A8F2105, 0xE0007011, 0xBF00BF00, 0x21004770, 0x7240F400, 0x7F40F5B2, 0x4A87D10C, 0x6812444A,
    0xF4216891, 0x4A8711F8, 0x43114002, 0x444A4A82, 0x60916812, 0x444A4A80, 0x6F126812, 0x7240F422,
    0x444B4B7D, 0x671A681B, 0x444A4A7B, 0x6F126812, 0x030BF3C0, 0x4B78431A, 0x681B444B, 0x4770671A,
    0x2100B570, 0x24002200, 0x4D732302, 0x682D444D, 0xF00568AD, 0xB121010C, 0xD0052904, 0xD11A2908,
    0x4D71E005, 0xE0196005, 0x60054D70, 0x4D6AE016, 0x682D444D, 0xF3C5686D, 0x4D671488, 0x682D444D,
    0xF3C5686D, 0x1C6D4501, 0xFBB4006B, 0x4E68F5F3, 0x60054375, 0x4D64E002, 0xBF006005, 0x4D5EBF00,
    0x682D444D, 0xF00568AD, 0x090901F0, 0x447D4D61, 0x68055C6A, 0x604540D5, 0x444D4D57, 0x68AD682D,
    0x51E0F405, 0x4D5B0A89, 0x3D1A447D, 0x68455C6A, 0x608540D5, 0x444D4D50, 0x68AD682D, 0x4160F405,
    0x4D540B49, 0x3D36447D, 0x68455C6A, 0x60C540D5, 0xB149BD70, 0x444A4A48, 0x6B126812, 0x4B464302,
    0x681B444B, 0xE008631A, 0x444A4A43, 0x6B126812, 0x4B414382, 0x681B444B, 0x4770631A, 0x4A3EB149,
    0x6812444A, 0x43026B52, 0x444B4B3B, 0x635A681B, 0x4A39E008, 0x6812444A, 0x43826B52, 0x444B4B36,
    0x635A681B, 0xB1494770, 0x444A4A33, 0x6B926812, 0x4B314302, 0x681B444B, 0xE008639A, 0x444A4A2E,
    0x6B926812, 0x4B2C4382, 0x681B444B, 0x4770639A, 0x4A29B149, 0x6812444A, 0x43026C12, 0x444B4B26,
    0x641A681B, 0x4A24E008, 0x6812444A, 0x43826C12, 0x444B4B21, 0x641A681B, 0xB1494770, 0x444A4A1E,
    0x6C526812, 0x4B1C4302, 0x681B444B, 0xE008645A, 0x444A4A19, 0x6C526812, 0x4B174382, 0x681B444B,
    0x4770645A, 0x4A14B149, 0x6812444A, 0x43026912, 0x444B4B11, 0x611A681B, 0x4A0FE008, 0x6812444A,
    0x43826912, 0x444B4B0C, 0x611A681B, 0xB1494770, 0x444A4A09, 0x69526812, 0x4B074302, 0x681B444B,
    0xE008615A, 0x444A4A04, 0x69526812, 0x4B024382, 0x681B444B, 0x4770615A, 0x0000008C, 0xFEF6FFFF,
    0x40023870, 0x0FFFFCFF, 0x00F42400, 0x01C9C380, 0x000F4240, 0x000004DE, 0x4A63B149, 0x6812444A,
    0x43026992, 0x444B4B60, 0x619A681B, 0x4A5EE008, 0x6812444A, 0x43826992, 0x444B4B5B, 0x619A681B,
    0xB1494770, 0x444A4A58, 0x6A126812, 0x4B564302, 0x681B444B, 0xE008621A, 0x444A4A53, 0x6A126812,
    0x4B514382, 0x681B444B, 0x4770621A, 0x4A4EB149, 0x6812444A, 0x43026A52, 0x444B4B4B, 0x625A681B,
    0x4A49E008, 0x6812444A, 0x43826A52, 0x444B4B46, 0x625A681B, 0xB1494770, 0x444A4A43, 0x6D126812,
    0x4B414302, 0x681B444B, 0xE008651A, 0x444A4A3E, 0x6D126812, 0x4B3C4382, 0x681B444B, 0x4770651A,
    0x4A39B149, 0x6812444A, 0x43026D52, 0x444B4B36, 0x655A681B, 0x4A34E008, 0x6812444A, 0x43826D52,
    0x444B4B31, 0x655A681B, 0xB1494770, 0x444A4A2E, 0x6D926812, 0x4B2C4302, 0x681B444B, 0xE008659A,
    0x444A4A29, 0x6D926812, 0x4B274382, 0x681B444B, 0x4770659A, 0x4A24B149, 0x6812444A, 0x43026E12,
    0x444B4B21, 0x661A681B, 0x4A1FE008, 0x6812444A, 0x43826E12, 0x444B4B1C, 0x661A681B, 0xB1494770,
    0x444A4A19, 0x6E526812, 0x4B174302, 0x681B444B, 0xE008665A, 0x444A4A14, 0x6E526812, 0x4B124382,
    0x681B444B, 0x4770665A, 0x20004602, 0x444B4B0E, 0x6898681B, 0x60ECF020, 0x0301EA42, 0x4B0A4318,
    0x681B444B, 0x47706098, 0x20004602, 0x444B4B06, 0x6898681B, 0x5062F020, 0x0301EA42, 0x4B024318,
    0x681B444B, 0x47706098, 0x0000008C, 0x4080F04F, 0x44494941, 0x48416008, 0x44494941, 0x48416008,
    0x44494941, 0x48416008, 0x44494941, 0x48416008, 0x44494941, 0x48416008, 0x44494941, 0x48416008,
    0x44494941, 0x48416008, 0x44494941, 0x48416008, 0x44494941, 0x48416008, 0x44494941, 0x48416008,
    0x44494941, 0x48416008, 0x44494941, 0x48416008, 0x44494941, 0x48416008, 0x44494941, 0x48416008,
    0x44494941, 0x48416008, 0x44494941, 0x48416008, 0x44494941, 0x48416008, 0x44494941, 0x48416008,
    0x44494941, 0x48416008, 0x44494941, 0x483F6008, 0x494030B8, 0x60084449, 0x493F4822, 0x60084449,
    0x493F483E, 0x60084449, 0x493F483E, 0x60084449, 0x3090483C, 0x4449493D, 0x47706008, 0xE002B501,
    0x1E409800, 0x98009000, 0xD1F92800, 0x4601BD08, 0xDA022920, 0x40882001, 0x29404770, 0xF1A1DA05,
    0x22010020, 0xF000FA02, 0xF1A1E7F6, 0x22010040, 0xF000FA02, 0x0000E7F0, 0x00000050, 0xA0001000,
    0x00000048, 0x40004C00, 0x00000054, 0x40007000, 0x00000058, 0x40010000, 0x0000005C, 0x40011000,
    0x00000060, 0x40013800, 0x00000064, 0x40013C00, 0x00000068, 0x40020000, 0x0000006C, 0x40020400,
    0x00000070, 0x40020800, 0x00000074, 0x40020C00, 0x00000078, 0x40021000, 0x0000007C, 0x40021400,
    0x00000080, 0x40021800, 0x00000084, 0x40021C00, 0x00000088, 0x40023800, 0x0000008C, 0x40023C00,
    0x00000090, 0x40026000, 0x00000094, 0x40026400, 0x00000098, 0x0000009C, 0x0000004C, 0xE000E100,
    0x000000A0, 0xE000ED00, 0x000000A4, 0x000000A8, 0x00000000, 0x04030201, 0x04030201, 0x09080706,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000080, 0x00000090, 0x000000A0, 0x05080808, 0x6B0B0506, 0xBDED0D3B, 0x00323202,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000
};

const program_target_t flash_algo = {
    0x2000018F,  // Init
    0x2000028F,  // UnInit
    0x200002A5,  // EraseChip
    0x20000295,  // EraseSector
    0x200003DB,  // ProgramPage

    // BKPT : start of blob + 1
    // RSB  : address to access global/static data
    // RSP  : stack pointer
    {
        0x20000001,
        0x20000C00,
        0x20001000
    },

    0x20000400,  // mem buffer location
    0x20000000,  // location to write prog_blob in target RAM
    sizeof(flash_code),  // prog_blob size
    flash_code,  // address of prog_blob
    0x00000400,  // ram_to_flash_bytes_to_be_written
};