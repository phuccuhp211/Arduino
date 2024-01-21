#include <Wire.h>
unsigned long jikan;
/* ---------------------------------------------------------------------------------------------------- */
int tg_ht1,    tg_ht4,    tg_ht2,    tg_ht5,    tg_ht3,    tg_ht6;
int tg_ht_ao_1,    tg_ht_ao_2,    tg_ht_ao_3;
int tg_ht_ao_1a,   tg_ht_ao_2a,   tg_ht_ao_3a;
float tanso1,    tanso2,    tanso3,    tanso4,    tanso5,    tanso6;
float tanso1_2,  tanso2_2,  tanso3_2,  tanso4_2,  tanso5_2,  tanso6_2;
float tanso1_3,  tanso2_3,  tanso3_3,  tanso4_3,  tanso5_3,  tanso6_3;
float tanso_ao_1,tanso_ao_2,tanso_ao_3;
int stt_ts1 = 0, stt_ts2 = 0, stt_ts3 = 0, stt_ts4 = 0, stt_ts5 = 0, stt_ts6 = 0;
int stt_ts_ao_1= 0, stt_ts_ao_2 = 0, stt_ts_ao_3 = 0;
int led_dc_1 = 0, led_dc_2 = 0, led_dc_3 = 0;
/* ---------------------------------------------------------------------------------------------------- */
int line_qwe = 0, line_asd = 0, line_zxc = 0;
int kpr = 0, krl = 0;
int ctrl_combo = 0;
int kpr_nole = 0, krl_nole = 0;
float brnon, brnoff, brnon2, brnoff2, brnon3, brnoff3, brn_ao;
/* ---------------------------------------------------------------------------------------------------- */ 
int led_1 = 13, led_2 = 12, led_3 = 11, led_4 = 10, led_5 = 9, led_6 = 8;
int fa1 = 1,    fa2 = 1,    fa3 = 1,    fa4 = 1,    fa5 = 1,   fa6 = 1;
int fa_ao_1 = 1,fa_ao_2 = 1,fa_ao_3 = 1;
/* ---------------------------------------------------------------------------------------------------- */
float brn1 = 0,    brn2 = 0,    brn3 = 0,    brn4 = 0,    brn5 = 0,    brn6 = 0;
float brn_ao_1 = 0,brn_ao_2 = 0,brn_ao_3 = 0;

float brncl_1 = 0, brncl_2 = 0, brncl_3 = 0, brncl_4 = 0, brncl_5 = 0, brncl_6 = 0;
float oncl_1 = 0,  oncl_2 = 0,  oncl_3 = 0,  oncl_4 = 0,  oncl_5 = 0,  oncl_6 = 0;
float offcl_1 = 0, offcl_2 = 0, offcl_3 = 0, offcl_4 = 0, offcl_5 = 0, offcl_6 = 0;
float fa_c_cl_1= 0,fa_c_cl_2= 0,fa_c_cl_3= 0,fa_c_cl_4= 0,fa_c_cl_5= 0,fa_c_cl_6 = 0;
float fa_t_cl_1= 0,fa_t_cl_2= 0,fa_t_cl_3= 0,fa_t_cl_4= 0,fa_t_cl_5= 0,fa_t_cl_6 = 0;

float brncl_1_2 = 0, brncl_2_2 = 0, brncl_3_2 = 0, brncl_4_2 = 0, brncl_5_2 = 0, brncl_6_2 = 0;
float oncl_1_2 = 0,  oncl_2_2 = 0,  oncl_3_2 = 0,  oncl_4_2 = 0,  oncl_5_2 = 0,  oncl_6_2 = 0;
float offcl_1_2 = 0, offcl_2_2 = 0, offcl_3_2 = 0, offcl_4_2 = 0, offcl_5_2 = 0, offcl_6_2 = 0;
float fa_c_cl_1_2= 0,fa_c_cl_2_2= 0,fa_c_cl_3_2= 0,fa_c_cl_4_2= 0,fa_c_cl_5_2= 0,fa_c_cl_6_2 = 0;
float fa_t_cl_1_2= 0,fa_t_cl_2_2= 0,fa_t_cl_3_2= 0,fa_t_cl_4_2= 0,fa_t_cl_5_2= 0,fa_t_cl_6_2 = 0;

float brncl_1_3 = 0, brncl_2_3 = 0, brncl_3_3 = 0, brncl_4_3 = 0, brncl_5_3 = 0, brncl_6_3 = 0;
float oncl_1_3 = 0,  oncl_2_3 = 0,  oncl_3_3 = 0,  oncl_4_3 = 0,  oncl_5_3 = 0,  oncl_6_3 = 0;
float offcl_1_3 = 0, offcl_2_3 = 0, offcl_3_3 = 0, offcl_4_3 = 0, offcl_5_3 = 0, offcl_6_3 = 0;
float fa_c_cl_1_3= 0,fa_c_cl_2_3= 0,fa_c_cl_3_3= 0,fa_c_cl_4_3= 0,fa_c_cl_5_3= 0,fa_c_cl_6_3 = 0;
float fa_t_cl_1_3= 0,fa_t_cl_2_3= 0,fa_t_cl_3_3= 0,fa_t_cl_4_3= 0,fa_t_cl_5_3= 0,fa_t_cl_6_3 = 0;

float hsbx_1 = 0, hsbx_2 = 0, hsbx_3 = 0;
/* ---------------------------------------------------------------------------------------------------- */
int ctn_ao_1 = 0,     ctn_ao_2 = 0,     ctn_ao_3 = 0;
int ctn_ao_1b = 0,    ctn_ao_2b = 0,    ctn_ao_3b = 0;
int ctn_ao_1c = 0,    ctn_ao_2c = 0,    ctn_ao_3c = 0;
int ctn_ao_1c2 = 0,   ctn_ao_2c2 = 0,   ctn_ao_3c2 = 0;
int ctn_ao_1c3 = 0,   ctn_ao_2c3 = 0,   ctn_ao_3c3 = 0;
/* ---------------------------------------------------------------------------------------------------- */
int ctn_ao_1_2 = 0,     ctn_ao_2_2 = 0,     ctn_ao_3_2 = 0;
int ctn_ao_1b_2 = 0,    ctn_ao_2b_2 = 0,    ctn_ao_3b_2 = 0;
int ctn_ao_1c_2 = 0,    ctn_ao_2c_2 = 0,    ctn_ao_3c_2 = 0;
int ctn_ao_1c2_2 = 0,   ctn_ao_2c2_2 = 0,   ctn_ao_3c2_2 = 0;
int ctn_ao_1c3_2 = 0,   ctn_ao_2c3_2 = 0,   ctn_ao_3c3_2 = 0;
/* ---------------------------------------------------------------------------------------------------- */
int ctn_ao_1_3 = 0,     ctn_ao_2_3 = 0,     ctn_ao_3_3 = 0;
int ctn_ao_1b_3 = 0,    ctn_ao_2b_3 = 0,    ctn_ao_3b_3 = 0;
int ctn_ao_1c_3 = 0,    ctn_ao_2c_3 = 0,    ctn_ao_3c_3 = 0;
int ctn_ao_1c2_3 = 0,   ctn_ao_2c2_3 = 0,   ctn_ao_3c2_3 = 0;
int ctn_ao_1c3_3 = 0,   ctn_ao_2c3_3 = 0,   ctn_ao_3c3_3 = 0;
/* ---------------------------------------------------------------------------------------------------- */
int ctn1 = 0,   ctn2 = 0,   ctn3 = 0,   ctn4 = 0,   ctn5 = 0,   ctn6 = 0;
int ctn1b = 0,  ctn2b = 0,  ctn3b = 0,  ctn4b = 0,  ctn5b = 0,  ctn6b = 0;
int ctn1c = 0,  ctn2c = 0,  ctn3c = 0,  ctn4c = 0,  ctn5c = 0,  ctn6c = 0;
int ctn1c2 = 0, ctn2c2 = 0, ctn3c2 = 0, ctn4c2 = 0, ctn5c2 = 0, ctn6c2 = 0;
int ctn1c3 = 0, ctn2c3 = 0, ctn3c3 = 0, ctn4c3 = 0, ctn5c3 = 0, ctn6c3 = 0;
/* ---------------------------------------------------------------------------------------------------- */
int ctn1_2 = 0,   ctn2_2 = 0,   ctn3_2 = 0,   ctn4_2 = 0,   ctn5_2 = 0,   ctn6_2 = 0;
int ctn1b_2 = 0,  ctn2b_2 = 0,  ctn3b_2 = 0,  ctn4b_2 = 0,  ctn5b_2 = 0,  ctn6b_2 = 0;
int ctn1c_2 = 0,  ctn2c_2 = 0,  ctn3c_2 = 0,  ctn4c_2 = 0,  ctn5c_2 = 0,  ctn6c_2 = 0;
int ctn1c2_2 = 0, ctn2c2_2 = 0, ctn3c2_2 = 0, ctn4c2_2 = 0, ctn5c2_2 = 0, ctn6c2_2 = 0;
int ctn1c3_2 = 0, ctn2c3_2 = 0, ctn3c3_2 = 0, ctn4c3_2 = 0, ctn5c3_2 = 0, ctn6c3_2 = 0;
/* ---------------------------------------------------------------------------------------------------- */
int ctn1_3 = 0,   ctn2_3 = 0,   ctn3_3 = 0,   ctn4_3 = 0,   ctn5_3 = 0,   ctn6_3 = 0;
int ctn1b_3 = 0,  ctn2b_3 = 0,  ctn3b_3 = 0,  ctn4b_3 = 0,  ctn5b_3 = 0,  ctn6b_3 = 0;
int ctn1c_3 = 0,  ctn2c_3 = 0,  ctn3c_3 = 0,  ctn4c_3 = 0,  ctn5c_3 = 0,  ctn6c_3 = 0;
int ctn1c2_3 = 0, ctn2c2_3 = 0, ctn3c2_3 = 0, ctn4c2_3 = 0, ctn5c2_3 = 0, ctn6c2_3 = 0;
int ctn1c3_3 = 0, ctn2c3_3 = 0, ctn3c3_3 = 0, ctn4c3_3 = 0, ctn5c3_3 = 0, ctn6c3_3 = 0;
/* ---------------------------------------------------------------------------------------------------- */
float fa_c1 = 0,   fa_c2 = 0,   fa_c3 = 0,   fa_c4 = 0,   fa_c5 = 0,   fa_c6 = 0;
float fa_t1 = 0,   fa_t2 = 0,   fa_t3 = 0,   fa_t4 = 0,   fa_t5 = 0,   fa_t6 = 0;
float fa_c1_2 = 0, fa_c2_2 = 0, fa_c3_2 = 0, fa_c4_2 = 0, fa_c5_2 = 0, fa_c6_2 = 0;
float fa_t1_2 = 0, fa_t2_2 = 0, fa_t3_2 = 0, fa_t4_2 = 0, fa_t5_2 = 0, fa_t6_2 = 0;
float fa_c1_3 = 0, fa_c2_3 = 0, fa_c3_3 = 0, fa_c4_3 = 0, fa_c5_3 = 0, fa_c6_3 = 0;
float fa_t1_3 = 0, fa_t2_3 = 0, fa_t3_3 = 0, fa_t4_3 = 0, fa_t5_3 = 0, fa_t6_3 = 0;
/* ---------------------------------------------------------------------------------------------------- */
int effhigh = 0,   efflow = 0,   mainbrn,   brntd = 0;
int effhigh_2 = 0, efflow_2 = 0, mainbrn_2, brntd_2 = 0;
int effhigh_3 = 0, efflow_3 = 0, mainbrn_3, brntd_3 = 0;
/* ---------------------------------------------------------------------------------------------------- */
const int pottd = A0;   const int potbrn = A1;    const int potlow = A2;    const int pothigh = A3;
const int pottd2 = A4;  const int potbrn2 = A5;   const int potlow2 = A6;   const int pothigh2 = A7;
const int pottd3 = A8;  const int potbrn3 = A9;   const int potlow3 = A10;  const int pothigh3 = A11;
/* ---------------------------------------------------------------------------------------------------- */

void setup() {
  Serial.begin(9600);
  Wire.begin(1);
  Wire.onReceive(receiveEvent);
}

void receiveEvent(int bytes) {
  kpr_nole = Wire.read();
  krl_nole = Wire.read();

  kpr = kpr_nole;
  krl = krl_nole;
}
  
void loop() {
  
  jikan = millis();
  
  if ( kpr == 95 ) {line_qwe = 1;}
  if ( kpr == 96 ) {line_qwe = 2;}
  if ( kpr == 97 ) {line_qwe = 3;}
  if ( kpr == 92 ) {line_asd = 1;}
  if ( kpr == 93 ) {line_asd = 2;}
  if ( kpr == 94 ) {line_asd = 3;}
  if ( kpr == 89 ) {line_zxc = 1;}
  if ( kpr == 90 ) {line_zxc = 2;}
  if ( kpr == 91 ) {line_zxc = 3;}

  if ( kpr == 44 ) {
    ctrl_combo = 1;
    //reset_val();
  }
  if ( krl == 44 ) {
    ctrl_combo = 0;
    //reset_val();
  }

  get_pot_val();

  if ( line_qwe == 1 || line_qwe == 2 || line_qwe == 3 ) {
    if ( tanso1 == 20 ) hsbx_1 = 1;
    else if ( tanso1 != 20 ) hsbx_1 = tanso1/20;

    if ( brnon == 250 ) {
      fa_c_cl_1 = fa_c1 * hsbx_1;   fa_t_cl_1 = fa_t1 * hsbx_1;
      fa_c_cl_2 = fa_c2 * hsbx_1;   fa_t_cl_2 = fa_t2 * hsbx_1;
      fa_c_cl_3 = fa_c3 * hsbx_1;   fa_t_cl_3 = fa_t3 * hsbx_1;
      fa_c_cl_4 = fa_c4 * hsbx_1;   fa_t_cl_4 = fa_t4 * hsbx_1;
      fa_c_cl_5 = fa_c5 * hsbx_1;   fa_t_cl_5 = fa_t5 * hsbx_1;
      fa_c_cl_6 = fa_c6 * hsbx_1;   fa_t_cl_6 = fa_t6 * hsbx_1;    
    }
    else if ( brnon != 250 ) { 
      brncl_1 = brnon / 250;   fa_c_cl_1 = fa_c1 * brncl_1 * hsbx_1;   fa_t_cl_1 = fa_t1 * brncl_1 * hsbx_1;
      brncl_2 = brnon / 250;   fa_c_cl_2 = fa_c2 * brncl_2 * hsbx_1;   fa_t_cl_2 = fa_t2 * brncl_2 * hsbx_1; 
      brncl_3 = brnon / 250;   fa_c_cl_3 = fa_c3 * brncl_3 * hsbx_1;   fa_t_cl_3 = fa_t3 * brncl_3 * hsbx_1;
      brncl_4 = brnon / 250;   fa_c_cl_4 = fa_c4 * brncl_4 * hsbx_1;   fa_t_cl_4 = fa_t4 * brncl_4 * hsbx_1;
      brncl_5 = brnon / 250;   fa_c_cl_5 = fa_c5 * brncl_5 * hsbx_1;   fa_t_cl_5 = fa_t5 * brncl_5 * hsbx_1;
      brncl_6 = brnon / 250;   fa_c_cl_6 = fa_c6 * brncl_6 * hsbx_1;   fa_t_cl_6 = fa_t6 * brncl_6 * hsbx_1;
    }
  }

  if ( line_asd == 1 || line_asd == 2 || line_asd == 3 ) {
    if ( tanso1_2 == 20 ) hsbx_2 = 1;
    else if ( tanso1_2 != 20 ) hsbx_2 = tanso1_2/20;

    if ( brnon2 == 250 ) {
      fa_c_cl_1_2 = fa_c1_2 * hsbx_2;   fa_t_cl_1_2 = fa_t1_2 * hsbx_2;
      fa_c_cl_2_2 = fa_c2_2 * hsbx_2;   fa_t_cl_2_2 = fa_t2_2 * hsbx_2;
      fa_c_cl_3_2 = fa_c3_2 * hsbx_2;   fa_t_cl_3_2 = fa_t3_2 * hsbx_2;
      fa_c_cl_4_2 = fa_c4_2 * hsbx_2;   fa_t_cl_4_2 = fa_t4_2 * hsbx_2;
      fa_c_cl_5_2 = fa_c5_2 * hsbx_2;   fa_t_cl_5_2 = fa_t5_2 * hsbx_2;
      fa_c_cl_6_2 = fa_c6_2 * hsbx_2;   fa_t_cl_6_2 = fa_t6_2 * hsbx_2;    
    }
    else if ( brnon2 != 250 ) { 
      brncl_1_2 = brnon2 / 250;   fa_c_cl_1_2 = fa_c1_2 * brncl_1_2 * hsbx_2;   fa_t_cl_1_2 = fa_t1_2 * brncl_1_2 * hsbx_2;
      brncl_2_2 = brnon2 / 250;   fa_c_cl_2_2 = fa_c2_2 * brncl_2_2 * hsbx_2;   fa_t_cl_2_2 = fa_t2_2 * brncl_2_2 * hsbx_2; 
      brncl_3_2 = brnon2 / 250;   fa_c_cl_3_2 = fa_c3_2 * brncl_3_2 * hsbx_2;   fa_t_cl_3_2 = fa_t3_2 * brncl_3_2 * hsbx_2;
      brncl_4_2 = brnon2 / 250;   fa_c_cl_4_2 = fa_c4_2 * brncl_4_2 * hsbx_2;   fa_t_cl_4_2 = fa_t4_2 * brncl_4_2 * hsbx_2;
      brncl_5_2 = brnon2 / 250;   fa_c_cl_5_2 = fa_c5_2 * brncl_5_2 * hsbx_2;   fa_t_cl_5_2 = fa_t5_2 * brncl_5_2 * hsbx_2;
      brncl_6_2 = brnon2 / 250;   fa_c_cl_6_2 = fa_c6_2 * brncl_6_2 * hsbx_2;   fa_t_cl_6_2 = fa_t6_2 * brncl_6_2 * hsbx_2;
    }
  }

  if ( line_zxc == 1 || line_zxc == 2 || line_zxc == 3 ) {
    if ( tanso1_3 == 20 ) hsbx_3 = 1;
    else if ( tanso1_3 != 20 ) hsbx_3 = tanso1_3/20;

    if ( brnon3 == 250 ) {
      fa_c_cl_1_3 = fa_c1_3 * hsbx_3;   fa_t_cl_1_3 = fa_t1_3 * hsbx_3;
      fa_c_cl_2_3 = fa_c2_3 * hsbx_3;   fa_t_cl_2_3 = fa_t2_3 * hsbx_3;
      fa_c_cl_3_3 = fa_c3_3 * hsbx_3;   fa_t_cl_3_3 = fa_t3_3 * hsbx_3;
      fa_c_cl_4_3 = fa_c4_3 * hsbx_3;   fa_t_cl_4_3 = fa_t4_3 * hsbx_3;
      fa_c_cl_5_3 = fa_c5_3 * hsbx_3;   fa_t_cl_5_3 = fa_t5_3 * hsbx_3;
      fa_c_cl_6_3 = fa_c6_3 * hsbx_3;   fa_t_cl_6_3 = fa_t6_3 * hsbx_3;    
    }
    else if ( brnon3 != 250 ) { 
      brncl_1_3 = brnon3 / 250;   fa_c_cl_1_3 = fa_c1_3 * brncl_1_3 * hsbx_3;   fa_t_cl_1_3 = fa_t1_3 * brncl_1_3 * hsbx_3;
      brncl_2_3 = brnon3 / 250;   fa_c_cl_2_3 = fa_c2_3 * brncl_2_3 * hsbx_3;   fa_t_cl_2_3 = fa_t2_3 * brncl_2_3 * hsbx_3; 
      brncl_3_3 = brnon3 / 250;   fa_c_cl_3_3 = fa_c3_3 * brncl_3_3 * hsbx_3;   fa_t_cl_3_3 = fa_t3_3 * brncl_3_3 * hsbx_3;
      brncl_4_3 = brnon3 / 250;   fa_c_cl_4_3 = fa_c4_3 * brncl_4_3 * hsbx_3;   fa_t_cl_4_3 = fa_t4_3 * brncl_4_3 * hsbx_3;
      brncl_5_3 = brnon3 / 250;   fa_c_cl_5_3 = fa_c5_3 * brncl_5_3 * hsbx_3;   fa_t_cl_5_3 = fa_t5_3 * brncl_5_3 * hsbx_3;
      brncl_6_3 = brnon3 / 250;   fa_c_cl_6_3 = fa_c6_3 * brncl_6_3 * hsbx_3;   fa_t_cl_6_3 = fa_t6_3 * brncl_6_3 * hsbx_3;
    }
  }
  
  effect_cac(); 
  effect_combo_sigle();
  effect_combo_multi();
}

void get_pot_val() {
  brntd = analogRead(pottd);
  if ( brntd >= 1000 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 60; }
  else if ( brntd >= 950 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 58; }
  else if ( brntd >= 900 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 56; }
  else if ( brntd >= 850 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 54; }
  else if ( brntd >= 800 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 52; }
  else if ( brntd >= 750 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 50; }
  else if ( brntd >= 700 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 48; }
  else if ( brntd >= 650 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 46; }
  else if ( brntd >= 600 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 44; }
  else if ( brntd >= 550 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 42; }
  else if ( brntd >= 500 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 40; }
  else if ( brntd >= 450 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 38; }
  else if ( brntd >= 400 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 36; }
  else if ( brntd >= 350 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 34; }
  else if ( brntd >= 300 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 32; }
  else if ( brntd >= 250 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 30; }
  else if ( brntd >= 200 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 28; }
  else if ( brntd >= 150 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 26; }
  else if ( brntd >= 100 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 24; }
  else if ( brntd >= 50 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 22; }
  else if ( brntd >= 0 ) { tanso1 = tanso2 = tanso3 = tanso4 = tanso5 = tanso6 = 20; }
  mainbrn = analogRead(potbrn);
  mainbrn = mainbrn / 4;
  if ( mainbrn >= 255) { brnon = brnoff = 0; tanso_ao_1 = 10; }
  else if ( mainbrn >= 240) { brnon = brnoff = 15; tanso_ao_1 = 30; }
  else if ( mainbrn >= 225) { brnon = brnoff = 30; tanso_ao_1 = 50; }
  else if ( mainbrn >= 210) { brnon = brnoff = 45; tanso_ao_1 = 70; }
  else if ( mainbrn >= 195) { brnon = brnoff = 60; tanso_ao_1 = 90; }
  else if ( mainbrn >= 180) { brnon = brnoff = 75; tanso_ao_1 = 110; }
  else if ( mainbrn >= 165) { brnon = brnoff = 90; tanso_ao_1 = 130; }
  else if ( mainbrn >= 150) { brnon = brnoff = 105; tanso_ao_1 = 130; }
  else if ( mainbrn >= 135) { brnon = brnoff = 120; tanso_ao_1 = 150; }
  else if ( mainbrn >= 120) { brnon = brnoff = 135; tanso_ao_1 = 170; }
  else if ( mainbrn >= 105) { brnon = brnoff = 150; tanso_ao_1 = 190; }
  else if ( mainbrn >= 90) { brnon = brnoff = 165; tanso_ao_1 = 210; }
  else if ( mainbrn >= 75) { brnon = brnoff = 180; tanso_ao_1 = 230; }
  else if ( mainbrn >= 60) { brnon = brnoff = 195; tanso_ao_1 = 250; }
  else if ( mainbrn >= 45) { brnon = brnoff = 210; tanso_ao_1 = 270; }
  else if ( mainbrn >= 30) { brnon = brnoff = 225; tanso_ao_1 = 310; }
  else if ( mainbrn >= 15) { brnon = brnoff = 240; tanso_ao_1 = 340; }
  else if ( mainbrn >= 0) { brnon = brnoff = 250; tanso_ao_1 = 400; }
  effhigh = analogRead(pothigh);
  effhigh = effhigh / 4;
  if (effhigh >= 255) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 20;
  else if (effhigh >= 240) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 17;
  else if (effhigh >= 225) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 16;
  else if (effhigh >= 210) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 15;
  else if (effhigh >= 195) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 14;
  else if (effhigh >= 180) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 13;
  else if (effhigh >= 165) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 12;
  else if (effhigh >= 150) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 11;
  else if (effhigh >= 135) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 10;
  else if (effhigh >= 120) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 9;
  else if (effhigh >= 105) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 8;
  else if (effhigh >= 90) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 7;
  else if (effhigh >= 75) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 6;
  else if (effhigh >= 60) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 5;
  else if (effhigh >= 45) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 4;
  else if (effhigh >= 30) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 3;
  else if (effhigh >= 15) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 2;
  else if (effhigh >= 0) fa_c1 = fa_c2 = fa_c3 = fa_c4 = fa_c5 = fa_c6 = 1;
  efflow = analogRead(potlow);
  efflow = efflow /4;
  if (efflow >= 255) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 20;
  else if (efflow >= 240) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 17;
  else if (efflow >= 225) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 16;
  else if (efflow >= 210) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 15;
  else if (efflow >= 195) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 14;
  else if (efflow >= 180) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 13;
  else if (efflow >= 165) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 12;
  else if (efflow >= 150) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 11;
  else if (efflow >= 135) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 10;
  else if (efflow >= 120) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 9;
  else if (efflow >= 105) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 8;
  else if (efflow >= 90) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 7;
  else if (efflow >= 75) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 6;
  else if (efflow >= 60) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 5;
  else if (efflow >= 45) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 4;
  else if (efflow >= 30) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 3;
  else if (efflow >= 15) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 2;
  else if (efflow >= 0) fa_t1 = fa_t2 = fa_t3 = fa_t4 = fa_t5 = fa_t6 = 1;

  
  brntd_2 = analogRead(pottd2);
  if ( brntd_2 >= 1000 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 60; }
  else if ( brntd_2 >= 950 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 58; }
  else if ( brntd_2 >= 900 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 56; }
  else if ( brntd_2 >= 850 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 54; }
  else if ( brntd_2 >= 800 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 52; }
  else if ( brntd_2 >= 750 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 50; }
  else if ( brntd_2 >= 700 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 48; }
  else if ( brntd_2 >= 650 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 46; }
  else if ( brntd_2 >= 600 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 44; }
  else if ( brntd_2 >= 550 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 42; }
  else if ( brntd_2 >= 500 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 40; }
  else if ( brntd_2 >= 450 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 38; }
  else if ( brntd_2 >= 400 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 36; }
  else if ( brntd_2 >= 350 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 34; }
  else if ( brntd_2 >= 300 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 32; }
  else if ( brntd_2 >= 250 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 30; }
  else if ( brntd_2 >= 200 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 28; }
  else if ( brntd_2 >= 150 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 26; }
  else if ( brntd_2 >= 100 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 24; }
  else if ( brntd_2 >= 50 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 22; }
  else if ( brntd_2 >= 0 ) { tanso1_2 = tanso2_2 = tanso3_2 = tanso4_2 = tanso5_2 = tanso6_2 = 20; }
  mainbrn_2 = analogRead(potbrn2);
  mainbrn_2 = mainbrn_2 / 4;
  if ( mainbrn_2 >= 255) { brnon2 = brnoff2 = 0; tanso_ao_2 = 10; }
  else if ( mainbrn_2 >= 240) { brnon2 = brnoff2 = 15; tanso_ao_2 = 30; }
  else if ( mainbrn_2 >= 225) { brnon2 = brnoff2 = 30; tanso_ao_2 = 50; }
  else if ( mainbrn_2 >= 210) { brnon2 = brnoff2 = 45; tanso_ao_2 = 70; }
  else if ( mainbrn_2 >= 195) { brnon2 = brnoff2 = 60; tanso_ao_2 = 90; }
  else if ( mainbrn_2 >= 180) { brnon2 = brnoff2 = 75; tanso_ao_2 = 110; }
  else if ( mainbrn_2 >= 165) { brnon2 = brnoff2 = 90; tanso_ao_2 = 130; }
  else if ( mainbrn_2 >= 150) { brnon2 = brnoff2 = 105; tanso_ao_2 = 130; }
  else if ( mainbrn_2 >= 135) { brnon2 = brnoff2 = 120; tanso_ao_2 = 150; }
  else if ( mainbrn_2 >= 120) { brnon2 = brnoff2 = 135; tanso_ao_2 = 170; }
  else if ( mainbrn_2 >= 105) { brnon2 = brnoff2 = 150; tanso_ao_2 = 190; }
  else if ( mainbrn_2 >= 90) { brnon2 = brnoff2 = 165; tanso_ao_2 = 210; }
  else if ( mainbrn_2 >= 75) { brnon2 = brnoff2 = 180; tanso_ao_2 = 230; }
  else if ( mainbrn_2 >= 60) { brnon2 = brnoff2 = 195; tanso_ao_2 = 250; }
  else if ( mainbrn_2 >= 45) { brnon2 = brnoff2 = 210; tanso_ao_2 = 270; }
  else if ( mainbrn_2 >= 30) { brnon2 = brnoff2 = 225; tanso_ao_2 = 310; }
  else if ( mainbrn_2 >= 15) { brnon2 = brnoff2 = 240; tanso_ao_2 = 340; }
  else if ( mainbrn_2 >= 0) { brnon2 = brnoff2 = 250; tanso_ao_2 = 400; }
  effhigh_2 = analogRead(pothigh2);
  effhigh_2 = effhigh_2 / 4;
  if (effhigh_2 >= 255) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 20;
  else if (effhigh_2 >= 240) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 17;
  else if (effhigh_2 >= 225) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 16;
  else if (effhigh_2 >= 210) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 15;
  else if (effhigh_2 >= 195) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 14;
  else if (effhigh_2 >= 180) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 13;
  else if (effhigh_2 >= 165) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 12;
  else if (effhigh_2 >= 150) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 11;
  else if (effhigh_2 >= 135) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 10;
  else if (effhigh_2 >= 120) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 9;
  else if (effhigh_2 >= 105) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 8;
  else if (effhigh_2 >= 90) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 7;
  else if (effhigh_2 >= 75) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 6;
  else if (effhigh_2 >= 60) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 5;
  else if (effhigh_2 >= 45) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 4;
  else if (effhigh_2 >= 30) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 3;
  else if (effhigh_2 >= 15) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 2;
  else if (effhigh_2 >= 0) fa_c1_2 = fa_c2_2 = fa_c3_2 = fa_c4_2 = fa_c5_2 = fa_c6_2 = 1;
  efflow_2 = analogRead(potlow2);
  efflow_2 = efflow_2 /4;
  if (efflow_2 >= 255) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 20;
  else if (efflow_2 >= 240) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 17;
  else if (efflow_2 >= 225) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 16;
  else if (efflow_2 >= 210) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 15;
  else if (efflow_2 >= 195) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 14;
  else if (efflow_2 >= 180) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 13;
  else if (efflow_2 >= 165) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 12;
  else if (efflow_2 >= 150) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 11;
  else if (efflow_2 >= 135) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 10;
  else if (efflow_2 >= 120) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 9;
  else if (efflow_2 >= 105) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 8;
  else if (efflow_2 >= 90) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 7;
  else if (efflow_2 >= 75) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 6;
  else if (efflow_2 >= 60) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 5;
  else if (efflow_2 >= 45) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 4;
  else if (efflow_2 >= 30) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 3;
  else if (efflow_2 >= 15) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 2;
  else if (efflow_2 >= 0) fa_t1_2 = fa_t2_2 = fa_t3_2 = fa_t4_2 = fa_t5_2 = fa_t6_2 = 1;
  

  
  brntd_3 = analogRead(pottd3);
  if ( brntd_3 >= 1000 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 60; }
  else if ( brntd_3 >= 950 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 58; }
  else if ( brntd_3 >= 900 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 56; }
  else if ( brntd_3 >= 850 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 54; }
  else if ( brntd_3 >= 800 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 52; }
  else if ( brntd_3 >= 750 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 50; }
  else if ( brntd_3 >= 700 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 48; }
  else if ( brntd_3 >= 650 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 46; }
  else if ( brntd_3 >= 600 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 44; }
  else if ( brntd_3 >= 550 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 42; }
  else if ( brntd_3 >= 500 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 40; }
  else if ( brntd_3 >= 450 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 38; }
  else if ( brntd_3 >= 400 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 36; }
  else if ( brntd_3 >= 350 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 34; }
  else if ( brntd_3 >= 300 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 32; }
  else if ( brntd_3 >= 250 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 30; }
  else if ( brntd_3 >= 200 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 28; }
  else if ( brntd_3 >= 150 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 26; }
  else if ( brntd_3 >= 100 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 24; }
  else if ( brntd_3 >= 50 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 22; }
  else if ( brntd_3 >= 0 ) { tanso1_3 = tanso2_3 = tanso3_3 = tanso4_3 = tanso5_3 = tanso6_3 = 20; }
  mainbrn_3 = analogRead(potbrn3);
  mainbrn_3 = mainbrn_3 / 4;
  if ( mainbrn_3 >= 255) { brnon3 = brnoff3 = 0; tanso_ao_3 = 10; }
  else if ( mainbrn_3 >= 240) { brnon3 = brnoff3 = 15; tanso_ao_3 = 30; }
  else if ( mainbrn_3 >= 225) { brnon3 = brnoff3 = 30; tanso_ao_3 = 50; }
  else if ( mainbrn_3 >= 210) { brnon3 = brnoff3 = 45; tanso_ao_3 = 70; }
  else if ( mainbrn_3 >= 195) { brnon3 = brnoff3 = 60; tanso_ao_3 = 90; }
  else if ( mainbrn_3 >= 180) { brnon3 = brnoff3 = 75; tanso_ao_3 = 110; }
  else if ( mainbrn_3 >= 165) { brnon3 = brnoff3 = 90; tanso_ao_3 = 130; }
  else if ( mainbrn_3 >= 150) { brnon3 = brnoff3 = 105; tanso_ao_3 = 130; }
  else if ( mainbrn_3 >= 135) { brnon3 = brnoff3 = 120; tanso_ao_3 = 150; }
  else if ( mainbrn_3 >= 120) { brnon3 = brnoff3 = 135; tanso_ao_3 = 170; }
  else if ( mainbrn_3 >= 105) { brnon3 = brnoff3 = 150; tanso_ao_3 = 190; }
  else if ( mainbrn_3 >= 90) { brnon3 = brnoff3 = 165; tanso_ao_3 = 210; }
  else if ( mainbrn_3 >= 75) { brnon3 = brnoff3 = 180; tanso_ao_3 = 230; }
  else if ( mainbrn_3 >= 60) { brnon3 = brnoff3 = 195; tanso_ao_3 = 250; }
  else if ( mainbrn_3 >= 45) { brnon3 = brnoff3 = 210; tanso_ao_3 = 270; }
  else if ( mainbrn_3 >= 30) { brnon3 = brnoff3 = 225; tanso_ao_3 = 310; }
  else if ( mainbrn_3 >= 15) { brnon3 = brnoff3 = 240; tanso_ao_3 = 340; }
  else if ( mainbrn_3 >= 0) { brnon3 = brnoff3 = 250; tanso_ao_3 = 400; }
  effhigh_3 = analogRead(pothigh3);
  effhigh_3 = effhigh_3 / 4;
  if (effhigh_3 >= 255) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 20;
  else if (effhigh_3 >= 240) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 17;
  else if (effhigh_3 >= 225) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 16;
  else if (effhigh_3 >= 210) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 15;
  else if (effhigh_3 >= 195) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 14;
  else if (effhigh_3 >= 180) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 13;
  else if (effhigh_3 >= 165) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 12;
  else if (effhigh_3 >= 150) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 11;
  else if (effhigh_3 >= 135) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 10;
  else if (effhigh_3 >= 120) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 9;
  else if (effhigh_3 >= 105) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 8;
  else if (effhigh_3 >= 90) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 7;
  else if (effhigh_3 >= 75) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 6;
  else if (effhigh_3 >= 60) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 5;
  else if (effhigh_3 >= 45) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 4;
  else if (effhigh_3 >= 30) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 3;
  else if (effhigh_3 >= 15) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 2;
  else if (effhigh_3 >= 0) fa_c1_3 = fa_c2_3 = fa_c3_3 = fa_c4_3 = fa_c5_3 = fa_c6_3 = 1;
  efflow_3 = analogRead(potlow3);
  efflow_3 = efflow_3 /4;
  if (efflow_3 >= 255) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 20;
  else if (efflow_3 >= 240) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 17;
  else if (efflow_3 >= 225) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 16;
  else if (efflow_3 >= 210) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 15;
  else if (efflow_3 >= 195) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 14;
  else if (efflow_3 >= 180) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 13;
  else if (efflow_3 >= 165) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 12;
  else if (efflow_3 >= 150) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 11;
  else if (efflow_3 >= 135) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 10;
  else if (efflow_3 >= 120) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 9;
  else if (efflow_3 >= 105) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 8;
  else if (efflow_3 >= 90) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 7;
  else if (efflow_3 >= 75) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 6;
  else if (efflow_3 >= 60) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 5;
  else if (efflow_3 >= 45) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 4;
  else if (efflow_3 >= 30) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 3;
  else if (efflow_3 >= 15) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 2;
  else if (efflow_3 >= 0) fa_t1_3 = fa_t2_3 = fa_t3_3 = fa_t4_3 = fa_t5_3 = fa_t6_3 = 1;
}

void effect_cac() {
  ////////////////////////////////////////////////////////////////////////
  //////////////////////////////   LINE 1   //////////////////////////////
  ////////////////////////////////////////////////////////////////////////
  if( line_qwe == 1 ) {
    if (kpr == 20 || ctn1 == 1) { ctn1 =1;
      if(jikan - tg_ht1 >= tanso1) {
        tg_ht1 = millis();
        if ( brn1 <= brnon && fa1 == 1 ) { brn1 = brn1 + fa_c_cl_1; if ( brn1 >= brnon ) fa1 = 2; }
        if ( fa1 == 2) { brn1 = brn1 - fa_t_cl_1; }
        if ( brn1 <= 0 ) {brn1 = 0; ctn1 = 0; kpr = 0; krl = 0;}
        if (tanso1 >= 21) {
          if ( stt_ts1 == 0 ){stt_ts1 = 1; analogWrite(led_1, brn1);}
          else {analogWrite(led_1, LOW); stt_ts1 = 0;}
        }
        else {analogWrite(led_1, brn1);}
      }
    }
    if(krl == 20) {
      analogWrite(led_1, LOW);
      brn1 = 0; ctn1 = 0; fa1 = 1;
      kpr = 0; krl = 0;
    }  
  
    if (kpr == 26 || ctn2 == 1) { ctn2 =1;
      if(jikan - tg_ht2 >= tanso2) {
        tg_ht2 = millis();
        if ( brn2 <= brnon && fa2 == 1 ) { brn2 = brn2 + fa_c_cl_2; if ( brn2 >= brnon ) fa2 = 2; }
        if ( fa2 == 2) { brn2 = brn2 - fa_t_cl_2; }
        if ( brn2 <= 0 ) {brn2 = 0; ctn2 = 0; kpr = 0; krl = 0; }
        if (tanso2 >= 21) {
          if ( stt_ts2 == 0 ){stt_ts2 = 1; analogWrite(led_2, brn2);}
          else {analogWrite(led_2, LOW); stt_ts2 = 0;}
        }
        else {analogWrite(led_2, brn2);}
      }
    }
    if(krl == 26) {
      analogWrite(led_2, LOW);
      brn2 = 0; ctn2 = 0; fa2 = 1;
      kpr = 0; krl = 0;
    }
  
    if (kpr == 8 || ctn3 == 1) { ctn3 =1;
      if(jikan - tg_ht3 >= tanso3) {
        tg_ht3 = millis();
        if ( brn3 <= brnon && fa3 == 1 ) { brn3 = brn3 + fa_c_cl_3; if ( brn3 >= brnon ) fa3 = 2; }
        if ( fa3 == 2) { brn3 = brn3 - fa_t_cl_3; }
        if ( brn3 <= 0 ) {brn3 = 0; ctn3 = 0; kpr = 0; krl = 0; }
        if (tanso3 >= 21) {
          if ( stt_ts3 == 0 ){stt_ts3 = 1; analogWrite(led_3, brn3);}
          else {analogWrite(led_3, LOW); stt_ts3 = 0;}
        }
        else {analogWrite(led_3, brn3);}
      }
    }
    if(krl == 8) {
      analogWrite(led_3, LOW);
      brn3 = 0; ctn3 = 0; fa3 = 1;
      kpr = 0; krl = 0;
    }
  
    if (kpr == 21 || ctn4 == 1) { ctn4 = 1;
      if(jikan - tg_ht4 >= tanso4) {
        tg_ht4 = millis();
        if ( brn4 <= brnon && fa4 == 1 ) { brn4 = brn4 + fa_c_cl_4; if ( brn4 >= brnon ) fa4 = 2; }
        if ( fa4 == 2) { brn4 = brn4 - fa_t_cl_4; }
        if ( brn4 <= 0 ) {brn4 = 0; ctn4 = 0; kpr = 0; krl = 0; }
        if (tanso4 >= 21) {
          if ( stt_ts4 == 0 ){stt_ts4 = 1; analogWrite(led_4, brn4);}
          else {analogWrite(led_4, LOW); stt_ts4 = 0;}
        }
        else {analogWrite(led_4, brn4);}
      }
    }
    if(krl == 21) {
      analogWrite(led_4, LOW);
      brn4 = 0; ctn4 = 0; fa4 = 1;
      kpr = 0; krl = 0;
    }
  
    if (kpr == 23 || ctn5 == 1) { ctn5 =1;
      if(jikan - tg_ht5 >= tanso5) {  
        tg_ht5 = millis();
        if ( brn5 <= brnon && fa5 == 1 ) { brn5 = brn5 + fa_c_cl_5; if ( brn5 >= brnon ) fa5 = 2; }
        if ( fa5 == 2) { brn5 = brn5 - fa_t_cl_5; }
        if ( brn5 <= 0 ) {brn5 = 0; ctn5 = 0; kpr = 0; krl = 0; }
        if (tanso5 >= 21) {
          if ( stt_ts5 == 0 ){stt_ts5 = 1; analogWrite(led_5, brn5);}
          else {analogWrite(led_5, LOW); stt_ts5 = 0;}
        }
        else {analogWrite(led_5, brn5);}
      }
    }
    if(krl == 23) {
      analogWrite(led_5, LOW);
      brn5 = 0; ctn5 = 0; fa5 = 1;
      kpr = 0; krl = 0;
    }
  

    if (kpr == 28 || ctn6 == 1) { ctn6 =1;
      if(jikan - tg_ht6 >= tanso6) { 
        tg_ht6 = millis();
        if ( brn6 <= brnon && fa6 == 1 ) { brn6 = brn6 + fa_c_cl_6; if ( brn6 >= brnon ) fa6 = 2; }
        if ( fa6 == 2) { brn6 = brn6 - fa_t_cl_6; }
        if ( brn6 <= 0 ) {brn6 = 0; ctn6 = 0; kpr = 0; krl = 0; }
        if (tanso6 >= 21) {
          if ( stt_ts6 == 0 ){stt_ts6 = 1; analogWrite(led_6, brn6);}
          else {analogWrite(led_6, LOW); stt_ts6 = 0;}
        }
        else {analogWrite(led_6, brn6);}
      }
    }
    if(krl == 28) {
      analogWrite(led_6, LOW);
      brn6 = 0; ctn6 = 0; fa6 = 1;
      kpr = 0; krl = 0;
    }
  }
  //////////////////////////////   MODE 2   //////////////////////////////
  if( line_qwe == 2 ) {
    if ( kpr == 20 ) { ctn1b = 1; brn1 = brnoff; kpr = 0; krl = 0;}
    if ( ctn1b == 1 ) {
      if(jikan - tg_ht1 >= tanso1) {
        tg_ht1 = millis();
        brn1 -= fa_t_cl_1;
        if ( brn1 <= 0 ) { brn1 = 0; ctn1b = 0;}
        if (tanso1 >= 21) {
          if ( stt_ts1 == 0 ){stt_ts1 = 1; analogWrite(led_1, brn1);}
          else {analogWrite(led_1, LOW); stt_ts1 = 0;}
        }
        else {analogWrite(led_1, brn1);}
      }
    }
    
    if ( kpr == 26 ) { ctn2b = 1; brn2 = brnoff; kpr = 0; krl = 0;}
    if ( ctn2b == 1 ) {
      if(jikan - tg_ht2 >= tanso2) {
        tg_ht2 = millis();
        brn2 -= fa_t_cl_2;
        if ( brn2 <= 0 ) { brn2 = 0; ctn2b = 0;}
        if (tanso2 >= 21) {
          if ( stt_ts2 == 0 ){stt_ts2 = 1; analogWrite(led_2, brn2);}
          else {analogWrite(led_2, LOW); stt_ts2 = 0;}
        }
        else {analogWrite(led_2, brn2);}
      }
    }
  
    if ( kpr == 8 ) { ctn3b = 1; brn3 = brnoff; kpr = 0; krl = 0;}
    if ( ctn3b == 1 ) {
      if(jikan - tg_ht3 >= tanso3) {
        tg_ht3 = millis();
        brn3 -= fa_t_cl_3;
        if ( brn3 <= 0 ) { brn3 = 0; ctn3b = 0;}
        if (tanso3 >= 21) {
          if ( stt_ts3 == 0 ){stt_ts3 = 1; analogWrite(led_3, brn3);}
          else {analogWrite(led_3, LOW); stt_ts3 = 0;}
        }
        else {analogWrite(led_3, brn3);}
      }
    }
  
    if ( kpr == 21 ) { ctn4b = 1; brn4 = brnoff; kpr = 0; krl = 0;}
    if ( ctn4b == 1 ) {
      if(jikan - tg_ht4 >= tanso4) {
        tg_ht4 = millis();
        brn4 -= fa_t_cl_4;
        if ( brn4 <= 0 ) { brn4 = 0; ctn4b = 0;}
        if (tanso4 >= 21) {
          if ( stt_ts4 == 0 ){stt_ts4 = 1; analogWrite(led_4, brn4);}
          else {analogWrite(led_4, LOW); stt_ts4 = 0;}
        }
        else {analogWrite(led_4, brn4);}
      }
    }
  
    if ( kpr == 23 ) { ctn5b = 1; brn5 = brnoff; kpr = 0; krl = 0;}
    if ( ctn5b == 1 ) {
      if(jikan - tg_ht5 >= tanso5) {
        tg_ht5 = millis();
        brn5 -= fa_t_cl_5;
        if ( brn5 <= 0 ) { brn5 = 0; ctn5b = 0;}
        if (tanso5 >= 21) {
          if ( stt_ts5 == 0 ){stt_ts5 = 1; analogWrite(led_5, brn5);}
          else {analogWrite(led_5, LOW); stt_ts5 = 0;}
        }
        else {analogWrite(led_5, brn5);}
      }
    }
  
    if ( kpr == 28 ) { ctn6b = 1; brn6 = brnoff; kpr = 0; krl = 0;}
    if ( ctn6b == 1 ) {
      if(jikan - tg_ht6 >= tanso6) {
        tg_ht6 = millis();
        brn6 -= fa_t_cl_6;
        if ( brn6 <= 0 ) { brn6 = 0; ctn6b = 0;}
        if (tanso6 >= 21) {
          if ( stt_ts6 == 0 ){stt_ts6 = 1; analogWrite(led_6, brn6);}
          else {analogWrite(led_6, LOW); stt_ts6 = 0;}
        }
        else {analogWrite(led_6, brn6);}
      }
    }
  }
  //////////////////////////////   MODE 3   //////////////////////////////
  if( line_qwe == 3 ) {
    if (kpr == 20 || ctn1c == 1) { ctn1c = 1; ctn1c2 = 0;}
    if ( ctn1c == 1 && ctn1c2 == 0) {
      if(jikan - tg_ht1 >= tanso1) { tg_ht1 = millis();
        if( brn1 <= brnon) {
          brn1 = brn1 + fa_c_cl_1;
          if( brn1 >= brnon ) brn1 = brnon;
        }
        if( brn1 >= brnon ) brn1 = brnon;
        if (tanso1 >= 21) {
          if ( stt_ts1 == 0 ){stt_ts1 = 1; analogWrite(led_1, brn1);}
          else {analogWrite(led_1, LOW); stt_ts1 = 0;}
        }
        else {analogWrite(led_1, brn1);}
      }
    }
    if (krl == 20 || ctn1c2 == 1) { ctn1c = 0; ctn1c2 = 1;}
    if (krl == 20) { kpr = 0; krl = 0; }
    if ( ctn1c == 0 && ctn1c2 == 1 ) {
      if(jikan - tg_ht1 >= tanso1) { tg_ht1 = millis();
        brn1 = brn1 - fa_t_cl_1;
        if( brn1 < 0 ) { brn1 = 0; ctn1c = 0; ctn1c2 = 0; ctn1c3 = 0; kpr = 0; krl = 0; }
        if (tanso1 >= 21) {
          if ( ctn1c3 == 0 ){ctn1c3 = 1;analogWrite(led_3, brn1);}
          else {analogWrite(led_1, LOW); ctn1c3 = 0;}
        }
        else {analogWrite(led_1, brn1);}
      }
    }
  
    if ( kpr == 26 || ctn2c == 1) { ctn2c = 1; ctn2c2 = 0; }
    if ( kpr == 26 || ctn2c == 1 && ctn2c2 == 0) {
      if(jikan - tg_ht2 >= tanso2) { tg_ht2 = millis(); ctn2c = 1; ctn2c2 = 0;
        if( brn2 <= brnon) {
          brn2 = brn2 + fa_c_cl_2;
          if( brn2 >= brnon ) brn2 = brnon;
        }
        if( brn2 >= brnon ) brn2 = brnon;
        if (tanso2 >= 21) {
          if ( stt_ts2 == 0 ){stt_ts2 = 1; analogWrite(led_2, brn2);}
          else {analogWrite(led_2, LOW); stt_ts2 = 0;}
        }
        else {analogWrite(led_2, brn2);}
      }
    }
    if ( krl == 26 || ctn2c2 == 1) { ctn2c = 0; ctn2c2 = 1;}
    if ( krl == 26) { kpr = 0; krl = 0;}
    if ( ctn2c == 0 && ctn2c2 == 1 ) {
      if(jikan - tg_ht2 >= tanso2) { tg_ht2 = millis(); ctn2c = 0; ctn2c2 = 1;
        brn2 = brn2 - fa_t_cl_2;
        if( brn2 <= 0 ) { brn2 = 0; ctn2c = 0; ctn2c2 = 0; ctn2c3 = 0; kpr = 0; krl = 0; }
        if (tanso2 >= 21) {
          if ( ctn2c3 == 0 ){ctn2c3 = 1;analogWrite(led_2, brn2);}
          else {analogWrite(led_2, LOW); ctn2c3 = 0;}
        }
        else {analogWrite(led_2, brn2);}
      }
    }
  
    if (kpr == 8 || ctn3c == 1) { ctn3c = 1; ctn3c2 = 0;}
    if ( ctn3c == 1 && ctn3c2 == 0) {
      if(jikan - tg_ht3 >= tanso3) { tg_ht3 = millis();
        if( brn3 <= brnon) {
          brn3 = brn3 + fa_c_cl_3;
          if( brn3 >= brnon ) brn3 = brnon;
        }
        if( brn3 >= brnon ) brn3 = brnon;
        if (tanso3 >= 21) {
          if ( stt_ts3 == 0 ){stt_ts3 = 1; analogWrite(led_3, brn3);}
          else {analogWrite(led_3, LOW); stt_ts3 = 0;}
        }
        else {analogWrite(led_3, brn3);}
      }
    }
    if (krl == 8 || ctn3c2 == 1) { ctn3c = 0; ctn3c2 = 1;}
    if (krl == 8) { kpr = 0; krl = 0; }
    if ( ctn3c == 0 && ctn3c2 == 1 ) {
      if(jikan - tg_ht3 >= tanso3) { tg_ht3 = millis();
        brn3 = brn3 - fa_t_cl_3;
        if( brn3 < 0 ) { brn3 = 0; ctn3c = 0; ctn3c2 = 0; ctn3c3 = 0; kpr = 0; krl = 0; }
        if (tanso3 >= 21) {
          if ( ctn3c3 == 0 ){ctn3c3 = 1;analogWrite(led_3, brn3);}
          else {analogWrite(led_3, LOW); ctn3c3 = 0;}
        }
        else {analogWrite(led_3, brn3);}
      }
    }
  
    if (kpr == 21 || ctn4c == 1) { ctn4c = 1; ctn4c2 = 0;}
    if ( ctn4c == 1 && ctn4c2 == 0) {
      if(jikan - tg_ht4 >= tanso4) { tg_ht4 = millis();
        if( brn4 <= brnon) {
          brn4 = brn4 + fa_c_cl_4;
          if( brn4 >= brnon ) brn4 = brnon;
        }
        if( brn4 >= brnon ) brn4 = brnon;
        if (tanso4 >= 21) {
          if ( stt_ts4 == 0 ){stt_ts4 = 1; analogWrite(led_4, brn4);}
          else {analogWrite(led_4, LOW); stt_ts4 = 0;}
        }
        else {analogWrite(led_4, brn4);}
      }
    }
    if (krl == 21 || ctn4c2 == 1) { ctn4c = 0; ctn4c2 = 1;}
    if (krl == 21) { kpr = 0; krl = 0; }
    if ( ctn4c == 0 && ctn4c2 == 1 ) {
      if(jikan - tg_ht4 >= tanso4) { tg_ht4 = millis();
        brn4 = brn4 - fa_t_cl_4;
        if( brn4 < 0 ) { brn4 = 0; ctn4c = 0; ctn4c2 = 0; ctn4c3 = 0; kpr = 0; krl = 0; }
        if (tanso4 >= 21) {
          if ( ctn4c3 == 0 ){ctn4c3 = 1;analogWrite(led_4, brn4);}
          else {analogWrite(led_4, LOW); ctn4c3 = 0;}
        }
        else {analogWrite(led_4, brn4);}
      }
    }
  
    if (kpr == 23 || ctn5c == 1) { ctn5c = 1; ctn5c2 = 0;}
    if ( ctn5c == 1 && ctn5c2 == 0) {
      if(jikan - tg_ht5 >= tanso5) { tg_ht5 = millis();
        if( brn5 <= brnon) {
          brn5 = brn5 + fa_c_cl_5;
          if( brn5 >= brnon ) brn5 = brnon;
        }
        if( brn5 >= brnon ) brn5 = brnon;
        if (tanso5 >= 21) {
          if ( stt_ts5 == 0 ){stt_ts5 = 1; analogWrite(led_5, brn5);}
          else {analogWrite(led_5, LOW); stt_ts5 = 0;}
        }
        else {analogWrite(led_5, brn5);}
      }
    }
    if (krl == 23 || ctn5c2 == 1) { ctn5c = 0; ctn5c2 = 1;}
    if (krl == 23) { kpr = 0; krl = 0; }
    if ( ctn5c == 0 && ctn5c2 == 1 ) {
      if(jikan - tg_ht5 >= tanso5) { tg_ht5 = millis();
        brn5 = brn5 - fa_t_cl_5;
        if( brn5 < 0 ) { brn5 = 0; ctn5c = 0; ctn5c2 = 0; ctn5c3 = 0; kpr = 0; krl = 0; }
        if (tanso5 >= 21) {
          if ( ctn5c3 == 0 ){ctn5c3 = 1;analogWrite(led_5, brn5);}
          else {analogWrite(led_5, LOW); ctn5c3 = 0;}
        }
        else {analogWrite(led_5, brn5);}
      }
    }
  
    if (kpr == 28 || ctn6c == 1) { ctn6c = 1; ctn6c2 = 0;}
    if ( ctn6c == 1 && ctn6c2 == 0) {
      if(jikan - tg_ht6 >= tanso6) { tg_ht6 = millis();
        if( brn6 <= brnon) {
          brn6 = brn6 + fa_c_cl_6;
          if( brn6 >= brnon ) brn6 = brnon;
        }
        if( brn6 >= brnon ) brn6 = brnon;
        if (tanso6 >= 21) {
          if ( stt_ts6 == 0 ){stt_ts6 = 1; analogWrite(led_6, brn6);}
          else {analogWrite(led_6, LOW); stt_ts6 = 0;}
        }
        else {analogWrite(led_6, brn6);}
      }
    }
    if (krl == 28 || ctn6c2 == 1) { ctn6c = 0; ctn6c2 = 1;}
    if (krl == 28) { kpr = 0; krl = 0; }
    if ( ctn6c == 0 && ctn6c2 == 1 ) {
      if(jikan - tg_ht6 >= tanso6) { tg_ht6 = millis();
        brn6 = brn6 - fa_t_cl_6;
        if( brn6 < 0 ) { brn6 = 0; ctn6c = 0; ctn6c2 = 0; ctn6c3 = 0; kpr = 0; krl = 0; }
        if (tanso6 >= 21) {
          if ( ctn6c3 == 0 ){ctn6c3 = 1;analogWrite(led_6, brn6);}
          else {analogWrite(led_6, LOW); ctn6c3 = 0;}
        }
        else {analogWrite(led_6, brn6);}
      }
    }
  }


  
  ////////////////////////////////////////////////////////////////////////
  //////////////////////////////   LINE 2   //////////////////////////////
  ////////////////////////////////////////////////////////////////////////
  if( line_asd == 1 ) {
    if (kpr == 4 || ctn1_2 == 1) { ctn1_2 =1;
      if(jikan - tg_ht1 >= tanso1_2) {
        tg_ht1 = millis();
        if ( brn1 <= brnon2 && fa1 == 1 ) { brn1 = brn1 + fa_c_cl_1_2; if ( brn1 >= brnon2 ) fa1 = 2; }
        if ( fa1 == 2) { brn1 = brn1 - fa_t_cl_1_2; }
        if ( brn1 <= 0 ) {brn1 = 0; ctn1_2 = 0; kpr = 0; krl = 0; }
        if (tanso1_2 >= 21) {
          if ( stt_ts1 == 0 ){stt_ts1 = 1; analogWrite(led_1, brn1);}
          else {analogWrite(led_1, LOW); stt_ts1 = 0;}
        }
        else {analogWrite(led_1, brn1);}
      }
    }
    if(krl == 4) {
      analogWrite(led_1, LOW);
      brn1 = 0; ctn1_2 = 0; fa1 = 1;
      kpr = 0; krl = 0;
    }
  
    if (kpr == 22 || ctn2_2 == 1) { ctn2_2 =1;
      if(jikan - tg_ht2 >= tanso2_2) {
        tg_ht2 = millis();
        if ( brn2 <= brnon2 && fa2 == 1 ) { brn2 = brn2 + fa_c_cl_2_2; if ( brn2 >= brnon2 ) fa2 = 2; }
        if ( fa2 == 2) { brn2 = brn2 - fa_t_cl_2_2; }
        if ( brn2 <= 0 ) {brn2 = 0; ctn2_2 = 0; kpr = 0; krl = 0; }
        if (tanso2_2 >= 21) {
          if ( stt_ts2 == 0 ){stt_ts2 = 1; analogWrite(led_2, brn2);}
          else {analogWrite(led_2, LOW); stt_ts2 = 0;}
        }
        else {analogWrite(led_2, brn2);}
      }
    }
    if(krl == 22) {
      analogWrite(led_2, LOW);
      brn2 = 0; ctn2_2 = 0; fa2 = 1;
      kpr = 0; krl = 0;
    }
  
    if (kpr == 7 || ctn3_2 == 1) { ctn3_2 =1;
      if(jikan - tg_ht3 >= tanso3_2) {
        tg_ht3 = millis();
        if ( brn3 <= brnon2 && fa3 == 1 ) { brn3 = brn3 + fa_c_cl_3_2; if ( brn3 >= brnon2 ) fa3 = 2; }
        if ( fa3 == 2) { brn3 = brn3 - fa_t_cl_3_2; }
        if ( brn3 <= 0 ) {brn3 = 0; ctn3_2 = 0; kpr = 0; krl = 0; }
        if (tanso3_2 >= 21) {
          if ( stt_ts3 == 0 ){stt_ts3 = 1; analogWrite(led_3, brn3);}
          else {analogWrite(led_3, LOW); stt_ts3 = 0;}
        }
        else {analogWrite(led_3, brn3);}
      }
    }
    if(krl == 7) {
      analogWrite(led_3, LOW);
      brn3 = 0; ctn3_2 = 0; fa3 = 1;
      kpr = 0; krl = 0;
    }
  
    if (kpr == 9 || ctn4_2 == 1) { ctn4_2 = 1;
      if(jikan - tg_ht4 >= tanso4_2) {
        tg_ht4 = millis();
        if ( brn4 <= brnon2 && fa4 == 1 ) { brn4 = brn4 + fa_c_cl_4_2; if ( brn4 >= brnon2 ) fa4 = 2; }
        if ( fa4 == 2) { brn4 = brn4 - fa_t_cl_4_2; }
        if ( brn4 <= 0 ) {brn4 = 0; ctn4_2 = 0; kpr = 0; krl = 0; }
        if (tanso4_2 >= 21) {
          if ( stt_ts4 == 0 ){stt_ts4 = 1; analogWrite(led_4, brn4);}
          else {analogWrite(led_4, LOW); stt_ts4 = 0;}
        }
        else {analogWrite(led_4, brn4);}
      }
    }
    if(krl == 9) {
      analogWrite(led_4, LOW);
      brn4 = 0; ctn4_2 = 0; fa4 = 1;
      kpr = 0; krl = 0;
    }

    if (kpr == 10 || ctn5_2 == 1) { ctn5_2 =1;
      if(jikan - tg_ht5 >= tanso5_2) {
        tg_ht5 = millis();
        if ( brn5 <= brnon2 && fa5 == 1 ) { brn5 = brn5 + fa_c_cl_5_2; if ( brn5 >= brnon2 ) fa5 = 2; }
        if ( fa5 == 2) { brn5 = brn5 - fa_t_cl_5_2; }
        if ( brn5 <= 0 ) {brn5 = 0; ctn5_2 = 0; kpr = 0; krl = 0; }
        if (tanso5_2 >= 21) {
          if ( stt_ts5 == 0 ){stt_ts5 = 1; analogWrite(led_5, brn5);}
          else {analogWrite(led_5, LOW); stt_ts5 = 0;}
        }
        else {analogWrite(led_5, brn5);}
      }
    }
    if(krl == 10) {
      analogWrite(led_5, LOW);
      brn5 = 0; ctn5_2 = 0; fa5 = 1;
      kpr = 0; krl = 0;
    }
  
    if (kpr == 11 || ctn6_2 == 1) { ctn6_2 = 1;
      if(jikan - tg_ht6 >= tanso6_2) {
        tg_ht6 = millis();
        if ( brn6 <= brnon2 && fa6 == 1 ) { brn6 = brn6 + fa_c_cl_6_2; if ( brn6 >= brnon2 ) fa6 = 2; }
        if ( fa6 == 2) { brn6 = brn6 - fa_t_cl_6_2; }
        if ( brn6 <= 0 ) {brn6 = 0; ctn6_2 = 0; kpr = 0; krl = 0; }
        if (tanso6_2 >= 21) {
          if ( stt_ts6 == 0 ){stt_ts6 = 1; analogWrite(led_6, brn6);}
          else {analogWrite(led_6, LOW); stt_ts6 = 0;}
        }
        else {analogWrite(led_6, brn6);}
      }
    }
    if(krl == 11) {
      analogWrite(led_6, LOW);
      brn6 = 0; ctn6_2 = 0; fa6 = 1;
      kpr = 0; krl = 0;
    }
  }
  //////////////////////////////   MODE 2   //////////////////////////////
  if( line_asd == 2 ) {
    if ( kpr == 4 ) { ctn1b_2 = 1; brn1 = brnoff2; kpr = 0; krl = 0;}
    if ( ctn1b_2 == 1 ) {
      if(jikan - tg_ht1 >= tanso1_2) {
        tg_ht1 = millis();
        brn1 -= fa_t_cl_1_2;
        if ( brn1 <= 0 ) { brn1 = 0; ctn1b_2 = 0;}
        if (tanso1_2 >= 21) {
          if ( stt_ts1 == 0 ){stt_ts1 = 1; analogWrite(led_1, brn1);}
          else {analogWrite(led_1, LOW); stt_ts1 = 0;}
        }
        else {analogWrite(led_1, brn1);}
      }
    }
    
    if ( kpr == 22 ) { ctn2b_2 = 1; brn2 = brnoff2; kpr = 0; krl = 0;}
    if ( ctn2b_2 == 1 ) {
      if(jikan - tg_ht2 >= tanso2_2) {
        tg_ht2 = millis();
        brn2 -= fa_t_cl_2_2;
        if ( brn2 <= 0 ) { brn2 = 0; ctn2b_2 = 0;}
        if (tanso2_2 >= 21) {
          if ( stt_ts2 == 0 ){stt_ts2 = 1; analogWrite(led_2, brn2);}
          else {analogWrite(led_2, LOW); stt_ts2 = 0;}
        }
        else {analogWrite(led_2, brn2);}
      }
    }
  
    if ( kpr == 7 ) { ctn3b_2 = 1; brn3 = brnoff2; kpr = 0; krl = 0;}
    if ( ctn3b_2 == 1 ) {
      if(jikan - tg_ht3 >= tanso3_2) {
        tg_ht3 = millis();
        brn3 -= fa_t_cl_3_2;
        if ( brn3 <= 0 ) { brn3 = 0; ctn3b_2 = 0;}
        if (tanso3_2 >= 21) {
          if ( stt_ts3 == 0 ){stt_ts3 = 1; analogWrite(led_3, brn3);}
          else {analogWrite(led_3, LOW); stt_ts3 = 0;}
        }
        else {analogWrite(led_3, brn3);}
      }
    }
  
    if ( kpr == 9 ) { ctn4b_2 = 1; brn4 = brnoff2; kpr = 0; krl = 0;}
    if ( ctn4b_2 == 1 ) {
      if(jikan - tg_ht4 >= tanso4_2) {
        tg_ht4 = millis();
        brn4 -= fa_t_cl_4_2;
        if ( brn4 <= 0 ) { brn4 = 0; ctn4b_2 = 0;}
        if (tanso4_2 >= 21) {
          if ( stt_ts4 == 0 ){stt_ts4 = 1; analogWrite(led_4, brn4);}
          else {analogWrite(led_4, LOW); stt_ts4 = 0;}
        }
        else {analogWrite(led_4, brn4);}
      }
    }
  
    if ( kpr == 10 ) { ctn5b_2 = 1; brn5 = brnoff2; kpr = 0; krl = 0;}
    if ( ctn5b_2 == 1 ) {
      if(jikan - tg_ht5 >= tanso5_2) {
        tg_ht5 = millis();
        brn5 -= fa_t_cl_5_2;
        if ( brn5 <= 0 ) { brn5 = 0; ctn5b_2 = 0;}
        if (tanso5_2 >= 21) {
          if ( stt_ts5 == 0 ){stt_ts5 = 1; analogWrite(led_5, brn5);}
          else {analogWrite(led_5, LOW); stt_ts5 = 0;}
        }
        else {analogWrite(led_5, brn5);}
      }
    }
  
    if ( kpr == 11 ) { ctn6b_2 = 1; brn6 = brnoff2; kpr = 0; krl = 0;}
    if ( ctn6b_2 == 1 ) {
      if(jikan - tg_ht6 >= tanso6_2) {
        tg_ht6 = millis();
        brn6 -= fa_t_cl_6_2;
        if ( brn6 <= 0 ) { brn6 = 0; ctn6b_2 = 0;}
        if (tanso6_2 >= 21) {
          if ( stt_ts6 == 0 ){stt_ts6 = 1; analogWrite(led_6, brn6);}
          else {analogWrite(led_6, LOW); stt_ts6 = 0;}
        }
        else {analogWrite(led_6, brn6);}
      }
    }
  }
  //////////////////////////////   MODE 3   //////////////////////////////
  if( line_asd == 3 ) {
    if (kpr == 4 || ctn1c_2 == 1) { ctn1c_2 = 1; ctn1c2_2 = 0;}
    if ( ctn1c_2 == 1 && ctn1c2_2 == 0) {
      if(jikan - tg_ht1 >= tanso1_2) { tg_ht1 = millis();
        if( brn1 <= brnon2) {
          brn1 = brn1 + fa_c_cl_1_2;
          if( brn1 >= brnon2 ) brn1 = brnon2;
        }
        if( brn1 >= brnon2 ) brn1 = brnon2;
        if (tanso1_2 >= 21) {
          if ( stt_ts1 == 0 ){stt_ts1 = 1; analogWrite(led_1, brn1);}
          else {analogWrite(led_1, LOW); stt_ts1 = 0;}
        }
        else {analogWrite(led_1, brn1);}
      }
    }
    if (krl == 4 || ctn1c2_2 == 1) { ctn1c_2 = 0; ctn1c2_2 = 1;}
    if (krl == 4) { kpr = 0; krl = 0; }
    if ( ctn1c_2 == 0 && ctn1c2_2 == 1 ) {
      if(jikan - tg_ht1 >= tanso1_2) { tg_ht1 = millis();
        brn1 = brn1 - fa_t_cl_1_2;
        if( brn1 < 0 ) { brn1 = 0; ctn1c_2 = 0; ctn1c2_2 = 0; ctn1c3_2 = 0; kpr = 0; krl = 0; }
        if (tanso1_2 >= 21) {
          if ( ctn1c3_2 == 0 ){ctn1c3_2 = 1;analogWrite(led_1, brn1);}
          else {analogWrite(led_1, LOW); ctn1c3_2 = 0;}
        }
        else {analogWrite(led_1, brn1);}
      }
    }
  
    if (kpr == 22 || ctn2c_2 == 1) { ctn2c_2 = 1; ctn2c2_2 = 0;}
    if ( ctn2c_2 == 1 && ctn2c2_2 == 0) {
      if(jikan - tg_ht2 >= tanso2_2) { tg_ht2 = millis();
        if( brn2 <= brnon2) {
          brn2 = brn2 + fa_c_cl_2_2;
          if( brn2 >= brnon2 ) brn2 = brnon2;
        }
        if( brn2 >= brnon2 ) brn2 = brnon2;
        if (tanso2_2 >= 21) {
          if ( stt_ts2 == 0 ){stt_ts2 = 1; analogWrite(led_2, brn2);}
          else {analogWrite(led_2, LOW); stt_ts2 = 0;}
        }
        else {analogWrite(led_2, brn2);}
      }
    }
    if (krl == 22 || ctn2c2_2 == 1) { ctn2c_2 = 0; ctn2c2_2 = 1;}
    if (krl == 22) { kpr = 0; krl = 0; }
    if ( ctn2c_2 == 0 && ctn2c2_2 == 1 ) {
      if(jikan - tg_ht2 >= tanso2_2) { tg_ht2 = millis();
        brn2 = brn2 - fa_t_cl_2_2;
        if( brn2 < 0 ) { brn2 = 0; ctn2c_2 = 0; ctn2c2_2 = 0; ctn2c3_2 = 0; kpr = 0; krl = 0; }
        if (tanso2_2 >= 21) {
          if ( ctn2c3_2 == 0 ){ctn2c3_2 = 1;analogWrite(led_2, brn2);}
          else {analogWrite(led_2, LOW); ctn2c3_2 = 0;}
        }
        else {analogWrite(led_2, brn2);}
      }
    }
  
    if (kpr == 7 || ctn3c_2 == 1) { ctn3c_2 = 1; ctn3c2_2 = 0;}
    if ( ctn3c_2 == 1 && ctn3c2_2 == 0) {
      if(jikan - tg_ht3 >= tanso3_2) { tg_ht3 = millis();
        if( brn3 <= brnon2) {
          brn3 = brn3 + fa_c_cl_3_2;
          if( brn3 >= brnon2 ) brn3 = brnon2;
        }
        if( brn3 >= brnon2 ) brn3 = brnon2;
        if (tanso3_2 >= 21) {
          if ( stt_ts3 == 0 ){stt_ts3 = 1; analogWrite(led_3, brn3);}
          else {analogWrite(led_3, LOW); stt_ts3 = 0;}
        }
        else {analogWrite(led_3, brn3);}
      }
    }
    if (krl == 7 || ctn3c2_2 == 1) { ctn3c_2 = 0; ctn3c2_2 = 1;}
    if (krl == 7) { kpr = 0; krl = 0; }
    if ( ctn3c_2 == 0 && ctn3c2_2 == 1 ) {
      if(jikan - tg_ht3 >= tanso3_2) { tg_ht3 = millis();
        brn3 = brn3 - fa_t_cl_3_2;
        if( brn3 < 0 ) { brn3 = 0; ctn3c_2 = 0; ctn3c2_2 = 0; ctn3c3_2 = 0; kpr = 0; krl = 0; }
        if (tanso3_2 >= 21) {
          if ( ctn3c3_2 == 0 ){ctn3c3_2 = 1;analogWrite(led_3, brn3);}
          else {analogWrite(led_3, LOW); ctn3c3_2 = 0;}
        }
        else {analogWrite(led_3, brn3);}
      }
    }
  
    if (kpr == 9 || ctn4c_2 == 1) { ctn4c_2 = 1; ctn4c2_2 = 0;}
    if ( ctn4c_2 == 1 && ctn4c2_2 == 0) {
      if(jikan - tg_ht4 >= tanso4_2) { tg_ht4 = millis();
        if( brn4 <= brnon2) {
          brn4 = brn4 + fa_c_cl_4_2;
          if( brn4 >= brnon2 ) brn4 = brnon2;
        }
        if( brn4 >= brnon2 ) brn4 = brnon2;
        if (tanso4_2 >= 21) {
          if ( stt_ts4 == 0 ){stt_ts4 = 1; analogWrite(led_4, brn4);}
          else {analogWrite(led_4, LOW); stt_ts4 = 0;}
        }
        else {analogWrite(led_4, brn4);}
      }
    }
    if (krl == 9 || ctn4c2_2 == 1) { ctn4c_2 = 0; ctn4c2_2 = 1;}
    if (krl == 9) { kpr = 0; krl = 0; }
    if ( ctn4c_2 == 0 && ctn4c2_2 == 1 ) {
      if(jikan - tg_ht4 >= tanso4_2) { tg_ht4 = millis();
        brn4 = brn4 - fa_t_cl_4_2;
        if( brn4 < 0 ) { brn4 = 0; ctn4c_2 = 0; ctn4c2_2 = 0; ctn4c3_2 = 0; kpr = 0; krl = 0; }
        if (tanso4_2 >= 21) {
          if ( ctn4c3_2 == 0 ){ctn4c3_2 = 1;analogWrite(led_4, brn4);}
          else {analogWrite(led_4, LOW); ctn4c3_2 = 0;}
        }
        else {analogWrite(led_4, brn4);}
      }
    }
  
    if (kpr == 10 || ctn5c_2 == 1) { ctn5c_2 = 1; ctn5c2_2 = 0;}
    if ( ctn5c_2 == 1 && ctn5c2_2 == 0) {
      if(jikan - tg_ht5 >= tanso5_2) { tg_ht5 = millis();
        if( brn5 <= brnon2) {
          brn5 = brn5 + fa_c_cl_5_2;
          if( brn5 >= brnon2 ) brn5 = brnon2;
        }
        if( brn5 >= brnon2 ) brn5 = brnon2;
        if (tanso5_2 >= 21) {
          if ( stt_ts5 == 0 ){stt_ts5 = 1; analogWrite(led_5, brn5);}
          else {analogWrite(led_5, LOW); stt_ts5 = 0;}
        }
        else {analogWrite(led_5, brn5);}
      }
    }
    if (krl == 10 || ctn5c2_2 == 1) { ctn5c_2 = 0; ctn5c2_2 = 1;}
    if (krl == 10) { kpr = 0; krl = 0; }
    if ( ctn5c_2 == 0 && ctn5c2_2 == 1 ) {
      if(jikan - tg_ht5 >= tanso5_2) { tg_ht5 = millis();
        brn5 = brn5 - fa_t_cl_5_2;
        if( brn5 < 0 ) { brn5 = 0; ctn5c_2 = 0; ctn5c2_2 = 0; ctn5c3_2 = 0; kpr = 0; krl = 0; }
        if (tanso5_2 >= 21) {
          if ( ctn5c3_2 == 0 ){ctn5c3_2 = 1;analogWrite(led_5, brn5);}
          else {analogWrite(led_5, LOW); ctn5c3_2 = 0;}
        }
        else {analogWrite(led_5, brn5);}
      }
    }
  
    if (kpr == 11 || ctn6c_2 == 1) { ctn6c_2 = 1; ctn6c2_2 = 0;}
    if ( ctn6c_2 == 1 && ctn6c2_2 == 0) {
      if(jikan - tg_ht6 >= tanso6_2) { tg_ht6 = millis();
        if( brn6 <= brnon2) {
          brn6 = brn6 + fa_c_cl_6_2;
          if( brn6 >= brnon2 ) brn6 = brnon2;
        }
        if( brn6 >= brnon2 ) brn6 = brnon2;
        if (tanso6_2 >= 21) {
          if ( stt_ts6 == 0 ){stt_ts6 = 1; analogWrite(led_6, brn6);}
          else {analogWrite(led_6, LOW); stt_ts6 = 0;}
        }
        else {analogWrite(led_6, brn6);}
      }
    }
    if (krl == 11 || ctn6c2_2 == 1) { ctn6c_2 = 0; ctn6c2_2 = 1;}
    if (krl == 11) { kpr = 0; krl = 0; }
    if ( ctn6c_2 == 0 && ctn6c2_2 == 1 ) {
      if(jikan - tg_ht6 >= tanso6_2) { tg_ht6 = millis();
        brn6 = brn6 - fa_t_cl_6_2;
        if( brn6 < 0 ) { brn6 = 0; ctn6c_2 = 0; ctn6c2_2 = 0; ctn6c3_2 = 0; kpr = 0; krl = 0; }
        if (tanso6_2 >= 21) {
          if ( ctn6c3_2 == 0 ){ctn6c3_2 = 1;analogWrite(led_6, brn6);}
          else {analogWrite(led_6, LOW); ctn6c3_2 = 0;}
        }
        else {analogWrite(led_6, brn6);}
      }
    }
  }
  

  
  ////////////////////////////////////////////////////////////////////////
  //////////////////////////////   LINE 3   //////////////////////////////
  ////////////////////////////////////////////////////////////////////////
  if( line_zxc == 1 ) {
    if (kpr == 29 || ctn1_3 == 1) { ctn1_3 = 1;
      if(jikan - tg_ht1 >= tanso1_3) {
        tg_ht1 = millis();
        if ( brn1 <= brnon3 && fa1 == 1 ) { brn1 = brn1 + fa_c_cl_1_3; if ( brn1 >= brnon3 ) fa1 = 2; }
        if ( fa1 == 2) { brn1 = brn1 - fa_t_cl_1_3; }
        if ( brn1 <= 0 ) {brn1 = 0; ctn1_3 = 0; kpr = 0; krl = 0; }
        if (tanso1_3 >= 21) {
          if ( stt_ts1 == 0 ){stt_ts1 = 1; analogWrite(led_1, brn1);}
          else {analogWrite(led_1, LOW); stt_ts1 = 0;}
        }
        else {analogWrite(led_1, brn1);}
      }
    }
    if(krl == 29) {
      analogWrite(led_1, LOW);
      brn1 = 0; ctn1_3 = 0; fa1 = 1;
      kpr = 0; krl = 0;
    }
  
    if (kpr == 27 || ctn2_3 == 1) { ctn2_3 =1;
      if(jikan - tg_ht2 >= tanso2_3) {
        tg_ht2 = millis();
        if ( brn2 <= brnon3 && fa2 == 1 ) { brn2 = brn2 + fa_c_cl_2_3; if ( brn2 >= brnon3 ) fa2 = 2; }
        if ( fa2 == 2) { brn2 = brn2 - fa_t_cl_2_3; }
        if ( brn2 <= 0 ) {brn2 = 0; ctn2_3 = 0; kpr = 0; krl = 0; }
        if (tanso2_3 >= 21) {
          if ( stt_ts2 == 0 ){stt_ts2 = 1; analogWrite(led_2, brn2);}
          else {analogWrite(led_2, LOW); stt_ts2 = 0;}
        }
        else {analogWrite(led_2, brn2);}
      }
    }
    if(krl == 27) {
      analogWrite(led_2, LOW);
      brn2 = 0; ctn2_3 = 0; fa2 = 1;
      kpr = 0; krl = 0;
    }
  
    if (kpr == 6 || ctn3_3 == 1) { ctn3_3 =1;
      if(jikan - tg_ht3 >= tanso3_3) {
        tg_ht3 = millis();
        if ( brn3 <= brnon3 && fa3 == 1 ) { brn3 = brn3 + fa_c_cl_3_3; if ( brn3 >= brnon3 ) fa3 = 2; }
        if ( fa3 == 2) { brn3 = brn3 - fa_t_cl_3_3; }
        if ( brn3 <= 0 ) {brn3 = 0; ctn3_3 = 0; kpr = 0; krl = 0; }
        if (tanso3_3 >= 21) {
          if ( stt_ts3 == 0 ){stt_ts3 = 1; analogWrite(led_3, brn3);}
          else {analogWrite(led_3, LOW); stt_ts3 = 0;}
        }
        else {analogWrite(led_3, brn3);}
      }
    }
    if(krl == 6) {
      analogWrite(led_3, LOW);
      brn3 = 0; ctn3_3 = 0; fa3 = 1;
      kpr = 0; krl = 0;
    }
  
    if (kpr == 25 || ctn4_3 == 1) { ctn4_3 = 1;
      if(jikan - tg_ht4 >= tanso4_3) {
        tg_ht4 = millis();
        if ( brn4 <= brnon3 && fa4 == 1 ) { brn4 = brn4 + fa_c_cl_4_3; if ( brn4 >= brnon3 ) fa4 = 2; }
        if ( fa4 == 2) { brn4 = brn4 - fa_t_cl_4_3; }
        if ( brn4 <= 0 ) {brn4 = 0; ctn4_3 = 0; kpr = 0; krl = 0; }
        if (tanso4_3 >= 21) {
          if ( stt_ts4 == 0 ){stt_ts4 = 1; analogWrite(led_4, brn4);}
          else {analogWrite(led_4, LOW); stt_ts4 = 0;}
        }
        else {analogWrite(led_4, brn4);}
      }
    }
    if(krl == 25) {
      analogWrite(led_4, LOW);
      brn4 = 0; ctn4_3 = 0; fa4 = 1;
      kpr = 0; krl = 0;
    }
  
    if (kpr == 5 || ctn5_3 == 1) { ctn5_3 = 1;
      if(jikan - tg_ht5 >= tanso5_3) {
        tg_ht5 = millis();
        if ( brn5 <= brnon3 && fa5 == 1 ) { brn5 = brn5 + fa_c_cl_5_3; if ( brn5 >= brnon3 ) fa5 = 2; }
        if ( fa5 == 2) { brn5 = brn5 - fa_t_cl_5_3; }
        if ( brn5 <= 0 ) {brn5 = 0; ctn5_3 = 0; kpr = 0; krl = 0; }
        if (tanso5_3 >= 21) {
          if ( stt_ts5 == 0 ){stt_ts5 = 1; analogWrite(led_5, brn5);}
          else {analogWrite(led_5, LOW); stt_ts5 = 0;}
        }
        else {analogWrite(led_5, brn5);}
      }
    }
    if(krl == 5 ) {
      analogWrite(led_5, LOW);
      brn5 = 0; ctn5_3 = 0; fa5 = 1;
      kpr = 0; krl = 0;
    }
  
    if (kpr == 17 || ctn6_3 == 1) { ctn6_3 = 1;
      if(jikan - tg_ht6 >= tanso6_3) {
        tg_ht6 = millis();
        if ( brn6 <= brnon3 && fa6 == 1 ) { brn6 = brn6 + fa_c_cl_6_3; if ( brn6 >= brnon3 ) fa6 = 2; }
        if ( fa6 == 2) { brn6 = brn6 - fa_t_cl_6_3; }
        if ( brn6 <= 0 ) {brn6 = 0; ctn6_3 = 0; kpr = 0; krl = 0; }
        if (tanso6_3 >= 21) {
          if ( stt_ts6 == 0 ){stt_ts6 = 1; analogWrite(led_6, brn6);}
          else {analogWrite(led_6, LOW); stt_ts6 = 0;}
        }
        else {analogWrite(led_6, brn6);}
      }
    }
    if(krl == 17) {
      analogWrite(led_6, LOW);
      brn6 = 0; ctn6_3 = 0; fa6 = 1;
      kpr = 0; krl = 0;
    }
  }
  //////////////////////////////   MODE 2   //////////////////////////////
  if( line_zxc == 2 ) {
    if ( kpr == 29 ) { ctn1b_3 = 1; brn1 = brnoff3; kpr = 0; krl = 0;}
    if ( ctn1b_3 == 1 ) {
      if(jikan - tg_ht1 >= tanso1_3) {
        tg_ht1 = millis();
        brn1 -= fa_t_cl_1_3;
        if ( brn1 <= 0 ) { brn1 = 0; ctn1b_3 = 0;}
        if (tanso1_3 >= 21) {
          if ( stt_ts1 == 0 ){stt_ts1 = 1; analogWrite(led_1, brn1);}
          else {analogWrite(led_1, LOW); stt_ts1 = 0;}
        }
        else {analogWrite(led_1, brn1);}
      }
    }
    
    if ( kpr == 27 ) { ctn2b_3 = 1; brn2 = brnoff3; kpr = 0; krl = 0;}
    if ( ctn2b_3 == 1 ) {
      if(jikan - tg_ht2 >= tanso2_3) {
        tg_ht2 = millis();
        brn2 -= fa_t_cl_2_3;
        if ( brn2 <= 0 ) { brn2 = 0; ctn2b_3 = 0;}
        if (tanso2_3 >= 21) {
          if ( stt_ts2 == 0 ){stt_ts2 = 1; analogWrite(led_2, brn2);}
          else {analogWrite(led_2, LOW); stt_ts2 = 0;}
        }
        else {analogWrite(led_2, brn2);}
      }
    }
  
    if ( kpr == 6 ) { ctn3b_3 = 1; brn3 = brnoff3; kpr = 0; krl = 0;}
    if ( ctn3b_3 == 1 ) {
      if(jikan - tg_ht3 >= tanso3_3) {
        tg_ht3 = millis();
        brn3 -= fa_t_cl_3_3;
        if ( brn3 <= 0 ) { brn3 = 0; ctn3b_3 = 0;}
        if (tanso3_3 >= 21) {
          if ( stt_ts3 == 0 ){stt_ts3 = 1; analogWrite(led_3, brn3);}
          else {analogWrite(led_3, LOW); stt_ts3 = 0;}
        }
        else {analogWrite(led_3, brn3);}
      }
    }
  
    if ( kpr == 25 ) { ctn4b_3 = 1; brn4 = brnoff3; kpr = 0; krl = 0;}
    if ( ctn4b_3 == 1 ) {
      if(jikan - tg_ht4 >= tanso4_3) {
        tg_ht4 = millis();
        brn4 -= fa_t_cl_4_3;
        if ( brn4 <= 0 ) { brn4 = 0; ctn4b_3 = 0;}
        if (tanso4_3 >= 21) {
          if ( stt_ts4 == 0 ){stt_ts4 = 1; analogWrite(led_4, brn4);}
          else {analogWrite(led_4, LOW); stt_ts4 = 0;}
        }
        else {analogWrite(led_4, brn4);}
      }
    }
  
    if ( kpr == 5 ) { ctn5b_3 = 1; brn5 = brnoff3; kpr = 0; krl = 0;}
    if ( ctn5b_3 == 1 ) {
      if(jikan - tg_ht5 >= tanso5_3) {
        tg_ht5 = millis();
        brn5 -= fa_t_cl_5_3;
        if ( brn5 <= 0 ) { brn5 = 0; ctn5b_3 = 0;}
        if (tanso5_3 >= 21) {
          if ( stt_ts5 == 0 ){stt_ts5 = 1; analogWrite(led_5, brn5);}
          else {analogWrite(led_5, LOW); stt_ts5 = 0;}
        }
        else {analogWrite(led_5, brn5);}
      }
    }
  
    if ( kpr == 17 ) { ctn6b_3 = 1; brn6 = brnoff3; kpr = 0; krl = 0;}
    if ( ctn6b_3 == 1 ) {
      if(jikan - tg_ht6 >= tanso6_3) {
        tg_ht6 = millis();
        brn6 -= fa_t_cl_6_3;
        if ( brn6 <= 0 ) { brn6 = 0; ctn6b_3 = 0;}
        if (tanso6_3 >= 21) {
          if ( stt_ts6 == 0 ){stt_ts6 = 1; analogWrite(led_6, brn6);}
          else {analogWrite(led_6, LOW); stt_ts6 = 0;}
        }
        else {analogWrite(led_6, brn6);}
      }
    }
  }
  //////////////////////////////   MODE 3   //////////////////////////////
  if( line_zxc == 3 ) {
    if (kpr == 29 || ctn1c_3 == 1) { ctn1c_3 = 1; ctn1c2_3 = 0;}
    if ( ctn1c_3 == 1 && ctn1c2_3 == 0) {
      if(jikan - tg_ht1 >= tanso1_3) { tg_ht1 = millis();
        if( brn1 <= brnon3) {
          brn1 = brn1 + fa_c_cl_1_3;
          if( brn1 >= brnon3 ) brn1 = brnon3;
        }
        if( brn1 >= brnon3 ) brn1 = brnon3;
        if (tanso1_3 >= 21) {
          if ( stt_ts1 == 0 ){stt_ts1 = 1; analogWrite(led_1, brn1);}
          else {analogWrite(led_1, LOW); stt_ts1 = 0;}
        }
        else {analogWrite(led_1, brn1);}
      }
    }
    if (krl == 29 || ctn1c2_3 == 1) { ctn1c_3 = 0; ctn1c2_3 = 1;}
    if (krl == 29) { kpr = 0; krl = 0; }
    if ( ctn1c_3 == 0 && ctn1c2_3 == 1 ) {
      if(jikan - tg_ht1 >= tanso1_3) { tg_ht1 = millis();
        brn1 = brn1 - fa_t_cl_1_3;
        if( brn1 < 0 ) { brn1 = 0; ctn1c_3 = 0; ctn1c2_3 = 0; ctn1c3_3 = 0; kpr = 0; krl = 0; }
        if (tanso1_3 >= 21) {
          if ( ctn1c3_3 == 0 ){ctn1c3_3 = 1;analogWrite(led_1, brn1);}
          else {analogWrite(led_1, LOW); ctn1c3_3 = 0;}
        }
        else {analogWrite(led_1, brn1);}
      }
    }
  
    if (kpr == 27 || ctn2c_3 == 1) { ctn2c_3 = 1; ctn2c2_3 = 0;}
    if ( ctn2c_3 == 1 && ctn2c2_3 == 0 ) {
      if(jikan - tg_ht2 >= tanso2_3) { tg_ht2 = millis();
        if( brn2 <= brnon3) {
          brn2 = brn2 + fa_c_cl_2_3;
          if( brn2 >= brnon3 ) brn2 = brnon3;
        }
        if( brn2 >= brnon3 ) brn2 = brnon3;
        if (tanso2_3 >= 21) {
          if ( stt_ts2 == 0 ){stt_ts2 = 1; analogWrite(led_2, brn2);}
          else {analogWrite(led_2, LOW); stt_ts2 = 0;}
        }
        else {analogWrite(led_2, brn2);}
      }
    }
    if (krl == 27 || ctn2c2_3 == 1) { ctn2c_3 = 0; ctn2c2_3 = 1;}
    if (krl == 27) { kpr = 0; krl = 0; }
    if ( ctn2c_3 == 0 && ctn2c2_3 == 1 ) {
      if(jikan - tg_ht2 >= tanso2_3) { tg_ht2 = millis();
        brn2 = brn2 - fa_t_cl_2_3;
        if( brn2 < 0 ) { brn2 = 0; ctn2c_3 = 0; ctn2c2_3 = 0; ctn2c3_3 = 0; kpr = 0; krl = 0; }
        if (tanso2_3 >= 21) {
          if ( ctn2c3_3 == 0 ){ctn2c3_3 = 1;analogWrite(led_2, brn2);}
          else {analogWrite(led_2, LOW); ctn2c3_3 = 0;}
        }
        else {analogWrite(led_2, brn2);}
      }
    }
  
    if (kpr == 6 || ctn3c_3 == 1) { ctn3c_3 = 1; ctn3c2_3 = 0;}
    if ( ctn3c_3 == 1 && ctn3c2_3 == 0 ) {
      if(jikan - tg_ht3 >= tanso3_3) { tg_ht3 = millis();
        if( brn3 <= brnon3) {
          brn3 = brn3 + fa_c_cl_3_3;
          if( brn3 >= brnon3 ) brn3 = brnon3;
        }
        if( brn3 >= brnon3 ) brn3 = brnon3;
        if (tanso3_3 >= 21) {
          if ( stt_ts3 == 0 ){stt_ts3 = 1; analogWrite(led_3, brn3);}
          else {analogWrite(led_3, LOW); stt_ts3 = 0;}
        }
        else {analogWrite(led_3, brn3);}
      } 
    }
    if (krl == 6 || ctn3c2_3 == 1) { ctn3c_3 = 0; ctn3c2_3 = 1;}
    if (krl == 6) { kpr = 0; krl = 0; }
    if ( ctn3c_3 == 0 && ctn3c2_3 == 1 ) {
      if(jikan - tg_ht3 >= tanso3_3) { tg_ht3 = millis();
        brn3 = brn3 - fa_t_cl_3_3;
        if( brn3 < 0 ) { brn3 = 0; ctn3c_3 = 0; ctn3c2_3 = 0; ctn3c3_3 = 0; kpr = 0; krl = 0; }
        if (tanso3_3 >= 21) {
          if ( ctn3c3_3 == 0 ){ctn3c3_3 = 1;analogWrite(led_3, brn3);}
          else {analogWrite(led_3, LOW); ctn3c3_3 = 0;}
        }
        else {analogWrite(led_3, brn3);}
      }
    }
    
    if (kpr == 25 || ctn4c_3 == 1) { ctn4c_3 = 1; ctn4c2_3 = 0;}
    if ( ctn4c_3 == 1 && ctn4c2_3 == 0 ) {
      if(jikan - tg_ht4 >= tanso4_3) { tg_ht4 = millis();
        if( brn4 <= brnon3) {
          brn4 = brn4 + fa_c_cl_4_3;
          if( brn4 >= brnon3 ) brn4 = brnon3;
        }
        if( brn4 >= brnon3 ) brn4 = brnon3;
        if (tanso4_3 >= 21) {
          if ( stt_ts4 == 0 ){stt_ts4 = 1; analogWrite(led_4, brn4);}
          else {analogWrite(led_4, LOW); stt_ts4 = 0;}
        }
        else {analogWrite(led_4, brn4);}
      } 
    }
    if (krl == 25 || ctn4c2_3 == 1) { ctn4c_3 = 0; ctn4c2_3 = 1;}
    if (krl == 25) { kpr = 0; krl = 0; }
    if ( ctn4c_3 == 0 && ctn4c2_3 == 1 ) {
      if(jikan - tg_ht4 >= tanso4_3) { tg_ht4 = millis();
        brn4 = brn4 - fa_t_cl_4_3;
        if( brn4 < 0 ) { brn4 = 0; ctn4c_3 = 0; ctn4c2_3 = 0; ctn4c3_3 = 0; kpr = 0; krl = 0; }
        if (tanso4_3 >= 21) {
          if ( ctn4c3_3 == 0 ){ctn4c3_3 = 1;analogWrite(led_4, brn4);}
          else {analogWrite(led_4, LOW); ctn4c3_3 = 0;}
        }
        else {analogWrite(led_4, brn4);}
      }
    }
  
    if (kpr == 5 || ctn5c_3 == 1) { ctn5c_3 = 1; ctn5c2_3 = 0;}
    if ( ctn5c_3 == 1 && ctn5c2_3 == 0 ) {
      if(jikan - tg_ht5 >= tanso5_3) { tg_ht5 = millis();
        if( brn5 <= brnon3) {
          brn5 = brn5 + fa_c_cl_5_3;
          if( brn5 >= brnon3 ) brn5 = brnon3;
        }
        if( brn5 >= brnon3 ) brn5 = brnon3;
        if (tanso5_3 >= 21) {
          if ( stt_ts5 == 0 ){stt_ts5 = 1; analogWrite(led_5, brn5);}
          else {analogWrite(led_5, LOW); stt_ts5 = 0;}
        }
        else {analogWrite(led_5, brn5);}
      } 
    }
    if (krl == 5 || ctn5c2_3 == 1) { ctn5c_3 = 0; ctn5c2_3 = 1;}
    if (krl == 5) { kpr = 0; krl = 0; }
    if ( ctn5c_3 == 0 && ctn5c2_3 == 1 ) {
      if(jikan - tg_ht5 >= tanso5_3) { tg_ht5 = millis();
        brn5 = brn5 - fa_t_cl_5_3;
        if( brn5 < 0 ) { brn5 = 0; ctn5c_3 = 0; ctn5c2_3 = 0; ctn5c3_3 = 0; kpr = 0; krl = 0; }
        if (tanso5_3 >= 21) {
          if ( ctn5c3_3 == 0 ){ctn5c3_3 = 1;analogWrite(led_5, brn5);}
          else {analogWrite(led_5, LOW); ctn5c3_3 = 0;}
        }
        else {analogWrite(led_5, brn5);}
      }
    }
  
    if (kpr == 17 || ctn6c_3 == 1) { ctn6c_3 = 1; ctn6c2_3 = 0;}
    if ( ctn6c_3 == 1 && ctn6c2_3 == 0 ) {
      if(jikan - tg_ht6 >= tanso6_3) { tg_ht6 = millis();
        if( brn6 <= brnon3) {
          brn6 = brn6 + fa_c_cl_6_3;
          if( brn6 >= brnon3 ) brn6 = brnon3;
        }
        if( brn6 >= brnon3 ) brn6 = brnon3;
        if (tanso6_3 >= 21) {
          if ( stt_ts6 == 0 ){stt_ts6 = 1; analogWrite(led_6, brn6);}
          else {analogWrite(led_6, LOW); stt_ts6 = 0;}
        }
        else {analogWrite(led_6, brn6);}
      }
    }
    if (krl == 17 || ctn6c2_3 == 1) { ctn6c_3 = 0; ctn6c2_3 = 1;}
    if (krl == 17) { kpr = 0; krl = 0; }
    if ( ctn6c_3 == 0 && ctn6c2_3 == 1 ) {
      if(jikan - tg_ht6 >= tanso6_3) { tg_ht6 = millis();
        brn6 = brn6 - fa_t_cl_6_3;
        if( brn6 < 0 ) { brn6 = 0; ctn6c_3 = 0; ctn6c2_3 = 0; ctn6c3_3 = 0; kpr = 0; krl = 0; }
        if (tanso6_3 >= 21) {
          if ( ctn6c3_3 == 0 ){ctn6c3_3 = 1;analogWrite(led_6, brn6);}
          else {analogWrite(led_6, LOW); ctn6c3_3 = 0;}
        }
        else {analogWrite(led_6, brn6);}
      }
    }
  }
}

void effect_combo_sigle() {
  ////////////////////////////////////////////////////////////////////////
  //////////////////////////////   LINE 1   //////////////////////////////
  ////////////////////////////////////////////////////////////////////////
  if( line_qwe == 1 ) {
    if (kpr == 18 || ctn_ao_1 == 1) { ctn_ao_1 =1;
      if(jikan - tg_ht_ao_1 >= tanso1) { 
        tg_ht_ao_1 = millis();
        if ( brn_ao_1 <= brnon && fa_ao_1 == 1 ) { brn_ao_1 = brn_ao_1 + fa_c_cl_1; if ( brn_ao_1 >= brnon ) fa_ao_1 = 2; }
        if ( fa_ao_1 == 2) { brn_ao_1 = brn_ao_1 - fa_t_cl_1; }
        if ( brn_ao_1 <= 0 ) {brn_ao_1 = 0; ctn_ao_1 = 0; kpr = 0; krl = 0; }
        if (tanso1 >= 21) {
          if ( stt_ts_ao_1 == 0 ) {
            stt_ts_ao_1 = 1;
            analogWrite(led_1, brn_ao_1);
            analogWrite(led_2, brn_ao_1);
            analogWrite(led_3, brn_ao_1);
            analogWrite(led_4, brn_ao_1);
            analogWrite(led_5, brn_ao_1);
            analogWrite(led_6, brn_ao_1);
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_1 = 0;
          }
        }
        else {
          analogWrite(led_1, brn_ao_1);
          analogWrite(led_2, brn_ao_1);
          analogWrite(led_3, brn_ao_1);
          analogWrite(led_4, brn_ao_1);
          analogWrite(led_5, brn_ao_1);
          analogWrite(led_6, brn_ao_1);
        }
      }
    }
    if(krl == 18) {
      analogWrite(led_1, LOW);
      analogWrite(led_2, LOW);
      analogWrite(led_3, LOW);
      analogWrite(led_4, LOW);
      analogWrite(led_5, LOW);
      analogWrite(led_6, LOW);
      brn_ao = 0; ctn_ao_1 = 0; fa_ao_1 = 1;
      kpr = 0; krl = 0;
    }
  }
  //////////////////////////////   MODE 2   //////////////////////////////
  if( line_qwe == 2 ) {
    if ( kpr == 18 ) { ctn_ao_1b = 1; brn_ao_1 = brnoff; kpr = 0; krl = 0;}
    if ( ctn_ao_1b == 1 ) {
      if(jikan - tg_ht_ao_1 >= tanso1) {
        tg_ht_ao_1 = millis();
        brn_ao_1 -= fa_t_cl_1;
        if ( brn_ao_1 <= 0 ) { brn_ao_1 = 0; ctn_ao_1b = 0;}
        if (tanso1 >= 21) {
          if ( stt_ts_ao_1 == 0 ){stt_ts_ao_1 = 1;
            analogWrite(led_1, brn_ao_1);
            analogWrite(led_2, brn_ao_1);
            analogWrite(led_3, brn_ao_1);
            analogWrite(led_4, brn_ao_1);
            analogWrite(led_5, brn_ao_1);
            analogWrite(led_6, brn_ao_1);
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_1 = 0;
          }
        }
        else {
          analogWrite(led_1, brn_ao_1);
          analogWrite(led_2, brn_ao_1);
          analogWrite(led_3, brn_ao_1);
          analogWrite(led_4, brn_ao_1);
          analogWrite(led_5, brn_ao_1);
          analogWrite(led_6, brn_ao_1);
        }
      }
    }
  }
  //////////////////////////////   MODE 3   //////////////////////////////
  if( line_qwe == 3 ) {
    if (kpr == 18 || ctn_ao_1c == 1) { ctn_ao_1c = 1; ctn_ao_1c2 = 0;}
    if ( ctn_ao_1c == 1 && ctn_ao_1c2 == 0) {
      if(jikan - tg_ht_ao_1 >= tanso1) { tg_ht_ao_1 = millis();
        if( brn_ao_1 <= brnon) {
          brn_ao_1 = brn_ao_1 + fa_c_cl_1;
          if( brn_ao_1 >= brnon ) brn_ao_1 = brnon;
        }
        if( brn_ao_1 >= brnon ) brn_ao_1 = brnon;
        if (tanso1 >= 21) {
          if ( stt_ts_ao_1 == 0 ){
            stt_ts_ao_1 = 1; 
            analogWrite(led_1, brn_ao_1);
            analogWrite(led_2, brn_ao_1);
            analogWrite(led_3, brn_ao_1);
            analogWrite(led_4, brn_ao_1);
            analogWrite(led_5, brn_ao_1);
            analogWrite(led_6, brn_ao_1);
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_1 = 0;}
        }
        else {
          analogWrite(led_1, brn_ao_1);
          analogWrite(led_2, brn_ao_1);
          analogWrite(led_3, brn_ao_1);
          analogWrite(led_4, brn_ao_1);
          analogWrite(led_5, brn_ao_1);
          analogWrite(led_6, brn_ao_1);
        }
      }
    }
    if (krl == 18 || ctn_ao_1c2 == 1) { ctn_ao_1c = 0; ctn_ao_1c2 = 1;}
    if (krl == 18) { kpr = 0; krl = 0; }
    if ( ctn_ao_1c == 0 && ctn_ao_1c2 == 1 ) {
      if(jikan - tg_ht_ao_1 >= tanso1) { tg_ht_ao_1 = millis();
        brn_ao_1 = brn_ao_1 - fa_t_cl_1;
        if( brn_ao_1 < 0 ) { brn_ao_1 = 0; ctn_ao_1c = 0; ctn_ao_1c2 = 0; ctn_ao_1c3 = 0; kpr = 0; krl = 0; }
        if (tanso1 >= 21) {
          if ( ctn_ao_1c3 == 0 ){ctn_ao_1c3 = 1;
            analogWrite(led_1, brn_ao_1);
            analogWrite(led_2, brn_ao_1);
            analogWrite(led_3, brn_ao_1);
            analogWrite(led_4, brn_ao_1);
            analogWrite(led_5, brn_ao_1);
            analogWrite(led_6, brn_ao_1);
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            ctn_ao_1c3 = 0;
          }      
        }
        else {
          analogWrite(led_1, brn_ao_1);
          analogWrite(led_2, brn_ao_1);
          analogWrite(led_3, brn_ao_1);
          analogWrite(led_4, brn_ao_1);
          analogWrite(led_5, brn_ao_1);
          analogWrite(led_6, brn_ao_1);
        }
      }
    }
  }


  
  ////////////////////////////////////////////////////////////////////////
  //////////////////////////////   LINE 2   //////////////////////////////
  ////////////////////////////////////////////////////////////////////////
  if( line_asd == 1 ) {
    if (kpr == 14 || ctn_ao_1_2 == 1) { ctn_ao_1_2 =1;
      if(jikan - tg_ht_ao_1 >= tanso1_2) { 
        tg_ht_ao_1 = millis();
        if ( brn_ao_2 <= brnon2 && fa_ao_1 == 1 ) { brn_ao_2 = brn_ao_2 + fa_c_cl_1_2; if ( brn_ao_2 >= brnon2 ) fa_ao_1 = 2; }
        if ( fa_ao_1 == 2) { brn_ao_2 = brn_ao_2 - fa_t_cl_1_2; }
        if ( brn_ao_2 <= 0 ) {brn_ao_2 = 0; ctn_ao_1_2 = 0; kpr = 0; krl = 0; }
        if (tanso1_2 >= 21) {
          if ( stt_ts_ao_1 == 0 ) {
            stt_ts_ao_1 = 1;
            analogWrite(led_1, brn_ao_2);
            analogWrite(led_2, brn_ao_2);
            analogWrite(led_3, brn_ao_2);
            analogWrite(led_4, brn_ao_2);
            analogWrite(led_5, brn_ao_2);
            analogWrite(led_6, brn_ao_2);
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_1 = 0;
          }
        }
        else {
          analogWrite(led_1, brn_ao_2);
          analogWrite(led_2, brn_ao_2);
          analogWrite(led_3, brn_ao_2);
          analogWrite(led_4, brn_ao_2);
          analogWrite(led_5, brn_ao_2);
          analogWrite(led_6, brn_ao_2);
        }
      }
    }
    if(krl == 14) {
      analogWrite(led_1, LOW);
      analogWrite(led_2, LOW);
      analogWrite(led_3, LOW);
      analogWrite(led_4, LOW);
      analogWrite(led_5, LOW);
      analogWrite(led_6, LOW);
      brn_ao = 0; ctn_ao_1_2 = 0; fa_ao_1 = 1;
      kpr = 0; krl = 0;
    }
  }
  //////////////////////////////   MODE 2   //////////////////////////////
  if( line_asd == 2 ) {
    if ( kpr == 18 ) { ctn_ao_1b_2 = 1; brn_ao_2 = brnoff2; kpr = 0; krl = 0;}
    if ( ctn_ao_1b_2 == 1 ) {
      if(jikan - tg_ht_ao_1 >= tanso1_2) {
        tg_ht_ao_1 = millis();
        brn_ao_2 -= fa_t_cl_1_2;
        if ( brn_ao_2 <= 0 ) { brn_ao_2 = 0; ctn_ao_1b_2 = 0;}
        if (tanso1_2 >= 21) {
          if ( stt_ts_ao_1 == 0 ){stt_ts_ao_1 = 1;
            analogWrite(led_1, brn_ao_2);
            analogWrite(led_2, brn_ao_2);
            analogWrite(led_3, brn_ao_2);
            analogWrite(led_4, brn_ao_2);
            analogWrite(led_5, brn_ao_2);
            analogWrite(led_6, brn_ao_2);
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_1 = 0;
          }
        }
        else {
          analogWrite(led_1, brn_ao_2);
          analogWrite(led_2, brn_ao_2);
          analogWrite(led_3, brn_ao_2);
          analogWrite(led_4, brn_ao_2);
          analogWrite(led_5, brn_ao_2);
          analogWrite(led_6, brn_ao_2);
        }
      }
    }
  }
  //////////////////////////////   MODE 3   //////////////////////////////
  if( line_asd == 3 ) {
    if (kpr == 14 || ctn_ao_1c_2 == 1) { ctn_ao_1c_2 = 1; ctn_ao_1c2_2 = 0;}
    if ( ctn_ao_1c_2 == 1 && ctn_ao_1c2_2 == 0) {
      if(jikan - tg_ht_ao_1 >= tanso1_2) { tg_ht_ao_1 = millis();
        if( brn_ao_2 <= brnon2) {
          brn_ao_2 = brn_ao_2 + fa_c_cl_1_2;
          if( brn_ao_2 >= brnon2 ) brn_ao_2 = brnon2;
        }
        if( brn_ao_2 >= brnon2 ) brn_ao_2 = brnon2;
        if (tanso1_2 >= 21) {
          if ( stt_ts_ao_1 == 0 ){
            stt_ts_ao_1 = 1; 
            analogWrite(led_1, brn_ao_2);
            analogWrite(led_2, brn_ao_2);
            analogWrite(led_3, brn_ao_2);
            analogWrite(led_4, brn_ao_2);
            analogWrite(led_5, brn_ao_2);
            analogWrite(led_6, brn_ao_2);
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_1 = 0;}
        }
        else {
          analogWrite(led_1, brn_ao_2);
          analogWrite(led_2, brn_ao_2);
          analogWrite(led_3, brn_ao_2);
          analogWrite(led_4, brn_ao_2);
          analogWrite(led_5, brn_ao_2);
          analogWrite(led_6, brn_ao_2);
        }
      }
    }
    if (krl == 14 || ctn_ao_1c2_2 == 1) { ctn_ao_1c_2 = 0; ctn_ao_1c2_2 = 1;}
    if (krl == 14) { kpr = 0; krl = 0; }
    if ( ctn_ao_1c_2 == 0 && ctn_ao_1c2_2 == 1 ) {
      if(jikan - tg_ht_ao_1 >= tanso1_2) { tg_ht_ao_1 = millis();
        brn_ao_2 = brn_ao_2 - fa_t_cl_1_2;
        if( brn_ao_2 < 0 ) { brn_ao_2 = 0; ctn_ao_1c_2 = 0; ctn_ao_1c2_2 = 0; ctn_ao_1c3_2 = 0; kpr = 0; krl = 0; }
        if (tanso1_2 >= 21) {
          if ( ctn_ao_1c3_2 == 0 ){ctn_ao_1c3_2 = 1;
            analogWrite(led_1, brn_ao_2);
            analogWrite(led_2, brn_ao_2);
            analogWrite(led_3, brn_ao_2);
            analogWrite(led_4, brn_ao_2);
            analogWrite(led_5, brn_ao_2);
            analogWrite(led_6, brn_ao_2);
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            ctn_ao_1c3_2 = 0;
          }      
        }
        else {
          analogWrite(led_1, brn_ao_2);
          analogWrite(led_2, brn_ao_2);
          analogWrite(led_3, brn_ao_2);
          analogWrite(led_4, brn_ao_2);
          analogWrite(led_5, brn_ao_2);
          analogWrite(led_6, brn_ao_2);
        }
      }
    }
  }
  

  
  ////////////////////////////////////////////////////////////////////////
  //////////////////////////////   LINE 3   //////////////////////////////
  ////////////////////////////////////////////////////////////////////////
  if( line_zxc == 1 ) {
    if (kpr == 16 || ctn_ao_1_3 == 1) { ctn_ao_1_3 =1;
      if(jikan - tg_ht_ao_1 >= tanso1_3) { 
        tg_ht_ao_1 = millis();
        if ( brn_ao_3 <= brnon3 && fa_ao_1 == 1 ) { brn_ao_3 = brn_ao_3 + fa_c_cl_1_3; if ( brn_ao_3 >= brnon3 ) fa_ao_1 = 2; }
        if ( fa_ao_1 == 2) { brn_ao_3 = brn_ao_3 - fa_t_cl_1_3; }
        if ( brn_ao_3 <= 0 ) {brn_ao_3 = 0; ctn_ao_1_3 = 0; kpr = 0; krl = 0; }
        if (tanso1_3 >= 21) {
          if ( stt_ts_ao_1 == 0 ) {
            stt_ts_ao_1 = 1;
            analogWrite(led_1, brn_ao_3);
            analogWrite(led_2, brn_ao_3);
            analogWrite(led_3, brn_ao_3);
            analogWrite(led_4, brn_ao_3);
            analogWrite(led_5, brn_ao_3);
            analogWrite(led_6, brn_ao_3);
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_1 = 0;
          }
        }
        else {
          analogWrite(led_1, brn_ao_3);
          analogWrite(led_2, brn_ao_3);
          analogWrite(led_3, brn_ao_3);
          analogWrite(led_4, brn_ao_3);
          analogWrite(led_5, brn_ao_3);
          analogWrite(led_6, brn_ao_3);
        }
      }
    }
    if(krl == 16) {
      analogWrite(led_1, LOW);
      analogWrite(led_2, LOW);
      analogWrite(led_3, LOW);
      analogWrite(led_4, LOW);
      analogWrite(led_5, LOW);
      analogWrite(led_6, LOW);
      brn_ao = 0; ctn_ao_1_3 = 0; fa_ao_1 = 1;
      kpr = 0; krl = 0;
    }
  }
  //////////////////////////////   MODE 2   //////////////////////////////
  if( line_zxc == 2 ) {
    if ( kpr == 16 ) { ctn_ao_1b_3 = 1; brn_ao_3 = brnoff3; kpr = 0; krl = 0;}
    if ( ctn_ao_1b_3 == 1 ) {
      if(jikan - tg_ht_ao_1 >= tanso1_3) {
        tg_ht_ao_1 = millis();
        brn_ao_3 -= fa_t_cl_1_3;
        if ( brn_ao_3 <= 0 ) { brn_ao_3 = 0; ctn_ao_1b_3 = 0;}
        if (tanso1_3 >= 21) {
          if ( stt_ts_ao_1 == 0 ){stt_ts_ao_1 = 1;
            analogWrite(led_1, brn_ao_3);
            analogWrite(led_2, brn_ao_3);
            analogWrite(led_3, brn_ao_3);
            analogWrite(led_4, brn_ao_3);
            analogWrite(led_5, brn_ao_3);
            analogWrite(led_6, brn_ao_3);
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_1 = 0;
          }
        }
        else {
          analogWrite(led_1, brn_ao_3);
          analogWrite(led_2, brn_ao_3);
          analogWrite(led_3, brn_ao_3);
          analogWrite(led_4, brn_ao_3);
          analogWrite(led_5, brn_ao_3);
          analogWrite(led_6, brn_ao_3);
        }
      }
    }
  }
  //////////////////////////////   MODE 3   //////////////////////////////
  if( line_zxc == 3 ) {
    if (kpr == 16 || ctn_ao_1c_3 == 1) { ctn_ao_1c_3 = 1; ctn_ao_1c2_3 = 0;}
    if ( ctn_ao_1c_3 == 1 && ctn_ao_1c2_3 == 0) {
      if(jikan - tg_ht_ao_1 >= tanso1_3) { tg_ht_ao_1 = millis();
        if( brn_ao_3 <= brnon3) {
          brn_ao_3 = brn_ao_3 + fa_c_cl_1_3;
          if( brn_ao_3 >= brnon3 ) brn_ao_3 = brnon3;
        }
        if( brn_ao_3 >= brnon3 ) brn_ao_3 = brnon3;
        if (tanso1_3 >= 21) {
          if ( stt_ts_ao_1 == 0 ){
            stt_ts_ao_1 = 1; 
            analogWrite(led_1, brn_ao_3);
            analogWrite(led_2, brn_ao_3);
            analogWrite(led_3, brn_ao_3);
            analogWrite(led_4, brn_ao_3);
            analogWrite(led_5, brn_ao_3);
            analogWrite(led_6, brn_ao_3);
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_1 = 0;}
        }
        else {
          analogWrite(led_1, brn_ao_3);
          analogWrite(led_2, brn_ao_3);
          analogWrite(led_3, brn_ao_3);
          analogWrite(led_4, brn_ao_3);
          analogWrite(led_5, brn_ao_3);
          analogWrite(led_6, brn_ao_3);
        }
      }
    }
    if (krl == 16 || ctn_ao_1c2_3 == 1) { ctn_ao_1c_3 = 0; ctn_ao_1c2_3 = 1;}
    if (krl == 16) { kpr = 0; krl = 0; }
    if ( ctn_ao_1c_3 == 0 && ctn_ao_1c2_3 == 1 ) {
      if(jikan - tg_ht_ao_1 >= tanso1_3) { tg_ht_ao_1 = millis();
        brn_ao_3 = brn_ao_3 - fa_t_cl_1_3;
        if( brn_ao_3 < 0 ) { brn_ao_3 = 0; ctn_ao_1c_3 = 0; ctn_ao_1c2_3 = 0; ctn_ao_1c3_3 = 0; kpr = 0; krl = 0; }
        if (tanso1_3 >= 21) {
          if ( ctn_ao_1c3_3 == 0 ){ctn_ao_1c3_3 = 1;
            analogWrite(led_1, brn_ao_3);
            analogWrite(led_2, brn_ao_3);
            analogWrite(led_3, brn_ao_3);
            analogWrite(led_4, brn_ao_3);
            analogWrite(led_5, brn_ao_3);
            analogWrite(led_6, brn_ao_3);
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            ctn_ao_1c3_3 = 0;
          }      
        }
        else {
          analogWrite(led_1, brn_ao_3);
          analogWrite(led_2, brn_ao_3);
          analogWrite(led_3, brn_ao_3);
          analogWrite(led_4, brn_ao_3);
          analogWrite(led_5, brn_ao_3);
          analogWrite(led_6, brn_ao_3);
        }
      }
    }
  }
}

void effect_combo_multi() {
  ////////////////////////////////////////////////////////////////////////
  //////////////////////////////   LINE 1   //////////////////////////////
  ////////////////////////////////////////////////////////////////////////
  if ( kpr == 48 ) {
    ctn_ao_1 = 1;
    reset_eff_nor();
  }
  if ( ctn_ao_1 == 1 ) {
    if ( jikan - tg_ht_ao_1 >= tanso_ao_1 * 2 ) { tg_ht_ao_1 = millis();
      if ( ctrl_combo != 1 ) {
        led_dc_1 += 1;
        if ( led_dc_1 == 4 ) led_dc_1 = 1;
      }
      else {
        led_dc_1 -= 1;
        if ( led_dc_1 == 0 ) led_dc_1 = 3;
      }
    }
  }
  if ( led_dc_1 != 0 ) {
    if ( jikan - tg_ht_ao_1a >= tanso1 ) { tg_ht_ao_1a = millis();
      if ( led_dc_1 == 1) {
        if ( tanso1 >= 21) {
          if ( stt_ts_ao_1 == 0 ) {
            analogWrite(led_1, 255);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, 255);
            stt_ts_ao_1 = 1;
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_1 = 0;
          }
        }
        else {
          analogWrite(led_1, 255);
          analogWrite(led_2, LOW);
          analogWrite(led_3, LOW);
          analogWrite(led_4, LOW);
          analogWrite(led_5, LOW);
          analogWrite(led_6, 255);
        }  
      }
      if ( led_dc_1 == 2) {
        if ( tanso1 >= 21) {
          if ( stt_ts_ao_1 == 0 ) {
            analogWrite(led_1, LOW);
            analogWrite(led_2, 255);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, 255);
            analogWrite(led_6, LOW);
            stt_ts_ao_1 = 1;
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_1 = 0;
          }
        }
        else {
          analogWrite(led_1, LOW);
          analogWrite(led_2, 255);
          analogWrite(led_3, LOW);
          analogWrite(led_4, LOW);
          analogWrite(led_5, 255);
          analogWrite(led_6, LOW);
        }  
      }
      if ( led_dc_1 == 3) {
        if ( tanso1 >= 21) {
          if ( stt_ts_ao_1 == 0 ) {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, 255);
            analogWrite(led_4, 255);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_1 = 1;
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_1 = 0;
          }
        }
        else {
          analogWrite(led_1, LOW);
          analogWrite(led_2, LOW);
          analogWrite(led_3, 255);
          analogWrite(led_4, 255);
          analogWrite(led_5, LOW);
          analogWrite(led_6, LOW);
        }  
      }
    }
  }
  if( krl == 48 ) {
    analogWrite(led_1, LOW);
    analogWrite(led_2, LOW);
    analogWrite(led_3, LOW);
    analogWrite(led_4, LOW);
    analogWrite(led_5, LOW);
    analogWrite(led_6, LOW);
    kpr = 0; krl = 0;
    led_dc_1 = 0;
    ctn_ao_1 = 0;
  }

  
  ////////////////////////////////////////////////////////////////////////
  //////////////////////////////   LINE 2   //////////////////////////////
  ////////////////////////////////////////////////////////////////////////
  if ( kpr == 52 ) {
    ctn_ao_2 = 1;
    reset_eff_nor();
  }
  if ( ctn_ao_2 == 1 ) {
    if ( jikan - tg_ht_ao_2 >= tanso_ao_2 * 2 ) { tg_ht_ao_2 = millis();
      if ( ctrl_combo != 1 ) {
        led_dc_2 += 1;
        if ( led_dc_2 == 4 ) led_dc_2 = 1;
      }
      else {
        led_dc_2 -= 1;
        if ( led_dc_2 == 0 ) led_dc_2 = 3;
      }
    }
  }
  if ( led_dc_2 != 0 ) {
    if ( jikan - tg_ht_ao_2a >= tanso2 ) { tg_ht_ao_2a = millis();
      if ( led_dc_2 == 1) {
        if ( tanso2 >= 21) {
          if ( stt_ts_ao_2 == 0 ) {
            analogWrite(led_1, 255);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, 255);
            stt_ts_ao_2 = 1;
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_2 = 0;
          }
        }
        else {
          analogWrite(led_1, 255);
          analogWrite(led_2, LOW);
          analogWrite(led_3, LOW);
          analogWrite(led_4, LOW);
          analogWrite(led_5, LOW);
          analogWrite(led_6, 255);
        }  
      }
      if ( led_dc_2 == 2) {
        if ( tanso2 >= 21) {
          if ( stt_ts_ao_2 == 0 ) {
            analogWrite(led_1, LOW);
            analogWrite(led_2, 255);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, 255);
            analogWrite(led_6, LOW);
            stt_ts_ao_2 = 1;
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_2 = 0;
          }
        }
        else {
          analogWrite(led_1, LOW);
          analogWrite(led_2, 255);
          analogWrite(led_3, LOW);
          analogWrite(led_4, LOW);
          analogWrite(led_5, 255);
          analogWrite(led_6, LOW);
        }  
      }
      if ( led_dc_2 == 3) {
        if ( tanso2 >= 21) {
          if ( stt_ts_ao_2 == 0 ) {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, 255);
            analogWrite(led_4, 255);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_2 = 1;
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_2 = 0;
          }
        }
        else {
          analogWrite(led_1, LOW);
          analogWrite(led_2, LOW);
          analogWrite(led_3, 255);
          analogWrite(led_4, 255);
          analogWrite(led_5, LOW);
          analogWrite(led_6, LOW);
        }  
      }
    }
  }
  if( krl == 52 ) {
    analogWrite(led_1, LOW);
    analogWrite(led_2, LOW);
    analogWrite(led_3, LOW);
    analogWrite(led_4, LOW);
    analogWrite(led_5, LOW);
    analogWrite(led_6, LOW);
    kpr = 0; krl = 0;
    led_dc_2 = 0;
    ctn_ao_2 = 0;
  }
  

  
  ////////////////////////////////////////////////////////////////////////
  //////////////////////////////   LINE 3   //////////////////////////////
  ////////////////////////////////////////////////////////////////////////
  if ( kpr == 56 ) {
    ctn_ao_3 = 1;
    reset_eff_nor();
  }
  if ( ctn_ao_3 == 1 ) {
    if ( jikan - tg_ht_ao_3 >= tanso_ao_3 * 2 ) { tg_ht_ao_3 = millis();
      if ( ctrl_combo != 1 ) {
        led_dc_3 += 1;
        if ( led_dc_3 == 4 ) led_dc_3 = 1;
      }
      else {
        led_dc_3 -= 1;
        if ( led_dc_3 == 0 ) led_dc_3 = 3;
      }
    }
  }
  if ( led_dc_3 != 0 ) {
    if ( jikan - tg_ht_ao_3a >= tanso3 ) { tg_ht_ao_3a = millis();
      if ( led_dc_3 == 1) {
        if ( tanso1 >= 21) {
          if ( stt_ts_ao_3 == 0 ) {
            analogWrite(led_1, 255);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, 255);
            stt_ts_ao_3 = 1;
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_3 = 0;
          }
        }
        else {
          analogWrite(led_1, 255);
          analogWrite(led_2, LOW);
          analogWrite(led_3, LOW);
          analogWrite(led_4, LOW);
          analogWrite(led_5, LOW);
          analogWrite(led_6, 255);
        }  
      }
      if ( led_dc_3 == 2) {
        if ( tanso1 >= 21) {
          if ( stt_ts_ao_3 == 0 ) {
            analogWrite(led_1, LOW);
            analogWrite(led_2, 255);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, 255);
            analogWrite(led_6, LOW);
            stt_ts_ao_3 = 1;
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_3 = 0;
          }
        }
        else {
          analogWrite(led_1, LOW);
          analogWrite(led_2, 255);
          analogWrite(led_3, LOW);
          analogWrite(led_4, LOW);
          analogWrite(led_5, 255);
          analogWrite(led_6, LOW);
        }  
      }
      if ( led_dc_3 == 3) {
        if ( tanso1 >= 21) {
          if ( stt_ts_ao_3 == 0 ) {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, 255);
            analogWrite(led_4, 255);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_3 = 1;
          }
          else {
            analogWrite(led_1, LOW);
            analogWrite(led_2, LOW);
            analogWrite(led_3, LOW);
            analogWrite(led_4, LOW);
            analogWrite(led_5, LOW);
            analogWrite(led_6, LOW);
            stt_ts_ao_3 = 0;
          }
        }
        else {
          analogWrite(led_1, LOW);
          analogWrite(led_2, LOW);
          analogWrite(led_3, 255);
          analogWrite(led_4, 255);
          analogWrite(led_5, LOW);
          analogWrite(led_6, LOW);
        }  
      }
    }
  }
  if( krl == 56 ) {
    analogWrite(led_1, LOW);
    analogWrite(led_2, LOW);
    analogWrite(led_3, LOW);
    analogWrite(led_4, LOW);
    analogWrite(led_5, LOW);
    analogWrite(led_6, LOW);
    kpr = 0; krl = 0;
    led_dc_3 = 0;
    ctn_ao_3 = 0;
  }
}

void reset_val() {
  ctn1 = 0;     ctn2 = 0;     ctn3 = 0;     ctn4 = 0;     ctn5 = 0;     ctn6 = 0;
  ctn1b = 0;    ctn2b = 0;    ctn3b = 0;    ctn4b = 0;    ctn5b = 0;    ctn6b = 0;
  ctn1c = 0;    ctn2c = 0;    ctn3c = 0;    ctn4c = 0;    ctn5c = 0;    ctn6c = 0;
  ctn1c2 = 0;   ctn2c2 = 0;   ctn3c2 = 0;   ctn4c2 = 0;   ctn5c2 = 0;   ctn6c2 = 0;
  ctn1c3 = 0;   ctn2c3 = 0;   ctn3c3 = 0;   ctn4c3 = 0;   ctn5c3 = 0;   ctn6c3 = 0;
  ctn1_2 = 0;   ctn2_2 = 0;   ctn3_2 = 0;   ctn4_2 = 0;   ctn5_2 = 0;   ctn6_2 = 0;
  ctn1b_2 = 0;  ctn2b_2 = 0;  ctn3b_2 = 0;  ctn4b_2 = 0;  ctn5b_2 = 0;  ctn6b_2 = 0;
  ctn1c_2 = 0;  ctn2c_2 = 0;  ctn3c_2 = 0;  ctn4c_2 = 0;  ctn5c_2 = 0;  ctn6c_2 = 0;
  ctn1c2_2 = 0; ctn2c2_2 = 0; ctn3c2_2 = 0; ctn4c2_2 = 0; ctn5c2_2 = 0; ctn6c2_2 = 0;
  ctn1c3_2 = 0; ctn2c3_2 = 0; ctn3c3_2 = 0; ctn4c3_2 = 0; ctn5c3_2 = 0; ctn6c3_2 = 0;
  ctn1_3 = 0;   ctn2_3 = 0;   ctn3_3 = 0;   ctn4_3 = 0;   ctn5_3 = 0;   ctn6_3 = 0;
  ctn1b_3 = 0;  ctn2b_3 = 0;  ctn3b_3 = 0;  ctn4b_3 = 0;  ctn5b_3 = 0;  ctn6b_3 = 0;
  ctn1c_3 = 0;  ctn2c_3 = 0;  ctn3c_3 = 0;  ctn4c_3 = 0;  ctn5c_3 = 0;  ctn6c_3 = 0;
  ctn1c2_3 = 0; ctn2c2_3 = 0; ctn3c2_3 = 0; ctn4c2_3 = 0; ctn5c2_3 = 0; ctn6c2_3 = 0;
  ctn1c3_3 = 0; ctn2c3_3 = 0; ctn3c3_3 = 0; ctn4c3_3 = 0; ctn5c3_3 = 0; ctn6c3_3 = 0;

  fa1 = 1; fa2 = 1; fa3 = 1; fa4 = 1; fa5 = 1; fa6 = 1;
  fa_ao_1 = 1; fa_ao_2 = 1; fa_ao_3 = 1;
  brn1 = 0; brn2 = 0; brn3 = 0; brn4 = 0; brn5 = 0; brn6 = 0;
  brn_ao_1 = 0; brn_ao_2 = 0; brn_ao_3 = 0;
  led_dc_1 = 0; led_dc_2 = 0; led_dc_3 = 0;

  ctn_ao_1 = 0;     ctn_ao_2 = 0;     ctn_ao_3 = 0;
  ctn_ao_1b = 0;    ctn_ao_2b = 0;    ctn_ao_3b = 0;
  ctn_ao_1c = 0;    ctn_ao_2c = 0;    ctn_ao_3c = 0;
  ctn_ao_1c2 = 0;   ctn_ao_2c2 = 0;   ctn_ao_3c2 = 0;
  ctn_ao_1c3 = 0;   ctn_ao_2c3 = 0;   ctn_ao_3c3 = 0;
  ctn_ao_1_2 = 0;     ctn_ao_2_2 = 0;     ctn_ao_3_2 = 0;
  ctn_ao_1b_2 = 0;    ctn_ao_2b_2 = 0;    ctn_ao_3b_2 = 0;
  ctn_ao_1c_2 = 0;    ctn_ao_2c_2 = 0;    ctn_ao_3c_2 = 0;
  ctn_ao_1c2_2 = 0;   ctn_ao_2c2_2 = 0;   ctn_ao_3c2_2 = 0;
  ctn_ao_1c3_2 = 0;   ctn_ao_2c3_2 = 0;   ctn_ao_3c3_2 = 0;
  ctn_ao_1_3 = 0;     ctn_ao_2_3 = 0;     ctn_ao_3_3 = 0;
  ctn_ao_1b_3 = 0;    ctn_ao_2b_3 = 0;    ctn_ao_3b_3 = 0;
  ctn_ao_1c_3 = 0;    ctn_ao_2c_3 = 0;    ctn_ao_3c_3 = 0;
  ctn_ao_1c2_3 = 0;   ctn_ao_2c2_3 = 0;   ctn_ao_3c2_3 = 0;
  ctn_ao_1c3_3 = 0;   ctn_ao_2c3_3 = 0;   ctn_ao_3c3_3 = 0;

  stt_ts1 = 0; stt_ts2 = 0; stt_ts3 = 0; stt_ts4 = 0; stt_ts5 = 0; stt_ts6 = 0;
  stt_ts_ao_1 = 0; stt_ts_ao_2 = 0; stt_ts_ao_3 = 0;

  analogWrite(led_1, LOW);
  analogWrite(led_2, LOW);
  analogWrite(led_3, LOW);
  analogWrite(led_4, LOW);
  analogWrite(led_5, LOW);
  analogWrite(led_6, LOW);
}

void reset_eff_nor() {
  ctn1 = 0;     ctn2 = 0;     ctn3 = 0;     ctn4 = 0;     ctn5 = 0;     ctn6 = 0;
  ctn1b = 0;    ctn2b = 0;    ctn3b = 0;    ctn4b = 0;    ctn5b = 0;    ctn6b = 0;
  ctn1c = 0;    ctn2c = 0;    ctn3c = 0;    ctn4c = 0;    ctn5c = 0;    ctn6c = 0;
  ctn1c2 = 0;   ctn2c2 = 0;   ctn3c2 = 0;   ctn4c2 = 0;   ctn5c2 = 0;   ctn6c2 = 0;
  ctn1c3 = 0;   ctn2c3 = 0;   ctn3c3 = 0;   ctn4c3 = 0;   ctn5c3 = 0;   ctn6c3 = 0;
  ctn1_2 = 0;   ctn2_2 = 0;   ctn3_2 = 0;   ctn4_2 = 0;   ctn5_2 = 0;   ctn6_2 = 0;
  ctn1b_2 = 0;  ctn2b_2 = 0;  ctn3b_2 = 0;  ctn4b_2 = 0;  ctn5b_2 = 0;  ctn6b_2 = 0;
  ctn1c_2 = 0;  ctn2c_2 = 0;  ctn3c_2 = 0;  ctn4c_2 = 0;  ctn5c_2 = 0;  ctn6c_2 = 0;
  ctn1c2_2 = 0; ctn2c2_2 = 0; ctn3c2_2 = 0; ctn4c2_2 = 0; ctn5c2_2 = 0; ctn6c2_2 = 0;
  ctn1c3_2 = 0; ctn2c3_2 = 0; ctn3c3_2 = 0; ctn4c3_2 = 0; ctn5c3_2 = 0; ctn6c3_2 = 0;
  ctn1_3 = 0;   ctn2_3 = 0;   ctn3_3 = 0;   ctn4_3 = 0;   ctn5_3 = 0;   ctn6_3 = 0;
  ctn1b_3 = 0;  ctn2b_3 = 0;  ctn3b_3 = 0;  ctn4b_3 = 0;  ctn5b_3 = 0;  ctn6b_3 = 0;
  ctn1c_3 = 0;  ctn2c_3 = 0;  ctn3c_3 = 0;  ctn4c_3 = 0;  ctn5c_3 = 0;  ctn6c_3 = 0;
  ctn1c2_3 = 0; ctn2c2_3 = 0; ctn3c2_3 = 0; ctn4c2_3 = 0; ctn5c2_3 = 0; ctn6c2_3 = 0;
  ctn1c3_3 = 0; ctn2c3_3 = 0; ctn3c3_3 = 0; ctn4c3_3 = 0; ctn5c3_3 = 0; ctn6c3_3 = 0;

  fa1 = 1; fa2 = 1; fa3 = 1; fa4 = 1; fa5 = 1; fa6 = 1;
  brn1 = 0; brn2 = 0; brn3 = 0; brn4 = 0; brn5 = 0; brn6 = 0;

  stt_ts1 = 0; stt_ts2 = 0; stt_ts3 = 0; stt_ts4 = 0; stt_ts5 = 0; stt_ts6 = 0;
}