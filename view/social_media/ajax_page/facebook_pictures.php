<?php foreach ($images as $img) { ?>
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
                            <a href="javascript:void(0)" url="<?php echo $img; ?>" onclick="addPictureToSave('facebook',this)" class="btn btn-success"><i class="ico-plus"></i></a>
                        </div>
                    </div>
                    <img onerror="loadCount()" onload="opacityFreeMe(this);loadCount();" data-toggle="unveil" src="<?php echo $img; ?>" data-src="<?php echo $img; ?>" alt="Photo" width="100%"/>
                </div>
            </div>

        </div>
    </div>
<?php }