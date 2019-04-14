

double grade(const Student_info& s)
{
	return grade(s.midterm,s.final,s.homework);
}

//�ж�ѧ���Ƿ񼰸� 
bool fgrade(const Student_info& s)
{
	return grade(s)<60;
}

vector<Student_info> extract_fails(vector<Student_info>& students)
{
	vector<Student_info> pass,fail;//pass�����ѧ����fail�������ѧ��
	
	for(vector<Student_info>::size_type i=0;
		i!=students.size();++i)//����ÿλѧ�� 
		{
			if(fgrade(student[i]))//�ɼ������� 
				fail.push_back(student[i]);
			else
				pass.push_back(student[i]);
		 }
		students=pass;//ԭ����ѧ������Ϊ�����
		return fail;//���ز������ѧ������ 
}

vector<Student_info> extrace_fails(vector<Student_info>& students)
{
	vector<Student_info> fail;
	
	/*vector<Student_info>::size_type i=0;
	
	while(i!=students.size()){
		if(fgrade(student[i])){
			fail.push_back(student[i]);
			students.erase(students.begin()+i);//ɾ���������ѧ�� 
		}else
			++i;//���������� 
	}*/
	
	//ʹ�õ���������������
	vector<Student_info>::iterator iter = students.begin();
	
	while(iter!=students.end()){
		if(fgrade(*iter)){
			fail.push_back(*iter);
			iter=students.erase(iter);
		}else ++iter;
	} 
	
	return fail;
}


