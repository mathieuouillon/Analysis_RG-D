#ifdef __CLING__
#pragma cling optimize(0)
#endif
void phi_e()
{
//=========Macro generated from canvas: c1/
//=========  (Sat Oct 26 15:57:24 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-250,-31921.39,250,234090.2);
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
   hs->SetMaximum(202168.8);
   
   TH1F *hs_stack_2 = new TH1F("hs_stack_2","",200,-190,190);
   hs_stack_2->SetMinimum(0);
   hs_stack_2->SetMaximum(202168.8);
   hs_stack_2->SetDirectory(nullptr);
   hs_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_2->SetLineColor(ci);
   hs_stack_2->SetLineWidth(0);
   hs_stack_2->GetXaxis()->SetTitle("#phi_{e} [Deg.]");
   hs_stack_2->GetXaxis()->SetLabelFont(42);
   hs_stack_2->GetXaxis()->SetTitleSize(0.05);
   hs_stack_2->GetXaxis()->SetTitleOffset(1);
   hs_stack_2->GetXaxis()->SetTitleFont(42);
   hs_stack_2->GetYaxis()->SetLabelFont(42);
   hs_stack_2->GetYaxis()->SetTitleFont(42);
   hs_stack_2->GetZaxis()->SetLabelFont(42);
   hs_stack_2->GetZaxis()->SetTitleOffset(1);
   hs_stack_2->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_2);
   
   
   TH1F *phi_e_stack_1 = new TH1F("phi_e_stack_1","",200,-190,190);
   phi_e_stack_1->SetBinContent(6,113443);
   phi_e_stack_1->SetBinContent(7,156795);
   phi_e_stack_1->SetBinContent(8,159226);
   phi_e_stack_1->SetBinContent(9,160180);
   phi_e_stack_1->SetBinContent(10,162884);
   phi_e_stack_1->SetBinContent(11,165376);
   phi_e_stack_1->SetBinContent(12,166886);
   phi_e_stack_1->SetBinContent(13,168400);
   phi_e_stack_1->SetBinContent(14,168474);
   phi_e_stack_1->SetBinContent(15,167194);
   phi_e_stack_1->SetBinContent(16,160428);
   phi_e_stack_1->SetBinContent(17,146163);
   phi_e_stack_1->SetBinContent(18,126660);
   phi_e_stack_1->SetBinContent(19,105423);
   phi_e_stack_1->SetBinContent(20,87190);
   phi_e_stack_1->SetBinContent(21,71445);
   phi_e_stack_1->SetBinContent(22,57982);
   phi_e_stack_1->SetBinContent(23,46810);
   phi_e_stack_1->SetBinContent(24,39124);
   phi_e_stack_1->SetBinContent(25,32021);
   phi_e_stack_1->SetBinContent(26,26361);
   phi_e_stack_1->SetBinContent(27,21345);
   phi_e_stack_1->SetBinContent(28,17571);
   phi_e_stack_1->SetBinContent(29,18754);
   phi_e_stack_1->SetBinContent(30,30449);
   phi_e_stack_1->SetBinContent(31,52757);
   phi_e_stack_1->SetBinContent(32,78381);
   phi_e_stack_1->SetBinContent(33,102418);
   phi_e_stack_1->SetBinContent(34,121811);
   phi_e_stack_1->SetBinContent(35,132809);
   phi_e_stack_1->SetBinContent(36,141098);
   phi_e_stack_1->SetBinContent(37,149040);
   phi_e_stack_1->SetBinContent(38,153066);
   phi_e_stack_1->SetBinContent(39,156669);
   phi_e_stack_1->SetBinContent(40,159464);
   phi_e_stack_1->SetBinContent(41,160750);
   phi_e_stack_1->SetBinContent(42,161069);
   phi_e_stack_1->SetBinContent(43,161793);
   phi_e_stack_1->SetBinContent(44,162172);
   phi_e_stack_1->SetBinContent(45,161705);
   phi_e_stack_1->SetBinContent(46,161840);
   phi_e_stack_1->SetBinContent(47,157282);
   phi_e_stack_1->SetBinContent(48,147073);
   phi_e_stack_1->SetBinContent(49,131533);
   phi_e_stack_1->SetBinContent(50,113325);
   phi_e_stack_1->SetBinContent(51,93551);
   phi_e_stack_1->SetBinContent(52,77201);
   phi_e_stack_1->SetBinContent(53,62888);
   phi_e_stack_1->SetBinContent(54,50942);
   phi_e_stack_1->SetBinContent(55,41818);
   phi_e_stack_1->SetBinContent(56,34404);
   phi_e_stack_1->SetBinContent(57,27209);
   phi_e_stack_1->SetBinContent(58,21990);
   phi_e_stack_1->SetBinContent(59,17660);
   phi_e_stack_1->SetBinContent(60,16054);
   phi_e_stack_1->SetBinContent(61,24017);
   phi_e_stack_1->SetBinContent(62,44513);
   phi_e_stack_1->SetBinContent(63,71072);
   phi_e_stack_1->SetBinContent(64,96830);
   phi_e_stack_1->SetBinContent(65,115678);
   phi_e_stack_1->SetBinContent(66,128370);
   phi_e_stack_1->SetBinContent(67,136538);
   phi_e_stack_1->SetBinContent(68,143283);
   phi_e_stack_1->SetBinContent(69,147334);
   phi_e_stack_1->SetBinContent(70,149946);
   phi_e_stack_1->SetBinContent(71,153100);
   phi_e_stack_1->SetBinContent(72,156010);
   phi_e_stack_1->SetBinContent(73,159458);
   phi_e_stack_1->SetBinContent(74,161739);
   phi_e_stack_1->SetBinContent(75,163820);
   phi_e_stack_1->SetBinContent(76,164387);
   phi_e_stack_1->SetBinContent(77,165078);
   phi_e_stack_1->SetBinContent(78,162641);
   phi_e_stack_1->SetBinContent(79,154962);
   phi_e_stack_1->SetBinContent(80,137205);
   phi_e_stack_1->SetBinContent(81,117895);
   phi_e_stack_1->SetBinContent(82,98937);
   phi_e_stack_1->SetBinContent(83,81567);
   phi_e_stack_1->SetBinContent(84,66846);
   phi_e_stack_1->SetBinContent(85,54411);
   phi_e_stack_1->SetBinContent(86,43912);
   phi_e_stack_1->SetBinContent(87,35629);
   phi_e_stack_1->SetBinContent(88,28894);
   phi_e_stack_1->SetBinContent(89,23279);
   phi_e_stack_1->SetBinContent(90,18354);
   phi_e_stack_1->SetBinContent(91,14909);
   phi_e_stack_1->SetBinContent(92,17337);
   phi_e_stack_1->SetBinContent(93,31788);
   phi_e_stack_1->SetBinContent(94,58122);
   phi_e_stack_1->SetBinContent(95,86726);
   phi_e_stack_1->SetBinContent(96,108529);
   phi_e_stack_1->SetBinContent(97,123938);
   phi_e_stack_1->SetBinContent(98,133249);
   phi_e_stack_1->SetBinContent(99,140169);
   phi_e_stack_1->SetBinContent(100,144798);
   phi_e_stack_1->SetBinContent(101,148583);
   phi_e_stack_1->SetBinContent(102,151347);
   phi_e_stack_1->SetBinContent(103,155309);
   phi_e_stack_1->SetBinContent(104,158129);
   phi_e_stack_1->SetBinContent(105,160185);
   phi_e_stack_1->SetBinContent(106,161616);
   phi_e_stack_1->SetBinContent(107,161216);
   phi_e_stack_1->SetBinContent(108,161517);
   phi_e_stack_1->SetBinContent(109,158610);
   phi_e_stack_1->SetBinContent(110,152804);
   phi_e_stack_1->SetBinContent(111,139562);
   phi_e_stack_1->SetBinContent(112,123175);
   phi_e_stack_1->SetBinContent(113,106150);
   phi_e_stack_1->SetBinContent(114,88289);
   phi_e_stack_1->SetBinContent(115,72614);
   phi_e_stack_1->SetBinContent(116,58932);
   phi_e_stack_1->SetBinContent(117,47817);
   phi_e_stack_1->SetBinContent(118,38251);
   phi_e_stack_1->SetBinContent(119,31300);
   phi_e_stack_1->SetBinContent(120,24850);
   phi_e_stack_1->SetBinContent(121,20000);
   phi_e_stack_1->SetBinContent(122,15797);
   phi_e_stack_1->SetBinContent(123,13890);
   phi_e_stack_1->SetBinContent(124,20606);
   phi_e_stack_1->SetBinContent(125,42359);
   phi_e_stack_1->SetBinContent(126,71128);
   phi_e_stack_1->SetBinContent(127,95182);
   phi_e_stack_1->SetBinContent(128,114843);
   phi_e_stack_1->SetBinContent(129,128643);
   phi_e_stack_1->SetBinContent(130,137023);
   phi_e_stack_1->SetBinContent(131,145218);
   phi_e_stack_1->SetBinContent(132,150749);
   phi_e_stack_1->SetBinContent(133,155951);
   phi_e_stack_1->SetBinContent(134,159889);
   phi_e_stack_1->SetBinContent(135,163030);
   phi_e_stack_1->SetBinContent(136,166002);
   phi_e_stack_1->SetBinContent(137,166188);
   phi_e_stack_1->SetBinContent(138,166557);
   phi_e_stack_1->SetBinContent(139,167794);
   phi_e_stack_1->SetBinContent(140,167025);
   phi_e_stack_1->SetBinContent(141,165842);
   phi_e_stack_1->SetBinContent(142,157374);
   phi_e_stack_1->SetBinContent(143,142835);
   phi_e_stack_1->SetBinContent(144,125829);
   phi_e_stack_1->SetBinContent(145,106816);
   phi_e_stack_1->SetBinContent(146,88629);
   phi_e_stack_1->SetBinContent(147,71937);
   phi_e_stack_1->SetBinContent(148,58044);
   phi_e_stack_1->SetBinContent(149,47271);
   phi_e_stack_1->SetBinContent(150,38255);
   phi_e_stack_1->SetBinContent(151,31468);
   phi_e_stack_1->SetBinContent(152,25235);
   phi_e_stack_1->SetBinContent(153,20032);
   phi_e_stack_1->SetBinContent(154,16403);
   phi_e_stack_1->SetBinContent(155,16638);
   phi_e_stack_1->SetBinContent(156,28490);
   phi_e_stack_1->SetBinContent(157,51302);
   phi_e_stack_1->SetBinContent(158,76431);
   phi_e_stack_1->SetBinContent(159,100417);
   phi_e_stack_1->SetBinContent(160,118257);
   phi_e_stack_1->SetBinContent(161,132146);
   phi_e_stack_1->SetBinContent(162,142374);
   phi_e_stack_1->SetBinContent(163,148900);
   phi_e_stack_1->SetBinContent(164,152873);
   phi_e_stack_1->SetBinContent(165,155659);
   phi_e_stack_1->SetBinContent(166,157927);
   phi_e_stack_1->SetBinContent(167,159895);
   phi_e_stack_1->SetBinContent(168,161022);
   phi_e_stack_1->SetBinContent(169,163788);
   phi_e_stack_1->SetBinContent(170,163274);
   phi_e_stack_1->SetBinContent(171,163833);
   phi_e_stack_1->SetBinContent(172,162446);
   phi_e_stack_1->SetBinContent(173,159140);
   phi_e_stack_1->SetBinContent(174,149943);
   phi_e_stack_1->SetBinContent(175,133682);
   phi_e_stack_1->SetBinContent(176,115244);
   phi_e_stack_1->SetBinContent(177,95227);
   phi_e_stack_1->SetBinContent(178,77128);
   phi_e_stack_1->SetBinContent(179,61953);
   phi_e_stack_1->SetBinContent(180,50190);
   phi_e_stack_1->SetBinContent(181,40205);
   phi_e_stack_1->SetBinContent(182,32372);
   phi_e_stack_1->SetBinContent(183,26230);
   phi_e_stack_1->SetBinContent(184,21311);
   phi_e_stack_1->SetBinContent(185,17161);
   phi_e_stack_1->SetBinContent(186,14769);
   phi_e_stack_1->SetBinContent(187,19123);
   phi_e_stack_1->SetBinContent(188,36261);
   phi_e_stack_1->SetBinContent(189,62551);
   phi_e_stack_1->SetBinContent(190,84883);
   phi_e_stack_1->SetBinContent(191,106412);
   phi_e_stack_1->SetBinContent(192,124834);
   phi_e_stack_1->SetBinContent(193,136648);
   phi_e_stack_1->SetBinContent(194,145965);
   phi_e_stack_1->SetBinContent(195,111207);
   phi_e_stack_1->SetEntries(1.959384e+07);
   phi_e_stack_1->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   1.959384e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -5.429");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  104.5");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   phi_e_stack_1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(phi_e_stack_1);

   ci = TColor::GetColor("#121415");
   phi_e_stack_1->SetLineColor(ci);
   phi_e_stack_1->GetXaxis()->SetLabelFont(42);
   phi_e_stack_1->GetXaxis()->SetTitleOffset(1);
   phi_e_stack_1->GetXaxis()->SetTitleFont(42);
   phi_e_stack_1->GetYaxis()->SetLabelFont(42);
   phi_e_stack_1->GetYaxis()->SetTitleFont(42);
   phi_e_stack_1->GetZaxis()->SetLabelFont(42);
   phi_e_stack_1->GetZaxis()->SetTitleOffset(1);
   phi_e_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(phi_e_stack_1,"sames histo");
   
   TH1F *phi_e_stack_2 = new TH1F("phi_e_stack_2","",200,-190,190);
   phi_e_stack_2->SetBinContent(6,101939);
   phi_e_stack_2->SetBinContent(7,140886);
   phi_e_stack_2->SetBinContent(8,142556);
   phi_e_stack_2->SetBinContent(9,142792);
   phi_e_stack_2->SetBinContent(10,145010);
   phi_e_stack_2->SetBinContent(11,146990);
   phi_e_stack_2->SetBinContent(12,147706);
   phi_e_stack_2->SetBinContent(13,149201);
   phi_e_stack_2->SetBinContent(14,148741);
   phi_e_stack_2->SetBinContent(15,147646);
   phi_e_stack_2->SetBinContent(16,140937);
   phi_e_stack_2->SetBinContent(17,127188);
   phi_e_stack_2->SetBinContent(18,109290);
   phi_e_stack_2->SetBinContent(19,89932);
   phi_e_stack_2->SetBinContent(20,73341);
   phi_e_stack_2->SetBinContent(21,59426);
   phi_e_stack_2->SetBinContent(22,47752);
   phi_e_stack_2->SetBinContent(23,38233);
   phi_e_stack_2->SetBinContent(24,31629);
   phi_e_stack_2->SetBinContent(25,25749);
   phi_e_stack_2->SetBinContent(26,20942);
   phi_e_stack_2->SetBinContent(27,16730);
   phi_e_stack_2->SetBinContent(28,13515);
   phi_e_stack_2->SetBinContent(29,15038);
   phi_e_stack_2->SetBinContent(30,25906);
   phi_e_stack_2->SetBinContent(31,46170);
   phi_e_stack_2->SetBinContent(32,69467);
   phi_e_stack_2->SetBinContent(33,91238);
   phi_e_stack_2->SetBinContent(34,108594);
   phi_e_stack_2->SetBinContent(35,117993);
   phi_e_stack_2->SetBinContent(36,125190);
   phi_e_stack_2->SetBinContent(37,131800);
   phi_e_stack_2->SetBinContent(38,134888);
   phi_e_stack_2->SetBinContent(39,137529);
   phi_e_stack_2->SetBinContent(40,139605);
   phi_e_stack_2->SetBinContent(41,140128);
   phi_e_stack_2->SetBinContent(42,140297);
   phi_e_stack_2->SetBinContent(43,140846);
   phi_e_stack_2->SetBinContent(44,141141);
   phi_e_stack_2->SetBinContent(45,140512);
   phi_e_stack_2->SetBinContent(46,140427);
   phi_e_stack_2->SetBinContent(47,136214);
   phi_e_stack_2->SetBinContent(48,126782);
   phi_e_stack_2->SetBinContent(49,112560);
   phi_e_stack_2->SetBinContent(50,96068);
   phi_e_stack_2->SetBinContent(51,78608);
   phi_e_stack_2->SetBinContent(52,64010);
   phi_e_stack_2->SetBinContent(53,51581);
   phi_e_stack_2->SetBinContent(54,41458);
   phi_e_stack_2->SetBinContent(55,33788);
   phi_e_stack_2->SetBinContent(56,27603);
   phi_e_stack_2->SetBinContent(57,21671);
   phi_e_stack_2->SetBinContent(58,17098);
   phi_e_stack_2->SetBinContent(59,13658);
   phi_e_stack_2->SetBinContent(60,12400);
   phi_e_stack_2->SetBinContent(61,20121);
   phi_e_stack_2->SetBinContent(62,39193);
   phi_e_stack_2->SetBinContent(63,63694);
   phi_e_stack_2->SetBinContent(64,87368);
   phi_e_stack_2->SetBinContent(65,104313);
   phi_e_stack_2->SetBinContent(66,115198);
   phi_e_stack_2->SetBinContent(67,122352);
   phi_e_stack_2->SetBinContent(68,128226);
   phi_e_stack_2->SetBinContent(69,131790);
   phi_e_stack_2->SetBinContent(70,133873);
   phi_e_stack_2->SetBinContent(71,136561);
   phi_e_stack_2->SetBinContent(72,139299);
   phi_e_stack_2->SetBinContent(73,142676);
   phi_e_stack_2->SetBinContent(74,144207);
   phi_e_stack_2->SetBinContent(75,146138);
   phi_e_stack_2->SetBinContent(76,146573);
   phi_e_stack_2->SetBinContent(77,146913);
   phi_e_stack_2->SetBinContent(78,144545);
   phi_e_stack_2->SetBinContent(79,137512);
   phi_e_stack_2->SetBinContent(80,120680);
   phi_e_stack_2->SetBinContent(81,102937);
   phi_e_stack_2->SetBinContent(82,85710);
   phi_e_stack_2->SetBinContent(83,69692);
   phi_e_stack_2->SetBinContent(84,56662);
   phi_e_stack_2->SetBinContent(85,45744);
   phi_e_stack_2->SetBinContent(86,36545);
   phi_e_stack_2->SetBinContent(87,29371);
   phi_e_stack_2->SetBinContent(88,23683);
   phi_e_stack_2->SetBinContent(89,18758);
   phi_e_stack_2->SetBinContent(90,14501);
   phi_e_stack_2->SetBinContent(91,11345);
   phi_e_stack_2->SetBinContent(92,13673);
   phi_e_stack_2->SetBinContent(93,27191);
   phi_e_stack_2->SetBinContent(94,51247);
   phi_e_stack_2->SetBinContent(95,77615);
   phi_e_stack_2->SetBinContent(96,97090);
   phi_e_stack_2->SetBinContent(97,111047);
   phi_e_stack_2->SetBinContent(98,119209);
   phi_e_stack_2->SetBinContent(99,125343);
   phi_e_stack_2->SetBinContent(100,129590);
   phi_e_stack_2->SetBinContent(101,132709);
   phi_e_stack_2->SetBinContent(102,135157);
   phi_e_stack_2->SetBinContent(103,138859);
   phi_e_stack_2->SetBinContent(104,141191);
   phi_e_stack_2->SetBinContent(105,143125);
   phi_e_stack_2->SetBinContent(106,144398);
   phi_e_stack_2->SetBinContent(107,143536);
   phi_e_stack_2->SetBinContent(108,143736);
   phi_e_stack_2->SetBinContent(109,140943);
   phi_e_stack_2->SetBinContent(110,135150);
   phi_e_stack_2->SetBinContent(111,123060);
   phi_e_stack_2->SetBinContent(112,108081);
   phi_e_stack_2->SetBinContent(113,92457);
   phi_e_stack_2->SetBinContent(114,76158);
   phi_e_stack_2->SetBinContent(115,62278);
   phi_e_stack_2->SetBinContent(116,50277);
   phi_e_stack_2->SetBinContent(117,40452);
   phi_e_stack_2->SetBinContent(118,32243);
   phi_e_stack_2->SetBinContent(119,26299);
   phi_e_stack_2->SetBinContent(120,20662);
   phi_e_stack_2->SetBinContent(121,16411);
   phi_e_stack_2->SetBinContent(122,12733);
   phi_e_stack_2->SetBinContent(123,10987);
   phi_e_stack_2->SetBinContent(124,17225);
   phi_e_stack_2->SetBinContent(125,37471);
   phi_e_stack_2->SetBinContent(126,64441);
   phi_e_stack_2->SetBinContent(127,87066);
   phi_e_stack_2->SetBinContent(128,105269);
   phi_e_stack_2->SetBinContent(129,117736);
   phi_e_stack_2->SetBinContent(130,125021);
   phi_e_stack_2->SetBinContent(131,132402);
   phi_e_stack_2->SetBinContent(132,137260);
   phi_e_stack_2->SetBinContent(133,141605);
   phi_e_stack_2->SetBinContent(134,144995);
   phi_e_stack_2->SetBinContent(135,147232);
   phi_e_stack_2->SetBinContent(136,149702);
   phi_e_stack_2->SetBinContent(137,149323);
   phi_e_stack_2->SetBinContent(138,149729);
   phi_e_stack_2->SetBinContent(139,150872);
   phi_e_stack_2->SetBinContent(140,149876);
   phi_e_stack_2->SetBinContent(141,148188);
   phi_e_stack_2->SetBinContent(142,139928);
   phi_e_stack_2->SetBinContent(143,125876);
   phi_e_stack_2->SetBinContent(144,109880);
   phi_e_stack_2->SetBinContent(145,92455);
   phi_e_stack_2->SetBinContent(146,75882);
   phi_e_stack_2->SetBinContent(147,61120);
   phi_e_stack_2->SetBinContent(148,48956);
   phi_e_stack_2->SetBinContent(149,39561);
   phi_e_stack_2->SetBinContent(150,31681);
   phi_e_stack_2->SetBinContent(151,25906);
   phi_e_stack_2->SetBinContent(152,20545);
   phi_e_stack_2->SetBinContent(153,15935);
   phi_e_stack_2->SetBinContent(154,12843);
   phi_e_stack_2->SetBinContent(155,13234);
   phi_e_stack_2->SetBinContent(156,24272);
   phi_e_stack_2->SetBinContent(157,45062);
   phi_e_stack_2->SetBinContent(158,67425);
   phi_e_stack_2->SetBinContent(159,88606);
   phi_e_stack_2->SetBinContent(160,104501);
   phi_e_stack_2->SetBinContent(161,116694);
   phi_e_stack_2->SetBinContent(162,126829);
   phi_e_stack_2->SetBinContent(163,133349);
   phi_e_stack_2->SetBinContent(164,137231);
   phi_e_stack_2->SetBinContent(165,140080);
   phi_e_stack_2->SetBinContent(166,142256);
   phi_e_stack_2->SetBinContent(167,143714);
   phi_e_stack_2->SetBinContent(168,145056);
   phi_e_stack_2->SetBinContent(169,147351);
   phi_e_stack_2->SetBinContent(170,146837);
   phi_e_stack_2->SetBinContent(171,147014);
   phi_e_stack_2->SetBinContent(172,145548);
   phi_e_stack_2->SetBinContent(173,141991);
   phi_e_stack_2->SetBinContent(174,132716);
   phi_e_stack_2->SetBinContent(175,117855);
   phi_e_stack_2->SetBinContent(176,100735);
   phi_e_stack_2->SetBinContent(177,82180);
   phi_e_stack_2->SetBinContent(178,65913);
   phi_e_stack_2->SetBinContent(179,52683);
   phi_e_stack_2->SetBinContent(180,42186);
   phi_e_stack_2->SetBinContent(181,33540);
   phi_e_stack_2->SetBinContent(182,26814);
   phi_e_stack_2->SetBinContent(183,21371);
   phi_e_stack_2->SetBinContent(184,17162);
   phi_e_stack_2->SetBinContent(185,13640);
   phi_e_stack_2->SetBinContent(186,11556);
   phi_e_stack_2->SetBinContent(187,15692);
   phi_e_stack_2->SetBinContent(188,31278);
   phi_e_stack_2->SetBinContent(189,55279);
   phi_e_stack_2->SetBinContent(190,75703);
   phi_e_stack_2->SetBinContent(191,95596);
   phi_e_stack_2->SetBinContent(192,112586);
   phi_e_stack_2->SetBinContent(193,123066);
   phi_e_stack_2->SetBinContent(194,131630);
   phi_e_stack_2->SetBinContent(195,100140);
   phi_e_stack_2->SetEntries(1.726984e+07);
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.726984e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -4.818");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  104.5");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   phi_e_stack_2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(phi_e_stack_2);

   ci = 1185;
   color = new TColor(ci, 0.04705882, 0.3647059, 0.6470588, " ", 0.15);
   phi_e_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#0c5da5");
   phi_e_stack_2->SetLineColor(ci);
   phi_e_stack_2->GetXaxis()->SetLabelFont(42);
   phi_e_stack_2->GetXaxis()->SetTitleOffset(1);
   phi_e_stack_2->GetXaxis()->SetTitleFont(42);
   phi_e_stack_2->GetYaxis()->SetLabelFont(42);
   phi_e_stack_2->GetYaxis()->SetTitleFont(42);
   phi_e_stack_2->GetZaxis()->SetLabelFont(42);
   phi_e_stack_2->GetZaxis()->SetTitleOffset(1);
   phi_e_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(phi_e_stack_2,"sames histo");
   hs->Draw("hist nostack");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.959384e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -5.429");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  104.5");
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
   ptstats_LaTex = ptstats->AddText("Entries =   1.726984e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -4.818");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  104.5");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
