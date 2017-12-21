/*******************************************************************
** �ļ���:	EffectSetWingProperty.h
** ��  Ȩ:	(C) ���ڱ������缼�����޹�˾ 2008 - All Rights Reserved
** ������:	������
** ��  ��:	1/13/2017
** ��  ��:	1.0
** ��  ��:	Ч��-���ó������
********************************************************************/

#pragma once

#include "IEffect.h"
#include "EffectDef.h"
#include "IWingPart.h"

using namespace EFFECT_SERVER;

class CEffectSetWingProperty : public IEffectEx
{
public:
	typedef  EffectServer_SetWingProperty    SCHEME_DATA;

	CEffectSetWingProperty( SCHEME_DATA & data ) : m_data(data)
	{
	}

    // ��ȡЧ��ID
    virtual int             GetID()
    {
        return m_data.nID;
    }

	// Ч������
	virtual bool			Start( EFFECT_CONTEXT * context,CONDITION_CONTEXT *pConditionContext )
	{
		if (context == NULL || context->pEntity == NULL)
		{
			return false;
		}

		__IWingPart *pWingPart = (__IWingPart *)context->pEntity->getEntityPart(PART_WING);
		if (pWingPart == NULL)
		{
			return false;
		}
		// ���ó������
		pWingPart->SetWingProperty(m_data.nType, m_data.fValue);

        return true;
	}

	// Ч��ֹͣ
	virtual void			Stop()
	{
	}

	// ��¡һ����Ч��
	virtual IEffect *       Clone() 
	{
		return new CEffectSetWingProperty(m_data);
	}

	// �ͷ�
	virtual void			Release() 
	{
		Stop();
		delete this;
	}

private:
	SCHEME_DATA               m_data;
};