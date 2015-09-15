<?php
/**
 * Project  : ezzipix
 * File     : facebook.php
 * Author   : Abu Bakar Siddique
 * Email    : absiddique.live@gmail.com
 * Date     : 9/15/15 - 11:59 AM
 */

require_once 'EzzipixController.php';

class Facebook extends EzzipixController {
    public function index() {
        $this->loadView("facebook", $this->pageData);
    }

    public function htmlData() {
        $images = @$_POST["images"];

        foreach ($images as $img) { ?>
            <img style="" src=""/>
            <div class="col-sm-3 shuffle" data-groups='["creative", "people"]'>
                <div class="panel no-border overflow-hidden photoParent">
                    <div class="thumbnail nm">
                        <div class="checkIconDiv">
                            <a href="javascript:void(0)" class="btn btn-success checkIcon" style="display:none;"><i class="ico-check"></i></a>
                        </div>
                        <div class="media">
                            <div class="indicator"><span class="spinner"></span></div>
                            <div class="overlay">
                                <div class="toolbar">
                                    <a href="<?php echo $img; ?>" class="btn btn-default magnific" title=""><i class="ico-search"></i></a>
                                    <a href="javascript:void(0)" url="<?php echo $img; ?>" onclick="addPictureToSave('',this)" class="btn btn-success"><i class="ico-plus"></i></a>
                                </div>
                            </div>
                            <img data-toggle="unveil" src="<?php echo $img; ?>" data-src="<?php echo $img; ?>" alt="Photo" width="100%"/>
                        </div>
                    </div>
                    <div class="panel-footer" style="padding:25px;border:0;">
                        <h4 class="text-center mt0 ellipsis"></h4>

                        <div class="text-center">
                        </div>
                    </div>
                </div>
            </div>
        <?php }
    }

    function process() {
        $method = (isset($_GET['r'])) ? $_GET['r'] : "";
        switch ($method) {
            case 'htmlData';
                $this->htmlData();
                break;
            default:
                $this->index();
                break;
        }
    }
}

$fb = new Facebook();
$fb->process();