/*******************************************************************
** �ļ���:	E:\speed\Server\OrderServer\Include\IOrderSceneService.h
** ��  Ȩ:	(C) ���ڱ������缼�����޹�˾ 
** ������:	������
** ��  ��:	10/19/2015
** ��  ��:	1.0
** ��  ��:	����ϵͳ������ �����ṩ�Ľӿ�
            
********************************************************************/

#pragma once

#include "NetMessageDef.h"
#include "GatewayServiceDef.h"
#include "PackagePtr.h"

using Gateway::ClientID;

struct  IOrderSceneService
{
    // �����������������͹�������Ϣ
    virtual void handleServerMsg(DWORD serverID, SNetMsgHead head, PACKAGE_PTR msg) = 0;

    // �����ͻ��˷��͹�������Ϣ
    virtual void handleClientMsg(DWORD client, SNetMsgHead head, PACKAGE_PTR msg) = 0;

};