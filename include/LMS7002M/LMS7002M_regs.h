
///
/// \file LMS7002M/LMS7002M_regs.h
///
/// Register address and field shift constants for LMS7002M.
///
/// \copyright
/// Copyright (c) 2014-2015 Fairwaves, Inc.
/// Copyright (c) 2014-2015 Rice University
/// SPDX-License-Identifier: Apache-2.0
/// http://www.apache.org/licenses/LICENSE-2.0
///

//------ this is a generated file, do not edit --------//

#pragma once

struct LMS7002M_regs_struct;
typedef struct LMS7002M_regs_struct LMS7002M_regs_t;

//! initialize a register structure with default values
static inline void LMS7002M_regs_init(LMS7002M_regs_t *regs);

//! set the fields from the value that belong to the register specified by addr
static inline void LMS7002M_regs_set(LMS7002M_regs_t *regs, const int addr, const int value);

//! get the value of the register specified by the fields at the given address
static inline int LMS7002M_regs_get(LMS7002M_regs_t *regs, const int addr);

//! enumerated values for some registers
#define REG_0X0020_MAC_CHAB 3
#define REG_0X0020_MAC_CHA 1
#define REG_0X0020_MAC_CHB 2
#define REG_0X0020_MAC_NONE 0
#define REG_0X0021_SPIMODE_3WIRE 0
#define REG_0X0021_SPIMODE_4WIRE 1
#define REG_0X0023_DIQDIR2_OUTPUT 0
#define REG_0X0023_DIQDIR2_INPUT 1
#define REG_0X0023_DIQDIR1_OUTPUT 0
#define REG_0X0023_DIQDIR1_INPUT 1
#define REG_0X0023_ENABLEDIR2_OUTPUT 0
#define REG_0X0023_ENABLEDIR2_INPUT 1
#define REG_0X0023_ENABLEDIR1_OUTPUT 0
#define REG_0X0023_ENABLEDIR1_INPUT 1
#define REG_0X0023_LML_TXNRXIQ2_TXIQ 1
#define REG_0X0023_LML_TXNRXIQ2_RXIQ 0
#define REG_0X0023_LML_MODE2_TRXIQ 0
#define REG_0X0023_LML_MODE2_JESD207 1
#define REG_0X0023_LML_TXNRXIQ1_TXIQ 1
#define REG_0X0023_LML_TXNRXIQ1_RXIQ 0
#define REG_0X0023_LML_MODE1_TRXIQ 0
#define REG_0X0023_LML_MODE1_JESD207 1
#define REG_0X0024_LML1_S3S_AQ 1
#define REG_0X0024_LML1_S3S_AI 0
#define REG_0X0024_LML1_S3S_BQ 3
#define REG_0X0024_LML1_S3S_BI 2
#define REG_0X0024_LML1_S2S_AQ 1
#define REG_0X0024_LML1_S2S_AI 0
#define REG_0X0024_LML1_S2S_BQ 3
#define REG_0X0024_LML1_S2S_BI 2
#define REG_0X0024_LML1_S1S_AQ 1
#define REG_0X0024_LML1_S1S_AI 0
#define REG_0X0024_LML1_S1S_BQ 3
#define REG_0X0024_LML1_S1S_BI 2
#define REG_0X0024_LML1_S0S_AQ 1
#define REG_0X0024_LML1_S0S_AI 0
#define REG_0X0024_LML1_S0S_BQ 3
#define REG_0X0024_LML1_S0S_BI 2
#define REG_0X0027_LML2_S3S_AQ 1
#define REG_0X0027_LML2_S3S_AI 0
#define REG_0X0027_LML2_S3S_BQ 3
#define REG_0X0027_LML2_S3S_BI 2
#define REG_0X0027_LML2_S2S_AQ 1
#define REG_0X0027_LML2_S2S_AI 0
#define REG_0X0027_LML2_S2S_BQ 3
#define REG_0X0027_LML2_S2S_BI 2
#define REG_0X0027_LML2_S1S_AQ 1
#define REG_0X0027_LML2_S1S_AI 0
#define REG_0X0027_LML2_S1S_BQ 3
#define REG_0X0027_LML2_S1S_BI 2
#define REG_0X0027_LML2_S0S_AQ 1
#define REG_0X0027_LML2_S0S_AI 0
#define REG_0X0027_LML2_S0S_BQ 3
#define REG_0X0027_LML2_S0S_BI 2
#define REG_0X002A_RX_MUX_TXFIFO 1
#define REG_0X002A_RX_MUX_LFSR 2
#define REG_0X002A_RX_MUX_LFSR_ 3
#define REG_0X002A_RX_MUX_RXTSP 0
#define REG_0X002A_TX_MUX_RXTSP_ 3
#define REG_0X002A_TX_MUX_PORT2 1
#define REG_0X002A_TX_MUX_RXTSP 2
#define REG_0X002A_TX_MUX_PORT1 0
#define REG_0X002A_TXRDCLK_MUX_TXTSPCLK_ 3
#define REG_0X002A_TXRDCLK_MUX_FCLK2 1
#define REG_0X002A_TXRDCLK_MUX_FCLK1 0
#define REG_0X002A_TXRDCLK_MUX_TXTSPCLK 2
#define REG_0X002A_TXWRCLK_MUX_RXTSPCLK_ 3
#define REG_0X002A_TXWRCLK_MUX_RXTSPCLK 2
#define REG_0X002A_TXWRCLK_MUX_FCLK1 0
#define REG_0X002A_TXWRCLK_MUX_FCLK2 1
#define REG_0X002A_RXRDCLK_MUX_MCLK1 0
#define REG_0X002A_RXRDCLK_MUX_FCLK2 3
#define REG_0X002A_RXRDCLK_MUX_FCLK1 2
#define REG_0X002A_RXRDCLK_MUX_MCLK2 1
#define REG_0X002A_RXWRCLK_MUX_RXTSPCLK_ 3
#define REG_0X002A_RXWRCLK_MUX_RXTSPCLK 2
#define REG_0X002A_RXWRCLK_MUX_FCLK1 0
#define REG_0X002A_RXWRCLK_MUX_FCLK2 1
#define REG_0X002B_MCLK2SRC_TXTSPCLKA_DIV 0
#define REG_0X002B_MCLK2SRC_RXTSPCLKA_DIV 1
#define REG_0X002B_MCLK2SRC_TXTSPCLKA 2
#define REG_0X002B_MCLK2SRC_RXTSPCLKA 3
#define REG_0X002B_MCLK1SRC_TXTSPCLKA_DIV 0
#define REG_0X002B_MCLK1SRC_RXTSPCLKA_DIV 1
#define REG_0X002B_MCLK1SRC_TXTSPCLKA 2
#define REG_0X002B_MCLK1SRC_RXTSPCLKA 3
#define REG_0X0089_SEL_SDMCLK_CGEN_CLK_DIV 0
#define REG_0X0089_SEL_SDMCLK_CGEN_CLK_REF 1
#define REG_0X0089_TST_CGEN_DISABLED 0
#define REG_0X0089_TST_CGEN_PFD_UP 5
#define REG_0X0089_TST_CGEN_VCO_TUNE 3
#define REG_0X0089_TST_CGEN_VCO_TUNE_50_KOHM 2
#define REG_0X0089_TST_CGEN_TSTDO 1
#define REG_0X0100_EN_NEXTTX_TRF_SISO 0
#define REG_0X0100_EN_NEXTTX_TRF_MIMO 1
#define REG_0X010D_SEL_PATH_RFE_LNAH 1
#define REG_0X010D_SEL_PATH_RFE_NONE 0
#define REG_0X010D_SEL_PATH_RFE_LNAL 2
#define REG_0X010D_SEL_PATH_RFE_LNAW 3
#define REG_0X010D_EN_NEXTRX_RFE_SISO 0
#define REG_0X010D_EN_NEXTRX_RFE_MIMO 1
#define REG_0X0200_TSGFC_NEG6DB 0
#define REG_0X0200_TSGFC_FS 1
#define REG_0X0200_TSGFCW_DIV4 2
#define REG_0X0200_TSGFCW_DIV8 1
#define REG_0X0200_TSGMODE_DC 1
#define REG_0X0200_TSGMODE_NCO 0
#define REG_0X0200_INSEL_TEST 1
#define REG_0X0200_INSEL_LML 0
#define REG_0X0203_HBI_OVR_BYPASS 7
#define REG_0X0208_CMIX_GAIN_NEG6DB 2
#define REG_0X0208_CMIX_GAIN_POS6DB 1
#define REG_0X0208_CMIX_GAIN_0DB 0
#define REG_0X0208_CMIX_SC_UPCONVERT 0
#define REG_0X0208_CMIX_SC_DOWNCONVERT 1
#define REG_0X0240_MODE_PHO 1
#define REG_0X0240_MODE_FCW 0
#define REG_0X0400_CAPSEL_BSIGQ_BSTATE 3
#define REG_0X0400_CAPSEL_RSSI 0
#define REG_0X0400_CAPSEL_BSIGI_BSTATE 2
#define REG_0X0400_CAPSEL_ADCI_ADCQ 1
#define REG_0X0400_TSGFC_NEG6DB 0
#define REG_0X0400_TSGFC_FS 1
#define REG_0X0400_TSGFCW_DIV4 2
#define REG_0X0400_TSGFCW_DIV8 1
#define REG_0X0400_TSGMODE_DC 1
#define REG_0X0400_TSGMODE_NCO 0
#define REG_0X0400_INSEL_TEST 1
#define REG_0X0400_INSEL_LML 0
#define REG_0X0403_HBI_OVR_BYPASS 7
#define REG_0X040A_AGC_MODE_RSSI 1
#define REG_0X040A_AGC_MODE_AGC 0
#define REG_0X040A_AGC_MODE_BYPASS 2
#define REG_0X040C_CMIX_GAIN_NEG6DB 2
#define REG_0X040C_CMIX_GAIN_POS6DB 1
#define REG_0X040C_CMIX_GAIN_0DB 0
#define REG_0X040C_CMIX_SC_UPCONVERT 0
#define REG_0X040C_CMIX_SC_DOWNCONVERT 1

struct LMS7002M_regs_struct
{
    int reg_0x0020_lrst_tx_b;
    int reg_0x0020_mrst_tx_b;
    int reg_0x0020_lrst_tx_a;
    int reg_0x0020_mrst_tx_a;
    int reg_0x0020_lrst_rx_b;
    int reg_0x0020_mrst_rx_b;
    int reg_0x0020_lrst_rx_a;
    int reg_0x0020_mrst_rx_a;
    int reg_0x0020_srst_rxfifo;
    int reg_0x0020_srst_txfifo;
    int reg_0x0020_rxen_b;
    int reg_0x0020_rxen_a;
    int reg_0x0020_txen_b;
    int reg_0x0020_txen_a;
    int reg_0x0020_mac;
    int reg_0x0021_tx_clk_pe;
    int reg_0x0021_rx_clk_pe;
    int reg_0x0021_sda_pe;
    int reg_0x0021_sda_ds;
    int reg_0x0021_scl_pe;
    int reg_0x0021_scl_ds;
    int reg_0x0021_sdio_ds;
    int reg_0x0021_sdio_pe;
    int reg_0x0021_sdo_pe;
    int reg_0x0021_sclk_pe;
    int reg_0x0021_sen_pe;
    int reg_0x0021_spimode;
    int reg_0x0023_diqdirctr2;
    int reg_0x0023_diqdir2;
    int reg_0x0023_diqdirctr1;
    int reg_0x0023_diqdir1;
    int reg_0x0023_enabledirctr2;
    int reg_0x0023_enabledir2;
    int reg_0x0023_enabledirctr1;
    int reg_0x0023_enabledir1;
    int reg_0x0023_mod_en;
    int reg_0x0023_lml_fidm2;
    int reg_0x0023_lml_txnrxiq2;
    int reg_0x0023_lml_mode2;
    int reg_0x0023_lml_fidm1;
    int reg_0x0023_lml_txnrxiq1;
    int reg_0x0023_lml_mode1;
    int reg_0x0024_lml1_s3s;
    int reg_0x0024_lml1_s2s;
    int reg_0x0024_lml1_s1s;
    int reg_0x0024_lml1_s0s;
    int reg_0x0024_lml1_bqp;
    int reg_0x0024_lml1_bip;
    int reg_0x0024_lml1_aqp;
    int reg_0x0024_lml1_aip;
    int reg_0x0027_lml2_s3s;
    int reg_0x0027_lml2_s2s;
    int reg_0x0027_lml2_s1s;
    int reg_0x0027_lml2_s0s;
    int reg_0x0027_lml2_bqp;
    int reg_0x0027_lml2_bip;
    int reg_0x0027_lml2_aqp;
    int reg_0x0027_lml2_aip;
    int reg_0x002a_rx_mux;
    int reg_0x002a_tx_mux;
    int reg_0x002a_txrdclk_mux;
    int reg_0x002a_txwrclk_mux;
    int reg_0x002a_rxrdclk_mux;
    int reg_0x002a_rxwrclk_mux;
    int reg_0x002b_fclk2_inv;
    int reg_0x002b_fclk1_inv;
    int reg_0x002b_mclk2dly;
    int reg_0x002b_mclk1dly;
    int reg_0x002b_mclk2src;
    int reg_0x002b_mclk1src;
    int reg_0x002b_txdiven;
    int reg_0x002b_rxdiven;
    int reg_0x002c_txtspclk_div;
    int reg_0x002c_rxtspclk_div;
    int reg_0x002f_ver;
    int reg_0x002f_rev;
    int reg_0x002f_mask;
    int reg_0x0085_slfb_xbuf_rx;
    int reg_0x0085_slfb_xbuf_tx;
    int reg_0x0085_byp_xbuf_rx;
    int reg_0x0085_byp_xbuf_tx;
    int reg_0x0085_en_out2_xbuf_tx;
    int reg_0x0085_en_tbufin_xbuf_rx;
    int reg_0x0085_pd_xbuf_rx;
    int reg_0x0085_pd_xbuf_tx;
    int reg_0x0085_en_g_xbuf;
    int reg_0x0086_spdup_vco_cgen;
    int reg_0x0086_reset_n_cgen;
    int reg_0x0086_en_adcclkh_clkgn;
    int reg_0x0086_en_coarse_cklgen;
    int reg_0x0086_en_intonly_sdm_cgen;
    int reg_0x0086_en_sdm_clk_cgen;
    int reg_0x0086_pd_cp_cgen;
    int reg_0x0086_pd_fdiv_fb_cgen;
    int reg_0x0086_pd_fdiv_o_cgen;
    int reg_0x0086_pd_sdm_cgen;
    int reg_0x0086_pd_vco_cgen;
    int reg_0x0086_pd_vco_comp_cgen;
    int reg_0x0086_en_g_cgen;
    int reg_0x0087_frac_sdm_cgen;
    int reg_0x0088_int_sdm_cgen;
    int reg_0x0088_frac_sdm_cgen;
    int reg_0x0089_rev_sdmclk_cgen;
    int reg_0x0089_sel_sdmclk_cgen;
    int reg_0x0089_sx_dither_en_cgen;
    int reg_0x0089_clkh_ov_clkl_cgen;
    int reg_0x0089_div_outch_cgen;
    int reg_0x0089_tst_cgen;
    int reg_0x008a_rev_clkdac_cgen;
    int reg_0x008a_rev_clkadc_cgen;
    int reg_0x008a_revph_pfd_cgen;
    int reg_0x008a_ioffset_cp_cgen;
    int reg_0x008a_ipulse_cp_cgen;
    int reg_0x008b_ict_vco_cgen;
    int reg_0x008b_csw_vco_cgen;
    int reg_0x008b_coarse_start_cgen;
    int reg_0x008c_coarse_stepdone_cgen;
    int reg_0x008c_coarsepll_compo_cgen;
    int reg_0x008c_vco_cmpho_cgen;
    int reg_0x008c_vco_cmplo_cgen;
    int reg_0x008c_cp2_cgen;
    int reg_0x008c_cp3_cgen;
    int reg_0x008c_cz_cgen;
    int reg_0x008d_resrv_cgn;
    int reg_0x0100_en_lowbwlomx_tmx_trf;
    int reg_0x0100_en_nexttx_trf;
    int reg_0x0100_en_amphf_pdet_trf;
    int reg_0x0100_loadr_pdet_trf;
    int reg_0x0100_pd_pdet_trf;
    int reg_0x0100_pd_tlobuf_trf;
    int reg_0x0100_pd_txpad_trf;
    int reg_0x0100_en_g_trf;
    int reg_0x0101_f_txpad_trf;
    int reg_0x0101_l_loopb_txpad_trf;
    int reg_0x0101_loss_lin_txpad_trf;
    int reg_0x0101_loss_main_txpad_trf;
    int reg_0x0101_en_loopb_txpad_trf;
    int reg_0x0102_gcas_gndref_txpad_trf;
    int reg_0x0102_ict_lin_txpad_trf;
    int reg_0x0102_ict_main_txpad_trf;
    int reg_0x0102_vgcas_txpad_trf;
    int reg_0x0103_sel_band1_trf;
    int reg_0x0103_sel_band2_trf;
    int reg_0x0103_lobiasn_txm_trf;
    int reg_0x0103_lobiasp_txx_trf;
    int reg_0x0104_cdc_i_trf;
    int reg_0x0104_cdc_q_trf;
    int reg_0x010c_cdc_i_rfe;
    int reg_0x010c_cdc_q_rfe;
    int reg_0x010c_pd_lna_rfe;
    int reg_0x010c_pd_rloopb_1_rfe;
    int reg_0x010c_pd_rloopb_2_rfe;
    int reg_0x010c_pd_mxlobuf_rfe;
    int reg_0x010c_pd_qgen_rfe;
    int reg_0x010c_pd_rssi_rfe;
    int reg_0x010c_pd_tia_rfe;
    int reg_0x010c_en_g_rfe;
    int reg_0x010d_sel_path_rfe;
    int reg_0x010d_en_dcoff_rxfe_rfe;
    int reg_0x010d_en_inshsw_lb1_rfe;
    int reg_0x010d_en_inshsw_lb2_rfe;
    int reg_0x010d_en_inshsw_l_rfe;
    int reg_0x010d_en_inshsw_w_rfe;
    int reg_0x010d_en_nextrx_rfe;
    int reg_0x010e_dcoffi_rfe;
    int reg_0x010e_dcoffq_rfe;
    int reg_0x010f_ict_loopb_rfe;
    int reg_0x010f_ict_tiamain_rfe;
    int reg_0x010f_ict_tiaout_rfe;
    int reg_0x0110_ict_lnacmo_rfe;
    int reg_0x0110_ict_lna_rfe;
    int reg_0x0110_ict_lodc_rfe;
    int reg_0x0111_cap_rxmxo_rfe;
    int reg_0x0111_cgsin_lna_rfe;
    int reg_0x0112_ccomp_tia_rfe;
    int reg_0x0112_cfb_tia_rfe;
    int reg_0x0113_g_lna_rfe;
    int reg_0x0113_g_rxloopb_rfe;
    int reg_0x0113_g_tia_rfe;
    int reg_0x0114_rcomp_tia_rfe;
    int reg_0x0114_rfb_tia_rfe;
    int reg_0x0200_tsgfc;
    int reg_0x0200_tsgfcw;
    int reg_0x0200_tsgdcldq;
    int reg_0x0200_tsgdcldi;
    int reg_0x0200_tsgswapiq;
    int reg_0x0200_tsgmode;
    int reg_0x0200_insel;
    int reg_0x0200_bstart;
    int reg_0x0200_en;
    int reg_0x0201_gcorrq;
    int reg_0x0202_gcorri;
    int reg_0x0203_hbi_ovr;
    int reg_0x0203_iqcorr;
    int reg_0x0204_dccorri;
    int reg_0x0204_dccorrq;
    int reg_0x0205_gfir1_l;
    int reg_0x0205_gfir1_n;
    int reg_0x0206_gfir2_l;
    int reg_0x0206_gfir2_n;
    int reg_0x0207_gfir3_l;
    int reg_0x0207_gfir3_n;
    int reg_0x0208_cmix_gain;
    int reg_0x0208_cmix_sc;
    int reg_0x0208_cmix_byp;
    int reg_0x0208_isinc_byp;
    int reg_0x0208_gfir3_byp;
    int reg_0x0208_gfir2_byp;
    int reg_0x0208_gfir1_byp;
    int reg_0x0208_dc_byp;
    int reg_0x0208_gc_byp;
    int reg_0x0208_ph_byp;
    int reg_0x0240_dthbit;
    int reg_0x0240_sel;
    int reg_0x0240_mode;
    int reg_0x0241_pho;
    int reg_0x0242_fcw0_hi;
    int reg_0x0243_fcw0_lo;
    int reg_0x0400_capsel;
    int reg_0x0400_tsgfc;
    int reg_0x0400_capture;
    int reg_0x0400_tsgfcw;
    int reg_0x0400_tsgdcldq;
    int reg_0x0400_tsgdcldi;
    int reg_0x0400_tsgswapiq;
    int reg_0x0400_tsgmode;
    int reg_0x0400_insel;
    int reg_0x0400_bstart;
    int reg_0x0400_en;
    int reg_0x0401_gcorrq;
    int reg_0x0402_gcorri;
    int reg_0x0403_hbi_ovr;
    int reg_0x0403_iqcorr;
    int reg_0x0404_dccorr_avg;
    int reg_0x0405_gfir1_l;
    int reg_0x0405_gfir1_n;
    int reg_0x0406_gfir2_l;
    int reg_0x0406_gfir2_n;
    int reg_0x0407_gfir3_l;
    int reg_0x0407_gfir3_n;
    int reg_0x0408_agc_k_lsb;
    int reg_0x0409_agc_adesired;
    int reg_0x0409_agc_k_msb;
    int reg_0x040a_agc_mode;
    int reg_0x040a_agc_avg;
    int reg_0x040b_dc_reg;
    int reg_0x040c_cmix_gain;
    int reg_0x040c_cmix_sc;
    int reg_0x040c_cmix_byp;
    int reg_0x040c_isinc_byp;
    int reg_0x040c_gfir3_byp;
    int reg_0x040c_gfir2_byp;
    int reg_0x040c_gfir1_byp;
    int reg_0x040c_dc_byp;
    int reg_0x040c_gc_byp;
    int reg_0x040c_ph_byp;
};

/***********************************************************************
 * Implementation details below
 **********************************************************************/

static inline void LMS7002M_regs_init(LMS7002M_regs_t *regs)
{
    LMS7002M_regs_set(regs, 0x0020, 0xffff);
    LMS7002M_regs_set(regs, 0x0021, 0xe9f);
    LMS7002M_regs_set(regs, 0x0023, 0x5559);
    LMS7002M_regs_set(regs, 0x0024, 0xe4e4);
    LMS7002M_regs_set(regs, 0x0027, 0xe4e4);
    LMS7002M_regs_set(regs, 0x002A, 0x86);
    LMS7002M_regs_set(regs, 0x002B, 0x10);
    LMS7002M_regs_set(regs, 0x002C, 0xffff);
    LMS7002M_regs_set(regs, 0x002F, 0x3840);
    LMS7002M_regs_set(regs, 0x0085, 0x1);
    LMS7002M_regs_set(regs, 0x0086, 0x4905);
    LMS7002M_regs_set(regs, 0x0087, 0x400);
    LMS7002M_regs_set(regs, 0x0088, 0x780);
    LMS7002M_regs_set(regs, 0x0089, 0x20);
    LMS7002M_regs_set(regs, 0x008A, 0x514);
    LMS7002M_regs_set(regs, 0x008B, 0x1900);
    LMS7002M_regs_set(regs, 0x008C, 0x67b);
    LMS7002M_regs_set(regs, 0x008D, 0x0);
    LMS7002M_regs_set(regs, 0x0100, 0x3409);
    LMS7002M_regs_set(regs, 0x0101, 0x7800);
    LMS7002M_regs_set(regs, 0x0102, 0x3180);
    LMS7002M_regs_set(regs, 0x0103, 0xa12);
    LMS7002M_regs_set(regs, 0x0104, 0x88);
    LMS7002M_regs_set(regs, 0x010C, 0x88fd);
    LMS7002M_regs_set(regs, 0x010D, 0x9e);
    LMS7002M_regs_set(regs, 0x010E, 0x2040);
    LMS7002M_regs_set(regs, 0x010F, 0x318c);
    LMS7002M_regs_set(regs, 0x0110, 0x994);
    LMS7002M_regs_set(regs, 0x0111, 0x83);
    LMS7002M_regs_set(regs, 0x0112, 0xc0e6);
    LMS7002M_regs_set(regs, 0x0113, 0x3c3);
    LMS7002M_regs_set(regs, 0x0114, 0x8d);
    LMS7002M_regs_set(regs, 0x0200, 0x81);
    LMS7002M_regs_set(regs, 0x0201, 0x7ff);
    LMS7002M_regs_set(regs, 0x0202, 0x7ff);
    LMS7002M_regs_set(regs, 0x0203, 0x0);
    LMS7002M_regs_set(regs, 0x0204, 0x0);
    LMS7002M_regs_set(regs, 0x0205, 0x0);
    LMS7002M_regs_set(regs, 0x0206, 0x0);
    LMS7002M_regs_set(regs, 0x0207, 0x0);
    LMS7002M_regs_set(regs, 0x0208, 0x0);
    LMS7002M_regs_set(regs, 0x0240, 0x20);
    LMS7002M_regs_set(regs, 0x0241, 0x0);
    LMS7002M_regs_set(regs, 0x0242, 0x0);
    LMS7002M_regs_set(regs, 0x0243, 0x0);
    LMS7002M_regs_set(regs, 0x0400, 0x81);
    LMS7002M_regs_set(regs, 0x0401, 0x7ff);
    LMS7002M_regs_set(regs, 0x0402, 0x7ff);
    LMS7002M_regs_set(regs, 0x0403, 0x0);
    LMS7002M_regs_set(regs, 0x0404, 0x0);
    LMS7002M_regs_set(regs, 0x0405, 0x0);
    LMS7002M_regs_set(regs, 0x0406, 0x0);
    LMS7002M_regs_set(regs, 0x0407, 0x0);
    LMS7002M_regs_set(regs, 0x0408, 0x0);
    LMS7002M_regs_set(regs, 0x0409, 0x0);
    LMS7002M_regs_set(regs, 0x040A, 0x0);
    LMS7002M_regs_set(regs, 0x040B, 0x0);
    LMS7002M_regs_set(regs, 0x040C, 0x0);
}

static inline void LMS7002M_regs_set(LMS7002M_regs_t *regs, const int addr, const int value)
{
    if (addr == 0x0020)
    {
        regs->reg_0x0020_lrst_tx_b = (value >> 15) & 0x1;
        regs->reg_0x0020_mrst_tx_b = (value >> 14) & 0x1;
        regs->reg_0x0020_lrst_tx_a = (value >> 13) & 0x1;
        regs->reg_0x0020_mrst_tx_a = (value >> 12) & 0x1;
        regs->reg_0x0020_lrst_rx_b = (value >> 11) & 0x1;
        regs->reg_0x0020_mrst_rx_b = (value >> 10) & 0x1;
        regs->reg_0x0020_lrst_rx_a = (value >> 9) & 0x1;
        regs->reg_0x0020_mrst_rx_a = (value >> 8) & 0x1;
        regs->reg_0x0020_srst_rxfifo = (value >> 7) & 0x1;
        regs->reg_0x0020_srst_txfifo = (value >> 6) & 0x1;
        regs->reg_0x0020_rxen_b = (value >> 5) & 0x1;
        regs->reg_0x0020_rxen_a = (value >> 4) & 0x1;
        regs->reg_0x0020_txen_b = (value >> 3) & 0x1;
        regs->reg_0x0020_txen_a = (value >> 2) & 0x1;
        regs->reg_0x0020_mac = (value >> 0) & 0x3;
        return;
    }
    if (addr == 0x0021)
    {
        regs->reg_0x0021_tx_clk_pe = (value >> 11) & 0x1;
        regs->reg_0x0021_rx_clk_pe = (value >> 10) & 0x1;
        regs->reg_0x0021_sda_pe = (value >> 9) & 0x1;
        regs->reg_0x0021_sda_ds = (value >> 8) & 0x1;
        regs->reg_0x0021_scl_pe = (value >> 7) & 0x1;
        regs->reg_0x0021_scl_ds = (value >> 6) & 0x1;
        regs->reg_0x0021_sdio_ds = (value >> 5) & 0x1;
        regs->reg_0x0021_sdio_pe = (value >> 4) & 0x1;
        regs->reg_0x0021_sdo_pe = (value >> 3) & 0x1;
        regs->reg_0x0021_sclk_pe = (value >> 2) & 0x1;
        regs->reg_0x0021_sen_pe = (value >> 1) & 0x1;
        regs->reg_0x0021_spimode = (value >> 0) & 0x1;
        return;
    }
    if (addr == 0x0023)
    {
        regs->reg_0x0023_diqdirctr2 = (value >> 15) & 0x1;
        regs->reg_0x0023_diqdir2 = (value >> 14) & 0x1;
        regs->reg_0x0023_diqdirctr1 = (value >> 13) & 0x1;
        regs->reg_0x0023_diqdir1 = (value >> 12) & 0x1;
        regs->reg_0x0023_enabledirctr2 = (value >> 11) & 0x1;
        regs->reg_0x0023_enabledir2 = (value >> 10) & 0x1;
        regs->reg_0x0023_enabledirctr1 = (value >> 9) & 0x1;
        regs->reg_0x0023_enabledir1 = (value >> 8) & 0x1;
        regs->reg_0x0023_mod_en = (value >> 6) & 0x1;
        regs->reg_0x0023_lml_fidm2 = (value >> 5) & 0x1;
        regs->reg_0x0023_lml_txnrxiq2 = (value >> 4) & 0x1;
        regs->reg_0x0023_lml_mode2 = (value >> 3) & 0x1;
        regs->reg_0x0023_lml_fidm1 = (value >> 2) & 0x1;
        regs->reg_0x0023_lml_txnrxiq1 = (value >> 1) & 0x1;
        regs->reg_0x0023_lml_mode1 = (value >> 0) & 0x1;
        return;
    }
    if (addr == 0x0024)
    {
        regs->reg_0x0024_lml1_s3s = (value >> 14) & 0x3;
        regs->reg_0x0024_lml1_s2s = (value >> 12) & 0x3;
        regs->reg_0x0024_lml1_s1s = (value >> 10) & 0x3;
        regs->reg_0x0024_lml1_s0s = (value >> 8) & 0x3;
        regs->reg_0x0024_lml1_bqp = (value >> 6) & 0x3;
        regs->reg_0x0024_lml1_bip = (value >> 4) & 0x3;
        regs->reg_0x0024_lml1_aqp = (value >> 2) & 0x3;
        regs->reg_0x0024_lml1_aip = (value >> 0) & 0x3;
        return;
    }
    if (addr == 0x0027)
    {
        regs->reg_0x0027_lml2_s3s = (value >> 14) & 0x3;
        regs->reg_0x0027_lml2_s2s = (value >> 12) & 0x3;
        regs->reg_0x0027_lml2_s1s = (value >> 10) & 0x3;
        regs->reg_0x0027_lml2_s0s = (value >> 8) & 0x3;
        regs->reg_0x0027_lml2_bqp = (value >> 6) & 0x3;
        regs->reg_0x0027_lml2_bip = (value >> 4) & 0x3;
        regs->reg_0x0027_lml2_aqp = (value >> 2) & 0x3;
        regs->reg_0x0027_lml2_aip = (value >> 0) & 0x3;
        return;
    }
    if (addr == 0x002A)
    {
        regs->reg_0x002a_rx_mux = (value >> 10) & 0x3;
        regs->reg_0x002a_tx_mux = (value >> 8) & 0x3;
        regs->reg_0x002a_txrdclk_mux = (value >> 6) & 0x3;
        regs->reg_0x002a_txwrclk_mux = (value >> 4) & 0x3;
        regs->reg_0x002a_rxrdclk_mux = (value >> 2) & 0x3;
        regs->reg_0x002a_rxwrclk_mux = (value >> 0) & 0x3;
        return;
    }
    if (addr == 0x002B)
    {
        regs->reg_0x002b_fclk2_inv = (value >> 15) & 0x1;
        regs->reg_0x002b_fclk1_inv = (value >> 14) & 0x1;
        regs->reg_0x002b_mclk2dly = (value >> 12) & 0x3;
        regs->reg_0x002b_mclk1dly = (value >> 10) & 0x3;
        regs->reg_0x002b_mclk2src = (value >> 4) & 0x3;
        regs->reg_0x002b_mclk1src = (value >> 2) & 0x3;
        regs->reg_0x002b_txdiven = (value >> 1) & 0x1;
        regs->reg_0x002b_rxdiven = (value >> 0) & 0x1;
        return;
    }
    if (addr == 0x002C)
    {
        regs->reg_0x002c_txtspclk_div = (value >> 8) & 0xff;
        regs->reg_0x002c_rxtspclk_div = (value >> 0) & 0xff;
        return;
    }
    if (addr == 0x002F)
    {
        regs->reg_0x002f_ver = (value >> 11) & 0x1f;
        regs->reg_0x002f_rev = (value >> 6) & 0x1f;
        regs->reg_0x002f_mask = (value >> 0) & 0x3f;
        return;
    }
    if (addr == 0x0085)
    {
        regs->reg_0x0085_slfb_xbuf_rx = (value >> 8) & 0x1;
        regs->reg_0x0085_slfb_xbuf_tx = (value >> 7) & 0x1;
        regs->reg_0x0085_byp_xbuf_rx = (value >> 6) & 0x1;
        regs->reg_0x0085_byp_xbuf_tx = (value >> 5) & 0x1;
        regs->reg_0x0085_en_out2_xbuf_tx = (value >> 4) & 0x1;
        regs->reg_0x0085_en_tbufin_xbuf_rx = (value >> 3) & 0x1;
        regs->reg_0x0085_pd_xbuf_rx = (value >> 2) & 0x1;
        regs->reg_0x0085_pd_xbuf_tx = (value >> 1) & 0x1;
        regs->reg_0x0085_en_g_xbuf = (value >> 0) & 0x1;
        return;
    }
    if (addr == 0x0086)
    {
        regs->reg_0x0086_spdup_vco_cgen = (value >> 15) & 0x1;
        regs->reg_0x0086_reset_n_cgen = (value >> 14) & 0x1;
        regs->reg_0x0086_en_adcclkh_clkgn = (value >> 11) & 0x1;
        regs->reg_0x0086_en_coarse_cklgen = (value >> 10) & 0x1;
        regs->reg_0x0086_en_intonly_sdm_cgen = (value >> 9) & 0x1;
        regs->reg_0x0086_en_sdm_clk_cgen = (value >> 8) & 0x1;
        regs->reg_0x0086_pd_cp_cgen = (value >> 6) & 0x1;
        regs->reg_0x0086_pd_fdiv_fb_cgen = (value >> 5) & 0x1;
        regs->reg_0x0086_pd_fdiv_o_cgen = (value >> 4) & 0x1;
        regs->reg_0x0086_pd_sdm_cgen = (value >> 3) & 0x1;
        regs->reg_0x0086_pd_vco_cgen = (value >> 2) & 0x1;
        regs->reg_0x0086_pd_vco_comp_cgen = (value >> 1) & 0x1;
        regs->reg_0x0086_en_g_cgen = (value >> 0) & 0x1;
        return;
    }
    if (addr == 0x0087)
    {
        regs->reg_0x0087_frac_sdm_cgen = (value >> 0) & 0xffff;
        return;
    }
    if (addr == 0x0088)
    {
        regs->reg_0x0088_int_sdm_cgen = (value >> 4) & 0x3ff;
        regs->reg_0x0088_frac_sdm_cgen = (value >> 0) & 0xf;
        return;
    }
    if (addr == 0x0089)
    {
        regs->reg_0x0089_rev_sdmclk_cgen = (value >> 15) & 0x1;
        regs->reg_0x0089_sel_sdmclk_cgen = (value >> 14) & 0x1;
        regs->reg_0x0089_sx_dither_en_cgen = (value >> 13) & 0x1;
        regs->reg_0x0089_clkh_ov_clkl_cgen = (value >> 11) & 0x3;
        regs->reg_0x0089_div_outch_cgen = (value >> 3) & 0xff;
        regs->reg_0x0089_tst_cgen = (value >> 0) & 0x7;
        return;
    }
    if (addr == 0x008A)
    {
        regs->reg_0x008a_rev_clkdac_cgen = (value >> 14) & 0x1;
        regs->reg_0x008a_rev_clkadc_cgen = (value >> 13) & 0x1;
        regs->reg_0x008a_revph_pfd_cgen = (value >> 12) & 0x1;
        regs->reg_0x008a_ioffset_cp_cgen = (value >> 11) & 0x3f;
        regs->reg_0x008a_ipulse_cp_cgen = (value >> 0) & 0x3f;
        return;
    }
    if (addr == 0x008B)
    {
        regs->reg_0x008b_ict_vco_cgen = (value >> 9) & 0x1f;
        regs->reg_0x008b_csw_vco_cgen = (value >> 1) & 0xff;
        regs->reg_0x008b_coarse_start_cgen = (value >> 0) & 0x1;
        return;
    }
    if (addr == 0x008C)
    {
        regs->reg_0x008c_coarse_stepdone_cgen = (value >> 15) & 0x1;
        regs->reg_0x008c_coarsepll_compo_cgen = (value >> 14) & 0x1;
        regs->reg_0x008c_vco_cmpho_cgen = (value >> 13) & 0x1;
        regs->reg_0x008c_vco_cmplo_cgen = (value >> 12) & 0x1;
        regs->reg_0x008c_cp2_cgen = (value >> 8) & 0xf;
        regs->reg_0x008c_cp3_cgen = (value >> 4) & 0xf;
        regs->reg_0x008c_cz_cgen = (value >> 0) & 0xf;
        return;
    }
    if (addr == 0x008D)
    {
        regs->reg_0x008d_resrv_cgn = (value >> 0) & 0x7;
        return;
    }
    if (addr == 0x0100)
    {
        regs->reg_0x0100_en_lowbwlomx_tmx_trf = (value >> 15) & 0x1;
        regs->reg_0x0100_en_nexttx_trf = (value >> 14) & 0x1;
        regs->reg_0x0100_en_amphf_pdet_trf = (value >> 12) & 0x3;
        regs->reg_0x0100_loadr_pdet_trf = (value >> 10) & 0x3;
        regs->reg_0x0100_pd_pdet_trf = (value >> 3) & 0x1;
        regs->reg_0x0100_pd_tlobuf_trf = (value >> 2) & 0x1;
        regs->reg_0x0100_pd_txpad_trf = (value >> 1) & 0x1;
        regs->reg_0x0100_en_g_trf = (value >> 0) & 0x1;
        return;
    }
    if (addr == 0x0101)
    {
        regs->reg_0x0101_f_txpad_trf = (value >> 13) & 0x7;
        regs->reg_0x0101_l_loopb_txpad_trf = (value >> 11) & 0x3;
        regs->reg_0x0101_loss_lin_txpad_trf = (value >> 6) & 0x1f;
        regs->reg_0x0101_loss_main_txpad_trf = (value >> 1) & 0x1f;
        regs->reg_0x0101_en_loopb_txpad_trf = (value >> 0) & 0x1;
        return;
    }
    if (addr == 0x0102)
    {
        regs->reg_0x0102_gcas_gndref_txpad_trf = (value >> 15) & 0x1;
        regs->reg_0x0102_ict_lin_txpad_trf = (value >> 10) & 0x1f;
        regs->reg_0x0102_ict_main_txpad_trf = (value >> 5) & 0x1f;
        regs->reg_0x0102_vgcas_txpad_trf = (value >> 0) & 0x1f;
        return;
    }
    if (addr == 0x0103)
    {
        regs->reg_0x0103_sel_band1_trf = (value >> 11) & 0x1;
        regs->reg_0x0103_sel_band2_trf = (value >> 10) & 0x1;
        regs->reg_0x0103_lobiasn_txm_trf = (value >> 5) & 0x1f;
        regs->reg_0x0103_lobiasp_txx_trf = (value >> 0) & 0x1f;
        return;
    }
    if (addr == 0x0104)
    {
        regs->reg_0x0104_cdc_i_trf = (value >> 4) & 0xf;
        regs->reg_0x0104_cdc_q_trf = (value >> 0) & 0xf;
        return;
    }
    if (addr == 0x010C)
    {
        regs->reg_0x010c_cdc_i_rfe = (value >> 12) & 0xf;
        regs->reg_0x010c_cdc_q_rfe = (value >> 8) & 0xf;
        regs->reg_0x010c_pd_lna_rfe = (value >> 7) & 0x1;
        regs->reg_0x010c_pd_rloopb_1_rfe = (value >> 6) & 0x1;
        regs->reg_0x010c_pd_rloopb_2_rfe = (value >> 5) & 0x1;
        regs->reg_0x010c_pd_mxlobuf_rfe = (value >> 4) & 0x1;
        regs->reg_0x010c_pd_qgen_rfe = (value >> 3) & 0x1;
        regs->reg_0x010c_pd_rssi_rfe = (value >> 2) & 0x1;
        regs->reg_0x010c_pd_tia_rfe = (value >> 1) & 0x1;
        regs->reg_0x010c_en_g_rfe = (value >> 0) & 0x1;
        return;
    }
    if (addr == 0x010D)
    {
        regs->reg_0x010d_sel_path_rfe = (value >> 7) & 0x3;
        regs->reg_0x010d_en_dcoff_rxfe_rfe = (value >> 6) & 0x1;
        regs->reg_0x010d_en_inshsw_lb1_rfe = (value >> 4) & 0x1;
        regs->reg_0x010d_en_inshsw_lb2_rfe = (value >> 3) & 0x1;
        regs->reg_0x010d_en_inshsw_l_rfe = (value >> 2) & 0x1;
        regs->reg_0x010d_en_inshsw_w_rfe = (value >> 1) & 0x1;
        regs->reg_0x010d_en_nextrx_rfe = (value >> 0) & 0x1;
        return;
    }
    if (addr == 0x010E)
    {
        regs->reg_0x010e_dcoffi_rfe = (value >> 7) & 0x7f;
        regs->reg_0x010e_dcoffq_rfe = (value >> 0) & 0x7f;
        return;
    }
    if (addr == 0x010F)
    {
        regs->reg_0x010f_ict_loopb_rfe = (value >> 10) & 0x1f;
        regs->reg_0x010f_ict_tiamain_rfe = (value >> 5) & 0x1f;
        regs->reg_0x010f_ict_tiaout_rfe = (value >> 0) & 0x1f;
        return;
    }
    if (addr == 0x0110)
    {
        regs->reg_0x0110_ict_lnacmo_rfe = (value >> 10) & 0x1f;
        regs->reg_0x0110_ict_lna_rfe = (value >> 5) & 0x1f;
        regs->reg_0x0110_ict_lodc_rfe = (value >> 0) & 0x1f;
        return;
    }
    if (addr == 0x0111)
    {
        regs->reg_0x0111_cap_rxmxo_rfe = (value >> 5) & 0x1f;
        regs->reg_0x0111_cgsin_lna_rfe = (value >> 0) & 0x1f;
        return;
    }
    if (addr == 0x0112)
    {
        regs->reg_0x0112_ccomp_tia_rfe = (value >> 12) & 0xf;
        regs->reg_0x0112_cfb_tia_rfe = (value >> 0) & 0xfff;
        return;
    }
    if (addr == 0x0113)
    {
        regs->reg_0x0113_g_lna_rfe = (value >> 6) & 0xf;
        regs->reg_0x0113_g_rxloopb_rfe = (value >> 2) & 0xf;
        regs->reg_0x0113_g_tia_rfe = (value >> 0) & 0x3;
        return;
    }
    if (addr == 0x0114)
    {
        regs->reg_0x0114_rcomp_tia_rfe = (value >> 5) & 0xf;
        regs->reg_0x0114_rfb_tia_rfe = (value >> 0) & 0x1f;
        return;
    }
    if (addr == 0x0200)
    {
        regs->reg_0x0200_tsgfc = (value >> 9) & 0x1;
        regs->reg_0x0200_tsgfcw = (value >> 7) & 0x3;
        regs->reg_0x0200_tsgdcldq = (value >> 6) & 0x1;
        regs->reg_0x0200_tsgdcldi = (value >> 5) & 0x1;
        regs->reg_0x0200_tsgswapiq = (value >> 4) & 0x1;
        regs->reg_0x0200_tsgmode = (value >> 3) & 0x1;
        regs->reg_0x0200_insel = (value >> 2) & 0x1;
        regs->reg_0x0200_bstart = (value >> 1) & 0x1;
        regs->reg_0x0200_en = (value >> 0) & 0x1;
        return;
    }
    if (addr == 0x0201)
    {
        regs->reg_0x0201_gcorrq = (value >> 0) & 0x7ff;
        return;
    }
    if (addr == 0x0202)
    {
        regs->reg_0x0202_gcorri = (value >> 0) & 0x7ff;
        return;
    }
    if (addr == 0x0203)
    {
        regs->reg_0x0203_hbi_ovr = (value >> 12) & 0x7;
        regs->reg_0x0203_iqcorr = (value >> 0) & 0xfff;
        return;
    }
    if (addr == 0x0204)
    {
        regs->reg_0x0204_dccorri = (value >> 8) & 0xff;
        regs->reg_0x0204_dccorrq = (value >> 0) & 0xff;
        return;
    }
    if (addr == 0x0205)
    {
        regs->reg_0x0205_gfir1_l = (value >> 8) & 0x7;
        regs->reg_0x0205_gfir1_n = (value >> 0) & 0xff;
        return;
    }
    if (addr == 0x0206)
    {
        regs->reg_0x0206_gfir2_l = (value >> 8) & 0x7;
        regs->reg_0x0206_gfir2_n = (value >> 0) & 0xff;
        return;
    }
    if (addr == 0x0207)
    {
        regs->reg_0x0207_gfir3_l = (value >> 8) & 0x7;
        regs->reg_0x0207_gfir3_n = (value >> 0) & 0xff;
        return;
    }
    if (addr == 0x0208)
    {
        regs->reg_0x0208_cmix_gain = (value >> 14) & 0x3;
        regs->reg_0x0208_cmix_sc = (value >> 13) & 0x1;
        regs->reg_0x0208_cmix_byp = (value >> 8) & 0x1;
        regs->reg_0x0208_isinc_byp = (value >> 7) & 0x1;
        regs->reg_0x0208_gfir3_byp = (value >> 6) & 0x1;
        regs->reg_0x0208_gfir2_byp = (value >> 5) & 0x1;
        regs->reg_0x0208_gfir1_byp = (value >> 4) & 0x1;
        regs->reg_0x0208_dc_byp = (value >> 3) & 0x1;
        regs->reg_0x0208_gc_byp = (value >> 1) & 0x1;
        regs->reg_0x0208_ph_byp = (value >> 0) & 0x1;
        return;
    }
    if (addr == 0x0240)
    {
        regs->reg_0x0240_dthbit = (value >> 5) & 0xf;
        regs->reg_0x0240_sel = (value >> 1) & 0xf;
        regs->reg_0x0240_mode = (value >> 0) & 0x1;
        return;
    }
    if (addr == 0x0241)
    {
        regs->reg_0x0241_pho = (value >> 0) & 0xffff;
        return;
    }
    if (addr == 0x0242)
    {
        regs->reg_0x0242_fcw0_hi = (value >> 0) & 0xffff;
        return;
    }
    if (addr == 0x0243)
    {
        regs->reg_0x0243_fcw0_lo = (value >> 0) & 0xffff;
        return;
    }
    if (addr == 0x0400)
    {
        regs->reg_0x0400_capsel = (value >> 13) & 0x3;
        regs->reg_0x0400_tsgfc = (value >> 9) & 0x1;
        regs->reg_0x0400_capture = (value >> 9) & 0x1;
        regs->reg_0x0400_tsgfcw = (value >> 7) & 0x3;
        regs->reg_0x0400_tsgdcldq = (value >> 6) & 0x1;
        regs->reg_0x0400_tsgdcldi = (value >> 5) & 0x1;
        regs->reg_0x0400_tsgswapiq = (value >> 4) & 0x1;
        regs->reg_0x0400_tsgmode = (value >> 3) & 0x1;
        regs->reg_0x0400_insel = (value >> 2) & 0x1;
        regs->reg_0x0400_bstart = (value >> 1) & 0x1;
        regs->reg_0x0400_en = (value >> 0) & 0x1;
        return;
    }
    if (addr == 0x0401)
    {
        regs->reg_0x0401_gcorrq = (value >> 0) & 0x7ff;
        return;
    }
    if (addr == 0x0402)
    {
        regs->reg_0x0402_gcorri = (value >> 0) & 0x7ff;
        return;
    }
    if (addr == 0x0403)
    {
        regs->reg_0x0403_hbi_ovr = (value >> 12) & 0x7;
        regs->reg_0x0403_iqcorr = (value >> 0) & 0xfff;
        return;
    }
    if (addr == 0x0404)
    {
        regs->reg_0x0404_dccorr_avg = (value >> 0) & 0x7;
        return;
    }
    if (addr == 0x0405)
    {
        regs->reg_0x0405_gfir1_l = (value >> 8) & 0x7;
        regs->reg_0x0405_gfir1_n = (value >> 0) & 0xff;
        return;
    }
    if (addr == 0x0406)
    {
        regs->reg_0x0406_gfir2_l = (value >> 8) & 0x7;
        regs->reg_0x0406_gfir2_n = (value >> 0) & 0xff;
        return;
    }
    if (addr == 0x0407)
    {
        regs->reg_0x0407_gfir3_l = (value >> 8) & 0x7;
        regs->reg_0x0407_gfir3_n = (value >> 0) & 0xff;
        return;
    }
    if (addr == 0x0408)
    {
        regs->reg_0x0408_agc_k_lsb = (value >> 0) & 0xffff;
        return;
    }
    if (addr == 0x0409)
    {
        regs->reg_0x0409_agc_adesired = (value >> 4) & 0xfff;
        regs->reg_0x0409_agc_k_msb = (value >> 0) & 0x3;
        return;
    }
    if (addr == 0x040A)
    {
        regs->reg_0x040a_agc_mode = (value >> 12) & 0x3;
        regs->reg_0x040a_agc_avg = (value >> 0) & 0x7;
        return;
    }
    if (addr == 0x040B)
    {
        regs->reg_0x040b_dc_reg = (value >> 0) & 0xffff;
        return;
    }
    if (addr == 0x040C)
    {
        regs->reg_0x040c_cmix_gain = (value >> 14) & 0x3;
        regs->reg_0x040c_cmix_sc = (value >> 13) & 0x1;
        regs->reg_0x040c_cmix_byp = (value >> 8) & 0x1;
        regs->reg_0x040c_isinc_byp = (value >> 7) & 0x1;
        regs->reg_0x040c_gfir3_byp = (value >> 6) & 0x1;
        regs->reg_0x040c_gfir2_byp = (value >> 5) & 0x1;
        regs->reg_0x040c_gfir1_byp = (value >> 4) & 0x1;
        regs->reg_0x040c_dc_byp = (value >> 3) & 0x1;
        regs->reg_0x040c_gc_byp = (value >> 1) & 0x1;
        regs->reg_0x040c_ph_byp = (value >> 0) & 0x1;
        return;
    }
}

static inline int LMS7002M_regs_get(LMS7002M_regs_t *regs, const int addr)
{
    int value = 0;
    if (addr == 0x0020)
    {
        value |= (regs->reg_0x0020_lrst_tx_b & 0x1) << 15;
        value |= (regs->reg_0x0020_mrst_tx_b & 0x1) << 14;
        value |= (regs->reg_0x0020_lrst_tx_a & 0x1) << 13;
        value |= (regs->reg_0x0020_mrst_tx_a & 0x1) << 12;
        value |= (regs->reg_0x0020_lrst_rx_b & 0x1) << 11;
        value |= (regs->reg_0x0020_mrst_rx_b & 0x1) << 10;
        value |= (regs->reg_0x0020_lrst_rx_a & 0x1) << 9;
        value |= (regs->reg_0x0020_mrst_rx_a & 0x1) << 8;
        value |= (regs->reg_0x0020_srst_rxfifo & 0x1) << 7;
        value |= (regs->reg_0x0020_srst_txfifo & 0x1) << 6;
        value |= (regs->reg_0x0020_rxen_b & 0x1) << 5;
        value |= (regs->reg_0x0020_rxen_a & 0x1) << 4;
        value |= (regs->reg_0x0020_txen_b & 0x1) << 3;
        value |= (regs->reg_0x0020_txen_a & 0x1) << 2;
        value |= (regs->reg_0x0020_mac & 0x3) << 0;
    }
    if (addr == 0x0021)
    {
        value |= (regs->reg_0x0021_tx_clk_pe & 0x1) << 11;
        value |= (regs->reg_0x0021_rx_clk_pe & 0x1) << 10;
        value |= (regs->reg_0x0021_sda_pe & 0x1) << 9;
        value |= (regs->reg_0x0021_sda_ds & 0x1) << 8;
        value |= (regs->reg_0x0021_scl_pe & 0x1) << 7;
        value |= (regs->reg_0x0021_scl_ds & 0x1) << 6;
        value |= (regs->reg_0x0021_sdio_ds & 0x1) << 5;
        value |= (regs->reg_0x0021_sdio_pe & 0x1) << 4;
        value |= (regs->reg_0x0021_sdo_pe & 0x1) << 3;
        value |= (regs->reg_0x0021_sclk_pe & 0x1) << 2;
        value |= (regs->reg_0x0021_sen_pe & 0x1) << 1;
        value |= (regs->reg_0x0021_spimode & 0x1) << 0;
    }
    if (addr == 0x0023)
    {
        value |= (regs->reg_0x0023_diqdirctr2 & 0x1) << 15;
        value |= (regs->reg_0x0023_diqdir2 & 0x1) << 14;
        value |= (regs->reg_0x0023_diqdirctr1 & 0x1) << 13;
        value |= (regs->reg_0x0023_diqdir1 & 0x1) << 12;
        value |= (regs->reg_0x0023_enabledirctr2 & 0x1) << 11;
        value |= (regs->reg_0x0023_enabledir2 & 0x1) << 10;
        value |= (regs->reg_0x0023_enabledirctr1 & 0x1) << 9;
        value |= (regs->reg_0x0023_enabledir1 & 0x1) << 8;
        value |= (regs->reg_0x0023_mod_en & 0x1) << 6;
        value |= (regs->reg_0x0023_lml_fidm2 & 0x1) << 5;
        value |= (regs->reg_0x0023_lml_txnrxiq2 & 0x1) << 4;
        value |= (regs->reg_0x0023_lml_mode2 & 0x1) << 3;
        value |= (regs->reg_0x0023_lml_fidm1 & 0x1) << 2;
        value |= (regs->reg_0x0023_lml_txnrxiq1 & 0x1) << 1;
        value |= (regs->reg_0x0023_lml_mode1 & 0x1) << 0;
    }
    if (addr == 0x0024)
    {
        value |= (regs->reg_0x0024_lml1_s3s & 0x3) << 14;
        value |= (regs->reg_0x0024_lml1_s2s & 0x3) << 12;
        value |= (regs->reg_0x0024_lml1_s1s & 0x3) << 10;
        value |= (regs->reg_0x0024_lml1_s0s & 0x3) << 8;
        value |= (regs->reg_0x0024_lml1_bqp & 0x3) << 6;
        value |= (regs->reg_0x0024_lml1_bip & 0x3) << 4;
        value |= (regs->reg_0x0024_lml1_aqp & 0x3) << 2;
        value |= (regs->reg_0x0024_lml1_aip & 0x3) << 0;
    }
    if (addr == 0x0027)
    {
        value |= (regs->reg_0x0027_lml2_s3s & 0x3) << 14;
        value |= (regs->reg_0x0027_lml2_s2s & 0x3) << 12;
        value |= (regs->reg_0x0027_lml2_s1s & 0x3) << 10;
        value |= (regs->reg_0x0027_lml2_s0s & 0x3) << 8;
        value |= (regs->reg_0x0027_lml2_bqp & 0x3) << 6;
        value |= (regs->reg_0x0027_lml2_bip & 0x3) << 4;
        value |= (regs->reg_0x0027_lml2_aqp & 0x3) << 2;
        value |= (regs->reg_0x0027_lml2_aip & 0x3) << 0;
    }
    if (addr == 0x002A)
    {
        value |= (regs->reg_0x002a_rx_mux & 0x3) << 10;
        value |= (regs->reg_0x002a_tx_mux & 0x3) << 8;
        value |= (regs->reg_0x002a_txrdclk_mux & 0x3) << 6;
        value |= (regs->reg_0x002a_txwrclk_mux & 0x3) << 4;
        value |= (regs->reg_0x002a_rxrdclk_mux & 0x3) << 2;
        value |= (regs->reg_0x002a_rxwrclk_mux & 0x3) << 0;
    }
    if (addr == 0x002B)
    {
        value |= (regs->reg_0x002b_fclk2_inv & 0x1) << 15;
        value |= (regs->reg_0x002b_fclk1_inv & 0x1) << 14;
        value |= (regs->reg_0x002b_mclk2dly & 0x3) << 12;
        value |= (regs->reg_0x002b_mclk1dly & 0x3) << 10;
        value |= (regs->reg_0x002b_mclk2src & 0x3) << 4;
        value |= (regs->reg_0x002b_mclk1src & 0x3) << 2;
        value |= (regs->reg_0x002b_txdiven & 0x1) << 1;
        value |= (regs->reg_0x002b_rxdiven & 0x1) << 0;
    }
    if (addr == 0x002C)
    {
        value |= (regs->reg_0x002c_txtspclk_div & 0xff) << 8;
        value |= (regs->reg_0x002c_rxtspclk_div & 0xff) << 0;
    }
    if (addr == 0x002F)
    {
        value |= (regs->reg_0x002f_ver & 0x1f) << 11;
        value |= (regs->reg_0x002f_rev & 0x1f) << 6;
        value |= (regs->reg_0x002f_mask & 0x3f) << 0;
    }
    if (addr == 0x0085)
    {
        value |= (regs->reg_0x0085_slfb_xbuf_rx & 0x1) << 8;
        value |= (regs->reg_0x0085_slfb_xbuf_tx & 0x1) << 7;
        value |= (regs->reg_0x0085_byp_xbuf_rx & 0x1) << 6;
        value |= (regs->reg_0x0085_byp_xbuf_tx & 0x1) << 5;
        value |= (regs->reg_0x0085_en_out2_xbuf_tx & 0x1) << 4;
        value |= (regs->reg_0x0085_en_tbufin_xbuf_rx & 0x1) << 3;
        value |= (regs->reg_0x0085_pd_xbuf_rx & 0x1) << 2;
        value |= (regs->reg_0x0085_pd_xbuf_tx & 0x1) << 1;
        value |= (regs->reg_0x0085_en_g_xbuf & 0x1) << 0;
    }
    if (addr == 0x0086)
    {
        value |= (regs->reg_0x0086_spdup_vco_cgen & 0x1) << 15;
        value |= (regs->reg_0x0086_reset_n_cgen & 0x1) << 14;
        value |= (regs->reg_0x0086_en_adcclkh_clkgn & 0x1) << 11;
        value |= (regs->reg_0x0086_en_coarse_cklgen & 0x1) << 10;
        value |= (regs->reg_0x0086_en_intonly_sdm_cgen & 0x1) << 9;
        value |= (regs->reg_0x0086_en_sdm_clk_cgen & 0x1) << 8;
        value |= (regs->reg_0x0086_pd_cp_cgen & 0x1) << 6;
        value |= (regs->reg_0x0086_pd_fdiv_fb_cgen & 0x1) << 5;
        value |= (regs->reg_0x0086_pd_fdiv_o_cgen & 0x1) << 4;
        value |= (regs->reg_0x0086_pd_sdm_cgen & 0x1) << 3;
        value |= (regs->reg_0x0086_pd_vco_cgen & 0x1) << 2;
        value |= (regs->reg_0x0086_pd_vco_comp_cgen & 0x1) << 1;
        value |= (regs->reg_0x0086_en_g_cgen & 0x1) << 0;
    }
    if (addr == 0x0087)
    {
        value |= (regs->reg_0x0087_frac_sdm_cgen & 0xffff) << 0;
    }
    if (addr == 0x0088)
    {
        value |= (regs->reg_0x0088_int_sdm_cgen & 0x3ff) << 4;
        value |= (regs->reg_0x0088_frac_sdm_cgen & 0xf) << 0;
    }
    if (addr == 0x0089)
    {
        value |= (regs->reg_0x0089_rev_sdmclk_cgen & 0x1) << 15;
        value |= (regs->reg_0x0089_sel_sdmclk_cgen & 0x1) << 14;
        value |= (regs->reg_0x0089_sx_dither_en_cgen & 0x1) << 13;
        value |= (regs->reg_0x0089_clkh_ov_clkl_cgen & 0x3) << 11;
        value |= (regs->reg_0x0089_div_outch_cgen & 0xff) << 3;
        value |= (regs->reg_0x0089_tst_cgen & 0x7) << 0;
    }
    if (addr == 0x008A)
    {
        value |= (regs->reg_0x008a_rev_clkdac_cgen & 0x1) << 14;
        value |= (regs->reg_0x008a_rev_clkadc_cgen & 0x1) << 13;
        value |= (regs->reg_0x008a_revph_pfd_cgen & 0x1) << 12;
        value |= (regs->reg_0x008a_ioffset_cp_cgen & 0x3f) << 11;
        value |= (regs->reg_0x008a_ipulse_cp_cgen & 0x3f) << 0;
    }
    if (addr == 0x008B)
    {
        value |= (regs->reg_0x008b_ict_vco_cgen & 0x1f) << 9;
        value |= (regs->reg_0x008b_csw_vco_cgen & 0xff) << 1;
        value |= (regs->reg_0x008b_coarse_start_cgen & 0x1) << 0;
    }
    if (addr == 0x008C)
    {
        value |= (regs->reg_0x008c_coarse_stepdone_cgen & 0x1) << 15;
        value |= (regs->reg_0x008c_coarsepll_compo_cgen & 0x1) << 14;
        value |= (regs->reg_0x008c_vco_cmpho_cgen & 0x1) << 13;
        value |= (regs->reg_0x008c_vco_cmplo_cgen & 0x1) << 12;
        value |= (regs->reg_0x008c_cp2_cgen & 0xf) << 8;
        value |= (regs->reg_0x008c_cp3_cgen & 0xf) << 4;
        value |= (regs->reg_0x008c_cz_cgen & 0xf) << 0;
    }
    if (addr == 0x008D)
    {
        value |= (regs->reg_0x008d_resrv_cgn & 0x7) << 0;
    }
    if (addr == 0x0100)
    {
        value |= (regs->reg_0x0100_en_lowbwlomx_tmx_trf & 0x1) << 15;
        value |= (regs->reg_0x0100_en_nexttx_trf & 0x1) << 14;
        value |= (regs->reg_0x0100_en_amphf_pdet_trf & 0x3) << 12;
        value |= (regs->reg_0x0100_loadr_pdet_trf & 0x3) << 10;
        value |= (regs->reg_0x0100_pd_pdet_trf & 0x1) << 3;
        value |= (regs->reg_0x0100_pd_tlobuf_trf & 0x1) << 2;
        value |= (regs->reg_0x0100_pd_txpad_trf & 0x1) << 1;
        value |= (regs->reg_0x0100_en_g_trf & 0x1) << 0;
    }
    if (addr == 0x0101)
    {
        value |= (regs->reg_0x0101_f_txpad_trf & 0x7) << 13;
        value |= (regs->reg_0x0101_l_loopb_txpad_trf & 0x3) << 11;
        value |= (regs->reg_0x0101_loss_lin_txpad_trf & 0x1f) << 6;
        value |= (regs->reg_0x0101_loss_main_txpad_trf & 0x1f) << 1;
        value |= (regs->reg_0x0101_en_loopb_txpad_trf & 0x1) << 0;
    }
    if (addr == 0x0102)
    {
        value |= (regs->reg_0x0102_gcas_gndref_txpad_trf & 0x1) << 15;
        value |= (regs->reg_0x0102_ict_lin_txpad_trf & 0x1f) << 10;
        value |= (regs->reg_0x0102_ict_main_txpad_trf & 0x1f) << 5;
        value |= (regs->reg_0x0102_vgcas_txpad_trf & 0x1f) << 0;
    }
    if (addr == 0x0103)
    {
        value |= (regs->reg_0x0103_sel_band1_trf & 0x1) << 11;
        value |= (regs->reg_0x0103_sel_band2_trf & 0x1) << 10;
        value |= (regs->reg_0x0103_lobiasn_txm_trf & 0x1f) << 5;
        value |= (regs->reg_0x0103_lobiasp_txx_trf & 0x1f) << 0;
    }
    if (addr == 0x0104)
    {
        value |= (regs->reg_0x0104_cdc_i_trf & 0xf) << 4;
        value |= (regs->reg_0x0104_cdc_q_trf & 0xf) << 0;
    }
    if (addr == 0x010C)
    {
        value |= (regs->reg_0x010c_cdc_i_rfe & 0xf) << 12;
        value |= (regs->reg_0x010c_cdc_q_rfe & 0xf) << 8;
        value |= (regs->reg_0x010c_pd_lna_rfe & 0x1) << 7;
        value |= (regs->reg_0x010c_pd_rloopb_1_rfe & 0x1) << 6;
        value |= (regs->reg_0x010c_pd_rloopb_2_rfe & 0x1) << 5;
        value |= (regs->reg_0x010c_pd_mxlobuf_rfe & 0x1) << 4;
        value |= (regs->reg_0x010c_pd_qgen_rfe & 0x1) << 3;
        value |= (regs->reg_0x010c_pd_rssi_rfe & 0x1) << 2;
        value |= (regs->reg_0x010c_pd_tia_rfe & 0x1) << 1;
        value |= (regs->reg_0x010c_en_g_rfe & 0x1) << 0;
    }
    if (addr == 0x010D)
    {
        value |= (regs->reg_0x010d_sel_path_rfe & 0x3) << 7;
        value |= (regs->reg_0x010d_en_dcoff_rxfe_rfe & 0x1) << 6;
        value |= (regs->reg_0x010d_en_inshsw_lb1_rfe & 0x1) << 4;
        value |= (regs->reg_0x010d_en_inshsw_lb2_rfe & 0x1) << 3;
        value |= (regs->reg_0x010d_en_inshsw_l_rfe & 0x1) << 2;
        value |= (regs->reg_0x010d_en_inshsw_w_rfe & 0x1) << 1;
        value |= (regs->reg_0x010d_en_nextrx_rfe & 0x1) << 0;
    }
    if (addr == 0x010E)
    {
        value |= (regs->reg_0x010e_dcoffi_rfe & 0x7f) << 7;
        value |= (regs->reg_0x010e_dcoffq_rfe & 0x7f) << 0;
    }
    if (addr == 0x010F)
    {
        value |= (regs->reg_0x010f_ict_loopb_rfe & 0x1f) << 10;
        value |= (regs->reg_0x010f_ict_tiamain_rfe & 0x1f) << 5;
        value |= (regs->reg_0x010f_ict_tiaout_rfe & 0x1f) << 0;
    }
    if (addr == 0x0110)
    {
        value |= (regs->reg_0x0110_ict_lnacmo_rfe & 0x1f) << 10;
        value |= (regs->reg_0x0110_ict_lna_rfe & 0x1f) << 5;
        value |= (regs->reg_0x0110_ict_lodc_rfe & 0x1f) << 0;
    }
    if (addr == 0x0111)
    {
        value |= (regs->reg_0x0111_cap_rxmxo_rfe & 0x1f) << 5;
        value |= (regs->reg_0x0111_cgsin_lna_rfe & 0x1f) << 0;
    }
    if (addr == 0x0112)
    {
        value |= (regs->reg_0x0112_ccomp_tia_rfe & 0xf) << 12;
        value |= (regs->reg_0x0112_cfb_tia_rfe & 0xfff) << 0;
    }
    if (addr == 0x0113)
    {
        value |= (regs->reg_0x0113_g_lna_rfe & 0xf) << 6;
        value |= (regs->reg_0x0113_g_rxloopb_rfe & 0xf) << 2;
        value |= (regs->reg_0x0113_g_tia_rfe & 0x3) << 0;
    }
    if (addr == 0x0114)
    {
        value |= (regs->reg_0x0114_rcomp_tia_rfe & 0xf) << 5;
        value |= (regs->reg_0x0114_rfb_tia_rfe & 0x1f) << 0;
    }
    if (addr == 0x0200)
    {
        value |= (regs->reg_0x0200_tsgfc & 0x1) << 9;
        value |= (regs->reg_0x0200_tsgfcw & 0x3) << 7;
        value |= (regs->reg_0x0200_tsgdcldq & 0x1) << 6;
        value |= (regs->reg_0x0200_tsgdcldi & 0x1) << 5;
        value |= (regs->reg_0x0200_tsgswapiq & 0x1) << 4;
        value |= (regs->reg_0x0200_tsgmode & 0x1) << 3;
        value |= (regs->reg_0x0200_insel & 0x1) << 2;
        value |= (regs->reg_0x0200_bstart & 0x1) << 1;
        value |= (regs->reg_0x0200_en & 0x1) << 0;
    }
    if (addr == 0x0201)
    {
        value |= (regs->reg_0x0201_gcorrq & 0x7ff) << 0;
    }
    if (addr == 0x0202)
    {
        value |= (regs->reg_0x0202_gcorri & 0x7ff) << 0;
    }
    if (addr == 0x0203)
    {
        value |= (regs->reg_0x0203_hbi_ovr & 0x7) << 12;
        value |= (regs->reg_0x0203_iqcorr & 0xfff) << 0;
    }
    if (addr == 0x0204)
    {
        value |= (regs->reg_0x0204_dccorri & 0xff) << 8;
        value |= (regs->reg_0x0204_dccorrq & 0xff) << 0;
    }
    if (addr == 0x0205)
    {
        value |= (regs->reg_0x0205_gfir1_l & 0x7) << 8;
        value |= (regs->reg_0x0205_gfir1_n & 0xff) << 0;
    }
    if (addr == 0x0206)
    {
        value |= (regs->reg_0x0206_gfir2_l & 0x7) << 8;
        value |= (regs->reg_0x0206_gfir2_n & 0xff) << 0;
    }
    if (addr == 0x0207)
    {
        value |= (regs->reg_0x0207_gfir3_l & 0x7) << 8;
        value |= (regs->reg_0x0207_gfir3_n & 0xff) << 0;
    }
    if (addr == 0x0208)
    {
        value |= (regs->reg_0x0208_cmix_gain & 0x3) << 14;
        value |= (regs->reg_0x0208_cmix_sc & 0x1) << 13;
        value |= (regs->reg_0x0208_cmix_byp & 0x1) << 8;
        value |= (regs->reg_0x0208_isinc_byp & 0x1) << 7;
        value |= (regs->reg_0x0208_gfir3_byp & 0x1) << 6;
        value |= (regs->reg_0x0208_gfir2_byp & 0x1) << 5;
        value |= (regs->reg_0x0208_gfir1_byp & 0x1) << 4;
        value |= (regs->reg_0x0208_dc_byp & 0x1) << 3;
        value |= (regs->reg_0x0208_gc_byp & 0x1) << 1;
        value |= (regs->reg_0x0208_ph_byp & 0x1) << 0;
    }
    if (addr == 0x0240)
    {
        value |= (regs->reg_0x0240_dthbit & 0xf) << 5;
        value |= (regs->reg_0x0240_sel & 0xf) << 1;
        value |= (regs->reg_0x0240_mode & 0x1) << 0;
    }
    if (addr == 0x0241)
    {
        value |= (regs->reg_0x0241_pho & 0xffff) << 0;
    }
    if (addr == 0x0242)
    {
        value |= (regs->reg_0x0242_fcw0_hi & 0xffff) << 0;
    }
    if (addr == 0x0243)
    {
        value |= (regs->reg_0x0243_fcw0_lo & 0xffff) << 0;
    }
    if (addr == 0x0400)
    {
        value |= (regs->reg_0x0400_capsel & 0x3) << 13;
        value |= (regs->reg_0x0400_tsgfc & 0x1) << 9;
        value |= (regs->reg_0x0400_capture & 0x1) << 9;
        value |= (regs->reg_0x0400_tsgfcw & 0x3) << 7;
        value |= (regs->reg_0x0400_tsgdcldq & 0x1) << 6;
        value |= (regs->reg_0x0400_tsgdcldi & 0x1) << 5;
        value |= (regs->reg_0x0400_tsgswapiq & 0x1) << 4;
        value |= (regs->reg_0x0400_tsgmode & 0x1) << 3;
        value |= (regs->reg_0x0400_insel & 0x1) << 2;
        value |= (regs->reg_0x0400_bstart & 0x1) << 1;
        value |= (regs->reg_0x0400_en & 0x1) << 0;
    }
    if (addr == 0x0401)
    {
        value |= (regs->reg_0x0401_gcorrq & 0x7ff) << 0;
    }
    if (addr == 0x0402)
    {
        value |= (regs->reg_0x0402_gcorri & 0x7ff) << 0;
    }
    if (addr == 0x0403)
    {
        value |= (regs->reg_0x0403_hbi_ovr & 0x7) << 12;
        value |= (regs->reg_0x0403_iqcorr & 0xfff) << 0;
    }
    if (addr == 0x0404)
    {
        value |= (regs->reg_0x0404_dccorr_avg & 0x7) << 0;
    }
    if (addr == 0x0405)
    {
        value |= (regs->reg_0x0405_gfir1_l & 0x7) << 8;
        value |= (regs->reg_0x0405_gfir1_n & 0xff) << 0;
    }
    if (addr == 0x0406)
    {
        value |= (regs->reg_0x0406_gfir2_l & 0x7) << 8;
        value |= (regs->reg_0x0406_gfir2_n & 0xff) << 0;
    }
    if (addr == 0x0407)
    {
        value |= (regs->reg_0x0407_gfir3_l & 0x7) << 8;
        value |= (regs->reg_0x0407_gfir3_n & 0xff) << 0;
    }
    if (addr == 0x0408)
    {
        value |= (regs->reg_0x0408_agc_k_lsb & 0xffff) << 0;
    }
    if (addr == 0x0409)
    {
        value |= (regs->reg_0x0409_agc_adesired & 0xfff) << 4;
        value |= (regs->reg_0x0409_agc_k_msb & 0x3) << 0;
    }
    if (addr == 0x040A)
    {
        value |= (regs->reg_0x040a_agc_mode & 0x3) << 12;
        value |= (regs->reg_0x040a_agc_avg & 0x7) << 0;
    }
    if (addr == 0x040B)
    {
        value |= (regs->reg_0x040b_dc_reg & 0xffff) << 0;
    }
    if (addr == 0x040C)
    {
        value |= (regs->reg_0x040c_cmix_gain & 0x3) << 14;
        value |= (regs->reg_0x040c_cmix_sc & 0x1) << 13;
        value |= (regs->reg_0x040c_cmix_byp & 0x1) << 8;
        value |= (regs->reg_0x040c_isinc_byp & 0x1) << 7;
        value |= (regs->reg_0x040c_gfir3_byp & 0x1) << 6;
        value |= (regs->reg_0x040c_gfir2_byp & 0x1) << 5;
        value |= (regs->reg_0x040c_gfir1_byp & 0x1) << 4;
        value |= (regs->reg_0x040c_dc_byp & 0x1) << 3;
        value |= (regs->reg_0x040c_gc_byp & 0x1) << 1;
        value |= (regs->reg_0x040c_ph_byp & 0x1) << 0;
    }
    return value;
}


