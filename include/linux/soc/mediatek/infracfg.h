/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __SOC_MEDIATEK_INFRACFG_H
#define __SOC_MEDIATEK_INFRACFG_H

#define MT8173_TOP_AXI_PROT_EN_MCI_M2		BIT(0)
#define MT8173_TOP_AXI_PROT_EN_MM_M0		BIT(1)
#define MT8173_TOP_AXI_PROT_EN_MM_M1		BIT(2)
#define MT8173_TOP_AXI_PROT_EN_MMAPB_S		BIT(6)
#define MT8173_TOP_AXI_PROT_EN_L2C_M2		BIT(9)
#define MT8173_TOP_AXI_PROT_EN_L2SS_SMI		BIT(11)
#define MT8173_TOP_AXI_PROT_EN_L2SS_ADD		BIT(12)
#define MT8173_TOP_AXI_PROT_EN_CCI_M2		BIT(13)
#define MT8173_TOP_AXI_PROT_EN_MFG_S		BIT(14)
#define MT8173_TOP_AXI_PROT_EN_PERI_M0		BIT(15)
#define MT8173_TOP_AXI_PROT_EN_PERI_M1		BIT(16)
#define MT8173_TOP_AXI_PROT_EN_DEBUGSYS		BIT(17)
#define MT8173_TOP_AXI_PROT_EN_CQ_DMA		BIT(18)
#define MT8173_TOP_AXI_PROT_EN_GCPU		BIT(19)
#define MT8173_TOP_AXI_PROT_EN_IOMMU		BIT(20)
#define MT8173_TOP_AXI_PROT_EN_MFG_M0		BIT(21)
#define MT8173_TOP_AXI_PROT_EN_MFG_M1		BIT(22)
#define MT8173_TOP_AXI_PROT_EN_MFG_SNOOP_OUT	BIT(23)

#define MT2701_TOP_AXI_PROT_EN_MM_M0		BIT(1)
#define MT2701_TOP_AXI_PROT_EN_CONN_M		BIT(2)
#define MT2701_TOP_AXI_PROT_EN_CONN_S		BIT(8)

#define MT7622_TOP_AXI_PROT_EN_ETHSYS		(BIT(3) | BIT(17))
#define MT7622_TOP_AXI_PROT_EN_HIF0		(BIT(24) | BIT(25))
#define MT7622_TOP_AXI_PROT_EN_HIF1		(BIT(26) | BIT(27) | \
						 BIT(28))
#define MT7622_TOP_AXI_PROT_EN_WB		(BIT(2) | BIT(6) | \
						 BIT(7) | BIT(8))

#define MT6779_IFR_SET				0x02A0
#define MT6779_IFR_CLR				0x02A4

#define MT6779_IFR1_SET				0x02A8
#define MT6779_IFR1_CLR				0x02AC
#define MT6779_IFR2_SET				0x0714
#define MT6779_IFR2_CLR				0x0718
#define MT6779_IFRMCU_SET			0x02C4
#define MT6779_IFRMCU_CLR			0x02C8
#define MT6779_IFRMM_SET			0x02D4
#define MT6779_IFRMM_CLR			0x02D8

#define MT6779_IFR_STA1				0x0228
#define MT6779_IFR1_STA1			0x0258
#define MT6779_IFR1_STA2			0x0724
#define MT6779_IFRMM_STA1			0x02EC
#define MT6779_IFRMCU_STA1			0x02E4

#define MT6779_SMI_SET				0x03C4
#define MT6779_SMI_CLR				0x03C8
#define MT6779_SMI_STA				0x03C0

#define MT6779_IFR_SI0_SET			0x3B8
#define MT6779_IFR_SI0_CLR			0x3BC
#define MT6779_IFR_PDN_SI2_CTL			0x234
#define MT6779_IFR_SI0_STA			0x0
#define MT6779_IFR_SI2_STA			0x28

int mtk_infracfg_set_bus_protection(struct regmap *infracfg, u32 mask,
		bool reg_update);
int mtk_infracfg_clear_bus_protection(struct regmap *infracfg, u32 mask,
		bool reg_update);
#endif /* __SOC_MEDIATEK_INFRACFG_H */
