-------------------------------------------------------------------
-- ��  Ȩ:	(C) ���ڱ������缼�����޹�˾ 2008 - All Rights Reserved
-- ������:	��ҫ��
-- ��  ��:	3/31/2017
-- ��  ��:	1.0
-- ��  ��:  ս��ʹ�ó��
-------------------------------------------------------------------

require "TaskFramePlayDotaGame"

-------------------------------------------------------------------
-- ս��ʹ�ó��
-------------------------------------------------------------------
Task_30_UseWarWring = TaskFramePlayDotaGame:new
{
		tFinishCondition = { ConditionUseWarWring:new{} },			 -- �������
}