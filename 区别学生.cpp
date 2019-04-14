

double grade(const Student_info& s)
{
	return grade(s.midterm,s.final,s.homework);
}

//判断学生是否及格 
bool fgrade(const Student_info& s)
{
	return grade(s)<60;
}

vector<Student_info> extract_fails(vector<Student_info>& students)
{
	vector<Student_info> pass,fail;//pass及格的学生，fail不及格的学生
	
	for(vector<Student_info>::size_type i=0;
		i!=students.size();++i)//遍历每位学生 
		{
			if(fgrade(student[i]))//成绩不及格 
				fail.push_back(student[i]);
			else
				pass.push_back(student[i]);
		 }
		students=pass;//原来的学生数组为及格的
		return fail;//返回不及格的学生数组 
}

vector<Student_info> extrace_fails(vector<Student_info>& students)
{
	vector<Student_info> fail;
	
	/*vector<Student_info>::size_type i=0;
	
	while(i!=students.size()){
		if(fgrade(student[i])){
			fail.push_back(student[i]);
			students.erase(students.begin()+i);//删除不及格的学生 
		}else
			++i;//及格则跳过 
	}*/
	
	//使用迭代器来代替索引
	vector<Student_info>::iterator iter = students.begin();
	
	while(iter!=students.end()){
		if(fgrade(*iter)){
			fail.push_back(*iter);
			iter=students.erase(iter);
		}else ++iter;
	} 
	
	return fail;
}


