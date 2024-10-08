#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Q2()
{
//=========Macro generated from canvas: c1/
//=========  (Mon Sep 16 14:45:57 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-1.578947,-121932.6,11.57895,894172.2);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   THStack *hs = new THStack();
   hs->SetName("hs");
   hs->SetTitle("");
   hs->SetMaximum(772239.6);
   
   TH1F *hs_stack_17 = new TH1F("hs_stack_17","",200,0,10);
   hs_stack_17->SetMinimum(0);
   hs_stack_17->SetMaximum(772239.6);
   hs_stack_17->SetDirectory(nullptr);
   hs_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_17->SetLineColor(ci);
   hs_stack_17->SetLineWidth(0);
   hs_stack_17->GetXaxis()->SetTitle("Q^{2} [GeV^{2}/c^{2}]");
   hs_stack_17->GetXaxis()->SetLabelFont(42);
   hs_stack_17->GetXaxis()->SetTitleSize(0.05);
   hs_stack_17->GetXaxis()->SetTitleOffset(1);
   hs_stack_17->GetXaxis()->SetTitleFont(42);
   hs_stack_17->GetYaxis()->SetLabelFont(42);
   hs_stack_17->GetYaxis()->SetTitleFont(42);
   hs_stack_17->GetZaxis()->SetLabelFont(42);
   hs_stack_17->GetZaxis()->SetTitleOffset(1);
   hs_stack_17->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_17);
   
   
   TH1F *Q2_stack_1 = new TH1F("Q2_stack_1","",200,0,10);
   Q2_stack_1->SetBinContent(1,330);
   Q2_stack_1->SetBinContent(2,6636);
   Q2_stack_1->SetBinContent(3,74277);
   Q2_stack_1->SetBinContent(4,217527);
   Q2_stack_1->SetBinContent(5,325601);
   Q2_stack_1->SetBinContent(6,394753);
   Q2_stack_1->SetBinContent(7,444949);
   Q2_stack_1->SetBinContent(8,484674);
   Q2_stack_1->SetBinContent(9,526779);
   Q2_stack_1->SetBinContent(10,565068);
   Q2_stack_1->SetBinContent(11,598035);
   Q2_stack_1->SetBinContent(12,622752);
   Q2_stack_1->SetBinContent(13,636461);
   Q2_stack_1->SetBinContent(14,643533);
   Q2_stack_1->SetBinContent(15,640741);
   Q2_stack_1->SetBinContent(16,630736);
   Q2_stack_1->SetBinContent(17,609656);
   Q2_stack_1->SetBinContent(18,585443);
   Q2_stack_1->SetBinContent(19,556982);
   Q2_stack_1->SetBinContent(20,525771);
   Q2_stack_1->SetBinContent(21,496147);
   Q2_stack_1->SetBinContent(22,466673);
   Q2_stack_1->SetBinContent(23,442790);
   Q2_stack_1->SetBinContent(24,427504);
   Q2_stack_1->SetBinContent(25,416388);
   Q2_stack_1->SetBinContent(26,404795);
   Q2_stack_1->SetBinContent(27,392290);
   Q2_stack_1->SetBinContent(28,381867);
   Q2_stack_1->SetBinContent(29,366817);
   Q2_stack_1->SetBinContent(30,353098);
   Q2_stack_1->SetBinContent(31,339027);
   Q2_stack_1->SetBinContent(32,326409);
   Q2_stack_1->SetBinContent(33,311938);
   Q2_stack_1->SetBinContent(34,298745);
   Q2_stack_1->SetBinContent(35,285171);
   Q2_stack_1->SetBinContent(36,271743);
   Q2_stack_1->SetBinContent(37,257344);
   Q2_stack_1->SetBinContent(38,245062);
   Q2_stack_1->SetBinContent(39,233533);
   Q2_stack_1->SetBinContent(40,223347);
   Q2_stack_1->SetBinContent(41,211932);
   Q2_stack_1->SetBinContent(42,200335);
   Q2_stack_1->SetBinContent(43,191772);
   Q2_stack_1->SetBinContent(44,183055);
   Q2_stack_1->SetBinContent(45,173408);
   Q2_stack_1->SetBinContent(46,165176);
   Q2_stack_1->SetBinContent(47,157822);
   Q2_stack_1->SetBinContent(48,149665);
   Q2_stack_1->SetBinContent(49,141813);
   Q2_stack_1->SetBinContent(50,134729);
   Q2_stack_1->SetBinContent(51,128804);
   Q2_stack_1->SetBinContent(52,120991);
   Q2_stack_1->SetBinContent(53,116278);
   Q2_stack_1->SetBinContent(54,110423);
   Q2_stack_1->SetBinContent(55,104614);
   Q2_stack_1->SetBinContent(56,100217);
   Q2_stack_1->SetBinContent(57,95091);
   Q2_stack_1->SetBinContent(58,90951);
   Q2_stack_1->SetBinContent(59,86489);
   Q2_stack_1->SetBinContent(60,82126);
   Q2_stack_1->SetBinContent(61,77689);
   Q2_stack_1->SetBinContent(62,74016);
   Q2_stack_1->SetBinContent(63,70370);
   Q2_stack_1->SetBinContent(64,67343);
   Q2_stack_1->SetBinContent(65,63938);
   Q2_stack_1->SetBinContent(66,60931);
   Q2_stack_1->SetBinContent(67,57964);
   Q2_stack_1->SetBinContent(68,55480);
   Q2_stack_1->SetBinContent(69,52855);
   Q2_stack_1->SetBinContent(70,49810);
   Q2_stack_1->SetBinContent(71,47366);
   Q2_stack_1->SetBinContent(72,45449);
   Q2_stack_1->SetBinContent(73,43867);
   Q2_stack_1->SetBinContent(74,41692);
   Q2_stack_1->SetBinContent(75,39365);
   Q2_stack_1->SetBinContent(76,37306);
   Q2_stack_1->SetBinContent(77,36055);
   Q2_stack_1->SetBinContent(78,33666);
   Q2_stack_1->SetBinContent(79,32484);
   Q2_stack_1->SetBinContent(80,31269);
   Q2_stack_1->SetBinContent(81,29851);
   Q2_stack_1->SetBinContent(82,28425);
   Q2_stack_1->SetBinContent(83,27133);
   Q2_stack_1->SetBinContent(84,25221);
   Q2_stack_1->SetBinContent(85,24603);
   Q2_stack_1->SetBinContent(86,23420);
   Q2_stack_1->SetBinContent(87,22108);
   Q2_stack_1->SetBinContent(88,21426);
   Q2_stack_1->SetBinContent(89,20087);
   Q2_stack_1->SetBinContent(90,19016);
   Q2_stack_1->SetBinContent(91,18284);
   Q2_stack_1->SetBinContent(92,17565);
   Q2_stack_1->SetBinContent(93,16397);
   Q2_stack_1->SetBinContent(94,16157);
   Q2_stack_1->SetBinContent(95,15274);
   Q2_stack_1->SetBinContent(96,14244);
   Q2_stack_1->SetBinContent(97,13770);
   Q2_stack_1->SetBinContent(98,13028);
   Q2_stack_1->SetBinContent(99,12489);
   Q2_stack_1->SetBinContent(100,11715);
   Q2_stack_1->SetBinContent(101,11352);
   Q2_stack_1->SetBinContent(102,10944);
   Q2_stack_1->SetBinContent(103,10346);
   Q2_stack_1->SetBinContent(104,9664);
   Q2_stack_1->SetBinContent(105,9097);
   Q2_stack_1->SetBinContent(106,8987);
   Q2_stack_1->SetBinContent(107,8227);
   Q2_stack_1->SetBinContent(108,8097);
   Q2_stack_1->SetBinContent(109,7576);
   Q2_stack_1->SetBinContent(110,7433);
   Q2_stack_1->SetBinContent(111,6886);
   Q2_stack_1->SetBinContent(112,6616);
   Q2_stack_1->SetBinContent(113,6347);
   Q2_stack_1->SetBinContent(114,5903);
   Q2_stack_1->SetBinContent(115,5717);
   Q2_stack_1->SetBinContent(116,5249);
   Q2_stack_1->SetBinContent(117,5262);
   Q2_stack_1->SetBinContent(118,4889);
   Q2_stack_1->SetBinContent(119,4735);
   Q2_stack_1->SetBinContent(120,4256);
   Q2_stack_1->SetBinContent(121,4166);
   Q2_stack_1->SetBinContent(122,4001);
   Q2_stack_1->SetBinContent(123,3673);
   Q2_stack_1->SetBinContent(124,3557);
   Q2_stack_1->SetBinContent(125,3447);
   Q2_stack_1->SetBinContent(126,3232);
   Q2_stack_1->SetBinContent(127,3019);
   Q2_stack_1->SetBinContent(128,2893);
   Q2_stack_1->SetBinContent(129,2757);
   Q2_stack_1->SetBinContent(130,2597);
   Q2_stack_1->SetBinContent(131,2512);
   Q2_stack_1->SetBinContent(132,2342);
   Q2_stack_1->SetBinContent(133,2179);
   Q2_stack_1->SetBinContent(134,2002);
   Q2_stack_1->SetBinContent(135,1972);
   Q2_stack_1->SetBinContent(136,1905);
   Q2_stack_1->SetBinContent(137,1824);
   Q2_stack_1->SetBinContent(138,1760);
   Q2_stack_1->SetBinContent(139,1598);
   Q2_stack_1->SetBinContent(140,1501);
   Q2_stack_1->SetBinContent(141,1410);
   Q2_stack_1->SetBinContent(142,1380);
   Q2_stack_1->SetBinContent(143,1233);
   Q2_stack_1->SetBinContent(144,1139);
   Q2_stack_1->SetBinContent(145,1163);
   Q2_stack_1->SetBinContent(146,1061);
   Q2_stack_1->SetBinContent(147,1046);
   Q2_stack_1->SetBinContent(148,977);
   Q2_stack_1->SetBinContent(149,869);
   Q2_stack_1->SetBinContent(150,918);
   Q2_stack_1->SetBinContent(151,824);
   Q2_stack_1->SetBinContent(152,802);
   Q2_stack_1->SetBinContent(153,814);
   Q2_stack_1->SetBinContent(154,719);
   Q2_stack_1->SetBinContent(155,626);
   Q2_stack_1->SetBinContent(156,608);
   Q2_stack_1->SetBinContent(157,606);
   Q2_stack_1->SetBinContent(158,532);
   Q2_stack_1->SetBinContent(159,568);
   Q2_stack_1->SetBinContent(160,500);
   Q2_stack_1->SetBinContent(161,452);
   Q2_stack_1->SetBinContent(162,377);
   Q2_stack_1->SetBinContent(163,388);
   Q2_stack_1->SetBinContent(164,347);
   Q2_stack_1->SetBinContent(165,395);
   Q2_stack_1->SetBinContent(166,376);
   Q2_stack_1->SetBinContent(167,298);
   Q2_stack_1->SetBinContent(168,282);
   Q2_stack_1->SetBinContent(169,285);
   Q2_stack_1->SetBinContent(170,293);
   Q2_stack_1->SetBinContent(171,201);
   Q2_stack_1->SetBinContent(172,230);
   Q2_stack_1->SetBinContent(173,209);
   Q2_stack_1->SetBinContent(174,211);
   Q2_stack_1->SetBinContent(175,187);
   Q2_stack_1->SetBinContent(176,186);
   Q2_stack_1->SetBinContent(177,164);
   Q2_stack_1->SetBinContent(178,138);
   Q2_stack_1->SetBinContent(179,139);
   Q2_stack_1->SetBinContent(180,111);
   Q2_stack_1->SetBinContent(181,111);
   Q2_stack_1->SetBinContent(182,140);
   Q2_stack_1->SetBinContent(183,101);
   Q2_stack_1->SetBinContent(184,80);
   Q2_stack_1->SetBinContent(185,79);
   Q2_stack_1->SetBinContent(186,91);
   Q2_stack_1->SetBinContent(187,87);
   Q2_stack_1->SetBinContent(188,60);
   Q2_stack_1->SetBinContent(189,74);
   Q2_stack_1->SetBinContent(190,76);
   Q2_stack_1->SetBinContent(191,65);
   Q2_stack_1->SetBinContent(192,59);
   Q2_stack_1->SetBinContent(193,51);
   Q2_stack_1->SetBinContent(194,55);
   Q2_stack_1->SetBinContent(195,46);
   Q2_stack_1->SetBinContent(196,40);
   Q2_stack_1->SetBinContent(197,41);
   Q2_stack_1->SetBinContent(198,48);
   Q2_stack_1->SetBinContent(199,44);
   Q2_stack_1->SetBinContent(200,25);
   Q2_stack_1->SetBinContent(201,365);
   Q2_stack_1->SetEntries(2.041153e+07);
   Q2_stack_1->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   2.041153e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.405");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.046");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   Q2_stack_1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Q2_stack_1);

   ci = TColor::GetColor("#121415");
   Q2_stack_1->SetLineColor(ci);
   Q2_stack_1->GetXaxis()->SetLabelFont(42);
   Q2_stack_1->GetXaxis()->SetTitleOffset(1);
   Q2_stack_1->GetXaxis()->SetTitleFont(42);
   Q2_stack_1->GetYaxis()->SetLabelFont(42);
   Q2_stack_1->GetYaxis()->SetTitleFont(42);
   Q2_stack_1->GetZaxis()->SetLabelFont(42);
   Q2_stack_1->GetZaxis()->SetTitleOffset(1);
   Q2_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(Q2_stack_1,"sames histo");
   
   TH1F *Q2_stack_2 = new TH1F("Q2_stack_2","",200,0,10);
   Q2_stack_2->SetBinContent(25,1314);
   Q2_stack_2->SetBinContent(26,47304);
   Q2_stack_2->SetBinContent(27,122202);
   Q2_stack_2->SetBinContent(28,172134);
   Q2_stack_2->SetBinContent(29,206298);
   Q2_stack_2->SetBinContent(30,336384);
   Q2_stack_2->SetBinContent(31,315360);
   Q2_stack_2->SetBinContent(32,339012);
   Q2_stack_2->SetBinContent(33,378432);
   Q2_stack_2->SetBinContent(34,417852);
   Q2_stack_2->SetBinContent(35,421794);
   Q2_stack_2->SetBinContent(36,377118);
   Q2_stack_2->SetBinContent(37,378432);
   Q2_stack_2->SetBinContent(38,424422);
   Q2_stack_2->SetBinContent(39,395514);
   Q2_stack_2->SetBinContent(40,367920);
   Q2_stack_2->SetBinContent(41,348210);
   Q2_stack_2->SetBinContent(42,361350);
   Q2_stack_2->SetBinContent(43,419166);
   Q2_stack_2->SetBinContent(44,377118);
   Q2_stack_2->SetBinContent(45,341640);
   Q2_stack_2->SetBinContent(46,341640);
   Q2_stack_2->SetBinContent(47,320616);
   Q2_stack_2->SetBinContent(48,308790);
   Q2_stack_2->SetBinContent(49,281196);
   Q2_stack_2->SetBinContent(50,265428);
   Q2_stack_2->SetBinContent(51,271998);
   Q2_stack_2->SetBinContent(52,256230);
   Q2_stack_2->SetBinContent(53,249660);
   Q2_stack_2->SetBinContent(54,268056);
   Q2_stack_2->SetBinContent(55,218124);
   Q2_stack_2->SetBinContent(56,226008);
   Q2_stack_2->SetBinContent(57,257544);
   Q2_stack_2->SetBinContent(58,185274);
   Q2_stack_2->SetBinContent(59,182646);
   Q2_stack_2->SetBinContent(60,181332);
   Q2_stack_2->SetBinContent(61,161622);
   Q2_stack_2->SetBinContent(62,172134);
   Q2_stack_2->SetBinContent(63,127458);
   Q2_stack_2->SetBinContent(64,135342);
   Q2_stack_2->SetBinContent(65,124830);
   Q2_stack_2->SetBinContent(66,114318);
   Q2_stack_2->SetBinContent(67,136656);
   Q2_stack_2->SetBinContent(68,105120);
   Q2_stack_2->SetBinContent(69,127458);
   Q2_stack_2->SetBinContent(70,93294);
   Q2_stack_2->SetBinContent(71,80154);
   Q2_stack_2->SetBinContent(72,78840);
   Q2_stack_2->SetBinContent(73,82782);
   Q2_stack_2->SetBinContent(74,81468);
   Q2_stack_2->SetBinContent(75,77526);
   Q2_stack_2->SetBinContent(76,88038);
   Q2_stack_2->SetBinContent(77,61758);
   Q2_stack_2->SetBinContent(78,73584);
   Q2_stack_2->SetBinContent(79,42048);
   Q2_stack_2->SetBinContent(80,57816);
   Q2_stack_2->SetBinContent(81,56502);
   Q2_stack_2->SetBinContent(82,52560);
   Q2_stack_2->SetBinContent(83,48618);
   Q2_stack_2->SetBinContent(84,51246);
   Q2_stack_2->SetBinContent(85,44676);
   Q2_stack_2->SetBinContent(86,36792);
   Q2_stack_2->SetBinContent(87,38106);
   Q2_stack_2->SetBinContent(88,32850);
   Q2_stack_2->SetBinContent(89,38106);
   Q2_stack_2->SetBinContent(90,39420);
   Q2_stack_2->SetBinContent(91,34164);
   Q2_stack_2->SetBinContent(92,26280);
   Q2_stack_2->SetBinContent(93,27594);
   Q2_stack_2->SetBinContent(94,22338);
   Q2_stack_2->SetBinContent(95,30222);
   Q2_stack_2->SetBinContent(96,28908);
   Q2_stack_2->SetBinContent(97,19710);
   Q2_stack_2->SetBinContent(98,28908);
   Q2_stack_2->SetBinContent(99,17082);
   Q2_stack_2->SetBinContent(100,18396);
   Q2_stack_2->SetBinContent(101,17082);
   Q2_stack_2->SetBinContent(102,23652);
   Q2_stack_2->SetBinContent(103,19710);
   Q2_stack_2->SetBinContent(104,15768);
   Q2_stack_2->SetBinContent(105,17082);
   Q2_stack_2->SetBinContent(106,18396);
   Q2_stack_2->SetBinContent(107,10512);
   Q2_stack_2->SetBinContent(108,11826);
   Q2_stack_2->SetBinContent(109,15768);
   Q2_stack_2->SetBinContent(110,13140);
   Q2_stack_2->SetBinContent(111,13140);
   Q2_stack_2->SetBinContent(112,3942);
   Q2_stack_2->SetBinContent(113,6570);
   Q2_stack_2->SetBinContent(114,7884);
   Q2_stack_2->SetBinContent(115,11826);
   Q2_stack_2->SetBinContent(116,3942);
   Q2_stack_2->SetBinContent(117,6570);
   Q2_stack_2->SetBinContent(118,3942);
   Q2_stack_2->SetBinContent(119,7884);
   Q2_stack_2->SetBinContent(120,3942);
   Q2_stack_2->SetBinContent(121,1314);
   Q2_stack_2->SetBinContent(123,7884);
   Q2_stack_2->SetBinContent(124,6570);
   Q2_stack_2->SetBinContent(125,5256);
   Q2_stack_2->SetBinContent(126,2628);
   Q2_stack_2->SetBinContent(127,1314);
   Q2_stack_2->SetBinContent(128,2628);
   Q2_stack_2->SetBinContent(129,1314);
   Q2_stack_2->SetBinContent(130,1314);
   Q2_stack_2->SetBinContent(132,3942);
   Q2_stack_2->SetBinContent(133,2628);
   Q2_stack_2->SetBinContent(134,1314);
   Q2_stack_2->SetBinContent(136,1314);
   Q2_stack_2->SetBinContent(137,5256);
   Q2_stack_2->SetBinContent(138,1314);
   Q2_stack_2->SetBinContent(140,5256);
   Q2_stack_2->SetBinContent(143,1314);
   Q2_stack_2->SetBinContent(146,1314);
   Q2_stack_2->SetBinContent(150,1314);
   Q2_stack_2->SetBinContent(195,1314);
   Q2_stack_2->SetBinError(25,1314);
   Q2_stack_2->SetBinError(26,7884);
   Q2_stack_2->SetBinError(27,12671.76);
   Q2_stack_2->SetBinError(28,15039.42);
   Q2_stack_2->SetBinError(29,16464.37);
   Q2_stack_2->SetBinError(30,21024);
   Q2_stack_2->SetBinError(31,20356.4);
   Q2_stack_2->SetBinError(32,21105.97);
   Q2_stack_2->SetBinError(33,22299.32);
   Q2_stack_2->SetBinError(34,23431.98);
   Q2_stack_2->SetBinError(35,23542.25);
   Q2_stack_2->SetBinError(36,22260.57);
   Q2_stack_2->SetBinError(37,22299.32);
   Q2_stack_2->SetBinError(38,23615.47);
   Q2_stack_2->SetBinError(39,22797.05);
   Q2_stack_2->SetBinError(40,21987.43);
   Q2_stack_2->SetBinError(41,21390.37);
   Q2_stack_2->SetBinError(42,21790.22);
   Q2_stack_2->SetBinError(43,23468.79);
   Q2_stack_2->SetBinError(44,22260.57);
   Q2_stack_2->SetBinError(45,21187.61);
   Q2_stack_2->SetBinError(46,21187.61);
   Q2_stack_2->SetBinError(47,20525.34);
   Q2_stack_2->SetBinError(48,20143.24);
   Q2_stack_2->SetBinError(49,19222.16);
   Q2_stack_2->SetBinError(50,18675.45);
   Q2_stack_2->SetBinError(51,18905.17);
   Q2_stack_2->SetBinError(52,18349.01);
   Q2_stack_2->SetBinError(53,18112.24);
   Q2_stack_2->SetBinError(54,18767.67);
   Q2_stack_2->SetBinError(55,16929.71);
   Q2_stack_2->SetBinError(56,17232.95);
   Q2_stack_2->SetBinError(57,18396);
   Q2_stack_2->SetBinError(58,15602.89);
   Q2_stack_2->SetBinError(59,15491.83);
   Q2_stack_2->SetBinError(60,15436);
   Q2_stack_2->SetBinError(61,14572.96);
   Q2_stack_2->SetBinError(62,15039.42);
   Q2_stack_2->SetBinError(63,12941.4);
   Q2_stack_2->SetBinError(64,13335.64);
   Q2_stack_2->SetBinError(65,12807.29);
   Q2_stack_2->SetBinError(66,12256.18);
   Q2_stack_2->SetBinError(67,13400.22);
   Q2_stack_2->SetBinError(68,11752.77);
   Q2_stack_2->SetBinError(69,12941.4);
   Q2_stack_2->SetBinError(70,11071.96);
   Q2_stack_2->SetBinError(71,10262.67);
   Q2_stack_2->SetBinError(72,10178.2);
   Q2_stack_2->SetBinError(73,10429.55);
   Q2_stack_2->SetBinError(74,10346.45);
   Q2_stack_2->SetBinError(75,10093.03);
   Q2_stack_2->SetBinError(76,10755.55);
   Q2_stack_2->SetBinError(77,9008.33);
   Q2_stack_2->SetBinError(78,9833.076);
   Q2_stack_2->SetBinError(79,7433.106);
   Q2_stack_2->SetBinError(80,8716.09);
   Q2_stack_2->SetBinError(81,8616.474);
   Q2_stack_2->SetBinError(82,8310.466);
   Q2_stack_2->SetBinError(83,7992.75);
   Q2_stack_2->SetBinError(84,8205.927);
   Q2_stack_2->SetBinError(85,7661.871);
   Q2_stack_2->SetBinError(86,6953.034);
   Q2_stack_2->SetBinError(87,7076.107);
   Q2_stack_2->SetBinError(88,6570);
   Q2_stack_2->SetBinError(89,7076.107);
   Q2_stack_2->SetBinError(90,7197.074);
   Q2_stack_2->SetBinError(91,6700.112);
   Q2_stack_2->SetBinError(92,5876.387);
   Q2_stack_2->SetBinError(93,6021.504);
   Q2_stack_2->SetBinError(94,5417.761);
   Q2_stack_2->SetBinError(95,6301.723);
   Q2_stack_2->SetBinError(96,6163.206);
   Q2_stack_2->SetBinError(97,5089.1);
   Q2_stack_2->SetBinError(98,6163.206);
   Q2_stack_2->SetBinError(99,4737.694);
   Q2_stack_2->SetBinError(100,4916.538);
   Q2_stack_2->SetBinError(101,4737.694);
   Q2_stack_2->SetBinError(102,5574.83);
   Q2_stack_2->SetBinError(103,5089.1);
   Q2_stack_2->SetBinError(104,4551.83);
   Q2_stack_2->SetBinError(105,4737.694);
   Q2_stack_2->SetBinError(106,4916.538);
   Q2_stack_2->SetBinError(107,3716.553);
   Q2_stack_2->SetBinError(108,3942);
   Q2_stack_2->SetBinError(109,4551.83);
   Q2_stack_2->SetBinError(110,4155.233);
   Q2_stack_2->SetBinError(111,4155.233);
   Q2_stack_2->SetBinError(112,2275.915);
   Q2_stack_2->SetBinError(113,2938.193);
   Q2_stack_2->SetBinError(114,3218.63);
   Q2_stack_2->SetBinError(115,3942);
   Q2_stack_2->SetBinError(116,2275.915);
   Q2_stack_2->SetBinError(117,2938.193);
   Q2_stack_2->SetBinError(118,2275.915);
   Q2_stack_2->SetBinError(119,3218.63);
   Q2_stack_2->SetBinError(120,2275.915);
   Q2_stack_2->SetBinError(121,1314);
   Q2_stack_2->SetBinError(123,3218.63);
   Q2_stack_2->SetBinError(124,2938.193);
   Q2_stack_2->SetBinError(125,2628);
   Q2_stack_2->SetBinError(126,1858.277);
   Q2_stack_2->SetBinError(127,1314);
   Q2_stack_2->SetBinError(128,1858.277);
   Q2_stack_2->SetBinError(129,1314);
   Q2_stack_2->SetBinError(130,1314);
   Q2_stack_2->SetBinError(132,2275.915);
   Q2_stack_2->SetBinError(133,1858.277);
   Q2_stack_2->SetBinError(134,1314);
   Q2_stack_2->SetBinError(136,1314);
   Q2_stack_2->SetBinError(137,2628);
   Q2_stack_2->SetBinError(138,1314);
   Q2_stack_2->SetBinError(140,2628);
   Q2_stack_2->SetBinError(143,1314);
   Q2_stack_2->SetBinError(146,1314);
   Q2_stack_2->SetBinError(150,1314);
   Q2_stack_2->SetBinError(195,1314);
   Q2_stack_2->SetEntries(10173);
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries = 10173  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  2.493");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.9079");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   Q2_stack_2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Q2_stack_2);

   ci = 1185;
   color = new TColor(ci, 0.04705882, 0.3647059, 0.6470588, " ", 0.15);
   Q2_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#0c5da5");
   Q2_stack_2->SetLineColor(ci);
   Q2_stack_2->GetXaxis()->SetLabelFont(42);
   Q2_stack_2->GetXaxis()->SetTitleOffset(1);
   Q2_stack_2->GetXaxis()->SetTitleFont(42);
   Q2_stack_2->GetYaxis()->SetLabelFont(42);
   Q2_stack_2->GetYaxis()->SetTitleFont(42);
   Q2_stack_2->GetZaxis()->SetLabelFont(42);
   Q2_stack_2->GetZaxis()->SetTitleOffset(1);
   Q2_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(Q2_stack_2,"sames histo");
   hs->Draw("hist nostack");
   TText *text = new TText(0.15,0.04,"Light blue is scale by 1314");
   text->SetNDC();

   ci = TColor::GetColor("#0c5da5");
   text->SetTextColor(ci);
   text->SetTextSize(0.04);
   text->Draw();
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   2.041153e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.405");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.046");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries = 10173  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  2.493");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.9079");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
