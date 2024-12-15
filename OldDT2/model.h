
/*
This inline function was automatically generated using DecisionTreeToCpp Converter

It takes feature vector as single argument:
feature_vector[0] - Mean
feature_vector[1] - RMS
feature_vector[2] - Kurtosis
feature_vector[3] - Skew
feature_vector[4] - ZeroCross
feature_vector[5] - FundFreq
feature_vector[6] - MFCC1
feature_vector[7] - MFCC2
feature_vector[8] - MFCC3
feature_vector[9] - MFCC4


It returns index of predicted class:
0 - Choro
1 - Aleatório
2 - Silêncio
3 - Quase Choro


Simply include this file to your project and use it
*/

#include <vector>

inline int model(const std::vector<double> & feature_vector) 
{
	if (feature_vector.at(1) <= 0.009737934917211533) {
		if (feature_vector.at(2) <= 29.395349502563477) {
			if (feature_vector.at(8) <= 0.36675500869750977) {
				return 1;
			}
			else {
				if (feature_vector.at(9) <= -2.842134952545166) {
					if (feature_vector.at(5) <= 14.9264497756958) {
						if (feature_vector.at(3) <= 0.08038415014743805) {
							return 2;
						}
						else {
							return 1;
						}
					}
					else {
						if (feature_vector.at(3) <= 1.3313649892807007) {
							if (feature_vector.at(0) <= 5.80078485654667e-05) {
								return 2;
							}
							else {
								if (feature_vector.at(4) <= 1381.5) {
									return 2;
								}
								else {
									return 1;
								}
							}
						}
						else {
							if (feature_vector.at(5) <= 65.94375038146973) {
								return 1;
							}
							else {
								return 2;
							}
						}
					}
				}
				else {
					return 1;
				}
			}
		}
		else {
			if (feature_vector.at(1) <= 0.002713710069656372) {
				return 2;
			}
			else {
				if (feature_vector.at(7) <= -13.947949886322021) {
					if (feature_vector.at(7) <= -17.415599822998047) {
						return 1;
					}
					else {
						return 2;
					}
				}
				else {
					if (feature_vector.at(8) <= 9.86683988571167) {
						return 1;
					}
					else {
						if (feature_vector.at(1) <= 0.00716128502972424) {
							return 1;
						}
						else {
							return 2;
						}
					}
				}
			}
		}
	}
	else {
		if (feature_vector.at(6) <= -40.63590049743652) {
			if (feature_vector.at(9) <= -8.98986005783081) {
				if (feature_vector.at(7) <= -14.50724983215332) {
					if (feature_vector.at(8) <= 8.25021505355835) {
						return 0;
					}
					else {
						if (feature_vector.at(6) <= -73.92115020751953) {
							return 3;
						}
						else {
							return 1;
						}
					}
				}
				else {
					if (feature_vector.at(3) <= 2.3092400431632996) {
						if (feature_vector.at(6) <= -58.484100341796875) {
							if (feature_vector.at(6) <= -59.70210075378418) {
								return 1;
							}
							else {
								return 0;
							}
						}
						else {
							return 1;
						}
					}
					else {
						return 3;
					}
				}
			}
			else {
				if (feature_vector.at(2) <= 9.975929737091064) {
					if (feature_vector.at(7) <= -12.827649593353271) {
						if (feature_vector.at(4) <= 4754.0) {
							if (feature_vector.at(8) <= 10.321000099182129) {
								if (feature_vector.at(9) <= -2.828879952430725) {
									if (feature_vector.at(1) <= 0.02128505054861307) {
										if (feature_vector.at(0) <= -6.560459837601229e-06) {
											return 1;
										}
										else {
											if (feature_vector.at(3) <= -0.05221185088157654) {
												return 2;
											}
											else {
												return 0;
											}
										}
									}
									else {
										if (feature_vector.at(0) <= -0.00013607100117951632) {
											if (feature_vector.at(1) <= 0.04214995168149471) {
												return 1;
											}
											else {
												if (feature_vector.at(0) <= -0.00033771549351513386) {
													if (feature_vector.at(1) <= 0.11116350069642067) {
														return 1;
													}
													else {
														return 0;
													}
												}
												else {
													if (feature_vector.at(4) <= 3469.0) {
														return 0;
													}
													else {
														return 3;
													}
												}
											}
										}
										else {
											if (feature_vector.at(0) <= 0.00033530499786138535) {
												if (feature_vector.at(4) <= 734.5) {
													return 1;
												}
												else {
													if (feature_vector.at(8) <= 7.536954879760742) {
														if (feature_vector.at(8) <= -1.1075549721717834) {
															return 1;
														}
														else {
															if (feature_vector.at(3) <= 1.4718249440193176) {
																if (feature_vector.at(5) <= 197.9550018310547) {
																	if (feature_vector.at(5) <= 191.77149963378906) {
																		if (feature_vector.at(2) <= 0.8696725070476532) {
																			return 2;
																		}
																		else {
																			return 0;
																		}
																	}
																	else {
																		return 1;
																	}
																}
																else {
																	if (feature_vector.at(2) <= -0.8435840010643005) {
																		if (feature_vector.at(5) <= 1792.8599853515625) {
																			return 0;
																		}
																		else {
																			return 1;
																		}
																	}
																	else {
																		if (feature_vector.at(9) <= -4.633390188217163) {
																			if (feature_vector.at(5) <= 343.89649963378906) {
																				if (feature_vector.at(5) <= 336.07000732421875) {
																					return 0;
																				}
																				else {
																					return 2;
																				}
																			}
																			else {
																				if (feature_vector.at(2) <= 7.722470045089722) {
																					return 0;
																				}
																				else {
																					if (feature_vector.at(2) <= 7.819380044937134) {
																						return 1;
																					}
																					else {
																						return 0;
																					}
																				}
																			}
																		}
																		else {
																			if (feature_vector.at(8) <= 1.9254849553108215) {
																				if (feature_vector.at(9) <= -4.587660074234009) {
																					return 0;
																				}
																				else {
																					return 1;
																				}
																			}
																			else {
																				if (feature_vector.at(9) <= -4.624715089797974) {
																					return 1;
																				}
																				else {
																					return 0;
																				}
																			}
																		}
																	}
																}
															}
															else {
																if (feature_vector.at(3) <= 1.6708749532699585) {
																	return 3;
																}
																else {
																	return 0;
																}
															}
														}
													}
													else {
														if (feature_vector.at(2) <= 0.6543225049972534) {
															if (feature_vector.at(1) <= 0.034053350798785686) {
																return 2;
															}
															else {
																return 1;
															}
														}
														else {
															if (feature_vector.at(8) <= 8.06928014755249) {
																if (feature_vector.at(2) <= 4.6539400815963745) {
																	if (feature_vector.at(8) <= 7.606834888458252) {
																		return 3;
																	}
																	else {
																		if (feature_vector.at(5) <= 561.6234893798828) {
																			if (feature_vector.at(0) <= -1.9213759969716193e-05) {
																				return 0;
																			}
																			else {
																				return 1;
																			}
																		}
																		else {
																			return 0;
																		}
																	}
																}
																else {
																	if (feature_vector.at(2) <= 9.664370059967041) {
																		return 1;
																	}
																	else {
																		return 0;
																	}
																}
															}
															else {
																if (feature_vector.at(1) <= 0.1618259996175766) {
																	return 0;
																}
																else {
																	return 3;
																}
															}
														}
													}
												}
											}
											else {
												if (feature_vector.at(0) <= 0.0006175529852043837) {
													return 3;
												}
												else {
													return 0;
												}
											}
										}
									}
								}
								else {
									if (feature_vector.at(7) <= -15.253350257873535) {
										if (feature_vector.at(3) <= -0.062034498900175095) {
											return 0;
										}
										else {
											if (feature_vector.at(2) <= 3.226194977760315) {
												return 1;
											}
											else {
												if (feature_vector.at(8) <= 4.532784938812256) {
													return 1;
												}
												else {
													return 0;
												}
											}
										}
									}
									else {
										if (feature_vector.at(8) <= 7.842659950256348) {
											return 1;
										}
										else {
											return 2;
										}
									}
								}
							}
							else {
								return 1;
							}
						}
						else {
							if (feature_vector.at(8) <= 4.976105213165283) {
								if (feature_vector.at(2) <= -0.6049929857254028) {
									return 3;
								}
								else {
									return 0;
								}
							}
							else {
								if (feature_vector.at(3) <= 0.12301754904910922) {
									return 3;
								}
								else {
									return 0;
								}
							}
						}
					}
					else {
						if (feature_vector.at(0) <= 0.0002453940032864921) {
							if (feature_vector.at(3) <= 0.07863404974341393) {
								if (feature_vector.at(3) <= -0.13510100543498993) {
									if (feature_vector.at(8) <= 4.7386298179626465) {
										if (feature_vector.at(9) <= -6.882609844207764) {
											return 1;
										}
										else {
											return 0;
										}
									}
									else {
										if (feature_vector.at(1) <= 0.020796350203454494) {
											return 2;
										}
										else {
											if (feature_vector.at(4) <= 4441.5) {
												if (feature_vector.at(7) <= -5.222179889678955) {
													if (feature_vector.at(7) <= -12.807450294494629) {
														return 1;
													}
													else {
														if (feature_vector.at(4) <= 1187.0) {
															if (feature_vector.at(8) <= 8.332170009613037) {
																if (feature_vector.at(7) <= -10.540599822998047) {
																	return 2;
																}
																else {
																	return 0;
																}
															}
															else {
																return 1;
															}
														}
														else {
															if (feature_vector.at(7) <= -12.434500217437744) {
																if (feature_vector.at(5) <= 570.6895065307617) {
																	return 3;
																}
																else {
																	return 0;
																}
															}
															else {
																if (feature_vector.at(1) <= 0.02769644930958748) {
																	if (feature_vector.at(9) <= -5.74753999710083) {
																		return 0;
																	}
																	else {
																		return 1;
																	}
																}
																else {
																	if (feature_vector.at(3) <= -0.20816799998283386) {
																		return 0;
																	}
																	else {
																		if (feature_vector.at(3) <= -0.20677249878644943) {
																			return 1;
																		}
																		else {
																			return 0;
																		}
																	}
																}
															}
														}
													}
												}
												else {
													if (feature_vector.at(0) <= -8.705239815753885e-05) {
														return 0;
													}
													else {
														if (feature_vector.at(6) <= -43.988399505615234) {
															return 1;
														}
														else {
															return 3;
														}
													}
												}
											}
											else {
												return 3;
											}
										}
									}
								}
								else {
									if (feature_vector.at(1) <= 0.04546574875712395) {
										if (feature_vector.at(2) <= 1.047724962234497) {
											if (feature_vector.at(7) <= -8.50513505935669) {
												if (feature_vector.at(1) <= 0.02525245025753975) {
													return 2;
												}
												else {
													if (feature_vector.at(2) <= -0.4847944974899292) {
														return 0;
													}
													else {
														if (feature_vector.at(3) <= -0.026800039457157254) {
															return 3;
														}
														else {
															return 1;
														}
													}
												}
											}
											else {
												return 3;
											}
										}
										else {
											if (feature_vector.at(3) <= 0.03836219944059849) {
												if (feature_vector.at(4) <= 3315.0) {
													return 1;
												}
												else {
													if (feature_vector.at(8) <= 6.678809881210327) {
														return 1;
													}
													else {
														return 0;
													}
												}
											}
											else {
												if (feature_vector.at(8) <= 5.087670087814331) {
													return 1;
												}
												else {
													if (feature_vector.at(2) <= 5.963594913482666) {
														if (feature_vector.at(1) <= 0.041668351739645004) {
															return 0;
														}
														else {
															return 3;
														}
													}
													else {
														return 1;
													}
												}
											}
										}
									}
									else {
										if (feature_vector.at(5) <= 2890.9049072265625) {
											if (feature_vector.at(9) <= -6.638154983520508) {
												if (feature_vector.at(1) <= 0.15438999980688095) {
													if (feature_vector.at(7) <= -5.840584993362427) {
														if (feature_vector.at(4) <= 2336.5) {
															if (feature_vector.at(8) <= 5.5229198932647705) {
																return 1;
															}
															else {
																if (feature_vector.at(9) <= -6.861260175704956) {
																	return 0;
																}
																else {
																	if (feature_vector.at(8) <= 6.893795013427734) {
																		return 1;
																	}
																	else {
																		return 0;
																	}
																}
															}
														}
														else {
															if (feature_vector.at(1) <= 0.08746755123138428) {
																return 1;
															}
															else {
																if (feature_vector.at(8) <= 6.9948601722717285) {
																	if (feature_vector.at(8) <= 5.34672999382019) {
																		return 0;
																	}
																	else {
																		return 1;
																	}
																}
																else {
																	return 0;
																}
															}
														}
													}
													else {
														return 1;
													}
												}
												else {
													if (feature_vector.at(3) <= -0.0738336481153965) {
														if (feature_vector.at(4) <= 1466.5) {
															return 1;
														}
														else {
															return 0;
														}
													}
													else {
														if (feature_vector.at(4) <= 2824.0) {
															if (feature_vector.at(2) <= 2.5301400423049927) {
																return 1;
															}
															else {
																if (feature_vector.at(6) <= -51.74810028076172) {
																	return 1;
																}
																else {
																	return 3;
																}
															}
														}
														else {
															if (feature_vector.at(6) <= -51.30484962463379) {
																return 0;
															}
															else {
																return 1;
															}
														}
													}
												}
											}
											else {
												if (feature_vector.at(8) <= 8.869630336761475) {
													if (feature_vector.at(4) <= 802.0) {
														if (feature_vector.at(1) <= 0.0564350001513958) {
															return 2;
														}
														else {
															return 1;
														}
													}
													else {
														if (feature_vector.at(5) <= 1033.7300109863281) {
															if (feature_vector.at(4) <= 1265.5) {
																if (feature_vector.at(7) <= -7.936299800872803) {
																	if (feature_vector.at(1) <= 0.33418750762939453) {
																		if (feature_vector.at(5) <= 748.3884887695312) {
																			return 0;
																		}
																		else {
																			return 1;
																		}
																	}
																	else {
																		return 3;
																	}
																}
																else {
																	return 1;
																}
															}
															else {
																if (feature_vector.at(5) <= 437.4040069580078) {
																	if (feature_vector.at(4) <= 2520.0) {
																		if (feature_vector.at(9) <= -5.432500123977661) {
																			return 3;
																		}
																		else {
																			if (feature_vector.at(3) <= -0.006745500490069389) {
																				return 0;
																			}
																			else {
																				return 3;
																			}
																		}
																	}
																	else {
																		return 1;
																	}
																}
																else {
																	if (feature_vector.at(4) <= 2618.0) {
																		return 0;
																	}
																	else {
																		if (feature_vector.at(4) <= 2667.5) {
																			return 1;
																		}
																		else {
																			if (feature_vector.at(1) <= 0.07838105037808418) {
																				return 1;
																			}
																			else {
																				return 0;
																			}
																		}
																	}
																}
															}
														}
														else {
															if (feature_vector.at(4) <= 2194.5) {
																return 1;
															}
															else {
																if (feature_vector.at(2) <= 6.896805047988892) {
																	if (feature_vector.at(3) <= 0.056519199162721634) {
																		if (feature_vector.at(1) <= 0.05473659932613373) {
																			return 3;
																		}
																		else {
																			if (feature_vector.at(5) <= 1095.2949829101562) {
																				return 1;
																			}
																			else {
																				if (feature_vector.at(4) <= 2569.0) {
																					if (feature_vector.at(2) <= 3.364970088005066) {
																						return 0;
																					}
																					else {
																						return 3;
																					}
																				}
																				else {
																					if (feature_vector.at(6) <= -41.57524871826172) {
																						return 0;
																					}
																					else {
																						if (feature_vector.at(0) <= -8.89810249304901e-06) {
																							return 0;
																						}
																						else {
																							return 1;
																						}
																					}
																				}
																			}
																		}
																	}
																	else {
																		if (feature_vector.at(5) <= 2043.7899780273438) {
																			return 1;
																		}
																		else {
																			return 0;
																		}
																	}
																}
																else {
																	if (feature_vector.at(1) <= 0.13961650058627129) {
																		return 1;
																	}
																	else {
																		return 0;
																	}
																}
															}
														}
													}
												}
												else {
													if (feature_vector.at(5) <= 1087.9570007324219) {
														if (feature_vector.at(5) <= 375.51548767089844) {
															if (feature_vector.at(9) <= -5.668100118637085) {
																return 3;
															}
															else {
																return 1;
															}
														}
														else {
															return 0;
														}
													}
													else {
														return 1;
													}
												}
											}
										}
										else {
											if (feature_vector.at(3) <= -0.04663410037755966) {
												return 0;
											}
											else {
												return 3;
											}
										}
									}
								}
							}
							else {
								if (feature_vector.at(5) <= 391.1474914550781) {
									if (feature_vector.at(1) <= 0.13572350144386292) {
										if (feature_vector.at(6) <= -45.05890083312988) {
											if (feature_vector.at(3) <= 0.10606680065393448) {
												return 2;
											}
											else {
												return 0;
											}
										}
										else {
											if (feature_vector.at(2) <= 0.28045549243688583) {
												if (feature_vector.at(4) <= 957.5) {
													return 3;
												}
												else {
													return 0;
												}
											}
											else {
												return 1;
											}
										}
									}
									else {
										if (feature_vector.at(3) <= 1.4078999757766724) {
											if (feature_vector.at(3) <= 0.44700300693511963) {
												if (feature_vector.at(0) <= -3.3573350265214685e-05) {
													return 0;
												}
												else {
													if (feature_vector.at(8) <= 5.569864988327026) {
														return 0;
													}
													else {
														return 3;
													}
												}
											}
											else {
												if (feature_vector.at(0) <= 0.00016326599870808423) {
													return 3;
												}
												else {
													return 0;
												}
											}
										}
										else {
											return 0;
										}
									}
								}
								else {
									if (feature_vector.at(9) <= -8.031825065612793) {
										if (feature_vector.at(2) <= 3.685124933719635) {
											return 1;
										}
										else {
											if (feature_vector.at(2) <= 7.95722508430481) {
												return 0;
											}
											else {
												return 1;
											}
										}
									}
									else {
										if (feature_vector.at(1) <= 0.27447500824928284) {
											if (feature_vector.at(9) <= -3.6269750595092773) {
												if (feature_vector.at(3) <= 0.7660804986953735) {
													if (feature_vector.at(7) <= -3.650739908218384) {
														if (feature_vector.at(1) <= 0.022389699704945087) {
															return 1;
														}
														else {
															if (feature_vector.at(2) <= -0.6342855095863342) {
																if (feature_vector.at(1) <= 0.10088314861059189) {
																	return 0;
																}
																else {
																	if (feature_vector.at(8) <= 5.216180086135864) {
																		return 3;
																	}
																	else {
																		return 1;
																	}
																}
															}
															else {
																if (feature_vector.at(6) <= -54.78285026550293) {
																	if (feature_vector.at(9) <= -6.2343549728393555) {
																		return 0;
																	}
																	else {
																		return 1;
																	}
																}
																else {
																	if (feature_vector.at(8) <= 3.4332499504089355) {
																		if (feature_vector.at(6) <= -44.48749923706055) {
																			return 1;
																		}
																		else {
																			return 0;
																		}
																	}
																	else {
																		if (feature_vector.at(2) <= 0.32971249520778656) {
																			if (feature_vector.at(0) <= 6.48518507659901e-05) {
																				if (feature_vector.at(2) <= 0.30176450312137604) {
																					return 0;
																				}
																				else {
																					return 3;
																				}
																			}
																			else {
																				return 1;
																			}
																		}
																		else {
																			if (feature_vector.at(3) <= 0.09511354938149452) {
																				if (feature_vector.at(3) <= 0.0929451510310173) {
																					return 0;
																				}
																				else {
																					return 1;
																				}
																			}
																			else {
																				if (feature_vector.at(2) <= 5.436059951782227) {
																					return 0;
																				}
																				else {
																					if (feature_vector.at(2) <= 5.504235029220581) {
																						return 1;
																					}
																					else {
																						return 0;
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
													else {
														return 3;
													}
												}
												else {
													if (feature_vector.at(4) <= 2083.5) {
														if (feature_vector.at(1) <= 0.11901100352406502) {
															return 0;
														}
														else {
															if (feature_vector.at(8) <= 4.540730118751526) {
																return 1;
															}
															else {
																return 3;
															}
														}
													}
													else {
														if (feature_vector.at(2) <= 8.96684980392456) {
															return 0;
														}
														else {
															return 3;
														}
													}
												}
											}
											else {
												if (feature_vector.at(1) <= 0.13017020374536514) {
													if (feature_vector.at(7) <= -11.315950393676758) {
														return 0;
													}
													else {
														return 1;
													}
												}
												else {
													return 0;
												}
											}
										}
										else {
											if (feature_vector.at(5) <= 688.7059936523438) {
												if (feature_vector.at(9) <= -4.226345062255859) {
													return 3;
												}
												else {
													return 0;
												}
											}
											else {
												if (feature_vector.at(8) <= 3.141995072364807) {
													return 1;
												}
												else {
													return 0;
												}
											}
										}
									}
								}
							}
						}
						else {
							if (feature_vector.at(5) <= 705.5859985351562) {
								return 3;
							}
							else {
								if (feature_vector.at(3) <= -0.06763490103185177) {
									return 0;
								}
								else {
									return 1;
								}
							}
						}
					}
				}
				else {
					if (feature_vector.at(7) <= -16.83615016937256) {
						if (feature_vector.at(9) <= -1.2534385025501251) {
							if (feature_vector.at(8) <= 6.046319961547852) {
								return 0;
							}
							else {
								if (feature_vector.at(4) <= 1209.0) {
									return 1;
								}
								else {
									if (feature_vector.at(5) <= 873.1604919433594) {
										return 0;
									}
									else {
										return 1;
									}
								}
							}
						}
						else {
							return 1;
						}
					}
					else {
						if (feature_vector.at(2) <= 36.55459976196289) {
							if (feature_vector.at(3) <= -0.5409190058708191) {
								if (feature_vector.at(2) <= 30.620849609375) {
									if (feature_vector.at(0) <= -0.0005528150068130344) {
										if (feature_vector.at(3) <= -1.040149986743927) {
											return 0;
										}
										else {
											return 1;
										}
									}
									else {
										if (feature_vector.at(3) <= -0.7112340033054352) {
											return 0;
										}
										else {
											if (feature_vector.at(5) <= 409.7794952392578) {
												return 1;
											}
											else {
												if (feature_vector.at(4) <= 2769.5) {
													return 0;
												}
												else {
													return 1;
												}
											}
										}
									}
								}
								else {
									return 1;
								}
							}
							else {
								if (feature_vector.at(3) <= 0.9321814775466919) {
									if (feature_vector.at(7) <= -14.58299970626831) {
										if (feature_vector.at(9) <= -4.491270065307617) {
											if (feature_vector.at(5) <= 169.0405044555664) {
												if (feature_vector.at(5) <= 132.44050216674805) {
													return 1;
												}
												else {
													return 3;
												}
											}
											else {
												if (feature_vector.at(8) <= 8.965890169143677) {
													return 0;
												}
												else {
													return 1;
												}
											}
										}
										else {
											return 1;
										}
									}
									else {
										if (feature_vector.at(8) <= 7.731840133666992) {
											if (feature_vector.at(1) <= 0.04591725021600723) {
												if (feature_vector.at(6) <= -41.581600189208984) {
													return 1;
												}
												else {
													if (feature_vector.at(1) <= 0.028860350139439106) {
														return 1;
													}
													else {
														if (feature_vector.at(7) <= -4.737190127372742) {
															return 0;
														}
														else {
															return 1;
														}
													}
												}
											}
											else {
												if (feature_vector.at(7) <= -8.298569679260254) {
													if (feature_vector.at(7) <= -13.869500160217285) {
														if (feature_vector.at(1) <= 0.098175298422575) {
															return 0;
														}
														else {
															return 1;
														}
													}
													else {
														if (feature_vector.at(5) <= 505.94200134277344) {
															if (feature_vector.at(4) <= 1831.0) {
																return 1;
															}
															else {
																return 3;
															}
														}
														else {
															if (feature_vector.at(6) <= -49.51915168762207) {
																if (feature_vector.at(8) <= 6.410430192947388) {
																	return 1;
																}
																else {
																	return 0;
																}
															}
															else {
																return 1;
															}
														}
													}
												}
												else {
													if (feature_vector.at(6) <= -45.64265060424805) {
														if (feature_vector.at(7) <= -7.843779802322388) {
															return 0;
														}
														else {
															return 1;
														}
													}
													else {
														if (feature_vector.at(4) <= 1600.5) {
															if (feature_vector.at(9) <= -6.568340063095093) {
																return 0;
															}
															else {
																return 1;
															}
														}
														else {
															if (feature_vector.at(5) <= 2753.699951171875) {
																return 0;
															}
															else {
																return 1;
															}
														}
													}
												}
											}
										}
										else {
											if (feature_vector.at(3) <= 0.12442300096154213) {
												if (feature_vector.at(3) <= -0.04800134897232056) {
													if (feature_vector.at(2) <= 15.816199779510498) {
														if (feature_vector.at(7) <= -4.26714015007019) {
															return 0;
														}
														else {
															return 1;
														}
													}
													else {
														if (feature_vector.at(8) <= 8.756014823913574) {
															return 1;
														}
														else {
															if (feature_vector.at(7) <= -11.699950218200684) {
																if (feature_vector.at(0) <= 1.4331560123537201e-05) {
																	return 1;
																}
																else {
																	return 3;
																}
															}
															else {
																return 0;
															}
														}
													}
												}
												else {
													return 1;
												}
											}
											else {
												if (feature_vector.at(5) <= 1340.4099731445312) {
													if (feature_vector.at(7) <= -7.033560037612915) {
														if (feature_vector.at(4) <= 1000.5) {
															return 3;
														}
														else {
															return 0;
														}
													}
													else {
														if (feature_vector.at(6) <= -44.106550216674805) {
															return 1;
														}
														else {
															return 0;
														}
													}
												}
												else {
													if (feature_vector.at(0) <= -1.1975279903708724e-05) {
														return 1;
													}
													else {
														return 3;
													}
												}
											}
										}
									}
								}
								else {
									if (feature_vector.at(7) <= -9.031744956970215) {
										if (feature_vector.at(5) <= 433.6754913330078) {
											return 3;
										}
										else {
											if (feature_vector.at(5) <= 954.2579956054688) {
												if (feature_vector.at(0) <= -7.07101989974035e-05) {
													return 1;
												}
												else {
													return 0;
												}
											}
											else {
												return 3;
											}
										}
									}
									else {
										return 0;
									}
								}
							}
						}
						else {
							if (feature_vector.at(3) <= 2.3803600072860718) {
								if (feature_vector.at(5) <= 1023.6099853515625) {
									if (feature_vector.at(4) <= 1784.0) {
										if (feature_vector.at(8) <= 9.428879737854004) {
											return 1;
										}
										else {
											if (feature_vector.at(4) <= 1239.5) {
												return 2;
											}
											else {
												return 1;
											}
										}
									}
									else {
										if (feature_vector.at(3) <= 0.2845645099878311) {
											if (feature_vector.at(4) <= 2024.0) {
												if (feature_vector.at(1) <= 0.03718410059809685) {
													return 0;
												}
												else {
													return 1;
												}
											}
											else {
												return 1;
											}
										}
										else {
											if (feature_vector.at(1) <= 0.02516300044953823) {
												if (feature_vector.at(0) <= -3.913904993169126e-05) {
													return 3;
												}
												else {
													return 1;
												}
											}
											else {
												return 0;
											}
										}
									}
								}
								else {
									return 1;
								}
							}
							else {
								if (feature_vector.at(1) <= 0.047585850581526756) {
									if (feature_vector.at(0) <= -4.236350014252821e-05) {
										return 0;
									}
									else {
										return 1;
									}
								}
								else {
									return 3;
								}
							}
						}
					}
				}
			}
		}
		else {
			if (feature_vector.at(5) <= 121.91400146484375) {
				if (feature_vector.at(8) <= 5.110640048980713) {
					if (feature_vector.at(7) <= -17.26074981689453) {
						if (feature_vector.at(5) <= 83.80749893188477) {
							return 1;
						}
						else {
							return 0;
						}
					}
					else {
						if (feature_vector.at(1) <= 0.011647299863398075) {
							if (feature_vector.at(4) <= 776.0) {
								return 2;
							}
							else {
								return 1;
							}
						}
						else {
							if (feature_vector.at(8) <= 3.948994994163513) {
								if (feature_vector.at(9) <= -8.067430019378662) {
									if (feature_vector.at(5) <= 13.214200019836426) {
										return 2;
									}
									else {
										return 1;
									}
								}
								else {
									if (feature_vector.at(9) <= -1.5324249863624573) {
										return 1;
									}
									else {
										if (feature_vector.at(9) <= -1.5296800136566162) {
											return 2;
										}
										else {
											return 1;
										}
									}
								}
							}
							else {
								if (feature_vector.at(8) <= 3.967039942741394) {
									return 0;
								}
								else {
									if (feature_vector.at(1) <= 0.2089420035481453) {
										if (feature_vector.at(4) <= 321.5) {
											if (feature_vector.at(5) <= 38.02224946022034) {
												return 1;
											}
											else {
												return 2;
											}
										}
										else {
											return 1;
										}
									}
									else {
										if (feature_vector.at(4) <= 1557.0) {
											return 1;
										}
										else {
											return 3;
										}
									}
								}
							}
						}
					}
				}
				else {
					if (feature_vector.at(5) <= 56.67449951171875) {
						return 1;
					}
					else {
						if (feature_vector.at(3) <= 0.7105834782123566) {
							if (feature_vector.at(1) <= 0.030916349962353706) {
								if (feature_vector.at(9) <= -4.371704936027527) {
									return 2;
								}
								else {
									return 1;
								}
							}
							else {
								if (feature_vector.at(0) <= -0.00011915549839613959) {
									return 1;
								}
								else {
									return 0;
								}
							}
						}
						else {
							if (feature_vector.at(5) <= 91.12650299072266) {
								return 0;
							}
							else {
								return 3;
							}
						}
					}
				}
			}
			else {
				if (feature_vector.at(5) <= 708.2420043945312) {
					if (feature_vector.at(1) <= 0.09226380288600922) {
						if (feature_vector.at(8) <= 4.033895015716553) {
							if (feature_vector.at(7) <= -17.97219944000244) {
								return 0;
							}
							else {
								if (feature_vector.at(9) <= -5.949855089187622) {
									if (feature_vector.at(3) <= 0.24887199699878693) {
										if (feature_vector.at(1) <= 0.08715135231614113) {
											if (feature_vector.at(4) <= 3132.5) {
												if (feature_vector.at(5) <= 433.01300048828125) {
													return 1;
												}
												else {
													if (feature_vector.at(5) <= 487.53550720214844) {
														return 0;
													}
													else {
														return 1;
													}
												}
											}
											else {
												return 3;
											}
										}
										else {
											if (feature_vector.at(5) <= 313.8164978027344) {
												return 1;
											}
											else {
												return 0;
											}
										}
									}
									else {
										if (feature_vector.at(3) <= 0.9637829959392548) {
											return 0;
										}
										else {
											return 1;
										}
									}
								}
								else {
									if (feature_vector.at(8) <= 3.59867000579834) {
										return 1;
									}
									else {
										if (feature_vector.at(6) <= -37.7239990234375) {
											return 0;
										}
										else {
											if (feature_vector.at(8) <= 3.6285300254821777) {
												return 3;
											}
											else {
												return 1;
											}
										}
									}
								}
							}
						}
						else {
							if (feature_vector.at(2) <= 4.840564966201782) {
								if (feature_vector.at(1) <= 0.02733399998396635) {
									if (feature_vector.at(4) <= 535.0) {
										return 2;
									}
									else {
										if (feature_vector.at(0) <= 6.304585076577496e-05) {
											return 1;
										}
										else {
											return 2;
										}
									}
								}
								else {
									if (feature_vector.at(8) <= 4.90465521812439) {
										if (feature_vector.at(4) <= 2003.5) {
											if (feature_vector.at(5) <= 204.88800048828125) {
												return 1;
											}
											else {
												return 0;
											}
										}
										else {
											if (feature_vector.at(2) <= 0.5111899971961975) {
												return 3;
											}
											else {
												if (feature_vector.at(8) <= 4.274334907531738) {
													return 0;
												}
												else {
													return 1;
												}
											}
										}
									}
									else {
										if (feature_vector.at(0) <= -0.0006503055046778172) {
											return 0;
										}
										else {
											if (feature_vector.at(7) <= -10.350279808044434) {
												if (feature_vector.at(3) <= -0.06983279995620251) {
													return 1;
												}
												else {
													return 0;
												}
											}
											else {
												if (feature_vector.at(9) <= -5.408725023269653) {
													if (feature_vector.at(6) <= -34.888349533081055) {
														if (feature_vector.at(2) <= 3.9642900228500366) {
															if (feature_vector.at(6) <= -40.41419982910156) {
																if (feature_vector.at(4) <= 2658.5) {
																	return 1;
																}
																else {
																	return 3;
																}
															}
															else {
																if (feature_vector.at(0) <= 0.0002800590009428561) {
																	if (feature_vector.at(6) <= -35.522850036621094) {
																		if (feature_vector.at(6) <= -39.804500579833984) {
																			if (feature_vector.at(0) <= -2.5485400328761898e-05) {
																				return 3;
																			}
																			else {
																				return 1;
																			}
																		}
																		else {
																			return 3;
																		}
																	}
																	else {
																		if (feature_vector.at(2) <= 2.203469932079315) {
																			return 0;
																		}
																		else {
																			return 3;
																		}
																	}
																}
																else {
																	return 0;
																}
															}
														}
														else {
															if (feature_vector.at(4) <= 1815.0) {
																return 3;
															}
															else {
																return 1;
															}
														}
													}
													else {
														if (feature_vector.at(5) <= 286.2220001220703) {
															return 1;
														}
														else {
															if (feature_vector.at(3) <= 0.2721886932849884) {
																if (feature_vector.at(8) <= 5.682265043258667) {
																	return 0;
																}
																else {
																	if (feature_vector.at(3) <= -0.032061001285910606) {
																		return 1;
																	}
																	else {
																		if (feature_vector.at(0) <= -5.678864044966758e-05) {
																			return 0;
																		}
																		else {
																			return 3;
																		}
																	}
																}
															}
															else {
																return 3;
															}
														}
													}
												}
												else {
													if (feature_vector.at(5) <= 657.3305053710938) {
														if (feature_vector.at(1) <= 0.03833870030939579) {
															if (feature_vector.at(0) <= 0.0013797939609503374) {
																return 0;
															}
															else {
																return 3;
															}
														}
														else {
															if (feature_vector.at(9) <= -3.473780035972595) {
																if (feature_vector.at(8) <= 7.83373498916626) {
																	return 3;
																}
																else {
																	if (feature_vector.at(8) <= 7.903334856033325) {
																		return 0;
																	}
																	else {
																		return 3;
																	}
																}
															}
															else {
																if (feature_vector.at(5) <= 188.35699462890625) {
																	return 3;
																}
																else {
																	return 1;
																}
															}
														}
													}
													else {
														if (feature_vector.at(9) <= -4.043475031852722) {
															return 0;
														}
														else {
															return 1;
														}
													}
												}
											}
										}
									}
								}
							}
							else {
								if (feature_vector.at(2) <= 29.567500114440918) {
									if (feature_vector.at(8) <= 4.759130001068115) {
										if (feature_vector.at(0) <= -4.30764484917745e-05) {
											return 0;
										}
										else {
											if (feature_vector.at(7) <= -5.892910003662109) {
												return 1;
											}
											else {
												if (feature_vector.at(5) <= 345.5559997558594) {
													return 1;
												}
												else {
													return 0;
												}
											}
										}
									}
									else {
										if (feature_vector.at(0) <= 0.0004196195077383891) {
											if (feature_vector.at(1) <= 0.06436510011553764) {
												if (feature_vector.at(9) <= -7.085385084152222) {
													if (feature_vector.at(9) <= -7.587224960327148) {
														return 1;
													}
													else {
														return 0;
													}
												}
												else {
													if (feature_vector.at(3) <= 1.986384928226471) {
														return 1;
													}
													else {
														return 0;
													}
												}
											}
											else {
												if (feature_vector.at(9) <= -6.513540029525757) {
													if (feature_vector.at(6) <= -39.07175064086914) {
														return 3;
													}
													else {
														return 1;
													}
												}
												else {
													if (feature_vector.at(0) <= 1.6199996935029048e-06) {
														if (feature_vector.at(3) <= 0.5842884927988052) {
															if (feature_vector.at(7) <= -4.148800015449524) {
																return 0;
															}
															else {
																return 3;
															}
														}
														else {
															return 1;
														}
													}
													else {
														if (feature_vector.at(7) <= -4.335795044898987) {
															return 1;
														}
														else {
															return 3;
														}
													}
												}
											}
										}
										else {
											if (feature_vector.at(7) <= -2.461150050163269) {
												return 3;
											}
											else {
												return 1;
											}
										}
									}
								}
								else {
									return 1;
								}
							}
						}
					}
					else {
						if (feature_vector.at(8) <= 2.564954996109009) {
							if (feature_vector.at(6) <= -35.63279914855957) {
								if (feature_vector.at(0) <= -0.00011795449972851202) {
									if (feature_vector.at(6) <= -37.156450271606445) {
										return 3;
									}
									else {
										return 1;
									}
								}
								else {
									if (feature_vector.at(2) <= 5.082634925842285) {
										return 0;
									}
									else {
										return 1;
									}
								}
							}
							else {
								if (feature_vector.at(8) <= 0.9189579784870148) {
									return 1;
								}
								else {
									if (feature_vector.at(2) <= 4.460654973983765) {
										if (feature_vector.at(3) <= 0.2779190093278885) {
											if (feature_vector.at(3) <= 0.0133414501324296) {
												if (feature_vector.at(5) <= 464.2135009765625) {
													if (feature_vector.at(8) <= 1.4917050004005432) {
														return 1;
													}
													else {
														return 3;
													}
												}
												else {
													return 1;
												}
											}
											else {
												if (feature_vector.at(9) <= -6.1170148849487305) {
													return 3;
												}
												else {
													return 1;
												}
											}
										}
										else {
											return 3;
										}
									}
									else {
										return 1;
									}
								}
							}
						}
						else {
							if (feature_vector.at(3) <= -0.12678249925374985) {
								if (feature_vector.at(9) <= -4.968629837036133) {
									if (feature_vector.at(6) <= -36.45000076293945) {
										if (feature_vector.at(3) <= -0.7048259973526001) {
											if (feature_vector.at(2) <= 1.1551249623298645) {
												return 3;
											}
											else {
												return 0;
											}
										}
										else {
											return 3;
										}
									}
									else {
										if (feature_vector.at(2) <= 4.9611499309539795) {
											if (feature_vector.at(5) <= 318.63299560546875) {
												return 3;
											}
											else {
												if (feature_vector.at(2) <= 0.8316750228404999) {
													if (feature_vector.at(7) <= -5.0746400356292725) {
														return 0;
													}
													else {
														if (feature_vector.at(4) <= 1891.0) {
															if (feature_vector.at(9) <= -5.165985107421875) {
																if (feature_vector.at(7) <= -2.9435900449752808) {
																	return 3;
																}
																else {
																	return 1;
																}
															}
															else {
																return 0;
															}
														}
														else {
															if (feature_vector.at(2) <= -0.01921984925866127) {
																return 1;
															}
															else {
																return 0;
															}
														}
													}
												}
												else {
													if (feature_vector.at(1) <= 0.15683899819850922) {
														return 0;
													}
													else {
														return 3;
													}
												}
											}
										}
										else {
											if (feature_vector.at(7) <= -2.3905100226402283) {
												if (feature_vector.at(9) <= -9.23122501373291) {
													return 3;
												}
												else {
													if (feature_vector.at(5) <= 317.4080047607422) {
														if (feature_vector.at(2) <= 9.611844778060913) {
															return 3;
														}
														else {
															if (feature_vector.at(7) <= -4.675450086593628) {
																return 0;
															}
															else {
																return 1;
															}
														}
													}
													else {
														return 1;
													}
												}
											}
											else {
												return 0;
											}
										}
									}
								}
								else {
									if (feature_vector.at(6) <= -37.473249435424805) {
										return 0;
									}
									else {
										if (feature_vector.at(4) <= 1679.5) {
											if (feature_vector.at(9) <= -4.043555021286011) {
												if (feature_vector.at(6) <= -34.46624946594238) {
													if (feature_vector.at(9) <= -4.623465061187744) {
														return 3;
													}
													else {
														return 1;
													}
												}
												else {
													return 0;
												}
											}
											else {
												return 1;
											}
										}
										else {
											if (feature_vector.at(6) <= -27.352550506591797) {
												if (feature_vector.at(1) <= 0.13593050092458725) {
													if (feature_vector.at(9) <= -3.903095006942749) {
														if (feature_vector.at(0) <= 0.00010975594705087133) {
															return 1;
														}
														else {
															return 0;
														}
													}
													else {
														return 0;
													}
												}
												else {
													if (feature_vector.at(6) <= -35.43899917602539) {
														return 3;
													}
													else {
														return 0;
													}
												}
											}
											else {
												return 3;
											}
										}
									}
								}
							}
							else {
								if (feature_vector.at(2) <= 7.298874855041504) {
									if (feature_vector.at(4) <= 421.5) {
										return 1;
									}
									else {
										if (feature_vector.at(4) <= 2504.0) {
											if (feature_vector.at(9) <= -6.913174867630005) {
												if (feature_vector.at(6) <= -34.4776496887207) {
													if (feature_vector.at(7) <= -2.5704751014709473) {
														if (feature_vector.at(9) <= -9.001180171966553) {
															return 1;
														}
														else {
															if (feature_vector.at(5) <= 696.3429870605469) {
																if (feature_vector.at(2) <= 5.408629894256592) {
																	if (feature_vector.at(0) <= -0.0002842694957507774) {
																		if (feature_vector.at(7) <= -4.943340063095093) {
																			return 3;
																		}
																		else {
																			return 1;
																		}
																	}
																	else {
																		return 3;
																	}
																}
																else {
																	if (feature_vector.at(2) <= 6.314265012741089) {
																		return 1;
																	}
																	else {
																		return 3;
																	}
																}
															}
															else {
																return 1;
															}
														}
													}
													else {
														return 1;
													}
												}
												else {
													if (feature_vector.at(4) <= 1874.5) {
														if (feature_vector.at(1) <= 0.1448104977607727) {
															if (feature_vector.at(6) <= -33.47649955749512) {
																return 0;
															}
															else {
																return 1;
															}
														}
														else {
															if (feature_vector.at(9) <= -7.712630033493042) {
																return 0;
															}
															else {
																return 3;
															}
														}
													}
													else {
														return 1;
													}
												}
											}
											else {
												if (feature_vector.at(7) <= -15.163049697875977) {
													return 0;
												}
												else {
													if (feature_vector.at(0) <= 7.804454799043015e-05) {
														if (feature_vector.at(6) <= -33.778499603271484) {
															if (feature_vector.at(1) <= 0.15448950231075287) {
																if (feature_vector.at(5) <= 395.7985076904297) {
																	if (feature_vector.at(8) <= 7.826690196990967) {
																		if (feature_vector.at(1) <= 0.15393750369548798) {
																			if (feature_vector.at(4) <= 850.5) {
																				return 1;
																			}
																			else {
																				if (feature_vector.at(8) <= 3.983894944190979) {
																					if (feature_vector.at(3) <= 0.007858599768951535) {
																						return 3;
																					}
																					else {
																						return 1;
																					}
																				}
																				else {
																					return 3;
																				}
																			}
																		}
																		else {
																			return 0;
																		}
																	}
																	else {
																		return 1;
																	}
																}
																else {
																	if (feature_vector.at(2) <= 0.36278950423002243) {
																		if (feature_vector.at(7) <= -5.038490056991577) {
																			return 3;
																		}
																		else {
																			if (feature_vector.at(1) <= 0.1047545000910759) {
																				return 3;
																			}
																			else {
																				return 0;
																			}
																		}
																	}
																	else {
																		if (feature_vector.at(2) <= 1.8091700077056885) {
																			return 0;
																		}
																		else {
																			if (feature_vector.at(9) <= -5.099344968795776) {
																				if (feature_vector.at(6) <= -36.497798919677734) {
																					return 3;
																				}
																				else {
																					return 1;
																				}
																			}
																			else {
																				return 0;
																			}
																		}
																	}
																}
															}
															else {
																if (feature_vector.at(0) <= -0.0026996000669896603) {
																	return 0;
																}
																else {
																	if (feature_vector.at(5) <= 667.9434814453125) {
																		if (feature_vector.at(9) <= -4.189805030822754) {
																			if (feature_vector.at(2) <= 6.7535200119018555) {
																				if (feature_vector.at(7) <= -2.3323349952697754) {
																					if (feature_vector.at(4) <= 2395.5) {
																						if (feature_vector.at(0) <= -0.001580780022777617) {
																							if (feature_vector.at(5) <= 583.5289916992188) {
																								return 3;
																							}
																							else {
																								return 0;
																							}
																						}
																						else {
																							if (feature_vector.at(2) <= 4.043254971504211) {
																								if (feature_vector.at(7) <= -4.024845004081726) {
																									return 3;
																								}
																								else {
																									if (feature_vector.at(7) <= -3.974769949913025) {
																										return 0;
																									}
																									else {
																										return 3;
																									}
																								}
																							}
																							else {
																								if (feature_vector.at(2) <= 4.382775068283081) {
																									return 0;
																								}
																								else {
																									return 3;
																								}
																							}
																						}
																					}
																					else {
																						if (feature_vector.at(4) <= 2433.0) {
																							return 0;
																						}
																						else {
																							return 3;
																						}
																					}
																				}
																				else {
																					if (feature_vector.at(5) <= 436.8459930419922) {
																						return 3;
																					}
																					else {
																						return 0;
																					}
																				}
																			}
																			else {
																				return 0;
																			}
																		}
																		else {
																			if (feature_vector.at(3) <= 0.20612400025129318) {
																				if (feature_vector.at(4) <= 1009.0) {
																					return 3;
																				}
																				else {
																					if (feature_vector.at(1) <= 0.20037700235843658) {
																						return 1;
																					}
																					else {
																						return 0;
																					}
																				}
																			}
																			else {
																				if (feature_vector.at(4) <= 2016.5) {
																					if (feature_vector.at(9) <= -4.069565057754517) {
																						if (feature_vector.at(9) <= -4.0818750858306885) {
																							return 3;
																						}
																						else {
																							return 0;
																						}
																					}
																					else {
																						return 3;
																					}
																				}
																				else {
																					return 0;
																				}
																			}
																		}
																	}
																	else {
																		if (feature_vector.at(2) <= 0.06682334840297699) {
																			return 3;
																		}
																		else {
																			if (feature_vector.at(5) <= 692.4755249023438) {
																				if (feature_vector.at(1) <= 0.19003450125455856) {
																					return 3;
																				}
																				else {
																					return 0;
																				}
																			}
																			else {
																				return 1;
																			}
																		}
																	}
																}
															}
														}
														else {
															if (feature_vector.at(9) <= -6.224179983139038) {
																if (feature_vector.at(2) <= 0.2989855036139488) {
																	if (feature_vector.at(2) <= -0.5578349977731705) {
																		return 0;
																	}
																	else {
																		return 3;
																	}
																}
																else {
																	if (feature_vector.at(6) <= -31.962050437927246) {
																		return 0;
																	}
																	else {
																		if (feature_vector.at(9) <= -6.496469974517822) {
																			return 3;
																		}
																		else {
																			return 1;
																		}
																	}
																}
															}
															else {
																if (feature_vector.at(9) <= -1.396939992904663) {
																	if (feature_vector.at(7) <= -1.933394968509674) {
																		if (feature_vector.at(9) <= -2.1534600257873535) {
																			if (feature_vector.at(7) <= -5.253875017166138) {
																				if (feature_vector.at(7) <= -9.15114974975586) {
																					if (feature_vector.at(7) <= -9.171649932861328) {
																						return 3;
																					}
																					else {
																						return 0;
																					}
																				}
																				else {
																					return 3;
																				}
																			}
																			else {
																				if (feature_vector.at(7) <= -5.240535020828247) {
																					return 0;
																				}
																				else {
																					if (feature_vector.at(4) <= 2029.0) {
																						if (feature_vector.at(8) <= 3.0991050004959106) {
																							if (feature_vector.at(3) <= -0.011872120085172355) {
																								return 1;
																							}
																							else {
																								return 3;
																							}
																						}
																						else {
																							if (feature_vector.at(2) <= 0.7639060020446777) {
																								return 3;
																							}
																							else {
																								if (feature_vector.at(3) <= 0.383137509226799) {
																									if (feature_vector.at(8) <= 4.763749837875366) {
																										return 0;
																									}
																									else {
																										if (feature_vector.at(2) <= 2.732564926147461) {
																											return 3;
																										}
																										else {
																											return 1;
																										}
																									}
																								}
																								else {
																									return 3;
																								}
																							}
																						}
																					}
																					else {
																						if (feature_vector.at(1) <= 0.19349650293588638) {
																							return 3;
																						}
																						else {
																							if (feature_vector.at(0) <= -0.0005042569318902679) {
																								return 0;
																							}
																							else {
																								if (feature_vector.at(7) <= -4.369729995727539) {
																									return 1;
																								}
																								else {
																									return 3;
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																		else {
																			if (feature_vector.at(7) <= -8.99905014038086) {
																				if (feature_vector.at(2) <= 0.7330384850502014) {
																					return 1;
																				}
																				else {
																					return 3;
																				}
																			}
																			else {
																				if (feature_vector.at(9) <= -2.101164937019348) {
																					return 0;
																				}
																				else {
																					return 3;
																				}
																			}
																		}
																	}
																	else {
																		if (feature_vector.at(3) <= 0.20063749700784683) {
																			if (feature_vector.at(0) <= -0.0024116100394167006) {
																				return 3;
																			}
																			else {
																				return 0;
																			}
																		}
																		else {
																			return 3;
																		}
																	}
																}
																else {
																	if (feature_vector.at(3) <= 0.2845270037651062) {
																		if (feature_vector.at(1) <= 0.34825749695301056) {
																			return 1;
																		}
																		else {
																			return 3;
																		}
																	}
																	else {
																		return 3;
																	}
																}
															}
														}
													}
													else {
														if (feature_vector.at(7) <= 2.1381900012493134) {
															if (feature_vector.at(4) <= 2126.5) {
																if (feature_vector.at(1) <= 0.1357635036110878) {
																	if (feature_vector.at(7) <= -6.763804912567139) {
																		if (feature_vector.at(6) <= -32.608150482177734) {
																			return 1;
																		}
																		else {
																			return 3;
																		}
																	}
																	else {
																		if (feature_vector.at(8) <= 3.552419900894165) {
																			if (feature_vector.at(8) <= 3.4095349311828613) {
																				return 3;
																			}
																			else {
																				return 0;
																			}
																		}
																		else {
																			return 3;
																		}
																	}
																}
																else {
																	if (feature_vector.at(8) <= 3.4571950435638428) {
																		if (feature_vector.at(8) <= 3.4533400535583496) {
																			return 3;
																		}
																		else {
																			return 1;
																		}
																	}
																	else {
																		return 3;
																	}
																}
															}
															else {
																if (feature_vector.at(7) <= -4.026679992675781) {
																	return 3;
																}
																else {
																	return 0;
																}
															}
														}
														else {
															return 1;
														}
													}
												}
											}
										}
										else {
											if (feature_vector.at(5) <= 322.12950134277344) {
												if (feature_vector.at(4) <= 3760.5) {
													if (feature_vector.at(8) <= 3.0908650159835815) {
														return 1;
													}
													else {
														if (feature_vector.at(2) <= 5.088345050811768) {
															if (feature_vector.at(2) <= 0.8023309707641602) {
																return 3;
															}
															else {
																if (feature_vector.at(1) <= 0.13281649351119995) {
																	return 1;
																}
																else {
																	return 3;
																}
															}
														}
														else {
															if (feature_vector.at(8) <= 5.440609931945801) {
																return 0;
															}
															else {
																return 3;
															}
														}
													}
												}
												else {
													return 0;
												}
											}
											else {
												if (feature_vector.at(6) <= -36.45199966430664) {
													if (feature_vector.at(1) <= 0.23261850327253342) {
														if (feature_vector.at(4) <= 3862.0) {
															if (feature_vector.at(7) <= -3.9279550313949585) {
																return 3;
															}
															else {
																return 1;
															}
														}
														else {
															return 1;
														}
													}
													else {
														return 0;
													}
												}
												else {
													if (feature_vector.at(3) <= 0.3785630017518997) {
														if (feature_vector.at(0) <= -0.0005949635014985688) {
															if (feature_vector.at(7) <= -5.398484945297241) {
																return 3;
															}
															else {
																return 0;
															}
														}
														else {
															if (feature_vector.at(9) <= -7.225339889526367) {
																if (feature_vector.at(7) <= -4.57699990272522) {
																	if (feature_vector.at(0) <= -7.711894977546763e-05) {
																		return 3;
																	}
																	else {
																		return 0;
																	}
																}
																else {
																	return 1;
																}
															}
															else {
																return 1;
															}
														}
													}
													else {
														return 0;
													}
												}
											}
										}
									}
								}
								else {
									if (feature_vector.at(3) <= 0.6949435174465179) {
										if (feature_vector.at(5) <= 351.25450134277344) {
											if (feature_vector.at(3) <= -0.06403740122914314) {
												return 0;
											}
											else {
												if (feature_vector.at(0) <= 0.0011344454833306372) {
													if (feature_vector.at(8) <= 7.722679853439331) {
														return 1;
													}
													else {
														if (feature_vector.at(1) <= 0.10058034956455231) {
															return 3;
														}
														else {
															return 1;
														}
													}
												}
												else {
													return 3;
												}
											}
										}
										else {
											if (feature_vector.at(6) <= -31.8735990524292) {
												if (feature_vector.at(4) <= 1530.0) {
													if (feature_vector.at(7) <= -4.997759819030762) {
														return 1;
													}
													else {
														return 0;
													}
												}
												else {
													if (feature_vector.at(0) <= 0.0004066359979333356) {
														return 0;
													}
													else {
														return 3;
													}
												}
											}
											else {
												return 1;
											}
										}
									}
									else {
										if (feature_vector.at(7) <= -5.499079942703247) {
											if (feature_vector.at(2) <= 36.49654960632324) {
												if (feature_vector.at(3) <= 1.187815010547638) {
													if (feature_vector.at(2) <= 10.686069965362549) {
														return 3;
													}
													else {
														return 0;
													}
												}
												else {
													return 3;
												}
											}
											else {
												return 1;
											}
										}
										else {
											if (feature_vector.at(5) <= 361.9339904785156) {
												return 1;
											}
											else {
												return 0;
											}
										}
									}
								}
							}
						}
					}
				}
				else {
					if (feature_vector.at(2) <= 9.512414932250977) {
						if (feature_vector.at(0) <= -0.000366367501555942) {
							if (feature_vector.at(8) <= 3.57419490814209) {
								if (feature_vector.at(7) <= -8.94901967048645) {
									return 3;
								}
								else {
									return 1;
								}
							}
							else {
								if (feature_vector.at(4) <= 1543.5) {
									if (feature_vector.at(3) <= 0.14561809971928596) {
										if (feature_vector.at(1) <= 0.06730809807777405) {
											return 1;
										}
										else {
											return 0;
										}
									}
									else {
										return 3;
									}
								}
								else {
									if (feature_vector.at(7) <= -7.9791200160980225) {
										if (feature_vector.at(4) <= 2619.0) {
											if (feature_vector.at(7) <= -8.465789794921875) {
												return 0;
											}
											else {
												return 1;
											}
										}
										else {
											return 3;
										}
									}
									else {
										if (feature_vector.at(1) <= 0.06277689896523952) {
											return 1;
										}
										else {
											if (feature_vector.at(6) <= -24.20075035095215) {
												if (feature_vector.at(2) <= 5.260805130004883) {
													return 0;
												}
												else {
													if (feature_vector.at(1) <= 0.18000350147485733) {
														return 0;
													}
													else {
														return 1;
													}
												}
											}
											else {
												return 3;
											}
										}
									}
								}
							}
						}
						else {
							if (feature_vector.at(2) <= 0.46915800869464874) {
								if (feature_vector.at(5) <= 2071.8399658203125) {
									if (feature_vector.at(3) <= 0.34283100068569183) {
										if (feature_vector.at(1) <= 0.23277299851179123) {
											if (feature_vector.at(8) <= 4.050834894180298) {
												if (feature_vector.at(1) <= 0.20919549465179443) {
													if (feature_vector.at(8) <= 3.8168249130249023) {
														return 1;
													}
													else {
														if (feature_vector.at(7) <= -4.023754954338074) {
															return 1;
														}
														else {
															return 0;
														}
													}
												}
												else {
													if (feature_vector.at(8) <= 3.100045084953308) {
														return 1;
													}
													else {
														return 0;
													}
												}
											}
											else {
												if (feature_vector.at(0) <= -7.789664778101724e-06) {
													if (feature_vector.at(1) <= 0.0930624008178711) {
														if (feature_vector.at(4) <= 1848.5) {
															return 0;
														}
														else {
															return 3;
														}
													}
													else {
														if (feature_vector.at(8) <= 5.896929979324341) {
															if (feature_vector.at(2) <= -0.5719840079545975) {
																return 1;
															}
															else {
																if (feature_vector.at(9) <= -7.597929954528809) {
																	return 3;
																}
																else {
																	if (feature_vector.at(7) <= -2.405134916305542) {
																		if (feature_vector.at(9) <= -6.494750022888184) {
																			if (feature_vector.at(8) <= 4.245460033416748) {
																				return 0;
																			}
																			else {
																				return 1;
																			}
																		}
																		else {
																			return 0;
																		}
																	}
																	else {
																		return 1;
																	}
																}
															}
														}
														else {
															return 3;
														}
													}
												}
												else {
													if (feature_vector.at(7) <= -5.559915065765381) {
														if (feature_vector.at(5) <= 1249.2449951171875) {
															return 0;
														}
														else {
															return 1;
														}
													}
													else {
														return 1;
													}
												}
											}
										}
										else {
											if (feature_vector.at(6) <= -28.179800033569336) {
												if (feature_vector.at(9) <= -5.554164886474609) {
													if (feature_vector.at(4) <= 3027.0) {
														return 1;
													}
													else {
														if (feature_vector.at(6) <= -32.60084915161133) {
															return 0;
														}
														else {
															if (feature_vector.at(0) <= -1.1981350326095708e-05) {
																return 1;
															}
															else {
																return 0;
															}
														}
													}
												}
												else {
													if (feature_vector.at(0) <= 0.002200911025283858) {
														return 0;
													}
													else {
														return 1;
													}
												}
											}
											else {
												return 1;
											}
										}
									}
									else {
										if (feature_vector.at(1) <= 0.25731150805950165) {
											return 0;
										}
										else {
											return 3;
										}
									}
								}
								else {
									if (feature_vector.at(5) <= 3424.550048828125) {
										if (feature_vector.at(7) <= -5.846319913864136) {
											if (feature_vector.at(1) <= 0.042637599632143974) {
												return 1;
											}
											else {
												if (feature_vector.at(7) <= -15.303999900817871) {
													return 0;
												}
												else {
													if (feature_vector.at(9) <= -7.8226447105407715) {
														return 0;
													}
													else {
														if (feature_vector.at(0) <= 0.0004083834937773645) {
															return 3;
														}
														else {
															if (feature_vector.at(6) <= -29.85099983215332) {
																return 0;
															}
															else {
																return 3;
															}
														}
													}
												}
											}
										}
										else {
											if (feature_vector.at(0) <= 6.472190034401137e-05) {
												if (feature_vector.at(8) <= 5.2621400356292725) {
													if (feature_vector.at(1) <= 0.1030417513102293) {
														return 3;
													}
													else {
														return 0;
													}
												}
												else {
													return 3;
												}
											}
											else {
												if (feature_vector.at(3) <= 0.00958066526800394) {
													return 3;
												}
												else {
													return 1;
												}
											}
										}
									}
									else {
										if (feature_vector.at(5) <= 3581.905029296875) {
											return 1;
										}
										else {
											return 0;
										}
									}
								}
							}
							else {
								if (feature_vector.at(6) <= -30.339499473571777) {
									if (feature_vector.at(3) <= 0.14566099643707275) {
										if (feature_vector.at(1) <= 0.19221900403499603) {
											if (feature_vector.at(9) <= -6.94462513923645) {
												if (feature_vector.at(5) <= 2342.8399658203125) {
													if (feature_vector.at(4) <= 4225.0) {
														if (feature_vector.at(3) <= -0.3853220045566559) {
															if (feature_vector.at(4) <= 2320.5) {
																return 0;
															}
															else {
																if (feature_vector.at(8) <= 6.838335037231445) {
																	return 1;
																}
																else {
																	return 3;
																}
															}
														}
														else {
															if (feature_vector.at(0) <= -0.00017220399604411796) {
																if (feature_vector.at(6) <= -36.050100326538086) {
																	return 1;
																}
																else {
																	return 0;
																}
															}
															else {
																return 1;
															}
														}
													}
													else {
														return 0;
													}
												}
												else {
													if (feature_vector.at(6) <= -35.83835029602051) {
														return 1;
													}
													else {
														return 0;
													}
												}
											}
											else {
												if (feature_vector.at(7) <= -7.003109931945801) {
													if (feature_vector.at(5) <= 816.2200012207031) {
														return 0;
													}
													else {
														if (feature_vector.at(5) <= 1836.9099731445312) {
															if (feature_vector.at(4) <= 3492.0) {
																if (feature_vector.at(8) <= 1.716629981994629) {
																	return 0;
																}
																else {
																	if (feature_vector.at(5) <= 855.0374755859375) {
																		if (feature_vector.at(1) <= 0.04362535011023283) {
																			return 1;
																		}
																		else {
																			return 0;
																		}
																	}
																	else {
																		return 1;
																	}
																}
															}
															else {
																return 0;
															}
														}
														else {
															if (feature_vector.at(6) <= -34.00025177001953) {
																if (feature_vector.at(3) <= -0.09989764913916588) {
																	return 0;
																}
																else {
																	return 1;
																}
															}
															else {
																if (feature_vector.at(1) <= 0.15043750405311584) {
																	return 3;
																}
																else {
																	return 0;
																}
															}
														}
													}
												}
												else {
													if (feature_vector.at(8) <= 6.545730113983154) {
														if (feature_vector.at(8) <= 5.784780025482178) {
															if (feature_vector.at(1) <= 0.0589966494590044) {
																if (feature_vector.at(7) <= -4.388494968414307) {
																	if (feature_vector.at(4) <= 2382.5) {
																		return 1;
																	}
																	else {
																		return 0;
																	}
																}
																else {
																	return 1;
																}
															}
															else {
																if (feature_vector.at(1) <= 0.1871419996023178) {
																	if (feature_vector.at(8) <= 4.829905033111572) {
																		if (feature_vector.at(5) <= 2031.2999877929688) {
																			if (feature_vector.at(5) <= 1591.7200317382812) {
																				if (feature_vector.at(9) <= -6.456935167312622) {
																					if (feature_vector.at(9) <= -6.799469947814941) {
																						return 0;
																					}
																					else {
																						return 1;
																					}
																				}
																				else {
																					if (feature_vector.at(4) <= 3208.0) {
																						return 0;
																					}
																					else {
																						if (feature_vector.at(8) <= 2.8263550996780396) {
																							return 0;
																						}
																						else {
																							return 1;
																						}
																					}
																				}
																			}
																			else {
																				return 1;
																			}
																		}
																		else {
																			return 0;
																		}
																	}
																	else {
																		return 0;
																	}
																}
																else {
																	return 1;
																}
															}
														}
														else {
															if (feature_vector.at(6) <= -40.406551361083984) {
																return 1;
															}
															else {
																if (feature_vector.at(4) <= 2053.0) {
																	return 1;
																}
																else {
																	if (feature_vector.at(6) <= -33.080299377441406) {
																		return 0;
																	}
																	else {
																		if (feature_vector.at(6) <= -32.965850830078125) {
																			return 1;
																		}
																		else {
																			return 0;
																		}
																	}
																}
															}
														}
													}
													else {
														if (feature_vector.at(9) <= -5.642119884490967) {
															if (feature_vector.at(5) <= 1869.1949462890625) {
																if (feature_vector.at(9) <= -5.9357500076293945) {
																	return 1;
																}
																else {
																	return 3;
																}
															}
															else {
																return 3;
															}
														}
														else {
															if (feature_vector.at(5) <= 1163.739990234375) {
																return 0;
															}
															else {
																if (feature_vector.at(1) <= 0.08385530114173889) {
																	return 1;
																}
																else {
																	if (feature_vector.at(5) <= 1650.8099975585938) {
																		return 1;
																	}
																	else {
																		return 0;
																	}
																}
															}
														}
													}
												}
											}
										}
										else {
											if (feature_vector.at(4) <= 1390.0) {
												return 1;
											}
											else {
												if (feature_vector.at(9) <= -5.167484998703003) {
													if (feature_vector.at(4) <= 2075.5) {
														return 1;
													}
													else {
														if (feature_vector.at(9) <= -5.397160053253174) {
															if (feature_vector.at(9) <= -6.388059854507446) {
																return 0;
															}
															else {
																if (feature_vector.at(6) <= -34.822500228881836) {
																	if (feature_vector.at(9) <= -6.237854957580566) {
																		return 3;
																	}
																	else {
																		return 0;
																	}
																}
																else {
																	if (feature_vector.at(6) <= -33.87835121154785) {
																		return 1;
																	}
																	else {
																		if (feature_vector.at(4) <= 4411.5) {
																			return 0;
																		}
																		else {
																			return 3;
																		}
																	}
																}
															}
														}
														else {
															if (feature_vector.at(5) <= 2492.7049560546875) {
																return 1;
															}
															else {
																return 3;
															}
														}
													}
												}
												else {
													if (feature_vector.at(0) <= -0.00020558799587888643) {
														return 1;
													}
													else {
														if (feature_vector.at(2) <= 0.8559749722480774) {
															if (feature_vector.at(2) <= 0.7319329977035522) {
																return 0;
															}
															else {
																return 3;
															}
														}
														else {
															return 0;
														}
													}
												}
											}
										}
									}
									else {
										if (feature_vector.at(4) <= 1615.5) {
											if (feature_vector.at(3) <= 0.4250295013189316) {
												return 0;
											}
											else {
												if (feature_vector.at(1) <= 0.1300860047340393) {
													return 1;
												}
												else {
													return 3;
												}
											}
										}
										else {
											if (feature_vector.at(5) <= 822.0694885253906) {
												if (feature_vector.at(9) <= -6.143110036849976) {
													return 1;
												}
												else {
													if (feature_vector.at(3) <= 0.7488825023174286) {
														return 0;
													}
													else {
														return 3;
													}
												}
											}
											else {
												if (feature_vector.at(6) <= -39.91259956359863) {
													return 3;
												}
												else {
													if (feature_vector.at(0) <= 0.0005519554833881557) {
														if (feature_vector.at(2) <= 0.8524250090122223) {
															if (feature_vector.at(5) <= 1683.7349853515625) {
																return 1;
															}
															else {
																return 0;
															}
														}
														else {
															return 0;
														}
													}
													else {
														return 3;
													}
												}
											}
										}
									}
								}
								else {
									if (feature_vector.at(7) <= -6.898504972457886) {
										if (feature_vector.at(3) <= -0.06840984895825386) {
											return 1;
										}
										else {
											return 3;
										}
									}
									else {
										if (feature_vector.at(3) <= 0.5434709936380386) {
											if (feature_vector.at(3) <= -0.25096550583839417) {
												if (feature_vector.at(2) <= 2.674459993839264) {
													return 0;
												}
												else {
													return 1;
												}
											}
											else {
												return 1;
											}
										}
										else {
											return 3;
										}
									}
								}
							}
						}
					}
					else {
						if (feature_vector.at(2) <= 26.81215000152588) {
							if (feature_vector.at(8) <= 4.214410066604614) {
								if (feature_vector.at(3) <= 0.5243400186300278) {
									if (feature_vector.at(8) <= 4.0711350440979) {
										return 1;
									}
									else {
										if (feature_vector.at(5) <= 1303.9600219726562) {
											return 0;
										}
										else {
											return 1;
										}
									}
								}
								else {
									if (feature_vector.at(8) <= 3.617900013923645) {
										return 0;
									}
									else {
										return 1;
									}
								}
							}
							else {
								if (feature_vector.at(5) <= 1199.3150024414062) {
									if (feature_vector.at(9) <= -2.9646999835968018) {
										if (feature_vector.at(6) <= -39.65620040893555) {
											return 1;
										}
										else {
											if (feature_vector.at(7) <= -1.0298520028591156) {
												if (feature_vector.at(3) <= 0.989345520734787) {
													if (feature_vector.at(6) <= -39.001251220703125) {
														if (feature_vector.at(0) <= -0.00013677449896931648) {
															return 1;
														}
														else {
															return 0;
														}
													}
													else {
														if (feature_vector.at(8) <= 6.535149812698364) {
															return 0;
														}
														else {
															if (feature_vector.at(2) <= 15.179049968719482) {
																return 0;
															}
															else {
																return 1;
															}
														}
													}
												}
												else {
													return 1;
												}
											}
											else {
												return 1;
											}
										}
									}
									else {
										if (feature_vector.at(7) <= -9.219540119171143) {
											return 3;
										}
										else {
											return 1;
										}
									}
								}
								else {
									if (feature_vector.at(9) <= -5.15064001083374) {
										if (feature_vector.at(8) <= 4.85959005355835) {
											if (feature_vector.at(6) <= -35.32080078125) {
												if (feature_vector.at(2) <= 10.797500133514404) {
													return 0;
												}
												else {
													return 1;
												}
											}
											else {
												return 0;
											}
										}
										else {
											if (feature_vector.at(3) <= 0.8424490094184875) {
												if (feature_vector.at(8) <= 8.216340065002441) {
													if (feature_vector.at(5) <= 3640.5350341796875) {
														return 1;
													}
													else {
														return 3;
													}
												}
												else {
													return 3;
												}
											}
											else {
												return 0;
											}
										}
									}
									else {
										if (feature_vector.at(7) <= -6.319825172424316) {
											return 1;
										}
										else {
											if (feature_vector.at(4) <= 2239.5) {
												return 1;
											}
											else {
												return 0;
											}
										}
									}
								}
							}
						}
						else {
							if (feature_vector.at(8) <= 8.225430011749268) {
								if (feature_vector.at(7) <= -12.363450050354004) {
									if (feature_vector.at(7) <= -13.302350044250488) {
										return 1;
									}
									else {
										return 2;
									}
								}
								else {
									if (feature_vector.at(3) <= -0.1361594945192337) {
										if (feature_vector.at(3) <= -0.1446949988603592) {
											return 1;
										}
										else {
											return 0;
										}
									}
									else {
										return 1;
									}
								}
							}
							else {
								return 0;
							}
						}
					}
				}
			}
		}
	}
}