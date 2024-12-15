
/*
This inline function was automatically generated using DecisionTreeToCpp Converter

It takes feature vector as single argument:
feature_vector[0] - Mean
feature_vector[1] - RMS
feature_vector[2] - ShapeF
feature_vector[3] - Kurtosis
feature_vector[4] - Skew
feature_vector[5] - FundFreq
feature_vector[6] - MFCC1
feature_vector[7] - MFCC2
feature_vector[8] - MFCC3


It returns index of predicted class:
0 - Choro
1 - Aleat�rio
2 - Sil�ncio
3 - Quase Choro


Simply include this file to your project and use it
*/

#include <vector>

inline int model(const std::vector<double> & feature_vector) 
{
	if (feature_vector.at(1) <= 0.0005275869916658849) {
		if (feature_vector.at(0) <= 7.264550294650007e-08) {
			if (feature_vector.at(7) <= -16.01734972000122) {
				if (feature_vector.at(1) <= 0.0003058794973185286) {
					if (feature_vector.at(4) <= 0.06354515068233013) {
						return 1;
					}
					else {
						if (feature_vector.at(6) <= -70.9688491821289) {
							return 0;
						}
						else {
							return 2;
						}
					}
				}
				else {
					if (feature_vector.at(7) <= -19.030949592590332) {
						return 0;
					}
					else {
						return 2;
					}
				}
			}
			else {
				if (feature_vector.at(1) <= 0.0005015989881940186) {
					if (feature_vector.at(5) <= 208.79949951171875) {
						return 1;
					}
					else {
						if (feature_vector.at(5) <= 286.0139923095703) {
							if (feature_vector.at(8) <= 11.681099891662598) {
								return 2;
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
					if (feature_vector.at(8) <= 10.773085117340088) {
						return 2;
					}
					else {
						return 1;
					}
				}
			}
		}
		else {
			if (feature_vector.at(8) <= 5.117434978485107) {
				return 1;
			}
			else {
				if (feature_vector.at(7) <= -10.784800052642822) {
					if (feature_vector.at(7) <= -20.03445053100586) {
						return 0;
					}
					else {
						if (feature_vector.at(0) <= 6.361914984154282e-05) {
							if (feature_vector.at(2) <= 1.5071600079536438) {
								if (feature_vector.at(7) <= -13.335299968719482) {
									return 2;
								}
								else {
									if (feature_vector.at(7) <= -13.170850276947021) {
										return 1;
									}
									else {
										return 2;
									}
								}
							}
							else {
								if (feature_vector.at(2) <= 1.5182549953460693) {
									return 1;
								}
								else {
									return 2;
								}
							}
						}
						else {
							return 1;
						}
					}
				}
				else {
					if (feature_vector.at(0) <= 1.2038619615850621e-05) {
						return 1;
					}
					else {
						return 2;
					}
				}
			}
		}
	}
	else {
		if (feature_vector.at(1) <= 0.09671220183372498) {
			if (feature_vector.at(5) <= 134.9029998779297) {
				if (feature_vector.at(7) <= -17.35420036315918) {
					if (feature_vector.at(1) <= 0.011023169849067926) {
						if (feature_vector.at(8) <= 5.129255056381226) {
							return 1;
						}
						else {
							if (feature_vector.at(2) <= 1.748104989528656) {
								return 1;
							}
							else {
								return 0;
							}
						}
					}
					else {
						if (feature_vector.at(8) <= 1.4999593631364405) {
							return 1;
						}
						else {
							return 0;
						}
					}
				}
				else {
					if (feature_vector.at(5) <= 74.73410034179688) {
						return 1;
					}
					else {
						if (feature_vector.at(8) <= 6.857480049133301) {
							if (feature_vector.at(4) <= 0.8380574882030487) {
								if (feature_vector.at(8) <= 4.969950199127197) {
									if (feature_vector.at(5) <= 129.95899963378906) {
										if (feature_vector.at(7) <= -16.504300117492676) {
											if (feature_vector.at(7) <= -16.606849670410156) {
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
										if (feature_vector.at(1) <= 0.08149119839072227) {
											return 1;
										}
										else {
											return 3;
										}
									}
								}
								else {
									if (feature_vector.at(7) <= -14.861500263214111) {
										if (feature_vector.at(5) <= 95.77845001220703) {
											return 0;
										}
										else {
											return 1;
										}
									}
									else {
										if (feature_vector.at(5) <= 80.56374740600586) {
											return 2;
										}
										else {
											if (feature_vector.at(0) <= 5.2932300604879856e-05) {
												return 1;
											}
											else {
												if (feature_vector.at(2) <= 1.5440999865531921) {
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
								if (feature_vector.at(0) <= 1.1084989637311082e-05) {
									return 1;
								}
								else {
									if (feature_vector.at(1) <= 0.012544294877443463) {
										return 2;
									}
									else {
										return 3;
									}
								}
							}
						}
						else {
							if (feature_vector.at(1) <= 0.012207900173962116) {
								if (feature_vector.at(0) <= 2.235245005977049e-06) {
									if (feature_vector.at(2) <= 2.314929962158203) {
										if (feature_vector.at(8) <= 7.709504842758179) {
											if (feature_vector.at(0) <= -3.843864942609798e-05) {
												return 2;
											}
											else {
												return 1;
											}
										}
										else {
											if (feature_vector.at(1) <= 0.007531929761171341) {
												if (feature_vector.at(7) <= -6.4273998737335205) {
													return 2;
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
										if (feature_vector.at(8) <= 13.114449977874756) {
											return 1;
										}
										else {
											return 0;
										}
									}
								}
								else {
									if (feature_vector.at(7) <= -6.612519979476929) {
										if (feature_vector.at(4) <= -0.19990599900484085) {
											if (feature_vector.at(3) <= 6.384524822235107) {
												return 0;
											}
											else {
												return 2;
											}
										}
										else {
											return 2;
										}
									}
									else {
										return 1;
									}
								}
							}
							else {
								if (feature_vector.at(0) <= 7.524029933847487e-05) {
									if (feature_vector.at(3) <= 37.038899421691895) {
										if (feature_vector.at(2) <= 1.5098350048065186) {
											return 0;
										}
										else {
											if (feature_vector.at(1) <= 0.05851754918694496) {
												if (feature_vector.at(0) <= -1.2858260106440866e-05) {
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
									}
									else {
										return 1;
									}
								}
								else {
									if (feature_vector.at(2) <= 3.9971100091934204) {
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
			}
			else {
				if (feature_vector.at(7) <= -14.70674991607666) {
					if (feature_vector.at(1) <= 0.004509655060246587) {
						if (feature_vector.at(0) <= -1.0134954891327652e-05) {
							return 1;
						}
						else {
							if (feature_vector.at(0) <= 2.3861200588726206e-06) {
								if (feature_vector.at(5) <= 1103.8299560546875) {
									if (feature_vector.at(3) <= 175.18399810791016) {
										if (feature_vector.at(5) <= 246.56450653076172) {
											if (feature_vector.at(3) <= 15.003699779510498) {
												return 0;
											}
											else {
												if (feature_vector.at(0) <= -1.8329004376482771e-06) {
													if (feature_vector.at(5) <= 158.88500213623047) {
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
										}
										else {
											if (feature_vector.at(7) <= -16.346099853515625) {
												return 0;
											}
											else {
												if (feature_vector.at(8) <= 10.396049976348877) {
													return 1;
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
									if (feature_vector.at(6) <= -69.04019927978516) {
										if (feature_vector.at(5) <= 1514.9450073242188) {
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
								if (feature_vector.at(2) <= 1.7279199957847595) {
									if (feature_vector.at(8) <= 6.4736199378967285) {
										return 0;
									}
									else {
										return 1;
									}
								}
								else {
									return 2;
								}
							}
						}
					}
					else {
						if (feature_vector.at(3) <= 68.52289962768555) {
							if (feature_vector.at(2) <= 1.2623550295829773) {
								if (feature_vector.at(5) <= 619.3249816894531) {
									if (feature_vector.at(6) <= -55.876150131225586) {
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
								if (feature_vector.at(8) <= 11.950950145721436) {
									if (feature_vector.at(0) <= 0.0001759509978001006) {
										if (feature_vector.at(6) <= -43.91250038146973) {
											if (feature_vector.at(4) <= 3.083495020866394) {
												if (feature_vector.at(5) <= 3575.469970703125) {
													if (feature_vector.at(8) <= 9.76100492477417) {
														if (feature_vector.at(1) <= 0.006334919948130846) {
															if (feature_vector.at(0) <= -8.110180033327197e-06) {
																return 1;
															}
															else {
																return 0;
															}
														}
														else {
															if (feature_vector.at(6) <= -47.366600036621094) {
																if (feature_vector.at(1) <= 0.006763814948499203) {
																	if (feature_vector.at(2) <= 2.2325398921966553) {
																		return 0;
																	}
																	else {
																		return 3;
																	}
																}
																else {
																	if (feature_vector.at(2) <= 1.3901349902153015) {
																		if (feature_vector.at(2) <= 1.3840299844741821) {
																			if (feature_vector.at(0) <= 1.451600019208854e-05) {
																				return 0;
																			}
																			else {
																				if (feature_vector.at(6) <= -49.81529998779297) {
																					return 2;
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
																	else {
																		if (feature_vector.at(6) <= -50.31155014038086) {
																			return 0;
																		}
																		else {
																			if (feature_vector.at(6) <= -50.26955032348633) {
																				return 1;
																			}
																			else {
																				return 0;
																			}
																		}
																	}
																}
															}
															else {
																if (feature_vector.at(5) <= 1086.3999938964844) {
																	if (feature_vector.at(5) <= 143.0615005493164) {
																		if (feature_vector.at(2) <= 1.796970009803772) {
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
																	if (feature_vector.at(1) <= 0.04654260165989399) {
																		return 0;
																	}
																	else {
																		if (feature_vector.at(5) <= 2015.4899291992188) {
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
														if (feature_vector.at(2) <= 2.028635025024414) {
															if (feature_vector.at(1) <= 0.020904050208628178) {
																return 1;
															}
															else {
																return 0;
															}
														}
														else {
															if (feature_vector.at(2) <= 3.2193949222564697) {
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
												return 3;
											}
										}
										else {
											if (feature_vector.at(0) <= -6.554289757332299e-05) {
												return 1;
											}
											else {
												if (feature_vector.at(6) <= -43.58440017700195) {
													return 1;
												}
												else {
													if (feature_vector.at(1) <= 0.01670530019327998) {
														return 1;
													}
													else {
														if (feature_vector.at(8) <= 6.769390106201172) {
															if (feature_vector.at(6) <= -37.595449447631836) {
																return 0;
															}
															else {
																if (feature_vector.at(3) <= 8.64853036403656) {
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
									}
									else {
										if (feature_vector.at(4) <= 0.6467215158045292) {
											return 1;
										}
										else {
											return 3;
										}
									}
								}
								else {
									if (feature_vector.at(5) <= 154.86299896240234) {
										return 3;
									}
									else {
										return 1;
									}
								}
							}
						}
						else {
							if (feature_vector.at(0) <= 9.852003152843736e-05) {
								if (feature_vector.at(1) <= 0.006254530046135187) {
									if (feature_vector.at(1) <= 0.0053273451048880816) {
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
								return 0;
							}
						}
					}
				}
				else {
					if (feature_vector.at(1) <= 0.03445190005004406) {
						if (feature_vector.at(8) <= 7.032134771347046) {
							if (feature_vector.at(8) <= 5.452714920043945) {
								if (feature_vector.at(7) <= -14.61365032196045) {
									if (feature_vector.at(3) <= 16.41176465153694) {
										return 0;
									}
									else {
										return 1;
									}
								}
								else {
									if (feature_vector.at(1) <= 0.03250980004668236) {
										if (feature_vector.at(3) <= 737.7319946289062) {
											if (feature_vector.at(6) <= -29.872550010681152) {
												if (feature_vector.at(0) <= 5.3144698540563695e-05) {
													if (feature_vector.at(1) <= 0.027850599959492683) {
														return 1;
													}
													else {
														if (feature_vector.at(3) <= 0.4932810068130493) {
															return 3;
														}
														else {
															return 1;
														}
													}
												}
												else {
													if (feature_vector.at(0) <= 5.833779869135469e-05) {
														return 0;
													}
													else {
														return 1;
													}
												}
											}
											else {
												if (feature_vector.at(3) <= 94.1980037689209) {
													return 1;
												}
												else {
													return 2;
												}
											}
										}
										else {
											if (feature_vector.at(5) <= 1418.2949829101562) {
												return 2;
											}
											else {
												return 1;
											}
										}
									}
									else {
										if (feature_vector.at(1) <= 0.03311000019311905) {
											if (feature_vector.at(5) <= 433.33399963378906) {
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
							else {
								if (feature_vector.at(1) <= 0.018149450421333313) {
									if (feature_vector.at(5) <= 144.86199951171875) {
										if (feature_vector.at(4) <= -0.31655700504779816) {
											return 1;
										}
										else {
											return 2;
										}
									}
									else {
										if (feature_vector.at(0) <= -2.3693499997534673e-06) {
											return 1;
										}
										else {
											if (feature_vector.at(4) <= 0.02403500024229288) {
												return 1;
											}
											else {
												if (feature_vector.at(0) <= 2.7828799829876516e-05) {
													if (feature_vector.at(1) <= 0.008626050315797329) {
														return 2;
													}
													else {
														if (feature_vector.at(8) <= 5.867310047149658) {
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
									}
								}
								else {
									if (feature_vector.at(7) <= -13.398249626159668) {
										return 0;
									}
									else {
										if (feature_vector.at(2) <= 1.2904099822044373) {
											if (feature_vector.at(3) <= 0.19434550404548645) {
												return 1;
											}
											else {
												if (feature_vector.at(7) <= -8.971709728240967) {
													if (feature_vector.at(3) <= 0.36799100786447525) {
														return 1;
													}
													else {
														return 2;
													}
												}
												else {
													return 3;
												}
											}
										}
										else {
											if (feature_vector.at(8) <= 5.490664958953857) {
												return 0;
											}
											else {
												if (feature_vector.at(4) <= 0.7717559933662415) {
													if (feature_vector.at(1) <= 0.018659550696611404) {
														return 0;
													}
													else {
														if (feature_vector.at(8) <= 6.781830072402954) {
															if (feature_vector.at(3) <= 2.753509998321533) {
																if (feature_vector.at(3) <= 2.3195300102233887) {
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
															if (feature_vector.at(8) <= 6.874930143356323) {
																return 0;
															}
															else {
																return 1;
															}
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
						else {
							if (feature_vector.at(0) <= -1.4797300082136644e-05) {
								if (feature_vector.at(1) <= 0.015589050017297268) {
									if (feature_vector.at(5) <= 143.0709991455078) {
										return 2;
									}
									else {
										if (feature_vector.at(4) <= -0.5569449961185455) {
											if (feature_vector.at(6) <= -51.90354919433594) {
												return 1;
											}
											else {
												if (feature_vector.at(5) <= 448.572998046875) {
													return 2;
												}
												else {
													return 0;
												}
											}
										}
										else {
											if (feature_vector.at(1) <= 0.01527189975604415) {
												if (feature_vector.at(3) <= 6.408474922180176) {
													return 1;
												}
												else {
													if (feature_vector.at(3) <= 9.440154552459717) {
														if (feature_vector.at(0) <= -2.3134750335884746e-05) {
															if (feature_vector.at(7) <= -12.045100212097168) {
																return 1;
															}
															else {
																return 0;
															}
														}
														else {
															return 2;
														}
													}
													else {
														if (feature_vector.at(2) <= 1.7434449791908264) {
															if (feature_vector.at(2) <= 1.6932500004768372) {
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
												if (feature_vector.at(4) <= 0.14666338433744386) {
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
									if (feature_vector.at(5) <= 1015.7525024414062) {
										if (feature_vector.at(3) <= 51.1161003112793) {
											if (feature_vector.at(4) <= -0.1372314989566803) {
												if (feature_vector.at(6) <= -61.26355171203613) {
													return 1;
												}
												else {
													if (feature_vector.at(2) <= 2.1659549474716187) {
														return 0;
													}
													else {
														if (feature_vector.at(1) <= 0.023966699838638306) {
															return 1;
														}
														else {
															return 0;
														}
													}
												}
											}
											else {
												if (feature_vector.at(4) <= 0.2794249951839447) {
													if (feature_vector.at(0) <= -1.85487997441669e-05) {
														if (feature_vector.at(5) <= 784.2244873046875) {
															if (feature_vector.at(5) <= 274.62499237060547) {
																return 2;
															}
															else {
																if (feature_vector.at(5) <= 372.6435089111328) {
																	if (feature_vector.at(3) <= 2.844538390636444) {
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
															if (feature_vector.at(2) <= 1.8328050374984741) {
																return 0;
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
													return 0;
												}
											}
										}
										else {
											if (feature_vector.at(7) <= -10.673914909362793) {
												return 2;
											}
											else {
												return 1;
											}
										}
									}
									else {
										if (feature_vector.at(6) <= -51.57929992675781) {
											if (feature_vector.at(4) <= 1.0831565260887146) {
												return 1;
											}
											else {
												return 0;
											}
										}
										else {
											if (feature_vector.at(7) <= -5.290264844894409) {
												if (feature_vector.at(8) <= 7.577729940414429) {
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
							else {
								if (feature_vector.at(7) <= -6.3929948806762695) {
									if (feature_vector.at(2) <= 1.3323000073432922) {
										if (feature_vector.at(1) <= 0.0035798901226371527) {
											if (feature_vector.at(0) <= -8.762160177866463e-06) {
												return 1;
											}
											else {
												return 0;
											}
										}
										else {
											if (feature_vector.at(7) <= -13.76830005645752) {
												if (feature_vector.at(0) <= -1.6615350659776595e-06) {
													return 0;
												}
												else {
													if (feature_vector.at(0) <= 2.055301933978626e-05) {
														return 1;
													}
													else {
														return 2;
													}
												}
											}
											else {
												if (feature_vector.at(7) <= -7.4933600425720215) {
													if (feature_vector.at(4) <= 0.025718899443745613) {
														return 1;
													}
													else {
														if (feature_vector.at(1) <= 0.006305699935182929) {
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
									else {
										if (feature_vector.at(1) <= 0.009116204921156168) {
											if (feature_vector.at(6) <= -69.57769775390625) {
												if (feature_vector.at(0) <= 4.280489861230308e-06) {
													return 1;
												}
												else {
													return 0;
												}
											}
											else {
												if (feature_vector.at(1) <= 0.0015565099893137813) {
													if (feature_vector.at(4) <= 0.8470219969749451) {
														if (feature_vector.at(5) <= 3429.4949951171875) {
															return 2;
														}
														else {
															return 1;
														}
													}
													else {
														if (feature_vector.at(0) <= 1.871268977993168e-05) {
															return 0;
														}
														else {
															return 1;
														}
													}
												}
												else {
													if (feature_vector.at(2) <= 2.2825900316238403) {
														if (feature_vector.at(8) <= 8.460070133209229) {
															if (feature_vector.at(7) <= -11.539499759674072) {
																if (feature_vector.at(0) <= 4.941754923493136e-06) {
																	return 1;
																}
																else {
																	return 2;
																}
															}
															else {
																if (feature_vector.at(5) <= 483.3404998779297) {
																	if (feature_vector.at(2) <= 1.7833999991416931) {
																		return 2;
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
															if (feature_vector.at(0) <= 7.754424814265803e-06) {
																if (feature_vector.at(0) <= -1.3519500043912558e-05) {
																	return 1;
																}
																else {
																	return 0;
																}
															}
															else {
																return 2;
															}
														}
													}
													else {
														if (feature_vector.at(7) <= -10.289799690246582) {
															if (feature_vector.at(3) <= 79.91394805908203) {
																if (feature_vector.at(8) <= 10.997349739074707) {
																	return 2;
																}
																else {
																	return 0;
																}
															}
															else {
																if (feature_vector.at(2) <= 3.4151649475097656) {
																	if (feature_vector.at(0) <= -4.248805112183618e-06) {
																		return 0;
																	}
																	else {
																		return 2;
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
												}
											}
										}
										else {
											if (feature_vector.at(2) <= 2.942674994468689) {
												if (feature_vector.at(4) <= 2.3884900212287903) {
													if (feature_vector.at(3) <= 1.0970499515533447) {
														if (feature_vector.at(5) <= 480.19300842285156) {
															return 2;
														}
														else {
															return 0;
														}
													}
													else {
														if (feature_vector.at(7) <= -14.545450210571289) {
															return 2;
														}
														else {
															if (feature_vector.at(2) <= 1.3615500330924988) {
																return 1;
															}
															else {
																if (feature_vector.at(6) <= -64.69710159301758) {
																	if (feature_vector.at(7) <= -13.322750091552734) {
																		return 2;
																	}
																	else {
																		return 0;
																	}
																}
																else {
																	if (feature_vector.at(6) <= -45.688350677490234) {
																		if (feature_vector.at(1) <= 0.021594599820673466) {
																			return 0;
																		}
																		else {
																			if (feature_vector.at(5) <= 1377.9000244140625) {
																				if (feature_vector.at(0) <= 6.458349889726378e-05) {
																					if (feature_vector.at(1) <= 0.021606099791824818) {
																						return 1;
																					}
																					else {
																						if (feature_vector.at(3) <= 12.490100383758545) {
																							return 0;
																						}
																						else {
																							if (feature_vector.at(3) <= 13.616800308227539) {
																								return 1;
																							}
																							else {
																								if (feature_vector.at(1) <= 0.02899090014398098) {
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
																					return 1;
																				}
																			}
																			else {
																				if (feature_vector.at(8) <= 9.528150081634521) {
																					return 1;
																				}
																				else {
																					return 0;
																				}
																			}
																		}
																	}
																	else {
																		if (feature_vector.at(1) <= 0.021382799372076988) {
																			return 2;
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
													return 3;
												}
											}
											else {
												if (feature_vector.at(0) <= 2.6124400392291136e-05) {
													return 1;
												}
												else {
													return 0;
												}
											}
										}
									}
								}
								else {
									if (feature_vector.at(4) <= 1.2554544806480408) {
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
						if (feature_vector.at(6) <= -37.96500015258789) {
							if (feature_vector.at(2) <= 1.3517999649047852) {
								if (feature_vector.at(6) <= -42.41740036010742) {
									if (feature_vector.at(7) <= -6.814909934997559) {
										if (feature_vector.at(6) <= -53.79440116882324) {
											return 1;
										}
										else {
											if (feature_vector.at(3) <= 1.2713000178337097) {
												if (feature_vector.at(5) <= 292.5330047607422) {
													if (feature_vector.at(4) <= -0.10223134979605675) {
														return 2;
													}
													else {
														return 1;
													}
												}
												else {
													if (feature_vector.at(0) <= -0.00022849800734547898) {
														return 1;
													}
													else {
														if (feature_vector.at(5) <= 2900.8349609375) {
															if (feature_vector.at(6) <= -43.50815010070801) {
																if (feature_vector.at(1) <= 0.09591059759259224) {
																	if (feature_vector.at(0) <= 5.514539952855557e-05) {
																		if (feature_vector.at(5) <= 2007.7649536132812) {
																			if (feature_vector.at(7) <= -7.225594997406006) {
																				return 0;
																			}
																			else {
																				if (feature_vector.at(2) <= 1.3203699588775635) {
																					return 0;
																				}
																				else {
																					return 1;
																				}
																			}
																		}
																		else {
																			if (feature_vector.at(2) <= 1.299709975719452) {
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
												}
											}
											else {
												if (feature_vector.at(4) <= 0.04555409960448742) {
													return 1;
												}
												else {
													if (feature_vector.at(5) <= 686.9244995117188) {
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
										if (feature_vector.at(6) <= -43.11040115356445) {
											return 1;
										}
										else {
											return 0;
										}
									}
								}
								else {
									if (feature_vector.at(7) <= -9.966839790344238) {
										if (feature_vector.at(1) <= 0.07252885028719902) {
											return 1;
										}
										else {
											if (feature_vector.at(1) <= 0.08369874954223633) {
												return 0;
											}
											else {
												return 1;
											}
										}
									}
									else {
										if (feature_vector.at(7) <= -6.864435195922852) {
											return 3;
										}
										else {
											if (feature_vector.at(1) <= 0.05389989912509918) {
												if (feature_vector.at(2) <= 1.2895449995994568) {
													return 3;
												}
												else {
													return 0;
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
								if (feature_vector.at(7) <= -4.005860090255737) {
									if (feature_vector.at(3) <= 39.714799880981445) {
										if (feature_vector.at(5) <= 1250.260009765625) {
											if (feature_vector.at(8) <= 4.3069751262664795) {
												if (feature_vector.at(4) <= -1.0497770011425018) {
													return 0;
												}
												else {
													if (feature_vector.at(4) <= 0.010533074731938541) {
														return 1;
													}
													else {
														if (feature_vector.at(1) <= 0.06213274970650673) {
															return 0;
														}
														else {
															return 1;
														}
													}
												}
											}
											else {
												if (feature_vector.at(0) <= 0.00028493450372479856) {
													if (feature_vector.at(8) <= 7.367135047912598) {
														if (feature_vector.at(5) <= 307.8760070800781) {
															if (feature_vector.at(6) <= -45.38170051574707) {
																if (feature_vector.at(2) <= 1.7124800086021423) {
																	return 2;
																}
																else {
																	if (feature_vector.at(5) <= 252.38050079345703) {
																		return 0;
																	}
																	else {
																		return 3;
																	}
																}
															}
															else {
																if (feature_vector.at(7) <= -14.038449764251709) {
																	return 0;
																}
																else {
																	return 1;
																}
															}
														}
														else {
															if (feature_vector.at(2) <= 1.8076050281524658) {
																if (feature_vector.at(7) <= -5.3210601806640625) {
																	if (feature_vector.at(1) <= 0.09597114846110344) {
																		if (feature_vector.at(7) <= -6.625730037689209) {
																			if (feature_vector.at(6) <= -40.51900100708008) {
																				if (feature_vector.at(5) <= 1047.2250366210938) {
																					return 0;
																				}
																				else {
																					if (feature_vector.at(5) <= 1053.155029296875) {
																						return 1;
																					}
																					else {
																						return 0;
																					}
																				}
																			}
																			else {
																				if (feature_vector.at(6) <= -40.19795036315918) {
																					return 3;
																				}
																				else {
																					return 0;
																				}
																			}
																		}
																		else {
																			if (feature_vector.at(0) <= -1.6434735357506725e-05) {
																				return 0;
																			}
																			else {
																				if (feature_vector.at(4) <= -0.4306024983525276) {
																					return 0;
																				}
																				else {
																					return 1;
																				}
																			}
																		}
																	}
																	else {
																		if (feature_vector.at(6) <= -45.60510063171387) {
																			return 1;
																		}
																		else {
																			return 0;
																		}
																	}
																}
																else {
																	if (feature_vector.at(6) <= -45.26049995422363) {
																		return 1;
																	}
																	else {
																		return 0;
																	}
																}
															}
															else {
																if (feature_vector.at(7) <= -5.996960163116455) {
																	if (feature_vector.at(6) <= -43.492549896240234) {
																		if (feature_vector.at(1) <= 0.0935530997812748) {
																			if (feature_vector.at(4) <= 0.04899740032851696) {
																				if (feature_vector.at(5) <= 400.32398986816406) {
																					return 1;
																				}
																				else {
																					if (feature_vector.at(7) <= -7.249779939651489) {
																						if (feature_vector.at(4) <= 0.02675435086712241) {
																							if (feature_vector.at(2) <= 1.9225749969482422) {
																								if (feature_vector.at(3) <= 5.037440061569214) {
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
																					else {
																						return 1;
																					}
																				}
																			}
																			else {
																				if (feature_vector.at(0) <= 6.296309948083945e-05) {
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
																		if (feature_vector.at(7) <= -7.0160300731658936) {
																			if (feature_vector.at(8) <= 4.91423487663269) {
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
																	return 0;
																}
															}
														}
													}
													else {
														if (feature_vector.at(6) <= -69.2744026184082) {
															return 1;
														}
														else {
															if (feature_vector.at(3) <= 0.32940899580717087) {
																return 3;
															}
															else {
																if (feature_vector.at(0) <= 6.706285057589412e-05) {
																	if (feature_vector.at(2) <= 3.653719902038574) {
																		if (feature_vector.at(3) <= 33.40369987487793) {
																			if (feature_vector.at(2) <= 1.3774099946022034) {
																				if (feature_vector.at(2) <= 1.3682900071144104) {
																					return 0;
																				}
																				else {
																					return 1;
																				}
																			}
																			else {
																				if (feature_vector.at(7) <= -6.32989501953125) {
																					if (feature_vector.at(5) <= 223.75900268554688) {
																						if (feature_vector.at(5) <= 211.61949920654297) {
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
																				else {
																					if (feature_vector.at(6) <= -46.67889976501465) {
																						return 1;
																					}
																					else {
																						return 0;
																					}
																				}
																			}
																		}
																		else {
																			if (feature_vector.at(7) <= -13.503800392150879) {
																				return 1;
																			}
																			else {
																				return 0;
																			}
																		}
																	}
																	else {
																		if (feature_vector.at(1) <= 0.05593805015087128) {
																			return 1;
																		}
																		else {
																			return 0;
																		}
																	}
																}
																else {
																	if (feature_vector.at(2) <= 2.129324972629547) {
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
													return 3;
												}
											}
										}
										else {
											if (feature_vector.at(5) <= 1599.375) {
												if (feature_vector.at(1) <= 0.07584799826145172) {
													if (feature_vector.at(8) <= 7.2422850131988525) {
														if (feature_vector.at(2) <= 1.833549976348877) {
															return 0;
														}
														else {
															if (feature_vector.at(6) <= -50.31019973754883) {
																return 0;
															}
															else {
																return 1;
															}
														}
													}
													else {
														if (feature_vector.at(8) <= 9.504449844360352) {
															return 1;
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
											else {
												if (feature_vector.at(3) <= 21.01889991760254) {
													if (feature_vector.at(6) <= -38.76865005493164) {
														if (feature_vector.at(8) <= 8.137020111083984) {
															if (feature_vector.at(6) <= -47.139699935913086) {
																return 0;
															}
															else {
																if (feature_vector.at(7) <= -8.949095249176025) {
																	if (feature_vector.at(2) <= 1.5776949524879456) {
																		if (feature_vector.at(0) <= -6.21881017650594e-05) {
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
																	if (feature_vector.at(8) <= 5.3852949142456055) {
																		return 1;
																	}
																	else {
																		if (feature_vector.at(5) <= 1759.7550048828125) {
																			if (feature_vector.at(4) <= 0.322475790977478) {
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
																}
															}
														}
														else {
															if (feature_vector.at(6) <= -54.82729911804199) {
																return 0;
															}
															else {
																if (feature_vector.at(7) <= -8.523280143737793) {
																	return 1;
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
													if (feature_vector.at(7) <= -12.551350116729736) {
														return 3;
													}
													else {
														return 1;
													}
												}
											}
										}
									}
									else {
										if (feature_vector.at(4) <= 2.758964955806732) {
											return 1;
										}
										else {
											return 3;
										}
									}
								}
								else {
									if (feature_vector.at(1) <= 0.08332540094852448) {
										return 1;
									}
									else {
										return 0;
									}
								}
							}
						}
						else {
							if (feature_vector.at(8) <= 4.435745000839233) {
								if (feature_vector.at(1) <= 0.08746690303087234) {
									if (feature_vector.at(2) <= 3.381909966468811) {
										return 1;
									}
									else {
										if (feature_vector.at(8) <= 4.1725099086761475) {
											return 1;
										}
										else {
											return 0;
										}
									}
								}
								else {
									if (feature_vector.at(8) <= 3.1947749853134155) {
										return 1;
									}
									else {
										if (feature_vector.at(4) <= -0.03970324993133545) {
											return 3;
										}
										else {
											if (feature_vector.at(8) <= 3.6588850021362305) {
												return 3;
											}
											else {
												return 1;
											}
										}
									}
								}
							}
							else {
								if (feature_vector.at(3) <= 6.893640041351318) {
									if (feature_vector.at(4) <= -0.17093349993228912) {
										return 0;
									}
									else {
										if (feature_vector.at(5) <= 671.5670166015625) {
											if (feature_vector.at(7) <= -8.763299942016602) {
												return 1;
											}
											else {
												if (feature_vector.at(6) <= -37.83090019226074) {
													return 0;
												}
												else {
													if (feature_vector.at(7) <= -0.6510755121707916) {
														if (feature_vector.at(1) <= 0.037731051445007324) {
															if (feature_vector.at(3) <= 2.4359649419784546) {
																return 1;
															}
															else {
																return 3;
															}
														}
														else {
															if (feature_vector.at(6) <= -36.44209861755371) {
																if (feature_vector.at(6) <= -36.829599380493164) {
																	return 3;
																}
																else {
																	if (feature_vector.at(1) <= 0.08604289963841438) {
																		return 0;
																	}
																	else {
																		return 3;
																	}
																}
															}
															else {
																if (feature_vector.at(1) <= 0.0491832010447979) {
																	if (feature_vector.at(7) <= -3.50690495967865) {
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
													}
													else {
														return 1;
													}
												}
											}
										}
										else {
											if (feature_vector.at(2) <= 1.2920899987220764) {
												return 3;
											}
											else {
												if (feature_vector.at(8) <= 5.460115194320679) {
													if (feature_vector.at(7) <= -7.444900274276733) {
														return 3;
													}
													else {
														return 1;
													}
												}
												else {
													if (feature_vector.at(7) <= -2.044450521469116) {
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
									if (feature_vector.at(0) <= 0.00010945399844786152) {
										if (feature_vector.at(0) <= -0.00033603499468881637) {
											if (feature_vector.at(7) <= -6.717815279960632) {
												return 1;
											}
											else {
												return 0;
											}
										}
										else {
											if (feature_vector.at(7) <= -6.664034843444824) {
												if (feature_vector.at(5) <= 506.2665100097656) {
													return 1;
												}
												else {
													if (feature_vector.at(5) <= 951.5770263671875) {
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
										if (feature_vector.at(2) <= 2.951349973678589) {
											return 3;
										}
										else {
											if (feature_vector.at(3) <= 42.821349143981934) {
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
			}
		}
		else {
			if (feature_vector.at(5) <= 716.4305114746094) {
				if (feature_vector.at(6) <= -40.51475143432617) {
					if (feature_vector.at(0) <= 0.00022023299970896915) {
						if (feature_vector.at(4) <= 0.8045274913311005) {
							if (feature_vector.at(1) <= 0.30493350327014923) {
								if (feature_vector.at(8) <= 8.394235134124756) {
									if (feature_vector.at(2) <= 2.438165068626404) {
										if (feature_vector.at(7) <= -11.242000102996826) {
											if (feature_vector.at(0) <= -0.0003873529931297526) {
												if (feature_vector.at(6) <= -43.35054969787598) {
													return 0;
												}
												else {
													return 3;
												}
											}
											else {
												if (feature_vector.at(5) <= 176.67549896240234) {
													if (feature_vector.at(5) <= 164.0050048828125) {
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
											if (feature_vector.at(6) <= -51.03849983215332) {
												if (feature_vector.at(0) <= -0.00032148915488505736) {
													return 0;
												}
												else {
													return 1;
												}
											}
											else {
												if (feature_vector.at(3) <= -0.7829529941082001) {
													if (feature_vector.at(7) <= -7.476794958114624) {
														return 3;
													}
													else {
														return 1;
													}
												}
												else {
													if (feature_vector.at(5) <= 263.1544952392578) {
														return 3;
													}
													else {
														if (feature_vector.at(1) <= 0.1939295008778572) {
															if (feature_vector.at(8) <= 5.282135009765625) {
																return 1;
															}
															else {
																if (feature_vector.at(8) <= 6.41090989112854) {
																	if (feature_vector.at(8) <= 6.251369953155518) {
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
															if (feature_vector.at(4) <= 0.028755150735378265) {
																if (feature_vector.at(8) <= 6.079344987869263) {
																	return 0;
																}
																else {
																	return 1;
																}
															}
															else {
																if (feature_vector.at(5) <= 411.2415008544922) {
																	if (feature_vector.at(2) <= 1.5797200202941895) {
																		return 0;
																	}
																	else {
																		return 3;
																	}
																}
																else {
																	if (feature_vector.at(2) <= 1.2101050019264221) {
																		return 3;
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
										return 1;
									}
								}
								else {
									if (feature_vector.at(1) <= 0.2258719950914383) {
										if (feature_vector.at(1) <= 0.15218300372362137) {
											if (feature_vector.at(7) <= -13.170850276947021) {
												return 0;
											}
											else {
												if (feature_vector.at(1) <= 0.11545200273394585) {
													if (feature_vector.at(0) <= -1.355674976366572e-05) {
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
								if (feature_vector.at(4) <= -0.05439860001206398) {
									return 0;
								}
								else {
									if (feature_vector.at(6) <= -47.86655044555664) {
										return 1;
									}
									else {
										if (feature_vector.at(4) <= 0.06075320020318031) {
											if (feature_vector.at(5) <= 542.7839965820312) {
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
							}
						}
						else {
							if (feature_vector.at(7) <= -12.558149814605713) {
								if (feature_vector.at(3) <= 10.651400089263916) {
									return 0;
								}
								else {
									if (feature_vector.at(7) <= -12.834049701690674) {
										return 3;
									}
									else {
										return 1;
									}
								}
							}
							else {
								if (feature_vector.at(5) <= 668.6344909667969) {
									if (feature_vector.at(1) <= 0.10725050047039986) {
										if (feature_vector.at(2) <= 2.0702149868011475) {
											return 0;
										}
										else {
											return 1;
										}
									}
									else {
										if (feature_vector.at(7) <= -6.8508501052856445) {
											if (feature_vector.at(4) <= 1.8433449864387512) {
												return 3;
											}
											else {
												if (feature_vector.at(2) <= 2.0152350068092346) {
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
									return 0;
								}
							}
						}
					}
					else {
						if (feature_vector.at(4) <= 0.16232920065522194) {
							if (feature_vector.at(3) <= 9.49304485321045) {
								if (feature_vector.at(2) <= 1.4810649752616882) {
									if (feature_vector.at(7) <= -9.513309955596924) {
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
							return 3;
						}
					}
				}
				else {
					if (feature_vector.at(5) <= 100.3255500793457) {
						if (feature_vector.at(2) <= 3.260414958000183) {
							if (feature_vector.at(4) <= 1.111615002155304) {
								return 1;
							}
							else {
								if (feature_vector.at(7) <= -0.9114549160003662) {
									return 3;
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
						if (feature_vector.at(8) <= 1.9843100309371948) {
							if (feature_vector.at(7) <= -14.418349742889404) {
								if (feature_vector.at(1) <= 0.1325569972395897) {
									return 1;
								}
								else {
									return 0;
								}
							}
							else {
								if (feature_vector.at(8) <= 1.478825032711029) {
									return 1;
								}
								else {
									if (feature_vector.at(2) <= 1.2763050198554993) {
										if (feature_vector.at(5) <= 226.30750274658203) {
											return 1;
										}
										else {
											return 3;
										}
									}
									else {
										if (feature_vector.at(2) <= 1.7041249871253967) {
											return 1;
										}
										else {
											if (feature_vector.at(7) <= -6.867394924163818) {
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
							if (feature_vector.at(4) <= -0.15761300176382065) {
								if (feature_vector.at(6) <= -26.659350395202637) {
									if (feature_vector.at(2) <= 1.6953750252723694) {
										return 0;
									}
									else {
										if (feature_vector.at(0) <= -0.00018970350356539711) {
											return 0;
										}
										else {
											return 1;
										}
									}
								}
								else {
									if (feature_vector.at(0) <= -0.0005608675128314644) {
										return 3;
									}
									else {
										if (feature_vector.at(7) <= -6.2010650634765625) {
											return 3;
										}
										else {
											return 1;
										}
									}
								}
							}
							else {
								if (feature_vector.at(7) <= -14.3860502243042) {
									if (feature_vector.at(3) <= 3.924915075302124) {
										return 0;
									}
									else {
										return 1;
									}
								}
								else {
									if (feature_vector.at(4) <= 0.4037179946899414) {
										if (feature_vector.at(3) <= 0.8212944865226746) {
											if (feature_vector.at(7) <= -9.477459907531738) {
												if (feature_vector.at(1) <= 0.28995200991630554) {
													if (feature_vector.at(6) <= -30.530149459838867) {
														if (feature_vector.at(1) <= 0.19281599670648575) {
															if (feature_vector.at(6) <= -31.57509994506836) {
																return 1;
															}
															else {
																if (feature_vector.at(4) <= -0.01856987038627267) {
																	return 0;
																}
																else {
																	return 3;
																}
															}
														}
														else {
															if (feature_vector.at(7) <= -10.612299919128418) {
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
													if (feature_vector.at(5) <= 422.739501953125) {
														return 3;
													}
													else {
														if (feature_vector.at(1) <= 0.3939090073108673) {
															return 0;
														}
														else {
															return 3;
														}
													}
												}
											}
											else {
												if (feature_vector.at(5) <= 201.1580047607422) {
													if (feature_vector.at(5) <= 198.70800018310547) {
														return 3;
													}
													else {
														if (feature_vector.at(2) <= 1.2568599581718445) {
															return 1;
														}
														else {
															return 3;
														}
													}
												}
												else {
													if (feature_vector.at(7) <= -0.546964481472969) {
														if (feature_vector.at(8) <= 6.8147501945495605) {
															if (feature_vector.at(8) <= 2.7758049964904785) {
																if (feature_vector.at(7) <= -4.708395004272461) {
																	if (feature_vector.at(8) <= 2.75901997089386) {
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
																if (feature_vector.at(7) <= -9.163874626159668) {
																	if (feature_vector.at(7) <= -9.308125019073486) {
																		return 3;
																	}
																	else {
																		return 1;
																	}
																}
																else {
																	if (feature_vector.at(5) <= 698.8580017089844) {
																		if (feature_vector.at(8) <= 6.350630044937134) {
																			if (feature_vector.at(8) <= 3.4844900369644165) {
																				if (feature_vector.at(8) <= 3.477810025215149) {
																					if (feature_vector.at(7) <= -4.2648398876190186) {
																						return 3;
																					}
																					else {
																						if (feature_vector.at(3) <= -0.24348950386047363) {
																							return 3;
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
																				if (feature_vector.at(7) <= -3.454015016555786) {
																					return 3;
																				}
																				else {
																					if (feature_vector.at(7) <= -3.443910002708435) {
																						return 0;
																					}
																					else {
																						return 3;
																					}
																				}
																			}
																		}
																		else {
																			if (feature_vector.at(8) <= 6.357285022735596) {
																				return 0;
																			}
																			else {
																				if (feature_vector.at(0) <= -0.0033134500263258815) {
																					if (feature_vector.at(0) <= -0.0036154650151729584) {
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
																	}
																	else {
																		if (feature_vector.at(6) <= -34.292250633239746) {
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
															if (feature_vector.at(1) <= 0.22048500180244446) {
																if (feature_vector.at(4) <= 0.246397502720356) {
																	if (feature_vector.at(6) <= -37.25625038146973) {
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
																if (feature_vector.at(0) <= -0.0030278200283646584) {
																	if (feature_vector.at(7) <= -3.887019991874695) {
																		return 0;
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
													else {
														if (feature_vector.at(8) <= 5.605595111846924) {
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
											if (feature_vector.at(1) <= 0.17948000133037567) {
												if (feature_vector.at(6) <= -35.81300163269043) {
													if (feature_vector.at(5) <= 350.7530059814453) {
														return 1;
													}
													else {
														if (feature_vector.at(0) <= 0.0006985149811953306) {
															return 0;
														}
														else {
															return 3;
														}
													}
												}
												else {
													if (feature_vector.at(0) <= -4.09143503929954e-05) {
														if (feature_vector.at(8) <= 6.169379949569702) {
															if (feature_vector.at(0) <= -0.0004106659907847643) {
																if (feature_vector.at(4) <= -0.022636749781668186) {
																	return 1;
																}
																else {
																	if (feature_vector.at(1) <= 0.13188500329852104) {
																		return 3;
																	}
																	else {
																		return 1;
																	}
																}
															}
															else {
																if (feature_vector.at(6) <= -32.64535045623779) {
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
													else {
														if (feature_vector.at(5) <= 182.96700286865234) {
															return 3;
														}
														else {
															return 1;
														}
													}
												}
											}
											else {
												if (feature_vector.at(0) <= -0.002150909975171089) {
													return 0;
												}
												else {
													if (feature_vector.at(4) <= 0.10305220074951649) {
														if (feature_vector.at(5) <= 443.8264923095703) {
															if (feature_vector.at(2) <= 1.3835350275039673) {
																return 0;
															}
															else {
																return 3;
															}
														}
														else {
															if (feature_vector.at(5) <= 677.5609741210938) {
																return 0;
															}
															else {
																return 1;
															}
														}
													}
													else {
														if (feature_vector.at(7) <= -0.7459650039672852) {
															return 3;
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
										if (feature_vector.at(0) <= -0.004895369987934828) {
											if (feature_vector.at(1) <= 0.3116844967007637) {
												return 0;
											}
											else {
												return 3;
											}
										}
										else {
											if (feature_vector.at(0) <= -0.001201509963721037) {
												if (feature_vector.at(1) <= 0.18280749768018723) {
													if (feature_vector.at(8) <= 5.712029933929443) {
														return 3;
													}
													else {
														return 0;
													}
												}
												else {
													if (feature_vector.at(1) <= 0.21584349870681763) {
														if (feature_vector.at(2) <= 1.4690899848937988) {
															return 0;
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
											else {
												if (feature_vector.at(6) <= -39.31705093383789) {
													if (feature_vector.at(6) <= -39.38800048828125) {
														if (feature_vector.at(8) <= 4.42943000793457) {
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
												else {
													if (feature_vector.at(1) <= 0.10958649963140488) {
														if (feature_vector.at(1) <= 0.10708850249648094) {
															return 3;
														}
														else {
															return 0;
														}
													}
													else {
														if (feature_vector.at(1) <= 0.1508839949965477) {
															if (feature_vector.at(1) <= 0.14984449744224548) {
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
				if (feature_vector.at(2) <= 1.2385499477386475) {
					if (feature_vector.at(5) <= 2171.344970703125) {
						if (feature_vector.at(5) <= 851.6305236816406) {
							if (feature_vector.at(4) <= 0.017063000239431858) {
								if (feature_vector.at(5) <= 772.0950012207031) {
									return 0;
								}
								else {
									if (feature_vector.at(0) <= -7.150360215746332e-05) {
										return 0;
									}
									else {
										return 1;
									}
								}
							}
							else {
								if (feature_vector.at(1) <= 0.18663350492715836) {
									return 1;
								}
								else {
									return 3;
								}
							}
						}
						else {
							if (feature_vector.at(8) <= 6.373295068740845) {
								if (feature_vector.at(8) <= 1.5785479843616486) {
									return 1;
								}
								else {
									return 0;
								}
							}
							else {
								if (feature_vector.at(1) <= 0.30148549377918243) {
									if (feature_vector.at(7) <= -8.33184003829956) {
										if (feature_vector.at(6) <= -49.604000091552734) {
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
									return 0;
								}
							}
						}
					}
					else {
						if (feature_vector.at(5) <= 3480.81005859375) {
							return 3;
						}
						else {
							return 0;
						}
					}
				}
				else {
					if (feature_vector.at(6) <= -26.752300262451172) {
						if (feature_vector.at(4) <= 0.8492484986782074) {
							if (feature_vector.at(2) <= 2.5278300046920776) {
								if (feature_vector.at(0) <= 0.00022411350073525682) {
									if (feature_vector.at(5) <= 2118.4200439453125) {
										if (feature_vector.at(7) <= -11.047899723052979) {
											if (feature_vector.at(6) <= -33.43575096130371) {
												if (feature_vector.at(1) <= 0.12511049583554268) {
													if (feature_vector.at(1) <= 0.12389300018548965) {
														if (feature_vector.at(0) <= -7.363269833149388e-05) {
															return 1;
														}
														else {
															if (feature_vector.at(5) <= 1757.6599731445312) {
																return 0;
															}
															else {
																if (feature_vector.at(6) <= -44.24505043029785) {
																	return 0;
																}
																else {
																	return 1;
																}
															}
														}
													}
													else {
														if (feature_vector.at(0) <= -6.69645532980212e-06) {
															return 1;
														}
														else {
															return 0;
														}
													}
												}
												else {
													if (feature_vector.at(6) <= -54.302900314331055) {
														if (feature_vector.at(7) <= -14.784049987792969) {
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
												return 3;
											}
										}
										else {
											if (feature_vector.at(8) <= 3.8441150188446045) {
												if (feature_vector.at(1) <= 0.2328455075621605) {
													if (feature_vector.at(0) <= -0.0008151920337695628) {
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
												if (feature_vector.at(0) <= -0.00036450849438551813) {
													if (feature_vector.at(1) <= 0.37853099405765533) {
														if (feature_vector.at(7) <= -9.115924835205078) {
															if (feature_vector.at(1) <= 0.19026800245046616) {
																if (feature_vector.at(3) <= 7.453655004501343) {
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
															if (feature_vector.at(2) <= 2.0854849815368652) {
																if (feature_vector.at(4) <= 0.5932780206203461) {
																	return 0;
																}
																else {
																	if (feature_vector.at(4) <= 0.6113125085830688) {
																		return 3;
																	}
																	else {
																		return 0;
																	}
																}
															}
															else {
																if (feature_vector.at(3) <= 6.376924991607666) {
																	return 1;
																}
																else {
																	return 0;
																}
															}
														}
													}
													else {
														if (feature_vector.at(3) <= -0.42529699206352234) {
															return 0;
														}
														else {
															return 3;
														}
													}
												}
												else {
													if (feature_vector.at(4) <= 0.010303615126758814) {
														if (feature_vector.at(4) <= -0.050146400928497314) {
															if (feature_vector.at(5) <= 1980.3699951171875) {
																if (feature_vector.at(0) <= -0.0003056565037695691) {
																	return 3;
																}
																else {
																	if (feature_vector.at(2) <= 1.32122004032135) {
																		if (feature_vector.at(4) <= -0.11090975254774094) {
																			return 1;
																		}
																		else {
																			return 0;
																		}
																	}
																	else {
																		if (feature_vector.at(1) <= 0.3107994943857193) {
																			return 0;
																		}
																		else {
																			if (feature_vector.at(2) <= 1.3673800230026245) {
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
															if (feature_vector.at(7) <= -10.427450180053711) {
																if (feature_vector.at(8) <= 6.579930067062378) {
																	return 0;
																}
																else {
																	return 3;
																}
															}
															else {
																if (feature_vector.at(0) <= -0.00020662400493165478) {
																	if (feature_vector.at(5) <= 1384.6649780273438) {
																		return 0;
																	}
																	else {
																		return 1;
																	}
																}
																else {
																	if (feature_vector.at(5) <= 734.3394775390625) {
																		return 0;
																	}
																	else {
																		if (feature_vector.at(4) <= 0.006176635157316923) {
																			if (feature_vector.at(5) <= 1642.8400268554688) {
																				return 1;
																			}
																			else {
																				if (feature_vector.at(1) <= 0.1715795025229454) {
																					return 0;
																				}
																				else {
																					return 1;
																				}
																			}
																		}
																		else {
																			if (feature_vector.at(6) <= -46.359500885009766) {
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
														if (feature_vector.at(1) <= 0.2581325024366379) {
															if (feature_vector.at(6) <= -28.380249977111816) {
																if (feature_vector.at(7) <= -5.358795166015625) {
																	return 0;
																}
																else {
																	if (feature_vector.at(6) <= -43.67934989929199) {
																		return 1;
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
														else {
															if (feature_vector.at(5) <= 813.7649841308594) {
																return 3;
															}
															else {
																if (feature_vector.at(7) <= -5.087599992752075) {
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
										}
									}
									else {
										if (feature_vector.at(3) <= 0.30537649989128113) {
											if (feature_vector.at(4) <= 0.027113349176943302) {
												if (feature_vector.at(5) <= 3092.6650390625) {
													if (feature_vector.at(7) <= -13.86899995803833) {
														return 0;
													}
													else {
														if (feature_vector.at(7) <= -5.112430095672607) {
															return 3;
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
												if (feature_vector.at(0) <= 3.641380044427933e-05) {
													return 0;
												}
												else {
													return 3;
												}
											}
										}
										else {
											if (feature_vector.at(8) <= 7.206779956817627) {
												if (feature_vector.at(6) <= -34.63974952697754) {
													if (feature_vector.at(3) <= 11.46369981765747) {
														return 0;
													}
													else {
														if (feature_vector.at(3) <= 12.308300018310547) {
															return 3;
														}
														else {
															return 0;
														}
													}
												}
												else {
													if (feature_vector.at(7) <= -9.154339790344238) {
														if (feature_vector.at(5) <= 2967.2099609375) {
															return 3;
														}
														else {
															return 0;
														}
													}
													else {
														if (feature_vector.at(7) <= -6.311780214309692) {
															if (feature_vector.at(6) <= -30.271549224853516) {
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
											else {
												if (feature_vector.at(7) <= -11.403200149536133) {
													return 3;
												}
												else {
													if (feature_vector.at(6) <= -42.45359992980957) {
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
									if (feature_vector.at(2) <= 1.3324699997901917) {
										if (feature_vector.at(1) <= 0.19515299797058105) {
											return 1;
										}
										else {
											if (feature_vector.at(4) <= -0.08629754930734634) {
												return 0;
											}
											else {
												if (feature_vector.at(8) <= 7.900359869003296) {
													return 3;
												}
												else {
													if (feature_vector.at(2) <= 1.2548999786376953) {
														return 3;
													}
													else {
														return 1;
													}
												}
											}
										}
									}
									else {
										if (feature_vector.at(5) <= 1748.5999755859375) {
											if (feature_vector.at(7) <= -7.8388450145721436) {
												if (feature_vector.at(2) <= 1.4821650385856628) {
													return 1;
												}
												else {
													return 0;
												}
											}
											else {
												if (feature_vector.at(1) <= 0.3966429978609085) {
													if (feature_vector.at(4) <= -0.16788219287991524) {
														if (feature_vector.at(4) <= -0.3628010004758835) {
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
													return 0;
												}
											}
										}
										else {
											if (feature_vector.at(7) <= -9.361255168914795) {
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
								if (feature_vector.at(0) <= -6.025635047990363e-05) {
									if (feature_vector.at(3) <= 24.470399856567383) {
										if (feature_vector.at(8) <= 8.6098051071167) {
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
									return 1;
								}
							}
						}
						else {
							if (feature_vector.at(7) <= -9.872395038604736) {
								if (feature_vector.at(4) <= 1.089269995689392) {
									return 0;
								}
								else {
									if (feature_vector.at(3) <= 11.22730016708374) {
										if (feature_vector.at(7) <= -11.621699810028076) {
											return 3;
										}
										else {
											return 0;
										}
									}
									else {
										if (feature_vector.at(2) <= 4.3248051404953) {
											return 3;
										}
										else {
											return 1;
										}
									}
								}
							}
							else {
								if (feature_vector.at(0) <= -0.0010884809889830649) {
									return 0;
								}
								else {
									if (feature_vector.at(1) <= 0.10455400124192238) {
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
						if (feature_vector.at(7) <= -5.387500047683716) {
							if (feature_vector.at(8) <= 2.8868499994277954) {
								if (feature_vector.at(7) <= -8.910845279693604) {
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
							if (feature_vector.at(0) <= -0.0036360900849103928) {
								return 0;
							}
							else {
								if (feature_vector.at(5) <= 737.4020080566406) {
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
		}
	}
}