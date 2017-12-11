<?php
$z[0]=Array("global","",496,522);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","(@me==\"\")? @me=\" class='current'\":@me=\"\";",824,915);
$z[1][4]['name']="typeid";
$z[1][4]['runphp']="yes";
$z[2]=Array("channelartlist","\r\n            <li {dede:field name='currentstyle'/}><a class=\"first-level\" href=\"{dede:field name='typeurl'/}\" target=\"\"><strong>{dede:field name='typename'/}</strong></a><i></i>\r\n              <ul class=\"\">\r\n                {dede:channel type='son' noself='yes'}\r\n                <li class=\"\"><a class=\"\" href=\"[field:typelink/]\" target=\"\"><strong>[field:typename/]</strong></a></li>\r\n                {/dede:channel}\r\n              </ul>\r\n            </li>\r\n            ",1011,1545);
$z[2][4]['row']="10";
$z[2][4]['typeid']="top";
$z[3]=Array("global","",1959,1985);
$z[3][4]['name']="cfg_webname";
$z[4]=Array("channelartlist","\r\n          <li><span><a href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a></span><a href=\"javascript:;\"><i class=\"touch-arrow-down\"></i></a>\r\n            <ul>\r\n              {dede:channel type='son' noself='yes'}\r\n              <li><a href=\"[field:typelink/]\"><span>[field:typename/]</span></a></li>\r\n              {/dede:channel}\r\n            </ul>\r\n          </li>\r\n          ",2796,3257);
$z[4][4]['row']="10";
$z[4][4]['typeid']="top";

?>