Action2()
{
		//ѡ��ֿ�
	lr_think_time(1);
	TE_wait_text("0", 90);
	TE_type("0");
	lr_think_time(1);
	//ѡ����
	TE_type("1");
	lr_think_time(3);
	//���붩����
	TE_type("S000115570");
	//�س�ȷ��
	TE_type("<kReturn>");
	//lr_think_time(5);
	//û�л�Ʒֱ�ӻس�
	TE_type("<kReturn>");
	lr_think_time(5);
	//�ٴλس�
	TE_type("<kReturn>");
	TE_wait_text(" F1-", 90);
	lr_start_transaction("pick");
	//�������̺�
	TE_type("GZ0041710");
	lr_think_time(5);
	//�س�ȷ��
	TE_type("<kReturn>");
	//ɨ������
	TE_type("]C19186110021929500216 1117071093");
	lr_think_time(5);
	//�س�ȷ��
	TE_type("<kReturn>");
	TE_wait_text("F4-", 90);
	//�س�ȷ��
	TE_type("<kReturn>");
	lr_think_time(5);
	TE_wait_text("Enter", 90);
	lr_end_transaction("pick", LR_AUTO);
	//TE_wait_cursor(1, 1, 100, 90);
	//TE_type("<kReturn>");
	lr_think_time(5);
	//CTRL+C ����LINUX����
	 TE_type("<kControl-c>");
	  lr_think_time(1);
	  //�˳��ն�
	 TE_type("exit<kReturn>");
	return 0;
}
