#ifdef __CLING__
#pragma cling optimize(0)
#endif
void p_pion_plus()
{
//=========Macro generated from canvas: c1/
//=========  (Thu Oct 24 12:54:05 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-1.736842,-283434.6,12.73684,2078521);
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
   hs->SetMaximum(1795086);
   
   TH1F *hs_stack_6 = new TH1F("hs_stack_6","",200,0,11);
   hs_stack_6->SetMinimum(0);
   hs_stack_6->SetMaximum(1795086);
   hs_stack_6->SetDirectory(nullptr);
   hs_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_6->SetLineColor(ci);
   hs_stack_6->SetLineWidth(0);
   hs_stack_6->GetXaxis()->SetTitle("p_{#pi^{+}} [GeV/c]");
   hs_stack_6->GetXaxis()->SetLabelFont(42);
   hs_stack_6->GetXaxis()->SetTitleSize(0.05);
   hs_stack_6->GetXaxis()->SetTitleOffset(1);
   hs_stack_6->GetXaxis()->SetTitleFont(42);
   hs_stack_6->GetYaxis()->SetLabelFont(42);
   hs_stack_6->GetYaxis()->SetTitleFont(42);
   hs_stack_6->GetZaxis()->SetLabelFont(42);
   hs_stack_6->GetZaxis()->SetTitleOffset(1);
   hs_stack_6->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_6);
   
   
   TH1F *p_pion_plus_stack_1 = new TH1F("p_pion_plus_stack_1","",200,0,11);
   p_pion_plus_stack_1->SetBinContent(3,17);
   p_pion_plus_stack_1->SetBinContent(4,120063);
   p_pion_plus_stack_1->SetBinContent(5,846294);
   p_pion_plus_stack_1->SetBinContent(6,1322558);
   p_pion_plus_stack_1->SetBinContent(7,1495905);
   p_pion_plus_stack_1->SetBinContent(8,1427069);
   p_pion_plus_stack_1->SetBinContent(9,1294260);
   p_pion_plus_stack_1->SetBinContent(10,1142717);
   p_pion_plus_stack_1->SetBinContent(11,1039533);
   p_pion_plus_stack_1->SetBinContent(12,959204);
   p_pion_plus_stack_1->SetBinContent(13,869156);
   p_pion_plus_stack_1->SetBinContent(14,780497);
   p_pion_plus_stack_1->SetBinContent(15,697368);
   p_pion_plus_stack_1->SetBinContent(16,624891);
   p_pion_plus_stack_1->SetBinContent(17,562602);
   p_pion_plus_stack_1->SetBinContent(18,507806);
   p_pion_plus_stack_1->SetBinContent(19,460721);
   p_pion_plus_stack_1->SetBinContent(20,418715);
   p_pion_plus_stack_1->SetBinContent(21,383305);
   p_pion_plus_stack_1->SetBinContent(22,350996);
   p_pion_plus_stack_1->SetBinContent(23,321283);
   p_pion_plus_stack_1->SetBinContent(24,294420);
   p_pion_plus_stack_1->SetBinContent(25,269525);
   p_pion_plus_stack_1->SetBinContent(26,247887);
   p_pion_plus_stack_1->SetBinContent(27,227725);
   p_pion_plus_stack_1->SetBinContent(28,209971);
   p_pion_plus_stack_1->SetBinContent(29,193674);
   p_pion_plus_stack_1->SetBinContent(30,177606);
   p_pion_plus_stack_1->SetBinContent(31,163663);
   p_pion_plus_stack_1->SetBinContent(32,150958);
   p_pion_plus_stack_1->SetBinContent(33,139043);
   p_pion_plus_stack_1->SetBinContent(34,129276);
   p_pion_plus_stack_1->SetBinContent(35,119861);
   p_pion_plus_stack_1->SetBinContent(36,110785);
   p_pion_plus_stack_1->SetBinContent(37,102483);
   p_pion_plus_stack_1->SetBinContent(38,94812);
   p_pion_plus_stack_1->SetBinContent(39,87988);
   p_pion_plus_stack_1->SetBinContent(40,81817);
   p_pion_plus_stack_1->SetBinContent(41,75934);
   p_pion_plus_stack_1->SetBinContent(42,71100);
   p_pion_plus_stack_1->SetBinContent(43,66035);
   p_pion_plus_stack_1->SetBinContent(44,61548);
   p_pion_plus_stack_1->SetBinContent(45,57686);
   p_pion_plus_stack_1->SetBinContent(46,54061);
   p_pion_plus_stack_1->SetBinContent(47,50279);
   p_pion_plus_stack_1->SetBinContent(48,47182);
   p_pion_plus_stack_1->SetBinContent(49,44044);
   p_pion_plus_stack_1->SetBinContent(50,41182);
   p_pion_plus_stack_1->SetBinContent(51,38301);
   p_pion_plus_stack_1->SetBinContent(52,36402);
   p_pion_plus_stack_1->SetBinContent(53,34337);
   p_pion_plus_stack_1->SetBinContent(54,31915);
   p_pion_plus_stack_1->SetBinContent(55,29983);
   p_pion_plus_stack_1->SetBinContent(56,28882);
   p_pion_plus_stack_1->SetBinContent(57,27065);
   p_pion_plus_stack_1->SetBinContent(58,25407);
   p_pion_plus_stack_1->SetBinContent(59,24269);
   p_pion_plus_stack_1->SetBinContent(60,22610);
   p_pion_plus_stack_1->SetBinContent(61,21329);
   p_pion_plus_stack_1->SetBinContent(62,20086);
   p_pion_plus_stack_1->SetBinContent(63,18754);
   p_pion_plus_stack_1->SetBinContent(64,17947);
   p_pion_plus_stack_1->SetBinContent(65,16660);
   p_pion_plus_stack_1->SetBinContent(66,15829);
   p_pion_plus_stack_1->SetBinContent(67,14856);
   p_pion_plus_stack_1->SetBinContent(68,13881);
   p_pion_plus_stack_1->SetBinContent(69,13207);
   p_pion_plus_stack_1->SetBinContent(70,12419);
   p_pion_plus_stack_1->SetBinContent(71,11619);
   p_pion_plus_stack_1->SetBinContent(72,11073);
   p_pion_plus_stack_1->SetBinContent(73,10519);
   p_pion_plus_stack_1->SetBinContent(74,9788);
   p_pion_plus_stack_1->SetBinContent(75,9495);
   p_pion_plus_stack_1->SetBinContent(76,8938);
   p_pion_plus_stack_1->SetBinContent(77,8348);
   p_pion_plus_stack_1->SetBinContent(78,7916);
   p_pion_plus_stack_1->SetBinContent(79,7400);
   p_pion_plus_stack_1->SetBinContent(80,7042);
   p_pion_plus_stack_1->SetBinContent(81,6632);
   p_pion_plus_stack_1->SetBinContent(82,6313);
   p_pion_plus_stack_1->SetBinContent(83,5794);
   p_pion_plus_stack_1->SetBinContent(84,5608);
   p_pion_plus_stack_1->SetBinContent(85,5263);
   p_pion_plus_stack_1->SetBinContent(86,4872);
   p_pion_plus_stack_1->SetBinContent(87,4679);
   p_pion_plus_stack_1->SetBinContent(88,4405);
   p_pion_plus_stack_1->SetBinContent(89,4248);
   p_pion_plus_stack_1->SetBinContent(90,4580);
   p_pion_plus_stack_1->SetBinContent(91,4494);
   p_pion_plus_stack_1->SetBinContent(92,4472);
   p_pion_plus_stack_1->SetBinContent(93,4185);
   p_pion_plus_stack_1->SetBinContent(94,4027);
   p_pion_plus_stack_1->SetBinContent(95,3799);
   p_pion_plus_stack_1->SetBinContent(96,3591);
   p_pion_plus_stack_1->SetBinContent(97,3514);
   p_pion_plus_stack_1->SetBinContent(98,3329);
   p_pion_plus_stack_1->SetBinContent(99,3049);
   p_pion_plus_stack_1->SetBinContent(100,2990);
   p_pion_plus_stack_1->SetBinContent(101,2791);
   p_pion_plus_stack_1->SetBinContent(102,2635);
   p_pion_plus_stack_1->SetBinContent(103,2518);
   p_pion_plus_stack_1->SetBinContent(104,2431);
   p_pion_plus_stack_1->SetBinContent(105,2233);
   p_pion_plus_stack_1->SetBinContent(106,2130);
   p_pion_plus_stack_1->SetBinContent(107,2054);
   p_pion_plus_stack_1->SetBinContent(108,1946);
   p_pion_plus_stack_1->SetBinContent(109,1810);
   p_pion_plus_stack_1->SetBinContent(110,1688);
   p_pion_plus_stack_1->SetBinContent(111,1680);
   p_pion_plus_stack_1->SetBinContent(112,1567);
   p_pion_plus_stack_1->SetBinContent(113,1552);
   p_pion_plus_stack_1->SetBinContent(114,1477);
   p_pion_plus_stack_1->SetBinContent(115,1386);
   p_pion_plus_stack_1->SetBinContent(116,1283);
   p_pion_plus_stack_1->SetBinContent(117,1259);
   p_pion_plus_stack_1->SetBinContent(118,1166);
   p_pion_plus_stack_1->SetBinContent(119,1067);
   p_pion_plus_stack_1->SetBinContent(120,1039);
   p_pion_plus_stack_1->SetBinContent(121,1027);
   p_pion_plus_stack_1->SetBinContent(122,975);
   p_pion_plus_stack_1->SetBinContent(123,927);
   p_pion_plus_stack_1->SetBinContent(124,845);
   p_pion_plus_stack_1->SetBinContent(125,829);
   p_pion_plus_stack_1->SetBinContent(126,795);
   p_pion_plus_stack_1->SetBinContent(127,828);
   p_pion_plus_stack_1->SetBinContent(128,764);
   p_pion_plus_stack_1->SetBinContent(129,703);
   p_pion_plus_stack_1->SetBinContent(130,675);
   p_pion_plus_stack_1->SetBinContent(131,668);
   p_pion_plus_stack_1->SetBinContent(132,644);
   p_pion_plus_stack_1->SetBinContent(133,588);
   p_pion_plus_stack_1->SetBinContent(134,616);
   p_pion_plus_stack_1->SetBinContent(135,554);
   p_pion_plus_stack_1->SetBinContent(136,564);
   p_pion_plus_stack_1->SetBinContent(137,513);
   p_pion_plus_stack_1->SetBinContent(138,515);
   p_pion_plus_stack_1->SetBinContent(139,470);
   p_pion_plus_stack_1->SetBinContent(140,463);
   p_pion_plus_stack_1->SetBinContent(141,478);
   p_pion_plus_stack_1->SetBinContent(142,441);
   p_pion_plus_stack_1->SetBinContent(143,443);
   p_pion_plus_stack_1->SetBinContent(144,418);
   p_pion_plus_stack_1->SetBinContent(145,400);
   p_pion_plus_stack_1->SetBinContent(146,404);
   p_pion_plus_stack_1->SetBinContent(147,397);
   p_pion_plus_stack_1->SetBinContent(148,384);
   p_pion_plus_stack_1->SetBinContent(149,389);
   p_pion_plus_stack_1->SetBinContent(150,352);
   p_pion_plus_stack_1->SetBinContent(151,406);
   p_pion_plus_stack_1->SetBinContent(152,380);
   p_pion_plus_stack_1->SetBinContent(153,378);
   p_pion_plus_stack_1->SetBinContent(154,341);
   p_pion_plus_stack_1->SetBinContent(155,348);
   p_pion_plus_stack_1->SetBinContent(156,337);
   p_pion_plus_stack_1->SetBinContent(157,332);
   p_pion_plus_stack_1->SetBinContent(158,298);
   p_pion_plus_stack_1->SetBinContent(159,315);
   p_pion_plus_stack_1->SetBinContent(160,327);
   p_pion_plus_stack_1->SetBinContent(161,331);
   p_pion_plus_stack_1->SetBinContent(162,306);
   p_pion_plus_stack_1->SetBinContent(163,283);
   p_pion_plus_stack_1->SetBinContent(164,317);
   p_pion_plus_stack_1->SetBinContent(165,323);
   p_pion_plus_stack_1->SetBinContent(166,300);
   p_pion_plus_stack_1->SetBinContent(167,313);
   p_pion_plus_stack_1->SetBinContent(168,310);
   p_pion_plus_stack_1->SetBinContent(169,298);
   p_pion_plus_stack_1->SetBinContent(170,298);
   p_pion_plus_stack_1->SetBinContent(171,287);
   p_pion_plus_stack_1->SetBinContent(172,280);
   p_pion_plus_stack_1->SetBinContent(173,283);
   p_pion_plus_stack_1->SetBinContent(174,254);
   p_pion_plus_stack_1->SetBinContent(175,225);
   p_pion_plus_stack_1->SetBinContent(176,278);
   p_pion_plus_stack_1->SetBinContent(177,263);
   p_pion_plus_stack_1->SetBinContent(178,250);
   p_pion_plus_stack_1->SetBinContent(179,249);
   p_pion_plus_stack_1->SetBinContent(180,225);
   p_pion_plus_stack_1->SetBinContent(181,246);
   p_pion_plus_stack_1->SetBinContent(182,266);
   p_pion_plus_stack_1->SetBinContent(183,247);
   p_pion_plus_stack_1->SetBinContent(184,244);
   p_pion_plus_stack_1->SetBinContent(185,249);
   p_pion_plus_stack_1->SetBinContent(186,249);
   p_pion_plus_stack_1->SetBinContent(187,202);
   p_pion_plus_stack_1->SetBinContent(188,226);
   p_pion_plus_stack_1->SetBinContent(189,230);
   p_pion_plus_stack_1->SetBinContent(190,228);
   p_pion_plus_stack_1->SetBinContent(191,229);
   p_pion_plus_stack_1->SetBinContent(192,210);
   p_pion_plus_stack_1->SetBinContent(193,215);
   p_pion_plus_stack_1->SetBinContent(194,225);
   p_pion_plus_stack_1->SetBinContent(195,203);
   p_pion_plus_stack_1->SetBinContent(196,204);
   p_pion_plus_stack_1->SetBinContent(197,211);
   p_pion_plus_stack_1->SetBinContent(198,197);
   p_pion_plus_stack_1->SetBinContent(199,211);
   p_pion_plus_stack_1->SetBinContent(200,215);
   p_pion_plus_stack_1->SetBinContent(201,36529);
   p_pion_plus_stack_1->SetEntries(1.974558e+07);
   p_pion_plus_stack_1->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   1.974558e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.9296");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.8117");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   p_pion_plus_stack_1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(p_pion_plus_stack_1);

   ci = TColor::GetColor("#121415");
   p_pion_plus_stack_1->SetLineColor(ci);
   p_pion_plus_stack_1->GetXaxis()->SetLabelFont(42);
   p_pion_plus_stack_1->GetXaxis()->SetTitleOffset(1);
   p_pion_plus_stack_1->GetXaxis()->SetTitleFont(42);
   p_pion_plus_stack_1->GetYaxis()->SetLabelFont(42);
   p_pion_plus_stack_1->GetYaxis()->SetTitleFont(42);
   p_pion_plus_stack_1->GetZaxis()->SetLabelFont(42);
   p_pion_plus_stack_1->GetZaxis()->SetTitleOffset(1);
   p_pion_plus_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(p_pion_plus_stack_1,"sames histo");
   
   TH1F *p_pion_plus_stack_2 = new TH1F("p_pion_plus_stack_2","",200,0,11);
   p_pion_plus_stack_2->SetBinContent(3,1);
   p_pion_plus_stack_2->SetBinContent(4,70763);
   p_pion_plus_stack_2->SetBinContent(5,603962);
   p_pion_plus_stack_2->SetBinContent(6,839771);
   p_pion_plus_stack_2->SetBinContent(7,827111);
   p_pion_plus_stack_2->SetBinContent(8,738615);
   p_pion_plus_stack_2->SetBinContent(9,646018);
   p_pion_plus_stack_2->SetBinContent(10,579001);
   p_pion_plus_stack_2->SetBinContent(11,560878);
   p_pion_plus_stack_2->SetBinContent(12,553609);
   p_pion_plus_stack_2->SetBinContent(13,531895);
   p_pion_plus_stack_2->SetBinContent(14,501454);
   p_pion_plus_stack_2->SetBinContent(15,467061);
   p_pion_plus_stack_2->SetBinContent(16,431008);
   p_pion_plus_stack_2->SetBinContent(17,398901);
   p_pion_plus_stack_2->SetBinContent(18,368175);
   p_pion_plus_stack_2->SetBinContent(19,340435);
   p_pion_plus_stack_2->SetBinContent(20,315287);
   p_pion_plus_stack_2->SetBinContent(21,292539);
   p_pion_plus_stack_2->SetBinContent(22,271708);
   p_pion_plus_stack_2->SetBinContent(23,252045);
   p_pion_plus_stack_2->SetBinContent(24,233236);
   p_pion_plus_stack_2->SetBinContent(25,215115);
   p_pion_plus_stack_2->SetBinContent(26,199524);
   p_pion_plus_stack_2->SetBinContent(27,184803);
   p_pion_plus_stack_2->SetBinContent(28,171278);
   p_pion_plus_stack_2->SetBinContent(29,158647);
   p_pion_plus_stack_2->SetBinContent(30,146352);
   p_pion_plus_stack_2->SetBinContent(31,135794);
   p_pion_plus_stack_2->SetBinContent(32,125120);
   p_pion_plus_stack_2->SetBinContent(33,115761);
   p_pion_plus_stack_2->SetBinContent(34,107888);
   p_pion_plus_stack_2->SetBinContent(35,100481);
   p_pion_plus_stack_2->SetBinContent(36,92990);
   p_pion_plus_stack_2->SetBinContent(37,86365);
   p_pion_plus_stack_2->SetBinContent(38,80034);
   p_pion_plus_stack_2->SetBinContent(39,74414);
   p_pion_plus_stack_2->SetBinContent(40,68996);
   p_pion_plus_stack_2->SetBinContent(41,64490);
   p_pion_plus_stack_2->SetBinContent(42,60465);
   p_pion_plus_stack_2->SetBinContent(43,56078);
   p_pion_plus_stack_2->SetBinContent(44,52428);
   p_pion_plus_stack_2->SetBinContent(45,49034);
   p_pion_plus_stack_2->SetBinContent(46,45977);
   p_pion_plus_stack_2->SetBinContent(47,42740);
   p_pion_plus_stack_2->SetBinContent(48,40200);
   p_pion_plus_stack_2->SetBinContent(49,37410);
   p_pion_plus_stack_2->SetBinContent(50,35075);
   p_pion_plus_stack_2->SetBinContent(51,32459);
   p_pion_plus_stack_2->SetBinContent(52,30931);
   p_pion_plus_stack_2->SetBinContent(53,29202);
   p_pion_plus_stack_2->SetBinContent(54,27093);
   p_pion_plus_stack_2->SetBinContent(55,25324);
   p_pion_plus_stack_2->SetBinContent(56,24132);
   p_pion_plus_stack_2->SetBinContent(57,22550);
   p_pion_plus_stack_2->SetBinContent(58,21134);
   p_pion_plus_stack_2->SetBinContent(59,20240);
   p_pion_plus_stack_2->SetBinContent(60,18915);
   p_pion_plus_stack_2->SetBinContent(61,17771);
   p_pion_plus_stack_2->SetBinContent(62,16757);
   p_pion_plus_stack_2->SetBinContent(63,15512);
   p_pion_plus_stack_2->SetBinContent(64,14887);
   p_pion_plus_stack_2->SetBinContent(65,13894);
   p_pion_plus_stack_2->SetBinContent(66,13159);
   p_pion_plus_stack_2->SetBinContent(67,12306);
   p_pion_plus_stack_2->SetBinContent(68,11483);
   p_pion_plus_stack_2->SetBinContent(69,10786);
   p_pion_plus_stack_2->SetBinContent(70,10274);
   p_pion_plus_stack_2->SetBinContent(71,9543);
   p_pion_plus_stack_2->SetBinContent(72,9059);
   p_pion_plus_stack_2->SetBinContent(73,8607);
   p_pion_plus_stack_2->SetBinContent(74,7970);
   p_pion_plus_stack_2->SetBinContent(75,7660);
   p_pion_plus_stack_2->SetBinContent(76,7212);
   p_pion_plus_stack_2->SetBinContent(77,6712);
   p_pion_plus_stack_2->SetBinContent(78,6356);
   p_pion_plus_stack_2->SetBinContent(79,5864);
   p_pion_plus_stack_2->SetBinContent(80,5600);
   p_pion_plus_stack_2->SetBinContent(81,5194);
   p_pion_plus_stack_2->SetBinContent(82,4989);
   p_pion_plus_stack_2->SetBinContent(83,4518);
   p_pion_plus_stack_2->SetBinContent(84,4386);
   p_pion_plus_stack_2->SetBinContent(85,4069);
   p_pion_plus_stack_2->SetBinContent(86,3737);
   p_pion_plus_stack_2->SetBinContent(87,3578);
   p_pion_plus_stack_2->SetBinContent(88,3321);
   p_pion_plus_stack_2->SetBinContent(89,3169);
   p_pion_plus_stack_2->SetBinContent(90,2879);
   p_pion_plus_stack_2->SetBinContent(91,2726);
   p_pion_plus_stack_2->SetBinContent(92,2641);
   p_pion_plus_stack_2->SetBinContent(93,2419);
   p_pion_plus_stack_2->SetBinContent(94,2280);
   p_pion_plus_stack_2->SetBinContent(95,2158);
   p_pion_plus_stack_2->SetBinContent(96,1987);
   p_pion_plus_stack_2->SetBinContent(97,1941);
   p_pion_plus_stack_2->SetBinContent(98,1782);
   p_pion_plus_stack_2->SetBinContent(99,1582);
   p_pion_plus_stack_2->SetBinContent(100,1538);
   p_pion_plus_stack_2->SetBinContent(101,1406);
   p_pion_plus_stack_2->SetBinContent(102,1325);
   p_pion_plus_stack_2->SetBinContent(103,1253);
   p_pion_plus_stack_2->SetBinContent(104,1200);
   p_pion_plus_stack_2->SetBinContent(105,1125);
   p_pion_plus_stack_2->SetBinContent(106,1020);
   p_pion_plus_stack_2->SetBinContent(107,967);
   p_pion_plus_stack_2->SetBinContent(108,878);
   p_pion_plus_stack_2->SetBinContent(109,821);
   p_pion_plus_stack_2->SetBinContent(110,765);
   p_pion_plus_stack_2->SetBinContent(111,747);
   p_pion_plus_stack_2->SetBinContent(112,685);
   p_pion_plus_stack_2->SetBinContent(113,646);
   p_pion_plus_stack_2->SetBinContent(114,642);
   p_pion_plus_stack_2->SetBinContent(115,563);
   p_pion_plus_stack_2->SetBinContent(116,556);
   p_pion_plus_stack_2->SetBinContent(117,516);
   p_pion_plus_stack_2->SetBinContent(118,473);
   p_pion_plus_stack_2->SetBinContent(119,417);
   p_pion_plus_stack_2->SetBinContent(120,413);
   p_pion_plus_stack_2->SetBinContent(121,363);
   p_pion_plus_stack_2->SetBinContent(122,363);
   p_pion_plus_stack_2->SetBinContent(123,355);
   p_pion_plus_stack_2->SetBinContent(124,314);
   p_pion_plus_stack_2->SetBinContent(125,269);
   p_pion_plus_stack_2->SetBinContent(126,271);
   p_pion_plus_stack_2->SetBinContent(127,275);
   p_pion_plus_stack_2->SetBinContent(128,275);
   p_pion_plus_stack_2->SetBinContent(129,224);
   p_pion_plus_stack_2->SetBinContent(130,213);
   p_pion_plus_stack_2->SetBinContent(131,201);
   p_pion_plus_stack_2->SetBinContent(132,188);
   p_pion_plus_stack_2->SetBinContent(133,180);
   p_pion_plus_stack_2->SetBinContent(134,175);
   p_pion_plus_stack_2->SetBinContent(135,156);
   p_pion_plus_stack_2->SetBinContent(136,161);
   p_pion_plus_stack_2->SetBinContent(137,141);
   p_pion_plus_stack_2->SetBinContent(138,148);
   p_pion_plus_stack_2->SetBinContent(139,120);
   p_pion_plus_stack_2->SetBinContent(140,131);
   p_pion_plus_stack_2->SetBinContent(141,130);
   p_pion_plus_stack_2->SetBinContent(142,100);
   p_pion_plus_stack_2->SetBinContent(143,123);
   p_pion_plus_stack_2->SetBinContent(144,113);
   p_pion_plus_stack_2->SetBinContent(145,94);
   p_pion_plus_stack_2->SetBinContent(146,96);
   p_pion_plus_stack_2->SetBinContent(147,106);
   p_pion_plus_stack_2->SetBinContent(148,97);
   p_pion_plus_stack_2->SetBinContent(149,91);
   p_pion_plus_stack_2->SetBinContent(150,89);
   p_pion_plus_stack_2->SetBinContent(151,97);
   p_pion_plus_stack_2->SetBinContent(152,104);
   p_pion_plus_stack_2->SetBinContent(153,73);
   p_pion_plus_stack_2->SetBinContent(154,83);
   p_pion_plus_stack_2->SetBinContent(155,79);
   p_pion_plus_stack_2->SetBinContent(156,65);
   p_pion_plus_stack_2->SetBinContent(157,75);
   p_pion_plus_stack_2->SetBinContent(158,77);
   p_pion_plus_stack_2->SetBinContent(159,70);
   p_pion_plus_stack_2->SetBinContent(160,83);
   p_pion_plus_stack_2->SetBinContent(161,66);
   p_pion_plus_stack_2->SetBinContent(162,64);
   p_pion_plus_stack_2->SetBinContent(163,60);
   p_pion_plus_stack_2->SetBinContent(164,56);
   p_pion_plus_stack_2->SetBinContent(165,80);
   p_pion_plus_stack_2->SetBinContent(166,72);
   p_pion_plus_stack_2->SetBinContent(167,59);
   p_pion_plus_stack_2->SetBinContent(168,74);
   p_pion_plus_stack_2->SetBinContent(169,71);
   p_pion_plus_stack_2->SetBinContent(170,67);
   p_pion_plus_stack_2->SetBinContent(171,71);
   p_pion_plus_stack_2->SetBinContent(172,58);
   p_pion_plus_stack_2->SetBinContent(173,60);
   p_pion_plus_stack_2->SetBinContent(174,56);
   p_pion_plus_stack_2->SetBinContent(175,50);
   p_pion_plus_stack_2->SetBinContent(176,62);
   p_pion_plus_stack_2->SetBinContent(177,51);
   p_pion_plus_stack_2->SetBinContent(178,44);
   p_pion_plus_stack_2->SetBinContent(179,63);
   p_pion_plus_stack_2->SetBinContent(180,58);
   p_pion_plus_stack_2->SetBinContent(181,59);
   p_pion_plus_stack_2->SetBinContent(182,53);
   p_pion_plus_stack_2->SetBinContent(183,52);
   p_pion_plus_stack_2->SetBinContent(184,59);
   p_pion_plus_stack_2->SetBinContent(185,59);
   p_pion_plus_stack_2->SetBinContent(186,56);
   p_pion_plus_stack_2->SetBinContent(187,52);
   p_pion_plus_stack_2->SetBinContent(188,55);
   p_pion_plus_stack_2->SetBinContent(189,50);
   p_pion_plus_stack_2->SetBinContent(190,47);
   p_pion_plus_stack_2->SetBinContent(191,48);
   p_pion_plus_stack_2->SetBinContent(192,58);
   p_pion_plus_stack_2->SetBinContent(193,53);
   p_pion_plus_stack_2->SetBinContent(194,49);
   p_pion_plus_stack_2->SetBinContent(195,51);
   p_pion_plus_stack_2->SetBinContent(196,43);
   p_pion_plus_stack_2->SetBinContent(197,44);
   p_pion_plus_stack_2->SetBinContent(198,44);
   p_pion_plus_stack_2->SetBinContent(199,39);
   p_pion_plus_stack_2->SetBinContent(200,39);
   p_pion_plus_stack_2->SetBinContent(201,8120);
   p_pion_plus_stack_2->SetEntries(1.292838e+07);
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.292838e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.013");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.8104");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   p_pion_plus_stack_2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(p_pion_plus_stack_2);

   ci = 1185;
   color = new TColor(ci, 0.04705882, 0.3647059, 0.6470588, " ", 0.15);
   p_pion_plus_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#0c5da5");
   p_pion_plus_stack_2->SetLineColor(ci);
   p_pion_plus_stack_2->GetXaxis()->SetLabelFont(42);
   p_pion_plus_stack_2->GetXaxis()->SetTitleOffset(1);
   p_pion_plus_stack_2->GetXaxis()->SetTitleFont(42);
   p_pion_plus_stack_2->GetYaxis()->SetLabelFont(42);
   p_pion_plus_stack_2->GetYaxis()->SetTitleFont(42);
   p_pion_plus_stack_2->GetZaxis()->SetLabelFont(42);
   p_pion_plus_stack_2->GetZaxis()->SetTitleOffset(1);
   p_pion_plus_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(p_pion_plus_stack_2,"sames histo");
   hs->Draw("hist nostack");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.974558e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.9296");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.8117");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.292838e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.013");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.8104");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
