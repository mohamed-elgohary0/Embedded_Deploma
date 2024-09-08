/*
 * Functions.h
 *
 *  Created on: ???/???/????
 *      Author: iTECH
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include "fifo.h"

void Add_student_by_file(FIFO_Buf_t* fifo, const char *filename);
void Add_student_Manually(FIFO_Buf_t* fifo);
void Find_student_by_rollnumber(FIFO_Buf_t* fifo);
void Find_student_by_firstname(FIFO_Buf_t* fifo);
void Find_students_in_course(FIFO_Buf_t* fifo);
void Count_students(FIFO_Buf_t* fifo);
void Delete_student(FIFO_Buf_t* fifo);
void Update_student(FIFO_Buf_t* fifo);
void Show_all_student(FIFO_Buf_t* fifo);

#endif /* FUNCTIONS_H_ */
