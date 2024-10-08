#ifdef __CLING__
#pragma cling optimize(0)
#endif
void theta_pion_minus()
{
//=========Macro generated from canvas: c1/
//=========  (Mon Sep  9 15:25:38 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-28.42105,-220662.2,208.4211,1618189);
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
   hs->SetMaximum(1397527);
   
   TH1F *hs_stack_34 = new TH1F("hs_stack_34","",200,0,180);
   hs_stack_34->SetMinimum(0);
   hs_stack_34->SetMaximum(1397527);
   hs_stack_34->SetDirectory(nullptr);
   hs_stack_34->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_34->SetLineColor(ci);
   hs_stack_34->SetLineWidth(0);
   hs_stack_34->GetXaxis()->SetTitle("#theta_{#pi^{-}} [Deg.]");
   hs_stack_34->GetXaxis()->SetLabelFont(42);
   hs_stack_34->GetXaxis()->SetTitleSize(0.05);
   hs_stack_34->GetXaxis()->SetTitleOffset(1);
   hs_stack_34->GetXaxis()->SetTitleFont(42);
   hs_stack_34->GetYaxis()->SetLabelFont(42);
   hs_stack_34->GetYaxis()->SetTitleFont(42);
   hs_stack_34->GetZaxis()->SetLabelFont(42);
   hs_stack_34->GetZaxis()->SetTitleOffset(1);
   hs_stack_34->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_34);
   
   
   TH1F *theta_pion_minus_stack_1 = new TH1F("theta_pion_minus_stack_1","",200,0,180);
   theta_pion_minus_stack_1->SetBinContent(1,535);
   theta_pion_minus_stack_1->SetBinContent(2,2168);
   theta_pion_minus_stack_1->SetBinContent(3,5410);
   theta_pion_minus_stack_1->SetBinContent(4,12188);
   theta_pion_minus_stack_1->SetBinContent(5,30080);
   theta_pion_minus_stack_1->SetBinContent(6,103741);
   theta_pion_minus_stack_1->SetBinContent(7,553365);
   theta_pion_minus_stack_1->SetBinContent(8,826897);
   theta_pion_minus_stack_1->SetBinContent(9,919962);
   theta_pion_minus_stack_1->SetBinContent(10,985444);
   theta_pion_minus_stack_1->SetBinContent(11,1037790);
   theta_pion_minus_stack_1->SetBinContent(12,1096157);
   theta_pion_minus_stack_1->SetBinContent(13,1136304);
   theta_pion_minus_stack_1->SetBinContent(14,1158357);
   theta_pion_minus_stack_1->SetBinContent(15,1164606);
   theta_pion_minus_stack_1->SetBinContent(16,1162141);
   theta_pion_minus_stack_1->SetBinContent(17,1148091);
   theta_pion_minus_stack_1->SetBinContent(18,1125780);
   theta_pion_minus_stack_1->SetBinContent(19,1099829);
   theta_pion_minus_stack_1->SetBinContent(20,1077858);
   theta_pion_minus_stack_1->SetBinContent(21,1051267);
   theta_pion_minus_stack_1->SetBinContent(22,1019085);
   theta_pion_minus_stack_1->SetBinContent(23,985837);
   theta_pion_minus_stack_1->SetBinContent(24,954090);
   theta_pion_minus_stack_1->SetBinContent(25,919099);
   theta_pion_minus_stack_1->SetBinContent(26,880133);
   theta_pion_minus_stack_1->SetBinContent(27,830951);
   theta_pion_minus_stack_1->SetBinContent(28,783350);
   theta_pion_minus_stack_1->SetBinContent(29,739776);
   theta_pion_minus_stack_1->SetBinContent(30,696029);
   theta_pion_minus_stack_1->SetBinContent(31,653306);
   theta_pion_minus_stack_1->SetBinContent(32,618334);
   theta_pion_minus_stack_1->SetBinContent(33,585602);
   theta_pion_minus_stack_1->SetBinContent(34,561736);
   theta_pion_minus_stack_1->SetBinContent(35,544104);
   theta_pion_minus_stack_1->SetBinContent(36,529039);
   theta_pion_minus_stack_1->SetBinContent(37,519074);
   theta_pion_minus_stack_1->SetBinContent(38,520510);
   theta_pion_minus_stack_1->SetBinContent(39,531939);
   theta_pion_minus_stack_1->SetBinContent(40,542469);
   theta_pion_minus_stack_1->SetBinContent(41,542239);
   theta_pion_minus_stack_1->SetBinContent(42,537390);
   theta_pion_minus_stack_1->SetBinContent(43,531975);
   theta_pion_minus_stack_1->SetBinContent(44,529744);
   theta_pion_minus_stack_1->SetBinContent(45,529929);
   theta_pion_minus_stack_1->SetBinContent(46,526211);
   theta_pion_minus_stack_1->SetBinContent(47,514967);
   theta_pion_minus_stack_1->SetBinContent(48,496125);
   theta_pion_minus_stack_1->SetBinContent(49,474843);
   theta_pion_minus_stack_1->SetBinContent(50,454910);
   theta_pion_minus_stack_1->SetBinContent(51,432783);
   theta_pion_minus_stack_1->SetBinContent(52,409887);
   theta_pion_minus_stack_1->SetBinContent(53,388477);
   theta_pion_minus_stack_1->SetBinContent(54,367997);
   theta_pion_minus_stack_1->SetBinContent(55,350148);
   theta_pion_minus_stack_1->SetBinContent(56,328422);
   theta_pion_minus_stack_1->SetBinContent(57,311564);
   theta_pion_minus_stack_1->SetBinContent(58,294864);
   theta_pion_minus_stack_1->SetBinContent(59,279734);
   theta_pion_minus_stack_1->SetBinContent(60,265509);
   theta_pion_minus_stack_1->SetBinContent(61,253163);
   theta_pion_minus_stack_1->SetBinContent(62,246266);
   theta_pion_minus_stack_1->SetBinContent(63,231752);
   theta_pion_minus_stack_1->SetBinContent(64,222795);
   theta_pion_minus_stack_1->SetBinContent(65,214244);
   theta_pion_minus_stack_1->SetBinContent(66,205732);
   theta_pion_minus_stack_1->SetBinContent(67,197824);
   theta_pion_minus_stack_1->SetBinContent(68,190873);
   theta_pion_minus_stack_1->SetBinContent(69,187104);
   theta_pion_minus_stack_1->SetBinContent(70,179153);
   theta_pion_minus_stack_1->SetBinContent(71,172119);
   theta_pion_minus_stack_1->SetBinContent(72,166398);
   theta_pion_minus_stack_1->SetBinContent(73,160532);
   theta_pion_minus_stack_1->SetBinContent(74,155577);
   theta_pion_minus_stack_1->SetBinContent(75,151577);
   theta_pion_minus_stack_1->SetBinContent(76,147737);
   theta_pion_minus_stack_1->SetBinContent(77,144598);
   theta_pion_minus_stack_1->SetBinContent(78,140901);
   theta_pion_minus_stack_1->SetBinContent(79,135695);
   theta_pion_minus_stack_1->SetBinContent(80,130881);
   theta_pion_minus_stack_1->SetBinContent(81,126539);
   theta_pion_minus_stack_1->SetBinContent(82,122977);
   theta_pion_minus_stack_1->SetBinContent(83,120368);
   theta_pion_minus_stack_1->SetBinContent(84,116539);
   theta_pion_minus_stack_1->SetBinContent(85,112565);
   theta_pion_minus_stack_1->SetBinContent(86,109552);
   theta_pion_minus_stack_1->SetBinContent(87,108343);
   theta_pion_minus_stack_1->SetBinContent(88,104418);
   theta_pion_minus_stack_1->SetBinContent(89,100873);
   theta_pion_minus_stack_1->SetBinContent(90,98528);
   theta_pion_minus_stack_1->SetBinContent(91,95134);
   theta_pion_minus_stack_1->SetBinContent(92,93197);
   theta_pion_minus_stack_1->SetBinContent(93,90528);
   theta_pion_minus_stack_1->SetBinContent(94,89060);
   theta_pion_minus_stack_1->SetBinContent(95,87475);
   theta_pion_minus_stack_1->SetBinContent(96,84414);
   theta_pion_minus_stack_1->SetBinContent(97,82136);
   theta_pion_minus_stack_1->SetBinContent(98,79555);
   theta_pion_minus_stack_1->SetBinContent(99,76810);
   theta_pion_minus_stack_1->SetBinContent(100,73760);
   theta_pion_minus_stack_1->SetBinContent(101,70468);
   theta_pion_minus_stack_1->SetBinContent(102,67766);
   theta_pion_minus_stack_1->SetBinContent(103,64747);
   theta_pion_minus_stack_1->SetBinContent(104,62419);
   theta_pion_minus_stack_1->SetBinContent(105,60139);
   theta_pion_minus_stack_1->SetBinContent(106,57363);
   theta_pion_minus_stack_1->SetBinContent(107,53796);
   theta_pion_minus_stack_1->SetBinContent(108,50707);
   theta_pion_minus_stack_1->SetBinContent(109,48161);
   theta_pion_minus_stack_1->SetBinContent(110,45462);
   theta_pion_minus_stack_1->SetBinContent(111,43236);
   theta_pion_minus_stack_1->SetBinContent(112,40962);
   theta_pion_minus_stack_1->SetBinContent(113,39382);
   theta_pion_minus_stack_1->SetBinContent(114,37145);
   theta_pion_minus_stack_1->SetBinContent(115,35038);
   theta_pion_minus_stack_1->SetBinContent(116,33490);
   theta_pion_minus_stack_1->SetBinContent(117,31885);
   theta_pion_minus_stack_1->SetBinContent(118,30119);
   theta_pion_minus_stack_1->SetBinContent(119,28812);
   theta_pion_minus_stack_1->SetBinContent(120,27183);
   theta_pion_minus_stack_1->SetBinContent(121,25812);
   theta_pion_minus_stack_1->SetBinContent(122,24408);
   theta_pion_minus_stack_1->SetBinContent(123,23035);
   theta_pion_minus_stack_1->SetBinContent(124,21700);
   theta_pion_minus_stack_1->SetBinContent(125,20491);
   theta_pion_minus_stack_1->SetBinContent(126,19295);
   theta_pion_minus_stack_1->SetBinContent(127,18020);
   theta_pion_minus_stack_1->SetBinContent(128,17096);
   theta_pion_minus_stack_1->SetBinContent(129,16065);
   theta_pion_minus_stack_1->SetBinContent(130,15158);
   theta_pion_minus_stack_1->SetBinContent(131,13309);
   theta_pion_minus_stack_1->SetBinContent(132,12182);
   theta_pion_minus_stack_1->SetBinContent(133,10665);
   theta_pion_minus_stack_1->SetBinContent(134,9197);
   theta_pion_minus_stack_1->SetBinContent(135,7869);
   theta_pion_minus_stack_1->SetBinContent(136,6682);
   theta_pion_minus_stack_1->SetBinContent(137,5563);
   theta_pion_minus_stack_1->SetBinContent(138,4653);
   theta_pion_minus_stack_1->SetBinContent(139,3891);
   theta_pion_minus_stack_1->SetBinContent(140,2981);
   theta_pion_minus_stack_1->SetBinContent(141,2331);
   theta_pion_minus_stack_1->SetBinContent(142,1801);
   theta_pion_minus_stack_1->SetBinContent(143,1528);
   theta_pion_minus_stack_1->SetBinContent(144,1075);
   theta_pion_minus_stack_1->SetBinContent(145,785);
   theta_pion_minus_stack_1->SetBinContent(146,594);
   theta_pion_minus_stack_1->SetBinContent(147,548);
   theta_pion_minus_stack_1->SetBinContent(148,436);
   theta_pion_minus_stack_1->SetBinContent(149,399);
   theta_pion_minus_stack_1->SetBinContent(150,395);
   theta_pion_minus_stack_1->SetBinContent(151,310);
   theta_pion_minus_stack_1->SetBinContent(152,273);
   theta_pion_minus_stack_1->SetBinContent(153,236);
   theta_pion_minus_stack_1->SetBinContent(154,199);
   theta_pion_minus_stack_1->SetBinContent(155,176);
   theta_pion_minus_stack_1->SetBinContent(156,146);
   theta_pion_minus_stack_1->SetBinContent(157,162);
   theta_pion_minus_stack_1->SetBinContent(158,132);
   theta_pion_minus_stack_1->SetBinContent(159,122);
   theta_pion_minus_stack_1->SetBinContent(160,112);
   theta_pion_minus_stack_1->SetBinContent(161,87);
   theta_pion_minus_stack_1->SetBinContent(162,80);
   theta_pion_minus_stack_1->SetBinContent(163,75);
   theta_pion_minus_stack_1->SetBinContent(164,63);
   theta_pion_minus_stack_1->SetBinContent(165,62);
   theta_pion_minus_stack_1->SetBinContent(166,49);
   theta_pion_minus_stack_1->SetBinContent(167,58);
   theta_pion_minus_stack_1->SetBinContent(168,52);
   theta_pion_minus_stack_1->SetBinContent(169,43);
   theta_pion_minus_stack_1->SetBinContent(170,30);
   theta_pion_minus_stack_1->SetBinContent(171,38);
   theta_pion_minus_stack_1->SetBinContent(172,29);
   theta_pion_minus_stack_1->SetBinContent(173,30);
   theta_pion_minus_stack_1->SetBinContent(174,16);
   theta_pion_minus_stack_1->SetBinContent(175,18);
   theta_pion_minus_stack_1->SetBinContent(176,21);
   theta_pion_minus_stack_1->SetBinContent(177,10);
   theta_pion_minus_stack_1->SetBinContent(178,11);
   theta_pion_minus_stack_1->SetBinContent(179,4);
   theta_pion_minus_stack_1->SetBinContent(180,6);
   theta_pion_minus_stack_1->SetBinContent(181,3);
   theta_pion_minus_stack_1->SetBinContent(182,3);
   theta_pion_minus_stack_1->SetBinContent(183,1);
   theta_pion_minus_stack_1->SetBinContent(185,1);
   theta_pion_minus_stack_1->SetBinContent(186,1);
   theta_pion_minus_stack_1->SetEntries(4.450675e+07);
   theta_pion_minus_stack_1->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   4.450674e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  32.17");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  22.43");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   theta_pion_minus_stack_1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(theta_pion_minus_stack_1);

   ci = TColor::GetColor("#121415");
   theta_pion_minus_stack_1->SetLineColor(ci);
   theta_pion_minus_stack_1->GetXaxis()->SetLabelFont(42);
   theta_pion_minus_stack_1->GetXaxis()->SetTitleOffset(1);
   theta_pion_minus_stack_1->GetXaxis()->SetTitleFont(42);
   theta_pion_minus_stack_1->GetYaxis()->SetLabelFont(42);
   theta_pion_minus_stack_1->GetYaxis()->SetTitleFont(42);
   theta_pion_minus_stack_1->GetZaxis()->SetLabelFont(42);
   theta_pion_minus_stack_1->GetZaxis()->SetTitleOffset(1);
   theta_pion_minus_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(theta_pion_minus_stack_1,"sames histo");
   
   TH1F *theta_pion_minus_stack_2 = new TH1F("theta_pion_minus_stack_2","",200,0,180);
   theta_pion_minus_stack_2->SetBinContent(1,442);
   theta_pion_minus_stack_2->SetBinContent(2,1810);
   theta_pion_minus_stack_2->SetBinContent(3,4520);
   theta_pion_minus_stack_2->SetBinContent(4,10177);
   theta_pion_minus_stack_2->SetBinContent(5,24859);
   theta_pion_minus_stack_2->SetBinContent(6,84933);
   theta_pion_minus_stack_2->SetBinContent(7,467098);
   theta_pion_minus_stack_2->SetBinContent(8,709161);
   theta_pion_minus_stack_2->SetBinContent(9,794926);
   theta_pion_minus_stack_2->SetBinContent(10,857156);
   theta_pion_minus_stack_2->SetBinContent(11,905699);
   theta_pion_minus_stack_2->SetBinContent(12,959206);
   theta_pion_minus_stack_2->SetBinContent(13,995885);
   theta_pion_minus_stack_2->SetBinContent(14,1017017);
   theta_pion_minus_stack_2->SetBinContent(15,1024467);
   theta_pion_minus_stack_2->SetBinContent(16,1022903);
   theta_pion_minus_stack_2->SetBinContent(17,1010597);
   theta_pion_minus_stack_2->SetBinContent(18,992164);
   theta_pion_minus_stack_2->SetBinContent(19,968962);
   theta_pion_minus_stack_2->SetBinContent(20,949441);
   theta_pion_minus_stack_2->SetBinContent(21,926296);
   theta_pion_minus_stack_2->SetBinContent(22,897209);
   theta_pion_minus_stack_2->SetBinContent(23,866143);
   theta_pion_minus_stack_2->SetBinContent(24,838274);
   theta_pion_minus_stack_2->SetBinContent(25,807030);
   theta_pion_minus_stack_2->SetBinContent(26,772471);
   theta_pion_minus_stack_2->SetBinContent(27,728964);
   theta_pion_minus_stack_2->SetBinContent(28,686415);
   theta_pion_minus_stack_2->SetBinContent(29,647204);
   theta_pion_minus_stack_2->SetBinContent(30,608245);
   theta_pion_minus_stack_2->SetBinContent(31,569807);
   theta_pion_minus_stack_2->SetBinContent(32,537144);
   theta_pion_minus_stack_2->SetBinContent(33,506816);
   theta_pion_minus_stack_2->SetBinContent(34,484184);
   theta_pion_minus_stack_2->SetBinContent(35,465871);
   theta_pion_minus_stack_2->SetBinContent(36,449219);
   theta_pion_minus_stack_2->SetBinContent(37,436233);
   theta_pion_minus_stack_2->SetBinContent(38,434181);
   theta_pion_minus_stack_2->SetBinContent(39,441546);
   theta_pion_minus_stack_2->SetBinContent(40,446402);
   theta_pion_minus_stack_2->SetBinContent(41,442573);
   theta_pion_minus_stack_2->SetBinContent(42,434406);
   theta_pion_minus_stack_2->SetBinContent(43,425724);
   theta_pion_minus_stack_2->SetBinContent(44,420623);
   theta_pion_minus_stack_2->SetBinContent(45,417910);
   theta_pion_minus_stack_2->SetBinContent(46,413138);
   theta_pion_minus_stack_2->SetBinContent(47,402574);
   theta_pion_minus_stack_2->SetBinContent(48,386113);
   theta_pion_minus_stack_2->SetBinContent(49,367450);
   theta_pion_minus_stack_2->SetBinContent(50,349888);
   theta_pion_minus_stack_2->SetBinContent(51,331324);
   theta_pion_minus_stack_2->SetBinContent(52,311660);
   theta_pion_minus_stack_2->SetBinContent(53,293082);
   theta_pion_minus_stack_2->SetBinContent(54,275900);
   theta_pion_minus_stack_2->SetBinContent(55,260639);
   theta_pion_minus_stack_2->SetBinContent(56,242479);
   theta_pion_minus_stack_2->SetBinContent(57,228870);
   theta_pion_minus_stack_2->SetBinContent(58,215421);
   theta_pion_minus_stack_2->SetBinContent(59,202726);
   theta_pion_minus_stack_2->SetBinContent(60,190389);
   theta_pion_minus_stack_2->SetBinContent(61,180563);
   theta_pion_minus_stack_2->SetBinContent(62,172617);
   theta_pion_minus_stack_2->SetBinContent(63,162456);
   theta_pion_minus_stack_2->SetBinContent(64,155605);
   theta_pion_minus_stack_2->SetBinContent(65,148232);
   theta_pion_minus_stack_2->SetBinContent(66,141737);
   theta_pion_minus_stack_2->SetBinContent(67,135460);
   theta_pion_minus_stack_2->SetBinContent(68,130123);
   theta_pion_minus_stack_2->SetBinContent(69,125694);
   theta_pion_minus_stack_2->SetBinContent(70,119437);
   theta_pion_minus_stack_2->SetBinContent(71,114303);
   theta_pion_minus_stack_2->SetBinContent(72,110013);
   theta_pion_minus_stack_2->SetBinContent(73,104666);
   theta_pion_minus_stack_2->SetBinContent(74,100405);
   theta_pion_minus_stack_2->SetBinContent(75,97099);
   theta_pion_minus_stack_2->SetBinContent(76,93348);
   theta_pion_minus_stack_2->SetBinContent(77,91104);
   theta_pion_minus_stack_2->SetBinContent(78,87712);
   theta_pion_minus_stack_2->SetBinContent(79,83937);
   theta_pion_minus_stack_2->SetBinContent(80,80047);
   theta_pion_minus_stack_2->SetBinContent(81,76970);
   theta_pion_minus_stack_2->SetBinContent(82,74576);
   theta_pion_minus_stack_2->SetBinContent(83,72300);
   theta_pion_minus_stack_2->SetBinContent(84,69520);
   theta_pion_minus_stack_2->SetBinContent(85,66535);
   theta_pion_minus_stack_2->SetBinContent(86,64547);
   theta_pion_minus_stack_2->SetBinContent(87,62886);
   theta_pion_minus_stack_2->SetBinContent(88,59958);
   theta_pion_minus_stack_2->SetBinContent(89,57649);
   theta_pion_minus_stack_2->SetBinContent(90,56014);
   theta_pion_minus_stack_2->SetBinContent(91,53732);
   theta_pion_minus_stack_2->SetBinContent(92,51658);
   theta_pion_minus_stack_2->SetBinContent(93,50235);
   theta_pion_minus_stack_2->SetBinContent(94,48266);
   theta_pion_minus_stack_2->SetBinContent(95,47066);
   theta_pion_minus_stack_2->SetBinContent(96,44721);
   theta_pion_minus_stack_2->SetBinContent(97,42879);
   theta_pion_minus_stack_2->SetBinContent(98,41303);
   theta_pion_minus_stack_2->SetBinContent(99,39148);
   theta_pion_minus_stack_2->SetBinContent(100,37353);
   theta_pion_minus_stack_2->SetBinContent(101,35354);
   theta_pion_minus_stack_2->SetBinContent(102,33493);
   theta_pion_minus_stack_2->SetBinContent(103,32035);
   theta_pion_minus_stack_2->SetBinContent(104,30530);
   theta_pion_minus_stack_2->SetBinContent(105,29545);
   theta_pion_minus_stack_2->SetBinContent(106,28316);
   theta_pion_minus_stack_2->SetBinContent(107,26552);
   theta_pion_minus_stack_2->SetBinContent(108,25255);
   theta_pion_minus_stack_2->SetBinContent(109,24018);
   theta_pion_minus_stack_2->SetBinContent(110,22743);
   theta_pion_minus_stack_2->SetBinContent(111,21390);
   theta_pion_minus_stack_2->SetBinContent(112,20399);
   theta_pion_minus_stack_2->SetBinContent(113,19785);
   theta_pion_minus_stack_2->SetBinContent(114,18547);
   theta_pion_minus_stack_2->SetBinContent(115,17622);
   theta_pion_minus_stack_2->SetBinContent(116,16544);
   theta_pion_minus_stack_2->SetBinContent(117,16084);
   theta_pion_minus_stack_2->SetBinContent(118,15065);
   theta_pion_minus_stack_2->SetBinContent(119,14348);
   theta_pion_minus_stack_2->SetBinContent(120,13663);
   theta_pion_minus_stack_2->SetBinContent(121,12746);
   theta_pion_minus_stack_2->SetBinContent(122,12167);
   theta_pion_minus_stack_2->SetBinContent(123,11273);
   theta_pion_minus_stack_2->SetBinContent(124,10748);
   theta_pion_minus_stack_2->SetBinContent(125,10016);
   theta_pion_minus_stack_2->SetBinContent(126,9354);
   theta_pion_minus_stack_2->SetBinContent(127,8686);
   theta_pion_minus_stack_2->SetBinContent(128,8285);
   theta_pion_minus_stack_2->SetBinContent(129,7809);
   theta_pion_minus_stack_2->SetBinContent(130,7404);
   theta_pion_minus_stack_2->SetBinContent(131,6350);
   theta_pion_minus_stack_2->SetBinContent(132,5780);
   theta_pion_minus_stack_2->SetBinContent(133,5036);
   theta_pion_minus_stack_2->SetBinContent(134,4329);
   theta_pion_minus_stack_2->SetBinContent(135,3613);
   theta_pion_minus_stack_2->SetBinContent(136,2916);
   theta_pion_minus_stack_2->SetBinContent(137,2431);
   theta_pion_minus_stack_2->SetBinContent(138,2043);
   theta_pion_minus_stack_2->SetBinContent(139,1655);
   theta_pion_minus_stack_2->SetBinContent(140,1272);
   theta_pion_minus_stack_2->SetBinContent(141,1052);
   theta_pion_minus_stack_2->SetBinContent(142,767);
   theta_pion_minus_stack_2->SetBinContent(143,689);
   theta_pion_minus_stack_2->SetBinContent(144,475);
   theta_pion_minus_stack_2->SetBinContent(145,386);
   theta_pion_minus_stack_2->SetBinContent(146,288);
   theta_pion_minus_stack_2->SetBinContent(147,272);
   theta_pion_minus_stack_2->SetBinContent(148,196);
   theta_pion_minus_stack_2->SetBinContent(149,182);
   theta_pion_minus_stack_2->SetBinContent(150,171);
   theta_pion_minus_stack_2->SetBinContent(151,126);
   theta_pion_minus_stack_2->SetBinContent(152,100);
   theta_pion_minus_stack_2->SetBinContent(153,86);
   theta_pion_minus_stack_2->SetBinContent(154,56);
   theta_pion_minus_stack_2->SetBinContent(155,62);
   theta_pion_minus_stack_2->SetBinContent(156,41);
   theta_pion_minus_stack_2->SetBinContent(157,51);
   theta_pion_minus_stack_2->SetBinContent(158,16);
   theta_pion_minus_stack_2->SetBinContent(159,20);
   theta_pion_minus_stack_2->SetBinContent(160,17);
   theta_pion_minus_stack_2->SetBinContent(161,18);
   theta_pion_minus_stack_2->SetBinContent(162,8);
   theta_pion_minus_stack_2->SetBinContent(163,11);
   theta_pion_minus_stack_2->SetBinContent(164,4);
   theta_pion_minus_stack_2->SetBinContent(165,6);
   theta_pion_minus_stack_2->SetBinContent(166,1);
   theta_pion_minus_stack_2->SetBinContent(167,6);
   theta_pion_minus_stack_2->SetBinContent(168,2);
   theta_pion_minus_stack_2->SetBinContent(169,2);
   theta_pion_minus_stack_2->SetBinContent(170,1);
   theta_pion_minus_stack_2->SetBinContent(171,2);
   theta_pion_minus_stack_2->SetBinContent(172,1);
   theta_pion_minus_stack_2->SetBinContent(175,1);
   theta_pion_minus_stack_2->SetBinContent(176,2);
   theta_pion_minus_stack_2->SetBinContent(177,1);
   theta_pion_minus_stack_2->SetBinContent(180,1);
   theta_pion_minus_stack_2->SetBinContent(183,1);
   theta_pion_minus_stack_2->SetEntries(3.611616e+07);
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   3.611616e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  29.51");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  20.16");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   theta_pion_minus_stack_2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(theta_pion_minus_stack_2);

   ci = 1185;
   color = new TColor(ci, 0.04705882, 0.3647059, 0.6470588, " ", 0.15);
   theta_pion_minus_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#0c5da5");
   theta_pion_minus_stack_2->SetLineColor(ci);
   theta_pion_minus_stack_2->GetXaxis()->SetLabelFont(42);
   theta_pion_minus_stack_2->GetXaxis()->SetTitleOffset(1);
   theta_pion_minus_stack_2->GetXaxis()->SetTitleFont(42);
   theta_pion_minus_stack_2->GetYaxis()->SetLabelFont(42);
   theta_pion_minus_stack_2->GetYaxis()->SetTitleFont(42);
   theta_pion_minus_stack_2->GetZaxis()->SetLabelFont(42);
   theta_pion_minus_stack_2->GetZaxis()->SetTitleOffset(1);
   theta_pion_minus_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(theta_pion_minus_stack_2,"sames histo");
   hs->Draw("hist nostack");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   4.450674e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  32.17");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  22.43");
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
   ptstats_LaTex = ptstats->AddText("Entries =   3.611616e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  29.51");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  20.16");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
