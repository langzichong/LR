Action2()
{
		//选择仓库
	lr_think_time(1);
	TE_wait_text("0", 90);
	TE_type("0");
	lr_think_time(1);
	//选择拣货
	TE_type("1");
	lr_think_time(3);
	//输入订单号
	TE_type("S000115570");
	//回车确认
	TE_type("<kReturn>");
	//lr_think_time(5);
	//没有货品直接回车
	TE_type("<kReturn>");
	lr_think_time(5);
	//再次回车
	TE_type("<kReturn>");
	TE_wait_text(" F1-", 90);
	lr_start_transaction("pick");
	//输入托盘号
	TE_type("GZ0041710");
	lr_think_time(5);
	//回车确认
	TE_type("<kReturn>");
	//扫描批次
	TE_type("]C19186110021929500216 1117071093");
	lr_think_time(5);
	//回车确认
	TE_type("<kReturn>");
	TE_wait_text("F4-", 90);
	//回车确认
	TE_type("<kReturn>");
	lr_think_time(5);
	TE_wait_text("Enter", 90);
	lr_end_transaction("pick", LR_AUTO);
	//TE_wait_cursor(1, 1, 100, 90);
	//TE_type("<kReturn>");
	lr_think_time(5);
	//CTRL+C 结束LINUX程序
	 TE_type("<kControl-c>");
	  lr_think_time(1);
	  //退出终端
	 TE_type("exit<kReturn>");
	return 0;
}
