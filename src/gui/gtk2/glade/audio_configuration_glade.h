/* autogenerated file, do not modify! */
/* souce file: audio_configuration.glade */
const gchar *audio_configuration_glade=
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>"
"<interface>"
"  <requires lib=\"gtk+\" version=\"2.24\"/>"
"  <!-- interface-naming-policy project-wide -->"
"  <object class=\"GtkWindow\" id=\"audio_configuration\">"
"    <property name=\"width_request\">400</property>"
"    <property name=\"can_focus\">False</property>"
"    <property name=\"title\" translatable=\"yes\">Sound Configuration</property>"
"    <property name=\"resizable\">False</property>"
"    <property name=\"modal\">True</property>"
"    <property name=\"type_hint\">dialog</property>"
"    <child>"
"      <object class=\"GtkAlignment\" id=\"alignment_audio_configuration\">"
"        <property name=\"visible\">True</property>"
"        <property name=\"can_focus\">False</property>"
"        <property name=\"top_padding\">5</property>"
"        <property name=\"bottom_padding\">5</property>"
"        <property name=\"left_padding\">5</property>"
"        <property name=\"right_padding\">5</property>"
"        <child>"
"          <object class=\"GtkVBox\" id=\"vbox_audio_configuration\">"
"            <property name=\"visible\">True</property>"
"            <property name=\"can_focus\">False</property>"
"            <property name=\"spacing\">2</property>"
"            <child>"
"              <object class=\"GtkFrame\" id=\"frame_audio_options\">"
"                <property name=\"visible\">True</property>"
"                <property name=\"can_focus\">False</property>"
"                <property name=\"label_xalign\">0</property>"
"                <property name=\"shadow_type\">etched-out</property>"
"                <child>"
"                  <object class=\"GtkAlignment\" id=\"alignment_audio_options\">"
"                    <property name=\"visible\">True</property>"
"                    <property name=\"can_focus\">False</property>"
"                    <property name=\"top_padding\">3</property>"
"                    <property name=\"bottom_padding\">3</property>"
"                    <property name=\"left_padding\">12</property>"
"                    <property name=\"right_padding\">3</property>"
"                    <child>"
"                      <object class=\"GtkVBox\" id=\"vbox_audio_options\">"
"                        <property name=\"visible\">True</property>"
"                        <property name=\"can_focus\">False</property>"
"                        <property name=\"spacing\">3</property>"
"                        <property name=\"homogeneous\">True</property>"
"                        <child>"
"                          <object class=\"GtkHBox\" id=\"hbox_sample_rate\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                            <property name=\"spacing\">9</property>"
"                            <child>"
"                              <object class=\"GtkLabel\" id=\"label_sample_rate\">"
"                                <property name=\"visible\">True</property>"
"                                <property name=\"can_focus\">False</property>"
"                                <property name=\"yalign\">0.49000000953674316</property>"
"                                <property name=\"label\" translatable=\"yes\">Sample Rate</property>"
"                              </object>"
"                              <packing>"
"                                <property name=\"expand\">False</property>"
"                                <property name=\"fill\">False</property>"
"                                <property name=\"position\">0</property>"
"                              </packing>"
"                            </child>"
"                            <child>"
"                              <object class=\"GtkComboBox\" id=\"combobox_sample_rate\">"
"                                <property name=\"visible\">True</property>"
"                                <property name=\"can_focus\">False</property>"
"                              </object>"
"                              <packing>"
"                                <property name=\"expand\">True</property>"
"                                <property name=\"fill\">True</property>"
"                                <property name=\"position\">1</property>"
"                              </packing>"
"                            </child>"
"                          </object>"
"                          <packing>"
"                            <property name=\"expand\">True</property>"
"                            <property name=\"fill\">True</property>"
"                            <property name=\"position\">0</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkHBox\" id=\"hbox_channels\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                            <property name=\"spacing\">29</property>"
"                            <child>"
"                              <object class=\"GtkLabel\" id=\"label_channels\">"
"                                <property name=\"visible\">True</property>"
"                                <property name=\"can_focus\">False</property>"
"                                <property name=\"label\" translatable=\"yes\">Channels</property>"
"                              </object>"
"                              <packing>"
"                                <property name=\"expand\">False</property>"
"                                <property name=\"fill\">False</property>"
"                                <property name=\"position\">0</property>"
"                              </packing>"
"                            </child>"
"                            <child>"
"                              <object class=\"GtkComboBox\" id=\"combobox_channels\">"
"                                <property name=\"visible\">True</property>"
"                                <property name=\"can_focus\">False</property>"
"                              </object>"
"                              <packing>"
"                                <property name=\"expand\">True</property>"
"                                <property name=\"fill\">True</property>"
"                                <property name=\"position\">1</property>"
"                              </packing>"
"                            </child>"
"                          </object>"
"                          <packing>"
"                            <property name=\"expand\">True</property>"
"                            <property name=\"fill\">True</property>"
"                            <property name=\"position\">1</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkHBox\" id=\"hbox_quality\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                            <property name=\"spacing\">40</property>"
"                            <child>"
"                              <object class=\"GtkLabel\" id=\"label_quality\">"
"                                <property name=\"visible\">True</property>"
"                                <property name=\"can_focus\">False</property>"
"                                <property name=\"label\" translatable=\"yes\">Quality</property>"
"                              </object>"
"                              <packing>"
"                                <property name=\"expand\">False</property>"
"                                <property name=\"fill\">False</property>"
"                                <property name=\"position\">0</property>"
"                              </packing>"
"                            </child>"
"                            <child>"
"                              <object class=\"GtkComboBox\" id=\"combobox_quality\">"
"                                <property name=\"visible\">True</property>"
"                                <property name=\"can_focus\">False</property>"
"                              </object>"
"                              <packing>"
"                                <property name=\"expand\">True</property>"
"                                <property name=\"fill\">True</property>"
"                                <property name=\"position\">1</property>"
"                              </packing>"
"                            </child>"
"                          </object>"
"                          <packing>"
"                            <property name=\"expand\">True</property>"
"                            <property name=\"fill\">True</property>"
"                            <property name=\"position\">2</property>"
"                          </packing>"
"                        </child>"
"                      </object>"
"                    </child>"
"                  </object>"
"                </child>"
"                <child type=\"label\">"
"                  <object class=\"GtkLabel\" id=\"label_frame_audio_options\">"
"                    <property name=\"visible\">True</property>"
"                    <property name=\"can_focus\">False</property>"
"                    <property name=\"label\" translatable=\"yes\">&lt;b&gt;Options&lt;/b&gt;</property>"
"                    <property name=\"use_markup\">True</property>"
"                  </object>"
"                </child>"
"              </object>"
"              <packing>"
"                <property name=\"expand\">False</property>"
"                <property name=\"fill\">False</property>"
"                <property name=\"position\">0</property>"
"              </packing>"
"            </child>"
"            <child>"
"              <object class=\"GtkFrame\" id=\"frame_audio_misc\">"
"                <property name=\"visible\">True</property>"
"                <property name=\"can_focus\">False</property>"
"                <property name=\"label_xalign\">0</property>"
"                <property name=\"shadow_type\">etched-out</property>"
"                <child>"
"                  <object class=\"GtkAlignment\" id=\"alignment_audio_misc\">"
"                    <property name=\"visible\">True</property>"
"                    <property name=\"can_focus\">False</property>"
"                    <property name=\"top_padding\">3</property>"
"                    <property name=\"bottom_padding\">3</property>"
"                    <property name=\"left_padding\">3</property>"
"                    <property name=\"right_padding\">3</property>"
"                    <child>"
"                      <object class=\"GtkVBox\" id=\"vbox_audio_misc\">"
"                        <property name=\"visible\">True</property>"
"                        <property name=\"can_focus\">False</property>"
"                        <child>"
"                          <object class=\"GtkCheckButton\" id=\"swap_duty_cycles\">"
"                            <property name=\"label\" translatable=\"yes\">Swap 25% and 50% duty cycles</property>"
"                            <property name=\"use_action_appearance\">False</property>"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"receives_default\">False</property>"
"                            <property name=\"draw_indicator\">True</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"expand\">False</property>"
"                            <property name=\"fill\">False</property>"
"                            <property name=\"position\">0</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkCheckButton\" id=\"enabled_sound\">"
"                            <property name=\"label\" translatable=\"yes\">Enable sound</property>"
"                            <property name=\"use_action_appearance\">False</property>"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"receives_default\">False</property>"
"                            <property name=\"draw_indicator\">True</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"expand\">False</property>"
"                            <property name=\"fill\">False</property>"
"                            <property name=\"position\">1</property>"
"                          </packing>"
"                        </child>"
"                      </object>"
"                    </child>"
"                  </object>"
"                </child>"
"                <child type=\"label\">"
"                  <object class=\"GtkLabel\" id=\"label_frame_audio_misc\">"
"                    <property name=\"visible\">True</property>"
"                    <property name=\"can_focus\">False</property>"
"                    <property name=\"yalign\">0.4699999988079071</property>"
"                    <property name=\"label\" translatable=\"yes\">&lt;b&gt;Misc&lt;/b&gt;</property>"
"                    <property name=\"use_markup\">True</property>"
"                  </object>"
"                </child>"
"              </object>"
"              <packing>"
"                <property name=\"expand\">False</property>"
"                <property name=\"fill\">False</property>"
"                <property name=\"position\">1</property>"
"              </packing>"
"            </child>"
"            <child>"
"              <object class=\"GtkHButtonBox\" id=\"hbuttonbox_audio_configuration\">"
"                <property name=\"visible\">True</property>"
"                <property name=\"can_focus\">False</property>"
"                <property name=\"spacing\">5</property>"
"                <property name=\"layout_style\">end</property>"
"                <child>"
"                  <object class=\"GtkButton\" id=\"button1\">"
"                    <property name=\"label\" translatable=\"yes\">button</property>"
"                    <property name=\"use_action_appearance\">False</property>"
"                    <property name=\"visible\">True</property>"
"                    <property name=\"can_focus\">True</property>"
"                    <property name=\"receives_default\">True</property>"
"                  </object>"
"                  <packing>"
"                    <property name=\"expand\">False</property>"
"                    <property name=\"fill\">False</property>"
"                    <property name=\"position\">0</property>"
"                  </packing>"
"                </child>"
"                <child>"
"                  <object class=\"GtkButton\" id=\"button2\">"
"                    <property name=\"label\" translatable=\"yes\">button</property>"
"                    <property name=\"use_action_appearance\">False</property>"
"                    <property name=\"visible\">True</property>"
"                    <property name=\"can_focus\">True</property>"
"                    <property name=\"receives_default\">True</property>"
"                  </object>"
"                  <packing>"
"                    <property name=\"expand\">False</property>"
"                    <property name=\"fill\">False</property>"
"                    <property name=\"position\">1</property>"
"                  </packing>"
"                </child>"
"              </object>"
"              <packing>"
"                <property name=\"expand\">False</property>"
"                <property name=\"fill\">False</property>"
"                <property name=\"position\">2</property>"
"              </packing>"
"            </child>"
"          </object>"
"        </child>"
"      </object>"
"    </child>"
"  </object>"
"</interface>"
;
