/******************************************************
 * AC_ISA Initialization File                         *
 * This file is automatically generated by ArchC      *
 * WITHOUT WARRANTY OF ANY KIND, either express       *
 * or implied.                                        *
 * For more information on ArchC, please visit:       *
 * http://www.archc.org                               *
 *                                                    *
 * The ArchC Team                                     *
 * Computer Systems Laboratory (LSC)                  *
 * IC-UNICAMP                                         *
 * http://www.lsc.ic.unicamp.br                       *
 ******************************************************/
 

#include "mips1_isa.H"

//!Fields table declaration.
ac_dec_field mips1_parms::mips1_isa::fields[mips1_parms::AC_DEC_FIELD_NUMBER] = {
  {"op", 6, 5, 1, 0, 0, &(mips1_parms::mips1_isa::fields[1])},
  {"rs", 5, 10, 2, 0, 0, &(mips1_parms::mips1_isa::fields[2])},
  {"rt", 5, 15, 3, 0, 0, &(mips1_parms::mips1_isa::fields[3])},
  {"rd", 5, 20, 4, 0, 0, &(mips1_parms::mips1_isa::fields[4])},
  {"shamt", 5, 25, 5, 0, 0, &(mips1_parms::mips1_isa::fields[5])},
  {"func", 6, 31, 6, 0, 0, NULL},
  {"op", 6, 5, 1, 0, 0, &(mips1_parms::mips1_isa::fields[7])},
  {"rs", 5, 10, 2, 0, 0, &(mips1_parms::mips1_isa::fields[8])},
  {"rt", 5, 15, 3, 0, 0, &(mips1_parms::mips1_isa::fields[9])},
  {"imm", 16, 31, 7, 0, 1, NULL},
  {"op", 6, 5, 1, 0, 0, &(mips1_parms::mips1_isa::fields[11])},
  {"addr", 26, 31, 8, 0, 0, NULL}
};

ac_dec_format mips1_parms::mips1_isa::formats[mips1_parms::AC_DEC_FORMAT_NUMBER] = {
  {"Type_R", 32, &(mips1_parms::mips1_isa::fields[0]), &(mips1_parms::mips1_isa::formats[1])},
  {"Type_I", 32, &(mips1_parms::mips1_isa::fields[6]), &(mips1_parms::mips1_isa::formats[2])},
  {"Type_J", 32, &(mips1_parms::mips1_isa::fields[10]), NULL}
};

ac_dec_list mips1_parms::mips1_isa::dec_list[mips1_parms::AC_DEC_LIST_NUMBER] = {
  {"op", 1, 32, NULL},
  {"op", 1, 36, NULL},
  {"op", 1, 33, NULL},
  {"op", 1, 37, NULL},
  {"op", 1, 35, NULL},
  {"op", 1, 34, NULL},
  {"op", 1, 38, NULL},
  {"op", 1, 40, NULL},
  {"op", 1, 41, NULL},
  {"op", 1, 43, NULL},
  {"op", 1, 42, NULL},
  {"op", 1, 46, NULL},
  {"op", 1, 8, NULL},
  {"op", 1, 9, NULL},
  {"op", 1, 10, NULL},
  {"op", 1, 11, NULL},
  {"op", 1, 12, NULL},
  {"op", 1, 13, NULL},
  {"op", 1, 14, NULL},
  {"op", 1, 15, &(mips1_parms::mips1_isa::dec_list[20])},
  {"rs", 2, 0, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[22])},
  {"func", 6, 32, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[24])},
  {"func", 6, 33, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[26])},
  {"func", 6, 34, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[28])},
  {"func", 6, 35, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[30])},
  {"func", 6, 42, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[32])},
  {"func", 6, 43, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[34])},
  {"func", 6, 36, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[36])},
  {"func", 6, 37, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[38])},
  {"func", 6, 38, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[40])},
  {"func", 6, 39, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[42])},
  {"rd", 4, 0, &(mips1_parms::mips1_isa::dec_list[43])},
  {"func", 6, 0, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[45])},
  {"func", 6, 0, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[47])},
  {"func", 6, 2, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[49])},
  {"func", 6, 3, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[51])},
  {"func", 6, 4, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[53])},
  {"func", 6, 6, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[55])},
  {"func", 6, 7, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[57])},
  {"func", 6, 24, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[59])},
  {"func", 6, 25, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[61])},
  {"func", 6, 26, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[63])},
  {"func", 6, 27, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[65])},
  {"func", 6, 16, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[67])},
  {"func", 6, 17, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[69])},
  {"func", 6, 18, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[71])},
  {"func", 6, 19, NULL},
  {"op", 1, 2, NULL},
  {"op", 1, 3, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[75])},
  {"func", 6, 8, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[77])},
  {"func", 6, 9, NULL},
  {"op", 1, 4, NULL},
  {"op", 1, 5, NULL},
  {"op", 1, 6, &(mips1_parms::mips1_isa::dec_list[81])},
  {"rt", 3, 0, NULL},
  {"op", 1, 7, &(mips1_parms::mips1_isa::dec_list[83])},
  {"rt", 3, 0, NULL},
  {"op", 1, 1, &(mips1_parms::mips1_isa::dec_list[85])},
  {"rt", 3, 0, NULL},
  {"op", 1, 1, &(mips1_parms::mips1_isa::dec_list[87])},
  {"rt", 3, 1, NULL},
  {"op", 1, 1, &(mips1_parms::mips1_isa::dec_list[89])},
  {"rt", 3, 16, NULL},
  {"op", 1, 1, &(mips1_parms::mips1_isa::dec_list[91])},
  {"rt", 3, 17, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[93])},
  {"func", 6, 12, NULL},
  {"op", 1, 0, &(mips1_parms::mips1_isa::dec_list[95])},
  {"func", 6, 13, NULL}
};

ac_dec_instr mips1_parms::mips1_isa::instructions[mips1_parms::AC_DEC_INSTR_NUMBER] = {
  {"lb", 4, "lb", "lb %reg, \%lo(%exp)(%reg)", "Type_I", 1, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[0]), 0, &(mips1_parms::mips1_isa::instructions[1])},
  {"lbu", 4, "lbu", "lbu %reg, \%lo(%exp)(%reg)", "Type_I", 2, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[1]), 0, &(mips1_parms::mips1_isa::instructions[2])},
  {"lh", 4, "lh", "lh %reg, \%lo(%exp)(%reg)", "Type_I", 3, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[2]), 0, &(mips1_parms::mips1_isa::instructions[3])},
  {"lhu", 4, "lhu", "lhu %reg, \%lo(%exp)(%reg)", "Type_I", 4, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[3]), 0, &(mips1_parms::mips1_isa::instructions[4])},
  {"lw", 4, "lw", "lw %reg, \%lo(%exp)(%reg)", "Type_I", 5, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[4]), 0, &(mips1_parms::mips1_isa::instructions[5])},
  {"lwl", 4, "lwl", "lwl %reg, \%lo(%exp)(%reg)", "Type_I", 6, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[5]), 0, &(mips1_parms::mips1_isa::instructions[6])},
  {"lwr", 4, "lwr", "lwr %reg, \%lo(%exp)(%reg)", "Type_I", 7, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[6]), 0, &(mips1_parms::mips1_isa::instructions[7])},
  {"sb", 4, "sb", "sb %reg, \%lo(%exp)(%reg)", "Type_I", 8, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[7]), 0, &(mips1_parms::mips1_isa::instructions[8])},
  {"sh", 4, "sh", "sh %reg, \%lo(%exp)(%reg)", "Type_I", 9, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[8]), 0, &(mips1_parms::mips1_isa::instructions[9])},
  {"sw", 4, "sw", "sw %reg, \%lo(%exp)(%reg)", "Type_I", 10, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[9]), 0, &(mips1_parms::mips1_isa::instructions[10])},
  {"swl", 4, "swl", "swl %reg, (%reg)", "Type_I", 11, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[10]), 0, &(mips1_parms::mips1_isa::instructions[11])},
  {"swr", 4, "swr", "swr %reg, (%reg)", "Type_I", 12, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[11]), 0, &(mips1_parms::mips1_isa::instructions[12])},
  {"addi", 4, "addi", "addi %reg, %reg, %exp", "Type_I", 13, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[12]), 0, &(mips1_parms::mips1_isa::instructions[13])},
  {"addiu", 4, "addiu", "addiu %reg, %reg, %exp", "Type_I", 14, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[13]), 0, &(mips1_parms::mips1_isa::instructions[14])},
  {"slti", 4, "slti", "slti %reg, %reg, %exp", "Type_I", 15, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[14]), 0, &(mips1_parms::mips1_isa::instructions[15])},
  {"sltiu", 4, "sltiu", "sltiu %reg, %reg, %exp", "Type_I", 16, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[15]), 0, &(mips1_parms::mips1_isa::instructions[16])},
  {"andi", 4, "andi", "andi %reg, %reg, %imm", "Type_I", 17, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[16]), 0, &(mips1_parms::mips1_isa::instructions[17])},
  {"ori", 4, "ori", "ori %reg, %reg, %imm", "Type_I", 18, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[17]), 0, &(mips1_parms::mips1_isa::instructions[18])},
  {"xori", 4, "xori", "xori %reg, %reg, %imm", "Type_I", 19, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[18]), 0, &(mips1_parms::mips1_isa::instructions[19])},
  {"lui", 4, "lui", "lui %reg, %exp", "Type_I", 20, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[19]), 0, &(mips1_parms::mips1_isa::instructions[20])},
  {"add", 4, "add", "add %reg, %reg, %reg", "Type_R", 21, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[21]), 0, &(mips1_parms::mips1_isa::instructions[21])},
  {"addu", 4, "addu", "addu %reg, %reg, %reg", "Type_R", 22, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[23]), 0, &(mips1_parms::mips1_isa::instructions[22])},
  {"sub", 4, "sub", "sub %reg, %reg, %reg", "Type_R", 23, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[25]), 0, &(mips1_parms::mips1_isa::instructions[23])},
  {"subu", 4, "subu", "subu %reg, %reg, %reg", "Type_R", 24, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[27]), 0, &(mips1_parms::mips1_isa::instructions[24])},
  {"slt", 4, "slt", "slt %reg, %reg, %reg", "Type_R", 25, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[29]), 0, &(mips1_parms::mips1_isa::instructions[25])},
  {"sltu", 4, "sltu", "sltu %reg, %reg, %reg", "Type_R", 26, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[31]), 0, &(mips1_parms::mips1_isa::instructions[26])},
  {"instr_and", 4, "and", "and %reg, %reg, %reg", "Type_R", 27, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[33]), 0, &(mips1_parms::mips1_isa::instructions[27])},
  {"instr_or", 4, "or", "or %reg, %reg, %reg", "Type_R", 28, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[35]), 0, &(mips1_parms::mips1_isa::instructions[28])},
  {"instr_xor", 4, "xor", "xor  %reg, %reg, %reg", "Type_R", 29, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[37]), 0, &(mips1_parms::mips1_isa::instructions[29])},
  {"instr_nor", 4, "nor", "nor  %reg, %reg, %reg", "Type_R", 30, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[39]), 0, &(mips1_parms::mips1_isa::instructions[30])},
  {"nop", 4, "nop", "nop", "Type_R", 31, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[41]), 0, &(mips1_parms::mips1_isa::instructions[31])},
  {"sll", 4, "sll", "sll %reg, %reg, %imm", "Type_R", 32, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[44]), 0, &(mips1_parms::mips1_isa::instructions[32])},
  {"srl", 4, "srl", "srl %reg, %reg, %imm", "Type_R", 33, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[46]), 0, &(mips1_parms::mips1_isa::instructions[33])},
  {"sra", 4, "sra", "sra %reg, %reg, %imm", "Type_R", 34, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[48]), 0, &(mips1_parms::mips1_isa::instructions[34])},
  {"sllv", 4, "sllv", "sllv %reg, %reg, %reg", "Type_R", 35, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[50]), 0, &(mips1_parms::mips1_isa::instructions[35])},
  {"srlv", 4, "srlv", "srlv %reg, %reg, %reg", "Type_R", 36, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[52]), 0, &(mips1_parms::mips1_isa::instructions[36])},
  {"srav", 4, "srav", "srav %reg, %reg, %reg", "Type_R", 37, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[54]), 0, &(mips1_parms::mips1_isa::instructions[37])},
  {"mult", 4, "mult", "mult %reg, %reg", "Type_R", 38, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[56]), 0, &(mips1_parms::mips1_isa::instructions[38])},
  {"multu", 4, "multu", "multu %reg, %reg", "Type_R", 39, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[58]), 0, &(mips1_parms::mips1_isa::instructions[39])},
  {"div", 4, "div", "div %reg, %reg", "Type_R", 40, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[60]), 0, &(mips1_parms::mips1_isa::instructions[40])},
  {"divu", 4, "divu", "divu %reg, %reg", "Type_R", 41, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[62]), 0, &(mips1_parms::mips1_isa::instructions[41])},
  {"mfhi", 4, "mfhi", "mfhi %reg", "Type_R", 42, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[64]), 0, &(mips1_parms::mips1_isa::instructions[42])},
  {"mthi", 4, "mthi", "mthi %reg", "Type_R", 43, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[66]), 0, &(mips1_parms::mips1_isa::instructions[43])},
  {"mflo", 4, "mflo", "mflo %reg", "Type_R", 44, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[68]), 0, &(mips1_parms::mips1_isa::instructions[44])},
  {"mtlo", 4, "mtlo", "mtlo %reg", "Type_R", 45, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[70]), 0, &(mips1_parms::mips1_isa::instructions[45])},
  {"j", 4, "j", "j %exp(align)", "Type_J", 46, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[72]), 0, &(mips1_parms::mips1_isa::instructions[46])},
  {"jal", 4, "jal", "jal %exp(align)", "Type_J", 47, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[73]), 0, &(mips1_parms::mips1_isa::instructions[47])},
  {"jr", 4, "jr", "jr %reg", "Type_R", 48, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[74]), 0, &(mips1_parms::mips1_isa::instructions[48])},
  {"jalr", 4, "jalr", "jalr %reg, %reg", "Type_R", 49, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[76]), 0, &(mips1_parms::mips1_isa::instructions[49])},
  {"beq", 4, "beq", "beq %reg, %reg, %exp(pcrel)", "Type_I", 50, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[78]), 0, &(mips1_parms::mips1_isa::instructions[50])},
  {"bne", 4, "bgtu", "bgtu %reg, $0, %exp(pcrel)", "Type_I", 51, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[79]), 0, &(mips1_parms::mips1_isa::instructions[51])},
  {"blez", 4, "blez", "blez %reg, %exp(pcrel)", "Type_I", 52, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[80]), 0, &(mips1_parms::mips1_isa::instructions[52])},
  {"bgtz", 4, "bgtz", "bgtz %reg, %exp(pcrel)", "Type_I", 53, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[82]), 0, &(mips1_parms::mips1_isa::instructions[53])},
  {"bltz", 4, "bltz", "bltz %reg, %exp(pcrel)", "Type_I", 54, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[84]), 0, &(mips1_parms::mips1_isa::instructions[54])},
  {"bgez", 4, "bgez", "bgez %reg, %exp(pcrel)", "Type_I", 55, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[86]), 0, &(mips1_parms::mips1_isa::instructions[55])},
  {"bltzal", 4, "bltzal", "bltzal %reg, %exp(pcrel)", "Type_I", 56, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[88]), 0, &(mips1_parms::mips1_isa::instructions[56])},
  {"bgezal", 4, "bgezal", "bgezal %reg, %exp(pcrel)", "Type_I", 57, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[90]), 0, &(mips1_parms::mips1_isa::instructions[57])},
  {"sys_call", 4, "syscall", "syscall", "Type_R", 58, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[92]), 0, &(mips1_parms::mips1_isa::instructions[58])},
  {"instr_break", 4, "break", "break", "Type_R", 59, 1, 1, 1, &(mips1_parms::mips1_isa::dec_list[94]), 0, NULL}
};

const ac_instr_info
mips1_parms::mips1_isa::instr_table[mips1_parms::AC_DEC_INSTR_NUMBER + 1] = {
  ac_instr_info(0, "_ac_invalid_", "_ac_invalid_", 4),
  ac_instr_info(1, "lb", "lb", 4),
  ac_instr_info(2, "lbu", "lbu", 4),
  ac_instr_info(3, "lh", "lh", 4),
  ac_instr_info(4, "lhu", "lhu", 4),
  ac_instr_info(5, "lw", "lw", 4),
  ac_instr_info(6, "lwl", "lwl", 4),
  ac_instr_info(7, "lwr", "lwr", 4),
  ac_instr_info(8, "sb", "sb", 4),
  ac_instr_info(9, "sh", "sh", 4),
  ac_instr_info(10, "sw", "sw", 4),
  ac_instr_info(11, "swl", "swl", 4),
  ac_instr_info(12, "swr", "swr", 4),
  ac_instr_info(13, "addi", "addi", 4),
  ac_instr_info(14, "addiu", "addiu", 4),
  ac_instr_info(15, "slti", "slti", 4),
  ac_instr_info(16, "sltiu", "sltiu", 4),
  ac_instr_info(17, "andi", "andi", 4),
  ac_instr_info(18, "ori", "ori", 4),
  ac_instr_info(19, "xori", "xori", 4),
  ac_instr_info(20, "lui", "lui", 4),
  ac_instr_info(21, "add", "add", 4),
  ac_instr_info(22, "addu", "addu", 4),
  ac_instr_info(23, "sub", "sub", 4),
  ac_instr_info(24, "subu", "subu", 4),
  ac_instr_info(25, "slt", "slt", 4),
  ac_instr_info(26, "sltu", "sltu", 4),
  ac_instr_info(27, "instr_and", "and", 4),
  ac_instr_info(28, "instr_or", "or", 4),
  ac_instr_info(29, "instr_xor", "xor", 4),
  ac_instr_info(30, "instr_nor", "nor", 4),
  ac_instr_info(31, "nop", "nop", 4),
  ac_instr_info(32, "sll", "sll", 4),
  ac_instr_info(33, "srl", "srl", 4),
  ac_instr_info(34, "sra", "sra", 4),
  ac_instr_info(35, "sllv", "sllv", 4),
  ac_instr_info(36, "srlv", "srlv", 4),
  ac_instr_info(37, "srav", "srav", 4),
  ac_instr_info(38, "mult", "mult", 4),
  ac_instr_info(39, "multu", "multu", 4),
  ac_instr_info(40, "div", "div", 4),
  ac_instr_info(41, "divu", "divu", 4),
  ac_instr_info(42, "mfhi", "mfhi", 4),
  ac_instr_info(43, "mthi", "mthi", 4),
  ac_instr_info(44, "mflo", "mflo", 4),
  ac_instr_info(45, "mtlo", "mtlo", 4),
  ac_instr_info(46, "j", "j", 4),
  ac_instr_info(47, "jal", "jal", 4),
  ac_instr_info(48, "jr", "jr", 4),
  ac_instr_info(49, "jalr", "jalr", 4),
  ac_instr_info(50, "beq", "beq", 4),
  ac_instr_info(51, "bne", "bgtu", 4),
  ac_instr_info(52, "blez", "blez", 4),
  ac_instr_info(53, "bgtz", "bgtz", 4),
  ac_instr_info(54, "bltz", "bltz", 4),
  ac_instr_info(55, "bgez", "bgez", 4),
  ac_instr_info(56, "bltzal", "bltzal", 4),
  ac_instr_info(57, "bgezal", "bgezal", 4),
  ac_instr_info(58, "sys_call", "syscall", 4),
  ac_instr_info(59, "instr_break", "break", 4)
};
